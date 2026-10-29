// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E90
// Name:            .getn_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E90 jmp     cs:getn_hidden_range_ptr
//
// Resolved target: getn_hidden_range
// Target address:  0x8D6CE8
// GOT/IAT slot:    0x8A23E8
// Slot symbol:     getn_hidden_range_ptr
// Target type:     <no type info>
// ============================================================

void .getn_hidden_range(/* see target signature */)
{
    // Tail-call to getn_hidden_range via GOT/IAT indirection
    return getn_hidden_range(/* forwarded args */);
}

