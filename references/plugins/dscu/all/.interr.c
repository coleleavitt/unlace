// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40F0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40F0 jmp     cs:off_1F060
//
// Resolved target: interr
// Target address:  0x1F310
// GOT/IAT slot:    0x1F060
// Slot symbol:     off_1F060
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

