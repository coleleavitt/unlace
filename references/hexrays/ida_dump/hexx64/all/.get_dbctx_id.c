// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB40
// Name:            .get_dbctx_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB40 jmp     cs:off_4ED588
//
// Resolved target: get_dbctx_id
// Target address:  0x4F1888
// GOT/IAT slot:    0x4ED588
// Slot symbol:     off_4ED588
// Target type:     <no type info>
// ============================================================

void .get_dbctx_id(/* see target signature */)
{
    // Tail-call to get_dbctx_id via GOT/IAT indirection
    return get_dbctx_id(/* forwarded args */);
}

