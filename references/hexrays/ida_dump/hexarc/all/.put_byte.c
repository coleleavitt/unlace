// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29740
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29740 jmp     cs:off_4B9388
//
// Resolved target: put_byte
// Target address:  0x4BBD58
// GOT/IAT slot:    0x4B9388
// Slot symbol:     off_4B9388
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

