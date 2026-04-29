// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5C0
// Name:            .get_64bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5C0 jmp     cs:off_4E9AC8
//
// Resolved target: get_64bit
// Target address:  0x4EC4E8
// GOT/IAT slot:    0x4E9AC8
// Slot symbol:     off_4E9AC8
// Target type:     <no type info>
// ============================================================

void .get_64bit(/* see target signature */)
{
    // Tail-call to get_64bit via GOT/IAT indirection
    return get_64bit(/* forwarded args */);
}

