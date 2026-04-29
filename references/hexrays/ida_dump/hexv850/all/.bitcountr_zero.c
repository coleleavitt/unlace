// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B550
// Name:            .bitcountr_zero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B550 jmp     cs:off_4C0A90
//
// Resolved target: bitcountr_zero
// Target address:  0x4C3A88
// GOT/IAT slot:    0x4C0A90
// Slot symbol:     off_4C0A90
// Target type:     <no type info>
// ============================================================

void .bitcountr_zero(/* see target signature */)
{
    // Tail-call to bitcountr_zero via GOT/IAT indirection
    return bitcountr_zero(/* forwarded args */);
}

