// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8820
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8820 jmp     cs:off_2C79BF8
//
// Resolved target: qsscanf
// Target address:  0x84E6E0
// GOT/IAT slot:    0x2C79BF8
// Slot symbol:     off_2C79BF8
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

