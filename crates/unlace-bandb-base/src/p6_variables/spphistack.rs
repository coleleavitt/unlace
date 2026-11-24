//! (unlace `spphistack`) A bare input stack pointer reaching a phi is a stack address.
//!
//! A va_list that a function spills to its frame and reloads becomes, after
//! the stack is heritaged and the `+4` steps are simplified into the loop, one
//! loop phi whose entry value is the input stack pointer itself:
//! `u = sp(i) ? u + 4` (MIPS o32 and AArch64 `add_all`, unlace#975). Merging
//! puts every MULTIEQUAL input into the phi's HighVariable, so the loop pointer
//! takes the stack-pointer storage and its `addrtied` name:
//! `Register00000074 = (int *)((int)Register00000074 + 4);`.
//!
//! [`ActionSpPhiStack`] runs just before HighVariables are assigned. Each
//! MULTIEQUAL input that is the spacebase input register is replaced by
//! `PTRSUB(sp(i), 0)`, computed at the end of that edge's predecessor, so the
//! phi merges with an ordinary value whose source prints as a stack reference,
//! the way a `sp(i) + c` already does. Source: `notes/ida-gap/hexrays-microcode.md`
//! (stack-variable resolution and the MIPS va_list adapter).

use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `spphistack`) A bare input stack pointer reaching a phi becomes
    /// `PTRSUB(sp, 0)`.
    SpPhiStack,
    "spphistack",
    "phi input stack pointer as a stack reference",
    unset: true,
    shipped: true
);

/// Every live MULTIEQUAL input slot holding the spacebase input register.
/// MULTIEQUAL has no per-opcode list in the op bank, so this walks the alive list.
fn bare_sp_inputs(data: &Funcdata) -> Vec<(OpId, usize, VarnodeId)> {
    let mut found = Vec::new();
    for op in data.obank().iter_alive() {
        let Some(o) = data.obank().get(op) else {
            continue;
        };
        if o.code() != OpCode::CPUI_MULTIEQUAL || o.is_dead() || o.get_parent().is_none() {
            continue;
        }
        for i in 0..o.num_input() {
            let Some(vn) = o.get_in(i) else {
                continue;
            };
            if data
                .vbank()
                .get(vn)
                .is_some_and(|v| v.is_input() && v.is_spacebase())
            {
                found.push((op, i as usize, vn));
            }
        }
    }
    found
}

/// (unlace `spphistack`) `ActionSpPhiStack`.
pub struct ActionSpPhiStack {
    base: ActionBase,
}

impl ActionSpPhiStack {
    pub fn boxed(group: impl Into<String>) -> Box<dyn Action> {
        Box::new(Self {
            base: ActionBase::new(0, "spphistack", group),
        })
    }
}

impl Action for ActionSpPhiStack {
    fn base(&self) -> &ActionBase {
        &self.base
    }

    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }

    fn clone_filtered(&self, groups: &ActionGroupList) -> Option<Box<dyn Action>> {
        groups.contains(self.get_group()).then(|| {
            Box::new(Self {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }

    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data.get_arch().unlace_options.get::<SpPhiStack>().0 {
            return 0;
        }
        for (phi, slot, sp) in bare_sp_inputs(data) {
            let Some((bl, addr)) = data
                .obank()
                .get(phi)
                .and_then(|o| Some((o.get_parent()?, o.get_addr().clone())))
            else {
                continue;
            };
            if slot >= data.bblocks_ref().block(bl).size_in() as usize {
                continue;
            }
            let pred = data.bblocks_ref().block(bl).get_in(slot as i32);
            let Some(size) = data.vbank().get(sp).map(|v| v.get_size()) else {
                continue;
            };
            let sub = data.new_op(2, addr);
            data.op_set_opcode_code(sub, OpCode::CPUI_PTRSUB);
            let Ok(out) = data.new_unique_out(size, sub) else {
                continue;
            };
            let zero = data.new_constant(size, 0);
            if data.op_set_input(sub, sp, 0).is_err() || data.op_set_input(sub, zero, 1).is_err() {
                continue;
            }
            data.op_insert_end(sub, pred);
            if data.op_set_input(phi, out, slot as i32).is_ok() {
                self.base.count += 1;
            }
        }
        0
    }
}
