// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9B0
// Name:            .free_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9B0 jmp     cs:off_4E94C0
//
// Resolved target: free_idcv
// Target address:  0x4EBEC8
// GOT/IAT slot:    0x4E94C0
// Slot symbol:     off_4E94C0
// Target type:     <no type info>
// ============================================================

void .free_idcv(/* see target signature */)
{
    // Tail-call to free_idcv via GOT/IAT indirection
    return free_idcv(/* forwarded args */);
}

