// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D80
// Name:            .free_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D80 jmp     cs:free_idcv_ptr
//
// Resolved target: free_idcv
// Target address:  0x8D4DC8
// GOT/IAT slot:    0x8A0B60
// Slot symbol:     free_idcv_ptr
// Target type:     <no type info>
// ============================================================

void .free_idcv(/* see target signature */)
{
    // Tail-call to free_idcv via GOT/IAT indirection
    return free_idcv(/* forwarded args */);
}

