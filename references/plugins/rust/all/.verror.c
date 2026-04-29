// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_A008
//
// Resolved target: verror
// Target address:  0xB2D8
// GOT/IAT slot:    0xA008
// Slot symbol:     off_A008
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

