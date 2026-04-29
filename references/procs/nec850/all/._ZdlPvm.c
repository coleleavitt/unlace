// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9550
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9550 jmp     cs:off_2E290
//
// Resolved target: _ZdlPvm
// Target address:  0x2E900
// GOT/IAT slot:    0x2E290
// Slot symbol:     off_2E290
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

