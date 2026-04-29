// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A460
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A460 jmp     cs:off_4C0218
//
// Resolved target: get_flags_ex
// Target address:  0x4C31E0
// GOT/IAT slot:    0x4C0218
// Slot symbol:     off_4C0218
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

