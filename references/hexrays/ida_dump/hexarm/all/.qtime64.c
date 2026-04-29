// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6F0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6F0 jmp     cs:off_4E9360
//
// Resolved target: qtime64
// Target address:  0x4EBD50
// GOT/IAT slot:    0x4E9360
// Slot symbol:     off_4E9360
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

