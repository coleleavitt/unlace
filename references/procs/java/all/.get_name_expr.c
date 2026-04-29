// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6370
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6370 jmp     cs:off_2D1A0
//
// Resolved target: get_name_expr
// Target address:  0x2D6A0
// GOT/IAT slot:    0x2D1A0
// Slot symbol:     off_2D1A0
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

