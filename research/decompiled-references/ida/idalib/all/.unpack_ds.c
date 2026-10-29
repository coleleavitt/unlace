// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8BE0
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8BE0 jmp     cs:off_2C79DD8
//
// Resolved target: unpack_ds
// Target address:  0x83BCC0
// GOT/IAT slot:    0x2C79DD8
// Slot symbol:     off_2C79DD8
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

