// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9D0
// Name:            .free_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9D0 jmp     cs:off_4ED4D0
//
// Resolved target: free_idcv
// Target address:  0x4F17D0
// GOT/IAT slot:    0x4ED4D0
// Slot symbol:     off_4ED4D0
// Target type:     <no type info>
// ============================================================

void .free_idcv(/* see target signature */)
{
    // Tail-call to free_idcv via GOT/IAT indirection
    return free_idcv(/* forwarded args */);
}

