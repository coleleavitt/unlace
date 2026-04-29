// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC10
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC10 jmp     cs:off_4EDDF0
//
// Resolved target: get_nsec_stamp
// Target address:  0x4F2130
// GOT/IAT slot:    0x4EDDF0
// Slot symbol:     off_4EDDF0
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

