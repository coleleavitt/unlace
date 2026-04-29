// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3070
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3070 jmp     cs:off_13020
//
// Resolved target: mem2base
// Target address:  0x13708
// GOT/IAT slot:    0x13020
// Slot symbol:     off_13020
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

