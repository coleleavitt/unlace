// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4130
// Name:            .pack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4130 jmp     cs:off_1F080
//
// Resolved target: pack_ds
// Target address:  0x1F330
// GOT/IAT slot:    0x1F080
// Slot symbol:     off_1F080
// Target type:     <no type info>
// ============================================================

void .pack_ds(/* see target signature */)
{
    // Tail-call to pack_ds via GOT/IAT indirection
    return pack_ds(/* forwarded args */);
}

