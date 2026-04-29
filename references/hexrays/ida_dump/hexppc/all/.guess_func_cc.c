// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B900
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B900 jmp     cs:off_4DAC68
//
// Resolved target: guess_func_cc
// Target address:  0x4DD680
// GOT/IAT slot:    0x4DAC68
// Slot symbol:     off_4DAC68
// Target type:     <no type info>
// ============================================================

void .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

