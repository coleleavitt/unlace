// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB50
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB50 jmp     cs:off_4E9D90
//
// Resolved target: get_nsec_stamp
// Target address:  0x4EC7D0
// GOT/IAT slot:    0x4E9D90
// Slot symbol:     off_4E9D90
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

