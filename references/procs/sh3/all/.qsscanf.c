// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5130
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5130 jmp     cs:off_15080
//
// Resolved target: qsscanf
// Target address:  0x16110
// GOT/IAT slot:    0x15080
// Slot symbol:     off_15080
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

