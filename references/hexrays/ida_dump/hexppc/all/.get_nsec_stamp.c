// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB10
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB10 jmp     cs:off_4DAD70
//
// Resolved target: get_nsec_stamp
// Target address:  0x4DD790
// GOT/IAT slot:    0x4DAD70
// Slot symbol:     off_4DAD70
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

