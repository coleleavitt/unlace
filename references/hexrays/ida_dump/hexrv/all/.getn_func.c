// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1F0
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1F0 jmp     cs:off_4BF0E0
//
// Resolved target: getn_func
// Target address:  0x4C25A8
// GOT/IAT slot:    0x4BF0E0
// Slot symbol:     off_4BF0E0
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

