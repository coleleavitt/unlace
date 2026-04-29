// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32C0
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32C0 jmp     cs:off_14148
//
// Resolved target: getseg
// Target address:  0x14738
// GOT/IAT slot:    0x14148
// Slot symbol:     off_14148
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

