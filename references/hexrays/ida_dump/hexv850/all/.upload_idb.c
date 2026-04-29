// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C200
// Name:            .upload_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C200 jmp     cs:off_4C10E8
//
// Resolved target: upload_idb
// Target address:  0x4C4120
// GOT/IAT slot:    0x4C10E8
// Slot symbol:     off_4C10E8
// Target type:     <no type info>
// ============================================================

void .upload_idb(/* see target signature */)
{
    // Tail-call to upload_idb via GOT/IAT indirection
    return upload_idb(/* forwarded args */);
}

