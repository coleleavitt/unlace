// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_B0A8
//
// Resolved target: put_byte
// Target address:  0xB540
// GOT/IAT slot:    0xB0A8
// Slot symbol:     off_B0A8
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

