// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1250
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1250 jmp     cs:off_5110
//
// Resolved target: segtype
// Target address:  0x52F8
// GOT/IAT slot:    0x5110
// Slot symbol:     off_5110
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

