// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8080
// Name:            .unpack_idcobj_from_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8080 jmp     cs:off_2C79828
//
// Resolved target: unpack_idcobj_from_idb
// Target address:  0x58BE70
// GOT/IAT slot:    0x2C79828
// Slot symbol:     off_2C79828
// Target type:     <no type info>
// ============================================================

void .unpack_idcobj_from_idb(/* see target signature */)
{
    // Tail-call to unpack_idcobj_from_idb via GOT/IAT indirection
    return unpack_idcobj_from_idb(/* forwarded args */);
}

