// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A690
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A690 jmp     cs:off_4BF330
//
// Resolved target: interr
// Target address:  0x4C27F8
// GOT/IAT slot:    0x4BF330
// Slot symbol:     off_4BF330
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

