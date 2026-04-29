// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D140
// Name:            .qrmdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D140 jmp     cs:off_B3088
//
// Resolved target: qrmdir
// Target address:  0xB3808
// GOT/IAT slot:    0xB3088
// Slot symbol:     off_B3088
// Target type:     <no type info>
// ============================================================

void .qrmdir(/* see target signature */)
{
    // Tail-call to qrmdir via GOT/IAT indirection
    return qrmdir(/* forwarded args */);
}

