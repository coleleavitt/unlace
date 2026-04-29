// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C600
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C600 jmp     cs:off_4EDAE8
//
// Resolved target: unpack_ds
// Target address:  0x4F1E10
// GOT/IAT slot:    0x4EDAE8
// Slot symbol:     off_4EDAE8
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

