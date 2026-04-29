// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E940
// Name:            .guess_func_cc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E940 jmp     cs:off_4E9C88
//
// Resolved target: guess_func_cc
// Target address:  0x4EC6C0
// GOT/IAT slot:    0x4E9C88
// Slot symbol:     off_4E9C88
// Target type:     <no type info>
// ============================================================

void .guess_func_cc(/* see target signature */)
{
    // Tail-call to guess_func_cc via GOT/IAT indirection
    return guess_func_cc(/* forwarded args */);
}

