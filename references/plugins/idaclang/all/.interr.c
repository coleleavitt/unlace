// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_29090
//
// Resolved target: interr
// Target address:  0x29440
// GOT/IAT slot:    0x29090
// Slot symbol:     off_29090
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

