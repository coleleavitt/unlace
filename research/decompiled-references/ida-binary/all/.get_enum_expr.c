// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B590
// Name:            .get_enum_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B590 jmp     cs:get_enum_expr_ptr
//
// Resolved target: get_enum_expr
// Target address:  0x8D99C0
// GOT/IAT slot:    0x8A4768
// Slot symbol:     get_enum_expr_ptr
// Target type:     <no type info>
// ============================================================

void .get_enum_expr(/* see target signature */)
{
    // Tail-call to get_enum_expr via GOT/IAT indirection
    return get_enum_expr(/* forwarded args */);
}

