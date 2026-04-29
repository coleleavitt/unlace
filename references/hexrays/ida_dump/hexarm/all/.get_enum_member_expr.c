// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E140
// Name:            .get_enum_member_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E140 jmp     cs:off_4E9888
//
// Resolved target: get_enum_member_expr
// Target address:  0x4EC2A8
// GOT/IAT slot:    0x4E9888
// Slot symbol:     off_4E9888
// Target type:     <no type info>
// ============================================================

void .get_enum_member_expr(/* see target signature */)
{
    // Tail-call to get_enum_member_expr via GOT/IAT indirection
    return get_enum_member_expr(/* forwarded args */);
}

