// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9380
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9380 jmp     cs:off_261A8
//
// Resolved target: get_ph
// Target address:  0x264D0
// GOT/IAT slot:    0x261A8
// Slot symbol:     off_261A8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

