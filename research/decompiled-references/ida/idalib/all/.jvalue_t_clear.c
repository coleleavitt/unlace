// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC8F0
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC8F0 jmp     cs:off_2C7BC60
//
// Resolved target: jvalue_t_clear
// Target address:  0x7AAB90
// GOT/IAT slot:    0x2C7BC60
// Slot symbol:     off_2C7BC60
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

