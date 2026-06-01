// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119220
// Name:            .getn_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119220 jmp     cs:getn_sreg_range_ptr
//
// Resolved target: getn_sreg_range
// Target address:  0x8D8318
// GOT/IAT slot:    0x8A35B0
// Slot symbol:     getn_sreg_range_ptr
// Target type:     <no type info>
// ============================================================

void .getn_sreg_range(/* see target signature */)
{
    // Tail-call to getn_sreg_range via GOT/IAT indirection
    return getn_sreg_range(/* forwarded args */);
}

