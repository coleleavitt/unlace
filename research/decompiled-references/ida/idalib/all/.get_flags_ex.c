// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8EB0
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8EB0 jmp     cs:off_2C79F40
//
// Resolved target: get_flags_ex
// Target address:  0x3C01D0
// GOT/IAT slot:    0x2C79F40
// Slot symbol:     off_2C79F40
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

