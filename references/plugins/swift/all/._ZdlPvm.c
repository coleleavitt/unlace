// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44A0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44A0 jmp     cs:off_28238
//
// Resolved target: _ZdlPvm
// Target address:  0x29BD0
// GOT/IAT slot:    0x28238
// Slot symbol:     off_28238
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

