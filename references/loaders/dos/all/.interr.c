// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_B090
//
// Resolved target: interr
// Target address:  0xB528
// GOT/IAT slot:    0xB090
// Slot symbol:     off_B090
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

