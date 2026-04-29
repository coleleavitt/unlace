// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20200
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20200 jmp     cs:off_950E8
//
// Resolved target: get_spd
// Target address:  0x95B18
// GOT/IAT slot:    0x950E8
// Slot symbol:     off_950E8
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

