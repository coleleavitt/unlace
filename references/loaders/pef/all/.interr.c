// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_8050
//
// Resolved target: interr
// Target address:  0x8240
// GOT/IAT slot:    0x8050
// Slot symbol:     off_8050
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

