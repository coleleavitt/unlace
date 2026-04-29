// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3430
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3430 jmp     cs:off_28200
//
// Resolved target: _ZdlPvm
// Target address:  0x286B0
// GOT/IAT slot:    0x28200
// Slot symbol:     off_28200
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

