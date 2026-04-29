// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32E0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32E0 jmp     cs:off_13158
//
// Resolved target: _ZdlPvm
// Target address:  0x13848
// GOT/IAT slot:    0x13158
// Slot symbol:     off_13158
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

