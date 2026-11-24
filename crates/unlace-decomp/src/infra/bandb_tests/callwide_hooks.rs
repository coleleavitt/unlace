//! Tests moved out of `kuna_callwide` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `kuna_callwide` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::architecture::Architecture;
    pub(super) use crate::context::OpId;
    pub(super) use crate::fspec::{FuncCallSpecs, FuncProto, ParamActive, ProtoModel};
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::kuna_bejoin::WidePair;
    pub(super) use std::collections::BTreeSet;
    pub(super) use std::rc::Rc;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::types::int4;
}
use crate::context::{ArchContext, TypeOp, VarnodeId};
use crate::kuna_bejoin::BeJoinMode;
use crate::kuna_callwide::FuncdataCallwideExt;
use crate::kuna_callwide::*;
use crate::options::ArchOptionContext;
use module_scope::*;
use std::cell::Cell;
use unlace_base::error::{KunaError, KunaResult};
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;

struct NoImage;

impl LoadImage for NoImage {
    fn get_file_name(&self) -> &str {
        "none"
    }
    fn load_fill(&mut self, _: &mut [u8], _: &Address) -> KunaResult<()> {
        Err(KunaError::data_unavail("none"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _: i64) {}
}

fn architecture() -> Architecture {
    Architecture::new(
        "test:BE:32",
        Sleigh::new(Box::new(NoImage), Box::new(ContextInternal::new())),
    )
}

fn data_and_proof() -> (Funcdata, Rc<Ledger>) {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, true)))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            true,
            4,
            1,
            2,
            addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    let register = manager.get_space_by_name("register").unwrap().clone();
    let model = Rc::new(ProtoModel::new(&manager));
    let mut context = ArchContext::new(manager);
    context
        .kuna_options
        .set(crate::kuna_callwide::CallWide(true));
    context.kuna_options.set(BeJoinMode::Evidence);
    let mut fd = Funcdata::new(
        "f",
        "f",
        Rc::new(context),
        Address::new(register.clone(), 0x1000),
        0,
        0x40,
    )
    .unwrap();
    let pair = WidePair {
        hi: (Address::new(register.clone(), 0x10), 4),
        lo: (Address::new(register, 0x14), 4),
    };
    let proof = Rc::new(Ledger {
        live: Cell::new(true),
        model,
        pair,
        entries: BTreeSet::from([(2, 0x1000)]),
        declarations: BTreeSet::from([0x2000]),
    });
    fd.get_func_proto_mut().set_model(Some(proof.model.clone()));
    fd.kuna_set_callwide(Some(proof.clone()));
    (fd, proof)
}

fn data() -> Funcdata {
    data_and_proof().0
}

fn export_call() -> (Funcdata, Rc<Ledger>, FuncCallSpecs) {
    export_call_layout(0)
}

fn export_call_layout(layout: u8) -> (Funcdata, Rc<Ledger>, FuncCallSpecs) {
    use crate::dtype::{Datatype, type_metatype};
    use crate::fspec::{ParamEntry, ParameterPieces};

    let (mut fd, previous) = data_and_proof();
    let manager = fd.get_arch().manage();
    let register = previous.pair.hi.0.get_space().unwrap().clone();
    let mut model = ProtoModel::new(manager);
    model.build_param_list("standard").unwrap();
    for index in 0..2 {
        let entry = ParamEntry::seed(
            index,
            crate::dtype::type_class::TYPECLASS_FLOAT,
            register.clone(),
            0x100 + 8 * index as u64,
            8,
            1,
            0,
            0,
            true,
            false,
            model.input().get_entry(),
            manager,
        )
        .unwrap();
        model.input_mut().push_entry(entry);
    }
    for index in 0..4 {
        let offset = match (layout, index) {
            (1, 2) => 0x2c,
            (1, 3) => 0x28,
            (2, 2) => 0x24,
            _ => 0x20 + 4 * index as u64,
        };
        let entry = ParamEntry::seed(
            index + 2,
            crate::dtype::type_class::TYPECLASS_GENERAL,
            register.clone(),
            offset,
            4,
            1,
            0,
            0,
            true,
            false,
            model.input().get_entry(),
            manager,
        )
        .unwrap();
        model.input_mut().push_entry(entry);
    }
    model.input_mut().finish_decode();
    let proof = Rc::new(Ledger {
        live: Cell::new(true),
        model: Rc::new(model),
        pair: previous.pair.clone(),
        entries: previous.entries.clone(),
        declarations: previous.declarations.clone(),
    });
    fd.kuna_set_callwide(Some(proof.clone()));
    fd.get_func_proto_mut().set_model(Some(proof.model.clone()));
    let word = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let wide = Rc::new(Datatype::new(8, type_metatype::TYPE_UINT));
    let target = fd.new_constant(4, fd.get_address().get_offset());
    let mut inputs = vec![target];
    for index in 0..4 {
        let input = written(&mut fd, 0x20 + 4 * index, 4);
        fd.vbank_mut()
            .get_mut(input)
            .unwrap()
            .update_type(word.clone());
        inputs.push(input);
    }
    let op = operation(&mut fd, OpCode::CPUI_CALL, &inputs);
    let mut call = FuncCallSpecs::new(op, fd.get_address().clone());
    call.set_final_input_storage(
        (0..4)
            .map(|index| (Address::new(register.clone(), 0x20 + 4 * index), 4))
            .collect(),
    );
    call.proto_mut().set_internal(
        proof.model.clone(),
        Rc::new(Datatype::new(0, type_metatype::TYPE_VOID)),
    );
    call.proto_mut().set_output(&ParameterPieces {
        addr: proof.pair.hi.0.clone(),
        type_: Some(wide),
        flags: 0,
    });
    for index in 0..4 {
        call.proto_mut().set_param(
            index,
            "",
            &ParameterPieces {
                addr: Address::new(
                    proof.pair.hi.0.get_space().unwrap().clone(),
                    0x20 + 4 * index as u64,
                ),
                type_: Some(word.clone()),
                flags: 0,
            },
        );
    }
    (fd, proof, call)
}

fn operation(fd: &mut Funcdata, opcode: OpCode, inputs: &[VarnodeId]) -> OpId {
    let op = fd.new_op(inputs.len() as int4, fd.get_address().clone());
    fd.op_set_opcode(op, TypeOp::new(opcode, 0, format!("{opcode:?}")));
    for (slot, &input) in inputs.iter().enumerate() {
        fd.op_set_input(op, input, slot as int4).unwrap();
    }
    let root = fd.bblocks_ref().root.unwrap();
    let block = if fd.bblocks_ref().block(root).get_size() == 0 {
        fd.bblocks_mut().new_block_basic(root)
    } else {
        fd.bblocks_ref().block(root).get_block(0)
    };
    fd.op_insert(op, block, None);
    op
}

fn written(fd: &mut Funcdata, offset: u64, size: int4) -> VarnodeId {
    let constant = fd.new_constant(size, 7);
    let op = operation(fd, OpCode::CPUI_COPY, &[constant]);
    let space = fd.get_address().get_space().unwrap().clone();
    fd.new_varnode_out(size, &Address::new(space, offset), op)
        .unwrap()
}

fn returned(fd: &mut Funcdata, low_size: int4) -> OpId {
    let high = written(fd, 0x10, 4);
    let low = written(fd, 0x14, low_size);
    let target = fd.new_constant(4, 0);
    operation(fd, OpCode::CPUI_RETURN, &[target, high, low])
}

fn trials(fd: &Funcdata) -> ParamActive {
    let mut active = ParamActive::new(false);
    let pair = &fd.kuna_callwide().unwrap().pair;
    active.register_trial(&pair.hi.0, pair.hi.1);
    active.register_trial(&pair.lo.0, pair.lo.1);
    active
}

#[test]
fn project_declaration_uses_final_operands_when_recovery_leaves_an_empty_proto() {
    use crate::dtype::{Datatype, type_metatype};

    for kind in [
        None,
        Some(type_metatype::TYPE_UINT),
        Some(type_metatype::TYPE_UNKNOWN),
    ] {
        let (mut fd, proof, mut call) = export_call();
        call.proto_mut().set_internal(
            proof.model.clone(),
            Rc::new(Datatype::new(0, type_metatype::TYPE_VOID)),
        );
        if let Some(kind) = kind {
            let output = fd
                .new_varnode_out(8, &proof.pair.hi.0, call.get_op())
                .unwrap();
            fd.vbank_mut().get_mut(output).unwrap().update_type_locked(
                Rc::new(Datatype::new(8, kind)),
                true,
                true,
            );
        }
        assert_eq!(call.proto().num_params(), 0);
        assert_eq!(call.proto().get_output().get_size(), 0);
        let (snapshot, contract) = call_prototype(&fd, &call, "producer").unwrap().unwrap();
        assert_eq!(snapshot.num_params(), 4);
        assert_eq!(contract.inputs, vec![true; 4]);
        assert!(!contract.signed);
        fd.get_func_proto_mut().copy(&snapshot);
        assert!(
            !definition_prototype(&fd, "producer")
                .unwrap()
                .unwrap()
                .signed
        );
        call.set_final_input_storage(Vec::new());
        assert!(call_prototype(&fd, &call, "producer").is_err());
    }
}

#[test]
fn every_model_mutation_revokes_an_already_seeded_drive() {
    let mutations: &[fn(&mut Architecture)] = &[
        |arch| arch.set_default_model_rc(Rc::new(ProtoModel::new(arch.manage()))),
        |arch| arch.register_model(Rc::new(ProtoModel::new(arch.manage()))),
        |arch| arch.set_function_prototype_model("f", Rc::new(ProtoModel::new(arch.manage()))),
        |arch| {
            let address = Address::new(Rc::new(ConstantSpace::new()), 0x1000);
            arch.set_function_prototype_model_at(&address, Rc::new(ProtoModel::new(arch.manage())));
        },
        |arch| arch.build_default_proto(),
        |arch| arch.set_cspec_xml(Vec::new()),
        |arch| arch.set_default_extra_pop(4),
        |arch| arch.set_flow_options(1),
        |arch| arch.set_loader(Box::new(NoImage)),
        |arch| {
            arch.with_context_db_mut(|_| ());
        },
        |arch| {
            let _ = arch.translate_mut();
        },
        |arch| {
            arch.set_kuna_option("narrowext", "compiler").unwrap();
        },
    ];
    for mutation in mutations {
        let (fd, proof) = data_and_proof();
        let mut arch = architecture();
        *arch
            .kuna_tables
            .get_mut::<crate::kuna_callwide::ProofSlot>() = ProofSlot(Some(proof));
        assert!(proven(&fd, fd.get_address()));
        mutation(&mut arch);
        assert!(!proven(&fd, fd.get_address()));
    }
}

#[test]
fn replaying_the_same_declared_model_does_not_split_a_batch() {
    let (fd, proof) = data_and_proof();
    let mut arch = architecture();
    let model = Rc::new(ProtoModel::new(arch.manage()));
    arch.set_function_prototype_model("f", model.clone());
    arch.set_default_model_rc(model.clone());
    arch.register_model(model.clone());
    *arch
        .kuna_tables
        .get_mut::<crate::kuna_callwide::ProofSlot>() = ProofSlot(Some(proof));
    arch.set_function_prototype_model("f", model.clone());
    arch.set_default_model_rc(model.clone());
    arch.register_model(model);
    arch.with_context_db(|db| db.get_default_value().len());
    assert!(proven(&fd, fd.get_address()));
}
