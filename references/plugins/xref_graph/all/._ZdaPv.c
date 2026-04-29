// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163B0
// Name:            ._ZdaPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163B0 jmp     cs:off_4F1C0
//
// Resolved target: _ZdaPv
// Target address:  0x500E0
// GOT/IAT slot:    0x4F1C0
// Slot symbol:     off_4F1C0
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdaPv(/* see target signature */)
{
    // Tail-call to _ZdaPv via GOT/IAT indirection
    return _ZdaPv(/* forwarded args */);
}

