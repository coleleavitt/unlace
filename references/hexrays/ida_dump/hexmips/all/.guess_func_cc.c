// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B910
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B910 jmp     cs:off_4CDC70
//
// Resolved target: guess_func_cc
// Target address:  0x4D06A8
// GOT/IAT slot:    0x4CDC70
// Slot symbol:     off_4CDC70
// Target type:     <no type info>
// ============================================================

void .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

