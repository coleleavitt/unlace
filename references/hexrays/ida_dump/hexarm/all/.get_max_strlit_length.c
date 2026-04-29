// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E690
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E690 jmp     cs:off_4E9B30
//
// Resolved target: get_max_strlit_length
// Target address:  0x4EC558
// GOT/IAT slot:    0x4E9B30
// Slot symbol:     off_4E9B30
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

