// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA00
// Name:            .set_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA00 jmp     cs:off_4ED4E8
//
// Resolved target: set_idcv_attr
// Target address:  0x4F17E8
// GOT/IAT slot:    0x4ED4E8
// Slot symbol:     off_4ED4E8
// Target type:     <no type info>
// ============================================================

void .set_idcv_attr(/* see target signature */)
{
    // Tail-call to set_idcv_attr via GOT/IAT indirection
    return set_idcv_attr(/* forwarded args */);
}

