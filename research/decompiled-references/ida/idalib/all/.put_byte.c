// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0B0
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0B0 jmp     cs:off_2C7A840
//
// Resolved target: put_byte
// Target address:  0x3CF0F0
// GOT/IAT slot:    0x2C7A840
// Slot symbol:     off_2C7A840
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

