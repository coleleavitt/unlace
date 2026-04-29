// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6120
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6120 jmp     cs:off_8D078
//
// Resolved target: get_flags_ex
// Target address:  0x8D5F8
// GOT/IAT slot:    0x8D078
// Slot symbol:     off_8D078
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

