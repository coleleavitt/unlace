// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8190
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8190 jmp     cs:off_2A0B0
//
// Resolved target: qsscanf
// Target address:  0x2BAC0
// GOT/IAT slot:    0x2A0B0
// Slot symbol:     off_2A0B0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

