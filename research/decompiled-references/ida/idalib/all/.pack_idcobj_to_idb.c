// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76B0
// Name:            .pack_idcobj_to_idb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76B0 jmp     cs:off_2C79340
//
// Resolved target: pack_idcobj_to_idb
// Target address:  0x58C1C0
// GOT/IAT slot:    0x2C79340
// Slot symbol:     off_2C79340
// Target type:     __int64 __fastcall(int, int, __int64)
// ============================================================

/* see target sig */ .pack_idcobj_to_idb(/* see target signature */)
{
    // Tail-call to pack_idcobj_to_idb via GOT/IAT indirection
    return pack_idcobj_to_idb(/* forwarded args */);
}

