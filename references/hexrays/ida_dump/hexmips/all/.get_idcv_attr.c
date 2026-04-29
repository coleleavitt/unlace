// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC80
// Name:            .get_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC80 jmp     cs:off_4CDE28
//
// Resolved target: get_idcv_attr
// Target address:  0x4D0870
// GOT/IAT slot:    0x4CDE28
// Slot symbol:     off_4CDE28
// Target type:     <no type info>
// ============================================================

void .get_idcv_attr(/* see target signature */)
{
    // Tail-call to get_idcv_attr via GOT/IAT indirection
    return get_idcv_attr(/* forwarded args */);
}

