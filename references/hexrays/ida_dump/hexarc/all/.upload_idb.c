// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1D0
// Name:            .upload_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1D0 jmp     cs:off_4BA0D0
//
// Resolved target: upload_idb
// Target address:  0x4BCB10
// GOT/IAT slot:    0x4BA0D0
// Slot symbol:     off_4BA0D0
// Target type:     <no type info>
// ============================================================

void .upload_idb(/* see target signature */)
{
    // Tail-call to upload_idb via GOT/IAT indirection
    return upload_idb(/* forwarded args */);
}

