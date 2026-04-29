// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .mem2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_B018
//
// Resolved target: mem2base
// Target address:  0xB2C0
// GOT/IAT slot:    0xB018
// Slot symbol:     off_B018
// Target type:     <no type info>
// ============================================================

void .mem2base(/* see target signature */)
{
    // Tail-call to mem2base via GOT/IAT indirection
    return mem2base(/* forwarded args */);
}

