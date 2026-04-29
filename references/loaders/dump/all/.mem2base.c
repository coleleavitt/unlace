// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_5010
//
// Resolved target: mem2base
// Target address:  0x5350
// GOT/IAT slot:    0x5010
// Slot symbol:     off_5010
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

