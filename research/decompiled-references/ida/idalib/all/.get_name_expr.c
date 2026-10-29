// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1C0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1C0 jmp     cs:off_2C7B0C8
//
// Resolved target: get_name_expr
// Target address:  0x4DA270
// GOT/IAT slot:    0x2C7B0C8
// Slot symbol:     off_2C7B0C8
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

