// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_130A0
//
// Resolved target: interr
// Target address:  0x13418
// GOT/IAT slot:    0x130A0
// Slot symbol:     off_130A0
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

