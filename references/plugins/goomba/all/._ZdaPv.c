// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4750
// Name:            ._ZdaPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4750 jmp     cs:off_4E390
//
// Resolved target: _ZdaPv
// Target address:  0x4F9A0
// GOT/IAT slot:    0x4E390
// Slot symbol:     off_4E390
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdaPv(/* see target signature */)
{
    // Tail-call to _ZdaPv via GOT/IAT indirection
    return _ZdaPv(/* forwarded args */);
}

