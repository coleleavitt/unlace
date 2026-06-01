// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7370
// Name:            .get_next_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7370 jmp     cs:off_2C791A0
//
// Resolved target: get_next_dref_from
// Target address:  0x410870
// GOT/IAT slot:    0x2C791A0
// Slot symbol:     off_2C791A0
// Target type:     <no type info>
// ============================================================

void .get_next_dref_from(/* see target signature */)
{
    // Tail-call to get_next_dref_from via GOT/IAT indirection
    return get_next_dref_from(/* forwarded args */);
}

