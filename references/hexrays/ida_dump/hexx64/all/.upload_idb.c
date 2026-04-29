// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D370
// Name:            .upload_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D370 jmp     cs:off_4EE1A0
//
// Resolved target: upload_idb
// Target address:  0x4F2500
// GOT/IAT slot:    0x4EE1A0
// Slot symbol:     off_4EE1A0
// Target type:     <no type info>
// ============================================================

void .upload_idb(/* see target signature */)
{
    // Tail-call to upload_idb via GOT/IAT indirection
    return upload_idb(/* forwarded args */);
}

