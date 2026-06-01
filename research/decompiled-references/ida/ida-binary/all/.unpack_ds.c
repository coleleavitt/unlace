// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113AA0
// Name:            .unpack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113AA0 jmp     cs:unpack_ds_ptr
//
// Resolved target: unpack_ds
// Target address:  0x8D4BE8
// GOT/IAT slot:    0x8A09F0
// Slot symbol:     unpack_ds_ptr
// Target type:     <no type info>
// ============================================================

void .unpack_ds(/* see target signature */)
{
    // Tail-call to unpack_ds via GOT/IAT indirection
    return unpack_ds(/* forwarded args */);
}

