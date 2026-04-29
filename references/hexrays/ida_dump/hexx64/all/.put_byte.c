// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B770
// Name:            .put_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B770 jmp     cs:off_4ED3A0
//
// Resolved target: put_byte
// Target address:  0x4F1698
// GOT/IAT slot:    0x4ED3A0
// Slot symbol:     off_4ED3A0
// Target type:     <no type info>
// ============================================================

void .put_byte(/* see target signature */)
{
    // Tail-call to put_byte via GOT/IAT indirection
    return put_byte(/* forwarded args */);
}

