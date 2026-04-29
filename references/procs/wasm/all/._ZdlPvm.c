// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9260
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9260 jmp     cs:off_26118
//
// Resolved target: _ZdlPvm
// Target address:  0x26428
// GOT/IAT slot:    0x26118
// Slot symbol:     off_26118
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

