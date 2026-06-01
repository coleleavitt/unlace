// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA610
// Name:            .pack_idcobj_to_bv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA610 jmp     cs:off_2C7AAF0
//
// Resolved target: pack_idcobj_to_bv
// Target address:  0x58B220
// GOT/IAT slot:    0x2C7AAF0
// Slot symbol:     off_2C7AAF0
// Target type:     __int64 __fastcall(int, int, int)
// ============================================================

/* see target sig */ .pack_idcobj_to_bv(/* see target signature */)
{
    // Tail-call to pack_idcobj_to_bv via GOT/IAT indirection
    return pack_idcobj_to_bv(/* forwarded args */);
}

