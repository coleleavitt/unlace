// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6170
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6170 jmp     cs:off_240A0
//
// Resolved target: qsscanf
// Target address:  0x25E70
// GOT/IAT slot:    0x240A0
// Slot symbol:     off_240A0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

