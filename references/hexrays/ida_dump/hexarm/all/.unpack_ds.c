// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E580
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E580 jmp     cs:off_4E9AA8
//
// Resolved target: unpack_ds
// Target address:  0x4EC4C8
// GOT/IAT slot:    0x4E9AA8
// Slot symbol:     off_4E9AA8
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

