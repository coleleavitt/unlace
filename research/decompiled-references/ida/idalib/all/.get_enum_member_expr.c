// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE50
// Name:            .get_enum_member_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE50 jmp     cs:off_2C7BF10
//
// Resolved target: get_enum_member_expr
// Target address:  0x413C30
// GOT/IAT slot:    0x2C7BF10
// Slot symbol:     off_2C7BF10
// Target type:     <no type info>
// ============================================================

void .get_enum_member_expr(/* see target signature */)
{
    // Tail-call to get_enum_member_expr via GOT/IAT indirection
    return get_enum_member_expr(/* forwarded args */);
}

