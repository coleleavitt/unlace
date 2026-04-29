// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20220
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20220 jmp     cs:off_950F8
//
// Resolved target: get_flags_ex
// Target address:  0x95B30
// GOT/IAT slot:    0x950F8
// Slot symbol:     off_950F8
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

