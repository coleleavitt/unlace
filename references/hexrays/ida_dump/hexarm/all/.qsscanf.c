// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D5B0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D5B0 jmp     cs:off_4E92C0
//
// Resolved target: qsscanf
// Target address:  0x4EBCB0
// GOT/IAT slot:    0x4E92C0
// Slot symbol:     off_4E92C0
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

