// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114CE0
// Name:            .upload_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114CE0 jmp     cs:upload_idb_ptr
//
// Resolved target: upload_idb
// Target address:  0x8D5800
// GOT/IAT slot:    0x8A1310
// Slot symbol:     upload_idb_ptr
// Target type:     <no type info>
// ============================================================

void .upload_idb(/* see target signature */)
{
    // Tail-call to upload_idb via GOT/IAT indirection
    return upload_idb(/* forwarded args */);
}

