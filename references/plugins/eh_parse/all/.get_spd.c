// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6160
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6160 jmp     cs:off_2F098
//
// Resolved target: get_spd
// Target address:  0x2F708
// GOT/IAT slot:    0x2F098
// Slot symbol:     off_2F098
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

