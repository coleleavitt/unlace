// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6670
// Name:            .get_offset_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6670 jmp     cs:off_2F320
//
// Resolved target: get_offset_expr
// Target address:  0x2F990
// GOT/IAT slot:    0x2F320
// Slot symbol:     off_2F320
// Target type:     <no type info>
// ============================================================

void .get_offset_expr(/* see target signature */)
{
    // Tail-call to get_offset_expr via GOT/IAT indirection
    return get_offset_expr(/* forwarded args */);
}

