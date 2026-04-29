// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A460
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A460 jmp     cs:off_4DA218
//
// Resolved target: get_flags_ex
// Target address:  0x4DCBE8
// GOT/IAT slot:    0x4DA218
// Slot symbol:     off_4DA218
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

