// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B50
// Name:            .get_next_dref_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B50 jmp     cs:off_2C79D90
//
// Resolved target: get_next_dref_to
// Target address:  0x410B70
// GOT/IAT slot:    0x2C79D90
// Slot symbol:     off_2C79D90
// Target type:     <no type info>
// ============================================================

void .get_next_dref_to(/* see target signature */)
{
    // Tail-call to get_next_dref_to via GOT/IAT indirection
    return get_next_dref_to(/* forwarded args */);
}

