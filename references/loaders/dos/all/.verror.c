// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_B040
//
// Resolved target: verror
// Target address:  0xB4D8
// GOT/IAT slot:    0xB040
// Slot symbol:     off_B040
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

