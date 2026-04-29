// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B120
// Name:            .get_enum_member_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B120 jmp     cs:off_4DA878
//
// Resolved target: get_enum_member_expr
// Target address:  0x4DD278
// GOT/IAT slot:    0x4DA878
// Slot symbol:     off_4DA878
// Target type:     <no type info>
// ============================================================

void .get_enum_member_expr(/* see target signature */)
{
    // Tail-call to get_enum_member_expr via GOT/IAT indirection
    return get_enum_member_expr(/* forwarded args */);
}

