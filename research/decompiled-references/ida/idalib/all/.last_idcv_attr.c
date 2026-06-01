// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8CE0
// Name:            .last_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8CE0 jmp     cs:off_2C79E58
//
// Resolved target: last_idcv_attr
// Target address:  0x791860
// GOT/IAT slot:    0x2C79E58
// Slot symbol:     off_2C79E58
// Target type:     <no type info>
// ============================================================

void .last_idcv_attr(/* see target signature */)
{
    // Tail-call to last_idcv_attr via GOT/IAT indirection
    return last_idcv_attr(/* forwarded args */);
}

