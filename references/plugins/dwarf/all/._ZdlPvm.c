// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6F0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6F0 jmp     cs:off_CA360
//
// Resolved target: _ZdlPvm
// Target address:  0xD0C98
// GOT/IAT slot:    0xCA360
// Slot symbol:     off_CA360
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

