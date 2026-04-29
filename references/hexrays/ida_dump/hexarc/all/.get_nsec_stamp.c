// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF0
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF0 jmp     cs:off_4B9D60
//
// Resolved target: get_nsec_stamp
// Target address:  0x4BC780
// GOT/IAT slot:    0x4B9D60
// Slot symbol:     off_4B9D60
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

