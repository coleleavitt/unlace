// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115990
// Name:            .set_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115990 jmp     cs:set_idcv_attr_ptr
//
// Resolved target: set_idcv_attr
// Target address:  0x8D5FC8
// GOT/IAT slot:    0x8A1968
// Slot symbol:     set_idcv_attr_ptr
// Target type:     <no type info>
// ============================================================

void .set_idcv_attr(/* see target signature */)
{
    // Tail-call to set_idcv_attr via GOT/IAT indirection
    return set_idcv_attr(/* forwarded args */);
}

