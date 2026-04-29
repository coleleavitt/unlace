// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D910
// Name:            .qvprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D910 jmp     cs:off_B3470
//
// Resolved target: qvprintf
// Target address:  0xB3C18
// GOT/IAT slot:    0xB3470
// Slot symbol:     off_B3470
// Target type:     <no type info>
// ============================================================

void .qvprintf(/* see target signature */)
{
    // Tail-call to qvprintf via GOT/IAT indirection
    return qvprintf(/* forwarded args */);
}

