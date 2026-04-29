// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6E0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6E0 jmp     cs:off_4BF358
//
// Resolved target: qtime64
// Target address:  0x4C2820
// GOT/IAT slot:    0x4BF358
// Slot symbol:     off_4BF358
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

