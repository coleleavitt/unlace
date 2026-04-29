// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1D0
// Name:            .get_enum_member_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1D0 jmp     cs:off_4ED8D0
//
// Resolved target: get_enum_member_expr
// Target address:  0x4F1BF0
// GOT/IAT slot:    0x4ED8D0
// Slot symbol:     off_4ED8D0
// Target type:     <no type info>
// ============================================================

void .get_enum_member_expr(/* see target signature */)
{
    // Tail-call to get_enum_member_expr via GOT/IAT indirection
    return get_enum_member_expr(/* forwarded args */);
}

