// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E120
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E120 jmp     cs:off_4E9878
//
// Resolved target: unpack_dd
// Target address:  0x4EC298
// GOT/IAT slot:    0x4E9878
// Slot symbol:     off_4E9878
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

