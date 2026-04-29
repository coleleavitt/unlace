// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB10
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB10 jmp     cs:off_4BFD70
//
// Resolved target: get_nsec_stamp
// Target address:  0x4C3288
// GOT/IAT slot:    0x4BFD70
// Slot symbol:     off_4BFD70
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

