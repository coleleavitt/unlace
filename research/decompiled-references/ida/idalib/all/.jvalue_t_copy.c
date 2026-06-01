// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9140
// Name:            .jvalue_t_copy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9140 jmp     cs:off_2C7A088
//
// Resolved target: jvalue_t_copy
// Target address:  0x7AAEA0
// GOT/IAT slot:    0x2C7A088
// Slot symbol:     off_2C7A088
// Target type:     <no type info>
// ============================================================

void .jvalue_t_copy(/* see target signature */)
{
    // Tail-call to jvalue_t_copy via GOT/IAT indirection
    return jvalue_t_copy(/* forwarded args */);
}

