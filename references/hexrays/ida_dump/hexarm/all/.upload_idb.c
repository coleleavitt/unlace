// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F230
// Name:            .upload_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F230 jmp     cs:off_4EA100
//
// Resolved target: upload_idb
// Target address:  0x4ECB60
// GOT/IAT slot:    0x4EA100
// Slot symbol:     off_4EA100
// Target type:     <no type info>
// ============================================================

void .upload_idb(/* see target signature */)
{
    // Tail-call to upload_idb via GOT/IAT indirection
    return upload_idb(/* forwarded args */);
}

