// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C080
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C080 jmp     cs:off_4C0028
//
// Resolved target: get_byte
// Target address:  0x4C3550
// GOT/IAT slot:    0x4C0028
// Slot symbol:     off_4C0028
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

