// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C9F0
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C9F0 jmp     cs:off_4EDCE0
//
// Resolved target: guess_func_cc
// Target address:  0x4F2018
// GOT/IAT slot:    0x4EDCE0
// Slot symbol:     off_4EDCE0
// Target type:     <no type info>
// ============================================================

void .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

