// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACA0
// Name:            .del_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACA0 jmp     cs:off_2C7AE38
//
// Resolved target: del_idcv_attr
// Target address:  0x79BE80
// GOT/IAT slot:    0x2C7AE38
// Slot symbol:     off_2C7AE38
// Target type:     <no type info>
// ============================================================

void .del_idcv_attr(/* see target signature */)
{
    // Tail-call to del_idcv_attr via GOT/IAT indirection
    return del_idcv_attr(/* forwarded args */);
}

