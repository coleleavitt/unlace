// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9150
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9150 jmp     cs:off_2E090
//
// Resolved target: get_flags_ex
// Target address:  0x2E700
// GOT/IAT slot:    0x2E090
// Slot symbol:     off_2E090
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

