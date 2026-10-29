// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6B0
// Name:            .first_idcv_attr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6B0 jmp     cs:off_2C7AB40
//
// Resolved target: first_idcv_attr
// Target address:  0x791820
// GOT/IAT slot:    0x2C7AB40
// Slot symbol:     off_2C7AB40
// Target type:     <no type info>
// ============================================================

void .first_idcv_attr(/* see target signature */)
{
    // Tail-call to first_idcv_attr via GOT/IAT indirection
    return first_idcv_attr(/* forwarded args */);
}

