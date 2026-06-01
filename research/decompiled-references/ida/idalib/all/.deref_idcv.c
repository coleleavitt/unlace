// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9CE0
// Name:            .deref_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9CE0 jmp     cs:off_2C7A658
//
// Resolved target: deref_idcv
// Target address:  0x796550
// GOT/IAT slot:    0x2C7A658
// Slot symbol:     off_2C7A658
// Target type:     <no type info>
// ============================================================

void .deref_idcv(/* see target signature */)
{
    // Tail-call to deref_idcv via GOT/IAT indirection
    return deref_idcv(/* forwarded args */);
}

