// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63B0
// Name:            .get_name_expr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63B0 jmp     cs:off_241C0
//
// Resolved target: get_name_expr
// Target address:  0x25F90
// GOT/IAT slot:    0x241C0
// Slot symbol:     off_241C0
// Target type:     <no type info>
// ============================================================

void .get_name_expr(/* see target signature */)
{
    // Tail-call to get_name_expr via GOT/IAT indirection
    return get_name_expr(/* forwarded args */);
}

