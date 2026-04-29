// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1F0
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1F0 jmp     cs:off_4E90E0
//
// Resolved target: getn_func
// Target address:  0x4EBAD0
// GOT/IAT slot:    0x4E90E0
// Slot symbol:     off_4E90E0
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

