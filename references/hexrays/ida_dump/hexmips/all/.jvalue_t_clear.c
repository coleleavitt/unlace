// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF20
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF20 jmp     cs:off_4CDF78
//
// Resolved target: jvalue_t_clear
// Target address:  0x4D09C8
// GOT/IAT slot:    0x4CDF78
// Slot symbol:     off_4CDF78
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

