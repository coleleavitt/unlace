// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118830
// Name:            .get_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118830 jmp     cs:get_spd_ptr
//
// Resolved target: get_spd
// Target address:  0x8D7D10
// GOT/IAT slot:    0x8A30B8
// Slot symbol:     get_spd_ptr
// Target type:     <no type info>
// ============================================================

void .get_spd(/* see target signature */)
{
    // Tail-call to get_spd via GOT/IAT indirection
    return get_spd(/* forwarded args */);
}

