// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6C0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6C0 jmp     cs:off_4ED348
//
// Resolved target: interr
// Target address:  0x4F1640
// GOT/IAT slot:    0x4ED348
// Slot symbol:     off_4ED348
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

