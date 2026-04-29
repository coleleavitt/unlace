// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A740
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A740 jmp     cs:off_4BF388
//
// Resolved target: put_byte
// Target address:  0x4C2850
// GOT/IAT slot:    0x4BF388
// Slot symbol:     off_4BF388
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

