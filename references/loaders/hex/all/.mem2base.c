// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_5018
//
// Resolved target: mem2base
// Target address:  0x51E8
// GOT/IAT slot:    0x5018
// Slot symbol:     off_5018
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

