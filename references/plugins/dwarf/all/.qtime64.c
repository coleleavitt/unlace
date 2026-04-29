// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2A0
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2A0 jmp     cs:off_CA138
//
// Resolved target: qtime64
// Target address:  0xD0A68
// GOT/IAT slot:    0xCA138
// Slot symbol:     off_CA138
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

