// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7100
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7100 jmp     cs:off_26068
//
// Resolved target: interr
// Target address:  0x26320
// GOT/IAT slot:    0x26068
// Slot symbol:     off_26068
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

