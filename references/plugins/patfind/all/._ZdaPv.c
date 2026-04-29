// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            ._ZdaPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_130E0
//
// Resolved target: _ZdaPv
// Target address:  0x13378
// GOT/IAT slot:    0x130E0
// Slot symbol:     off_130E0
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdaPv(/* see target signature */)
{
    // Tail-call to _ZdaPv via GOT/IAT indirection
    return _ZdaPv(/* forwarded args */);
}

