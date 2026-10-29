// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB00
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB00 jmp     cs:off_2C7B568
//
// Resolved target: get_spd
// Target address:  0x5B91B0
// GOT/IAT slot:    0x2C7B568
// Slot symbol:     off_2C7B568
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

