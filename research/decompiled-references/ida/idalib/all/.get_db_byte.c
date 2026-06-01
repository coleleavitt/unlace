// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4E0
// Name:            .get_db_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4E0 jmp     cs:off_2C7C258
//
// Resolved target: get_db_byte
// Target address:  0x3C01F0
// GOT/IAT slot:    0x2C7C258
// Slot symbol:     off_2C7C258
// Target type:     <no type info>
// ============================================================

void .get_db_byte(/* see target signature */)
{
    // Tail-call to get_db_byte via GOT/IAT indirection
    return get_db_byte(/* forwarded args */);
}

