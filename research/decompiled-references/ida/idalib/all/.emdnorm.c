// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA720
// Name:            .emdnorm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA720 jmp     cs:off_2C7AB78
//
// Resolved target: emdnorm
// Target address:  0x830940
// GOT/IAT slot:    0x2C7AB78
// Slot symbol:     off_2C7AB78
// Target type:     <no type info>
// ============================================================

void .emdnorm(/* see target signature */)
{
    // Tail-call to emdnorm via GOT/IAT indirection
    return emdnorm(/* forwarded args */);
}

