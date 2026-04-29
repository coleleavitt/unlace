// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_130C8
//
// Resolved target: _ZdlPvm
// Target address:  0x13360
// GOT/IAT slot:    0x130C8
// Slot symbol:     off_130C8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

