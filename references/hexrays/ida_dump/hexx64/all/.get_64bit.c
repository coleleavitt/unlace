// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C650
// Name:            .get_64bit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C650 jmp     cs:off_4EDB10
//
// Resolved target: get_64bit
// Target address:  0x4F1E38
// GOT/IAT slot:    0x4EDB10
// Slot symbol:     off_4EDB10
// Target type:     <no type info>
// ============================================================

void .get_64bit(/* see target signature */)
{
    // Tail-call to get_64bit via GOT/IAT indirection
    return get_64bit(/* forwarded args */);
}

