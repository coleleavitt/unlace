// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29460
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29460 jmp     cs:off_4B9218
//
// Resolved target: get_flags_ex
// Target address:  0x4BBBE8
// GOT/IAT slot:    0x4B9218
// Slot symbol:     off_4B9218
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

