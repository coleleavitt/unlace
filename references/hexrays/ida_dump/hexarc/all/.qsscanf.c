// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x295A0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x295A0 jmp     cs:off_4B92B8
//
// Resolved target: qsscanf
// Target address:  0x4BBC88
// GOT/IAT slot:    0x4B92B8
// Slot symbol:     off_4B92B8
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

