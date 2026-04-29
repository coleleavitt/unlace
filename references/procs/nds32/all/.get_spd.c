// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8140
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8140 jmp     cs:off_2A088
//
// Resolved target: get_spd
// Target address:  0x2A5F8
// GOT/IAT slot:    0x2A088
// Slot symbol:     off_2A088
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

