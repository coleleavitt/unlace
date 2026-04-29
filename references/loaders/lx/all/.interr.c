// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_B060
//
// Resolved target: interr
// Target address:  0xB308
// GOT/IAT slot:    0xB060
// Slot symbol:     off_B060
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

