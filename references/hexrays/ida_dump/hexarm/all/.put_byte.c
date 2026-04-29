// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D750
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D750 jmp     cs:off_4E9390
//
// Resolved target: put_byte
// Target address:  0x4EBD80
// GOT/IAT slot:    0x4E9390
// Slot symbol:     off_4E9390
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

