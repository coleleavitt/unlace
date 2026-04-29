// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B540
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B540 jmp     cs:off_4C0A88
//
// Resolved target: unpack_ds
// Target address:  0x4C3A80
// GOT/IAT slot:    0x4C0A88
// Slot symbol:     off_4C0A88
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

