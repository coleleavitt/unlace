// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA90
// Name:            .get_offset_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA90 jmp     cs:get_offset_expr_ptr
//
// Resolved target: get_offset_expr
// Target address:  0x8D9CD0
// GOT/IAT slot:    0x8A49E8
// Slot symbol:     get_offset_expr_ptr
// Target type:     <no type info>
// ============================================================

void .get_offset_expr(/* see target signature */)
{
    // Tail-call to get_offset_expr via GOT/IAT indirection
    return get_offset_expr(/* forwarded args */);
}

