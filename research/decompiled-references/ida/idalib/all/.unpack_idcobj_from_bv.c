// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A98A0
// Name:            .unpack_idcobj_from_bv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A98A0 jmp     cs:off_2C7A438
//
// Resolved target: unpack_idcobj_from_bv
// Target address:  0x58C170
// GOT/IAT slot:    0x2C7A438
// Slot symbol:     off_2C7A438
// Target type:     <no type info>
// ============================================================

void .unpack_idcobj_from_bv(/* see target signature */)
{
    // Tail-call to unpack_idcobj_from_bv via GOT/IAT indirection
    return unpack_idcobj_from_bv(/* forwarded args */);
}

