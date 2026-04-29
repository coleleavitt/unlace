// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x293D0
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x293D0 jmp     cs:off_4B91D0
//
// Resolved target: get_spd
// Target address:  0x4BBBA0
// GOT/IAT slot:    0x4B91D0
// Slot symbol:     off_4B91D0
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

