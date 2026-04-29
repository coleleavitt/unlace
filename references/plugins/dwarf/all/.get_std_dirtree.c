// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA830
// Name:            .get_std_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA830 jmp     cs:off_CA400
//
// Resolved target: get_std_dirtree
// Target address:  0xD0D38
// GOT/IAT slot:    0xCA400
// Slot symbol:     off_CA400
// Target type:     <no type info>
// ============================================================

void .get_std_dirtree(/* see target signature */)
{
    // Tail-call to get_std_dirtree via GOT/IAT indirection
    return get_std_dirtree(/* forwarded args */);
}

