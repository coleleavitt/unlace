// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9650
// Name:            .bitcountr_zero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9650 jmp     cs:off_2E310
//
// Resolved target: bitcountr_zero
// Target address:  0x2E980
// GOT/IAT slot:    0x2E310
// Slot symbol:     off_2E310
// Target type:     <no type info>
// ============================================================

void .bitcountr_zero(/* see target signature */)
{
    // Tail-call to bitcountr_zero via GOT/IAT indirection
    return bitcountr_zero(/* forwarded args */);
}

