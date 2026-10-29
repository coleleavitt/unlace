// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD680
// Name:            .eshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD680 jmp     cs:off_2C7C328
//
// Resolved target: eshift
// Target address:  0x8306A0
// GOT/IAT slot:    0x2C7C328
// Slot symbol:     off_2C7C328
// Target type:     <no type info>
// ============================================================

void .eshift(/* see target signature */)
{
    // Tail-call to eshift via GOT/IAT indirection
    return eshift(/* forwarded args */);
}

