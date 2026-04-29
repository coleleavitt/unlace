// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73E0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73E0 jmp     cs:off_261D8
//
// Resolved target: get_byte
// Target address:  0x264A8
// GOT/IAT slot:    0x261D8
// Slot symbol:     off_261D8
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

