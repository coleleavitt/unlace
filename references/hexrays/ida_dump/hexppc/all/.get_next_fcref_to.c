// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A080
// Name:            .get_next_fcref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A080 jmp     cs:off_4DA028
//
// Resolved target: get_next_fcref_to
// Target address:  0x4DC9F8
// GOT/IAT slot:    0x4DA028
// Slot symbol:     off_4DA028
// Target type:     <no type info>
// ============================================================

void .get_next_fcref_to(/* see target signature */)
{
    // Tail-call to get_next_fcref_to via GOT/IAT indirection
    return get_next_fcref_to(/* forwarded args */);
}

