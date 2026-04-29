// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_1A028
//
// Resolved target: get_flags_ex
// Target address:  0x1A2E0
// GOT/IAT slot:    0x1A028
// Slot symbol:     off_1A028
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

