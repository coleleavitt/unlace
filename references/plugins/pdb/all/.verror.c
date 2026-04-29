// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0B0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0B0 jmp     cs:off_B3040
//
// Resolved target: verror
// Target address:  0xB37B0
// GOT/IAT slot:    0xB3040
// Slot symbol:     off_B3040
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

