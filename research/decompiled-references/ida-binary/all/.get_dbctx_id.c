// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150F0
// Name:            .get_dbctx_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150F0 jmp     cs:get_dbctx_id_ptr
//
// Resolved target: get_dbctx_id
// Target address:  0x8D5A58
// GOT/IAT slot:    0x8A1518
// Slot symbol:     get_dbctx_id_ptr
// Target type:     <no type info>
// ============================================================

void .get_dbctx_id(/* see target signature */)
{
    // Tail-call to get_dbctx_id via GOT/IAT indirection
    return get_dbctx_id(/* forwarded args */);
}

