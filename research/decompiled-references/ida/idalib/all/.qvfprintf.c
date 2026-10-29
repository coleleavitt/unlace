// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1D0
// Name:            .qvfprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1D0 jmp     cs:off_2C7B0D0
//
// Resolved target: qvfprintf
// Target address:  0x84E460
// GOT/IAT slot:    0x2C7B0D0
// Slot symbol:     off_2C7B0D0
// Target type:     <no type info>
// ============================================================

void .qvfprintf(/* see target signature */)
{
    // Tail-call to qvfprintf via GOT/IAT indirection
    return qvfprintf(/* forwarded args */);
}

