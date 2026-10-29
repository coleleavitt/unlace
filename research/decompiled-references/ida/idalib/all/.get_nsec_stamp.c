// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA30
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA30 jmp     cs:off_2C7AD00
//
// Resolved target: get_nsec_stamp
// Target address:  0x841050
// GOT/IAT slot:    0x2C7AD00
// Slot symbol:     off_2C7AD00
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

