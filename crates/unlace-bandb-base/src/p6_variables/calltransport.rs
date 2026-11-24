//! Distinguish outgoing argument shuffles from homes of local values.

use crate::fasthash::FxHashSet;

use unlace_base::address::Address;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::fspec::Containment;
use crate::funcdata::Funcdata;

/// [`Funcdata`] methods for outgoing-argument transport detection.
pub trait FuncdataCallTransportExt {
    fn kuna_is_call_transport(&self, vn: VarnodeId) -> bool;
}

/// [`Funcdata`] methods for outgoing-argument transport detection used elsewhere in the crate.
#[doc(hidden)]
pub trait FuncdataCallTransportCrateExt {
    fn kuna_record_call_transport(&mut self, first: VarnodeId);
    fn kuna_is_call_transport_projection(
        &self,
        vn: VarnodeId,
        byte_offset: int4,
        byte_size: int4,
    ) -> bool;
    fn kuna_has_local_storage_use(&self, first: VarnodeId) -> bool;
}

/// [`Funcdata`] methods for outgoing-argument transport detection private to this module.
trait FuncdataCallTransportLocalExt {
    fn kuna_is_register_storage(&self, address: &Address, size: int4) -> bool;
    fn kuna_has_prior_storage(
        &self,
        first: VarnodeId,
        carrier: &Address,
        instruction: &Address,
    ) -> bool;
    fn kuna_materializes_computation(&self, first: VarnodeId, instruction: &Address) -> bool;
    fn kuna_only_argument_uses(&self, first: VarnodeId, carrier: &Address, size: int4) -> bool;
    fn kuna_argument_storage_matches(
        &self,
        op: OpId,
        slot: int4,
        address: &Address,
        size: int4,
    ) -> bool;
}

impl FuncdataCallTransportExt for Funcdata {
    /// A register copy is transport only when an earlier home exists and all
    /// remaining uses forward it through that register to ordinary call arguments.
    fn kuna_is_call_transport(&self, vn: VarnodeId) -> bool {
        if !self.get_arch().name_style_angr {
            return false;
        }
        let Some(value) = self.vbank().get(vn) else {
            return false;
        };
        if value.is_persist() || self.kuna_storage_write_has_local_use(vn, value.get_size()) {
            return false;
        }
        if self.kuna_was_call_transport(vn) {
            return value.has_no_descend()
                || self.kuna_only_argument_uses(vn, value.get_addr(), value.get_size());
        }
        if !self.kuna_is_register_storage(value.get_addr(), value.get_size()) {
            return false;
        }
        let Some(definition) = value.get_def().and_then(|id| self.obank().get(id)) else {
            return false;
        };
        if definition.code() != OpCode::CPUI_COPY {
            return false;
        }
        let Some(input) = definition.get_in(0) else {
            return false;
        };
        if self
            .vbank()
            .get(input)
            .is_none_or(|v| v.get_size() != value.get_size())
            || !self.kuna_has_prior_storage(input, value.get_addr(), definition.get_addr())
        {
            return false;
        }
        self.kuna_only_argument_uses(vn, value.get_addr(), value.get_size())
    }
}

impl FuncdataCallTransportCrateExt for Funcdata {
    fn kuna_record_call_transport(&mut self, first: VarnodeId) {
        self.kuna_mark_call_transport(first);
        let Some(value) = self.vbank().get(first) else {
            return;
        };
        let carrier = value.get_addr().clone();
        let size = value.get_size();
        let mut pending = vec![first];
        let mut visited = FxHashSet::default();
        while let Some(id) = pending.pop() {
            if !visited.insert(id) || visited.len() > 64 {
                continue;
            }
            let uses: Vec<_> = self
                .vbank()
                .get(id)
                .into_iter()
                .flat_map(|v| v.descend_iter())
                .collect();
            for use_id in uses {
                let Some(operation) = self.obank().get(use_id) else {
                    continue;
                };
                let Some(output) = operation.get_out() else {
                    continue;
                };
                let Some(node) = self.vbank().get(output) else {
                    continue;
                };
                let transparent = match operation.code() {
                    OpCode::CPUI_COPY
                    | OpCode::CPUI_CAST
                    | OpCode::CPUI_INT_ZEXT
                    | OpCode::CPUI_INT_SEXT => operation.get_in(0) == Some(id),
                    OpCode::CPUI_PIECE => {
                        operation.get_in(1) == Some(id)
                            && operation
                                .get_in(0)
                                .and_then(|v| self.vbank().get(v))
                                .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
                    }
                    _ => false,
                };
                if !transparent
                    || node.is_persist()
                    || (node.get_space().get_type() != spacetype::IPTR_INTERNAL
                        && node.get_addr() != &carrier)
                {
                    continue;
                }
                if node.get_addr() == &carrier && node.get_size() > size {
                    self.kuna_mark_call_transport_projection(output, size);
                }
                pending.push(output);
            }
        }
    }

    fn kuna_is_call_transport_projection(
        &self,
        vn: VarnodeId,
        byte_offset: int4,
        byte_size: int4,
    ) -> bool {
        if byte_offset != 0 {
            return false;
        }
        let Some(value) = self.vbank().get(vn) else {
            return false;
        };
        if value.is_persist() || self.kuna_storage_write_has_local_use(vn, byte_size) {
            return false;
        }
        if !value.is_persist()
            && self
                .kuna_call_transport_projection_size(vn)
                .is_some_and(|size| byte_size <= size && byte_size < value.get_size())
        {
            return value.has_no_descend()
                || self.kuna_only_argument_uses(vn, value.get_addr(), byte_size);
        }
        let Some(definition) = value.get_def().and_then(|id| self.obank().get(id)) else {
            return false;
        };
        if !matches!(
            definition.code(),
            OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT
        ) {
            return false;
        }
        let Some(input) = definition.get_in(0) else {
            return false;
        };
        self.vbank().get(input).is_some_and(|v| {
            (v.get_size() == byte_size
                && value.get_size() > byte_size
                && v.get_addr() == value.get_addr()
                && self.kuna_is_call_transport(input))
                || (v.get_size() >= byte_size
                    && value.get_size() > v.get_size()
                    && v.get_space().get_type() == spacetype::IPTR_SPACEBASE
                    && v.get_def().is_some()
                    && self.kuna_is_register_storage(value.get_addr(), value.get_size())
                    && self.kuna_only_argument_uses(vn, value.get_addr(), byte_size))
        })
    }

    fn kuna_has_local_storage_use(&self, first: VarnodeId) -> bool {
        let Some(value) = self.vbank().get(first) else {
            return false;
        };
        if !self.kuna_is_register_storage(value.get_addr(), value.get_size()) {
            return false;
        }
        let carrier = value.get_addr();
        let mut pending = vec![first];
        let mut visited = FxHashSet::default();
        while let Some(id) = pending.pop() {
            if !visited.insert(id) || visited.len() > 64 {
                continue;
            }
            let Some(value) = self.vbank().get(id) else {
                continue;
            };
            for op_id in value.descend_iter() {
                let Some(operation) = self.obank().get(op_id) else {
                    continue;
                };
                for slot in 0..operation.num_input() {
                    if operation.get_in(slot) != Some(id) {
                        continue;
                    }
                    if matches!(operation.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
                        if slot == 0 {
                            return true;
                        }
                        continue;
                    }
                    if matches!(
                        operation.code(),
                        OpCode::CPUI_INDIRECT | OpCode::CPUI_MULTIEQUAL
                    ) {
                        continue;
                    }
                    let transparent = match operation.code() {
                        OpCode::CPUI_COPY
                        | OpCode::CPUI_CAST
                        | OpCode::CPUI_INT_ZEXT
                        | OpCode::CPUI_INT_SEXT => slot == 0,
                        OpCode::CPUI_PIECE => {
                            slot == 1
                                && operation
                                    .get_in(0)
                                    .and_then(|v| self.vbank().get(v))
                                    .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
                        }
                        OpCode::CPUI_SUBPIECE => {
                            slot == 0
                                && operation
                                    .get_in(1)
                                    .and_then(|v| self.vbank().get(v))
                                    .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
                        }
                        _ => false,
                    };
                    if !transparent {
                        return true;
                    }
                    if let Some(output) = operation
                        .get_out()
                        .and_then(|v| self.vbank().get(v).map(|node| (v, node)))
                    {
                        if output.1.is_persist()
                            || (output.1.get_space().get_type() != spacetype::IPTR_INTERNAL
                                && output.1.get_addr() != carrier)
                        {
                            return true;
                        }
                        pending.push(output.0);
                    }
                }
            }
        }
        false
    }
}

impl FuncdataCallTransportLocalExt for Funcdata {
    fn kuna_is_register_storage(&self, address: &Address, size: int4) -> bool {
        let Some(space) = address.get_space() else {
            return false;
        };
        self.get_arch()
            .manage()
            .register_lookup()
            .is_some_and(|lookup| {
                !lookup
                    .get_register_name(space, address.get_offset(), size)
                    .is_empty()
            })
    }

    fn kuna_has_prior_storage(
        &self,
        first: VarnodeId,
        carrier: &Address,
        instruction: &Address,
    ) -> bool {
        if self.kuna_materializes_computation(first, instruction) {
            return false;
        }
        let mut pending = vec![first];
        let mut visited = FxHashSet::default();
        while let Some(id) = pending.pop() {
            if !visited.insert(id) {
                continue;
            }
            if visited.len() > 64 {
                return false;
            }
            let Some(value) = self.vbank().get(id) else {
                continue;
            };
            if value.is_constant() || value.is_annotation() {
                continue;
            }
            if value.get_space().get_type() == spacetype::IPTR_INTERNAL
                && value
                    .get_def()
                    .and_then(|op| self.obank().get(op))
                    .is_some_and(|op| {
                        op.code() != OpCode::CPUI_COPY && op.get_addr() == instruction
                    })
            {
                continue;
            }
            let address = value.get_addr();
            if address != carrier
                && !self.kuna_was_call_transport(id)
                && (self.kuna_is_register_storage(address, value.get_size())
                    || value.get_space().get_type() == spacetype::IPTR_SPACEBASE)
            {
                return true;
            }
            if self.kuna_storage_sources(id).iter().any(|source| {
                source.address != *carrier
                    && source.size == value.get_size()
                    && source.write_address.as_ref() != Some(instruction)
            }) {
                return true;
            }
            let Some(definition) = value.get_def().and_then(|op| self.obank().get(op)) else {
                continue;
            };
            if definition.code() == OpCode::CPUI_COPY {
                if let Some(input) = definition.get_in(0) {
                    if self
                        .vbank()
                        .get(input)
                        .is_some_and(|v| v.get_size() == value.get_size())
                    {
                        pending.push(input);
                    }
                }
            }
        }
        false
    }

    fn kuna_materializes_computation(&self, first: VarnodeId, instruction: &Address) -> bool {
        let mut current = first;
        let mut visited = FxHashSet::default();
        while visited.insert(current) && visited.len() <= 64 {
            let Some(value) = self.vbank().get(current) else {
                return false;
            };
            if value.get_space().get_type() != spacetype::IPTR_INTERNAL {
                return false;
            }
            let Some(operation) = value.get_def().and_then(|op| self.obank().get(op)) else {
                return false;
            };
            if operation.get_addr() != instruction {
                return false;
            }
            if matches!(
                operation.code(),
                OpCode::CPUI_MULTIEQUAL | OpCode::CPUI_INDIRECT
            ) {
                return false;
            }
            if !matches!(operation.code(), OpCode::CPUI_COPY | OpCode::CPUI_CAST) {
                return true;
            }
            let Some(input) = operation.get_in(0) else {
                return false;
            };
            if self
                .vbank()
                .get(input)
                .is_none_or(|v| v.get_size() != value.get_size())
            {
                return true;
            }
            current = input;
        }
        true
    }

    fn kuna_only_argument_uses(&self, first: VarnodeId, carrier: &Address, size: int4) -> bool {
        let mut pending = vec![first];
        let mut visited = FxHashSet::default();
        let mut saw_argument = false;
        while let Some(id) = pending.pop() {
            if !visited.insert(id) {
                continue;
            }
            if visited.len() > 64 {
                return false;
            }
            let Some(value) = self.vbank().get(id) else {
                return false;
            };
            if value.has_no_descend() {
                return false;
            }
            for use_id in value.descend_iter() {
                let Some(operation) = self.obank().get(use_id) else {
                    return false;
                };
                for slot in 0..operation.num_input() {
                    if operation.get_in(slot) != Some(id) {
                        continue;
                    }
                    if matches!(operation.code(), OpCode::CPUI_CALL | OpCode::CPUI_CALLIND) {
                        if slot == 0
                            || !self.kuna_argument_storage_matches(use_id, slot, carrier, size)
                        {
                            return false;
                        }
                        saw_argument = true;
                        continue;
                    }
                    let transparent = match operation.code() {
                        OpCode::CPUI_COPY | OpCode::CPUI_CAST => slot == 0,
                        OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT => slot == 0,
                        OpCode::CPUI_PIECE => {
                            slot == 1
                                && operation
                                    .get_in(0)
                                    .and_then(|v| self.vbank().get(v))
                                    .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
                        }
                        OpCode::CPUI_SUBPIECE => {
                            slot == 0
                                && operation
                                    .get_in(1)
                                    .and_then(|v| self.vbank().get(v))
                                    .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
                        }
                        _ => false,
                    };
                    let Some(output) = operation
                        .get_out()
                        .and_then(|v| self.vbank().get(v).map(|node| (v, node)))
                    else {
                        return false;
                    };
                    if !transparent
                        || output.1.is_persist()
                        || output.1.get_space().get_type() == spacetype::IPTR_SPACEBASE
                        || (output.1.get_space().get_type() != spacetype::IPTR_INTERNAL
                            && output.1.get_addr() != carrier)
                    {
                        return false;
                    }
                    pending.push(output.0);
                }
            }
        }
        saw_argument
    }

    fn kuna_argument_storage_matches(
        &self,
        op: OpId,
        slot: int4,
        address: &Address,
        size: int4,
    ) -> bool {
        let Some(index) = self.get_call_specs_index(op) else {
            return false;
        };
        let call = self.get_call_specs(index);
        let parameter = (slot - 1) as usize;
        if call.proto().is_input_locked() {
            return call.proto().get_param(slot - 1).is_some_and(|param| {
                let home = param.get_address();
                home.justified_contain(param.get_size(), address, size, false) == 0
                    || address.justified_contain(size, &home, param.get_size(), false) == 0
            });
        }
        if !call.final_input_storage().is_empty()
            && self.obank().get(op).is_some_and(|operation| {
                operation.num_input() as usize == call.final_input_storage().len() + 1
            })
        {
            return call
                .final_input_storage()
                .get(parameter)
                .is_some_and(|(home, width)| {
                    home.justified_contain(*width, address, size, false) == 0
                        || address.justified_contain(size, home, *width, false) == 0
                });
        }
        if let Some(param) = call.proto().get_param(slot - 1) {
            let home = param.get_address();
            return home.justified_contain(param.get_size(), address, size, false) == 0
                || address.justified_contain(size, &home, param.get_size(), false) == 0;
        }
        call.proto().has_model()
            && matches!(
                call.proto().characterize_as_input_param(address, size),
                Containment::ContainsJustified | Containment::ContainedBy
            )
    }
}

/// Fill the call-transport hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::KunaHookSlots) {
    hooks.is_call_transport = Some(Funcdata::kuna_is_call_transport);
    hooks.record_call_transport = Some(Funcdata::kuna_record_call_transport);
    hooks.is_call_transport_projection = Some(Funcdata::kuna_is_call_transport_projection);
    hooks.has_local_storage_use = Some(Funcdata::kuna_has_local_storage_use);
}
