// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29990
// Name:            .free_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29990 jmp     cs:off_4B94B0
//
// Resolved target: free_idcv
// Target address:  0x4BBE98
// GOT/IAT slot:    0x4B94B0
// Slot symbol:     off_4B94B0
// Target type:     <no type info>
// ============================================================

void .free_idcv(/* see target signature */)
{
    // Tail-call to free_idcv via GOT/IAT indirection
    return free_idcv(/* forwarded args */);
}

