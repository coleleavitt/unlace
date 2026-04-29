// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_5038
//
// Resolved target: put_byte
// Target address:  0x5170
// GOT/IAT slot:    0x5038
// Slot symbol:     off_5038
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

