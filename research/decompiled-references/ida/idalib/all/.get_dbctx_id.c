// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A60
// Name:            .get_dbctx_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A60 jmp     cs:off_2C7A518
//
// Resolved target: get_dbctx_id
// Target address:  0x3FA790
// GOT/IAT slot:    0x2C7A518
// Slot symbol:     off_2C7A518
// Target type:     <no type info>
// ============================================================

void .get_dbctx_id(/* see target signature */)
{
    // Tail-call to get_dbctx_id via GOT/IAT indirection
    return get_dbctx_id(/* forwarded args */);
}

