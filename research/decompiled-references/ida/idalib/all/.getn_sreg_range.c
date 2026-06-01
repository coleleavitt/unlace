// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC220
// Name:            .getn_sreg_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC220 jmp     cs:off_2C7B8F8
//
// Resolved target: getn_sreg_range
// Target address:  0x519150
// GOT/IAT slot:    0x2C7B8F8
// Slot symbol:     off_2C7B8F8
// Target type:     <no type info>
// ============================================================

void .getn_sreg_range(/* see target signature */)
{
    // Tail-call to getn_sreg_range via GOT/IAT indirection
    return getn_sreg_range(/* forwarded args */);
}

