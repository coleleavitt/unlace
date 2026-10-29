// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A77C0
// Name:            .find_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A77C0 jmp     cs:off_2C793C8
//
// Resolved target: find_byte
// Target address:  0x678580
// GOT/IAT slot:    0x2C793C8
// Slot symbol:     off_2C793C8
// Target type:     <no type info>
// ============================================================

void .find_byte(/* see target signature */)
{
    // Tail-call to find_byte via GOT/IAT indirection
    return find_byte(/* forwarded args */);
}

