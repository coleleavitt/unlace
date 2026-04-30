// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116C90
// Name:            .get_nsec_stamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116C90 jmp     cs:get_nsec_stamp_ptr
//
// Resolved target: get_nsec_stamp
// Target address:  0x8D6BB8
// GOT/IAT slot:    0x8A22E8
// Slot symbol:     get_nsec_stamp_ptr
// Target type:     <no type info>
// ============================================================

void .get_nsec_stamp(/* see target signature */)
{
    // Tail-call to get_nsec_stamp via GOT/IAT indirection
    return get_nsec_stamp(/* forwarded args */);
}

