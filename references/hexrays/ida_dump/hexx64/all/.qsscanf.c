// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5B0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5B0 jmp     cs:off_4ED2C0
//
// Resolved target: qsscanf
// Target address:  0x4F15B8
// GOT/IAT slot:    0x4ED2C0
// Slot symbol:     off_4ED2C0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

