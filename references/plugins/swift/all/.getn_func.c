// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40A0
// Name:            .getn_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40A0 jmp     cs:off_28038
//
// Resolved target: getn_func
// Target address:  0x299C8
// GOT/IAT slot:    0x28038
// Slot symbol:     off_28038
// Target type:     <no type info>
// ============================================================

void .getn_func(/* see target signature */)
{
    // Tail-call to getn_func via GOT/IAT indirection
    return getn_func(/* forwarded args */);
}

