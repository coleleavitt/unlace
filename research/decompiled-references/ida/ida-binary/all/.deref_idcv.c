// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1155A0
// Name:            .deref_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1155A0 jmp     cs:deref_idcv_ptr
//
// Resolved target: deref_idcv
// Target address:  0x8D5D50
// GOT/IAT slot:    0x8A1770
// Slot symbol:     deref_idcv_ptr
// Target type:     <no type info>
// ============================================================

void .deref_idcv(/* see target signature */)
{
    // Tail-call to deref_idcv via GOT/IAT indirection
    return deref_idcv(/* forwarded args */);
}

