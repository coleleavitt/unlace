// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF0
// Name:            .get_dbctx_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF0 jmp     cs:off_4CD560
//
// Resolved target: get_dbctx_id
// Target address:  0x4CFF68
// GOT/IAT slot:    0x4CD560
// Slot symbol:     off_4CD560
// Target type:     <no type info>
// ============================================================

void .get_dbctx_id(/* see target signature */)
{
    // Tail-call to get_dbctx_id via GOT/IAT indirection
    return get_dbctx_id(/* forwarded args */);
}

