// Shared integration-test executable. Process-sensitive tests stay separate.
#[path = "catalog_bytecompat.rs"]
mod catalog_bytecompat;

#[path = "corpus_bootstrap.rs"]
mod corpus_bootstrap;

#[path = "deadcode_b4.rs"]
mod deadcode_b4;

#[path = "decompile_e2e.rs"]
mod decompile_e2e;

#[path = "flow_linkage.rs"]
mod flow_linkage;

#[path = "funcdata_encode_e2e.rs"]
mod funcdata_encode_e2e;

#[path = "heritage_b3.rs"]
mod heritage_b3;

#[path = "hook_registry.rs"]
mod hook_registry;

#[path = "options_md_fresh.rs"]
mod options_md_fresh;

#[path = "printc_parity.rs"]
mod printc_parity;

#[path = "proto_b4.rs"]
mod proto_b4;

#[path = "register_symbol_identity.rs"]
mod register_symbol_identity;

#[path = "testcirclerange.rs"]
mod testcirclerange;

#[path = "testunlaceregion.rs"]
mod testunlaceregion;

#[path = "testtypes.rs"]
mod testtypes;

#[path = "universalaction_listing.rs"]
mod universalaction_listing;

#[path = "verify_cspecprotos.rs"]
mod verify_cspecprotos;

#[path = "verify_decompile_project_emit.rs"]
mod verify_decompile_project_emit;

#[path = "verify_symbol_snapshot_cache.rs"]
mod verify_symbol_snapshot_cache;

#[path = "infertypes_join_edges.rs"]
mod infertypes_join_edges;

#[path = "multicollapse_witness.rs"]
mod multicollapse_witness;

#[path = "signed_float_trunc.rs"]
mod signed_float_trunc;

#[path = "forloop_hidden_copy.rs"]
mod forloop_hidden_copy;

#[path = "signed_constant_width.rs"]
mod signed_constant_width;

#[path = "aggregate_padding.rs"]
mod aggregate_padding;

#[path = "programslice.rs"]
mod programslice;
