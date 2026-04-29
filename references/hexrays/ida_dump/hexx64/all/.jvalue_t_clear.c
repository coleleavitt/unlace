// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D060
// Name:            .jvalue_t_clear
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D060 jmp     cs:off_4EE018
//
// Resolved target: jvalue_t_clear
// Target address:  0x4F2368
// GOT/IAT slot:    0x4EE018
// Slot symbol:     off_4EE018
// Target type:     <no type info>
// ============================================================

void .jvalue_t_clear(/* see target signature */)
{
    // Tail-call to jvalue_t_clear via GOT/IAT indirection
    return jvalue_t_clear(/* forwarded args */);
}

