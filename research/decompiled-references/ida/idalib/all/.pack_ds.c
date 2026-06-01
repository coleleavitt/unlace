// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A85D0
// Name:            .pack_ds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A85D0 jmp     cs:off_2C79AD0
//
// Resolved target: pack_ds
// Target address:  0x83BA20
// GOT/IAT slot:    0x2C79AD0
// Slot symbol:     off_2C79AD0
// Target type:     <no type info>
// ============================================================

void .pack_ds(/* see target signature */)
{
    // Tail-call to pack_ds via GOT/IAT indirection
    return pack_ds(/* forwarded args */);
}

