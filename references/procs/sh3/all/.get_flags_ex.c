// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50F0
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50F0 jmp     cs:off_15060
//
// Resolved target: get_flags_ex
// Target address:  0x160F0
// GOT/IAT slot:    0x15060
// Slot symbol:     off_15060
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

