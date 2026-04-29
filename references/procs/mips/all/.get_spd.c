// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19160
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19160 jmp     cs:off_75098
//
// Resolved target: get_spd
// Target address:  0x758E8
// GOT/IAT slot:    0x75098
// Slot symbol:     off_75098
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

