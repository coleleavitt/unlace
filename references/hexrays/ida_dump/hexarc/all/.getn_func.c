// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x291F0
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x291F0 jmp     cs:off_4B90E0
//
// Resolved target: getn_func
// Target address:  0x4BBAB0
// GOT/IAT slot:    0x4B90E0
// Slot symbol:     off_4B90E0
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

