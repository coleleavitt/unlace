// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198C0
// Name:            .bitcountr_zero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198C0 jmp     cs:off_75448
//
// Resolved target: bitcountr_zero
// Target address:  0x75C98
// GOT/IAT slot:    0x75448
// Slot symbol:     off_75448
// Target type:     <no type info>
// ============================================================

void .bitcountr_zero(/* see target signature */)
{
    // Tail-call to bitcountr_zero via GOT/IAT indirection
    return bitcountr_zero(/* forwarded args */);
}

