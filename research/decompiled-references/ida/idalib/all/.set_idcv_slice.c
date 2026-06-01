// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC20
// Name:            .set_idcv_slice
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC20 jmp     cs:off_2C7B5F8
//
// Resolved target: set_idcv_slice
// Target address:  0x7929C0
// GOT/IAT slot:    0x2C7B5F8
// Slot symbol:     off_2C7B5F8
// Target type:     <no type info>
// ============================================================

void .set_idcv_slice(/* see target signature */)
{
    // Tail-call to set_idcv_slice via GOT/IAT indirection
    return set_idcv_slice(/* forwarded args */);
}

