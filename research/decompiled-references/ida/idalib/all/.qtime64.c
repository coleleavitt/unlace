// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABEC0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABEC0 jmp     cs:off_2C7B748
//
// Resolved target: qtime64
// Target address:  0x8410D0
// GOT/IAT slot:    0x2C7B748
// Slot symbol:     off_2C7B748
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

