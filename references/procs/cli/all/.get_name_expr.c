// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_1A0C8
//
// Resolved target: get_name_expr
// Target address:  0x1A380
// GOT/IAT slot:    0x1A0C8
// Slot symbol:     off_1A0C8
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

