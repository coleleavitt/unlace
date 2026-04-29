// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30B0
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30B0 jmp     cs:off_14040
//
// Resolved target: mem2base
// Target address:  0x14628
// GOT/IAT slot:    0x14040
// Slot symbol:     off_14040
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

