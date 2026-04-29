// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5310
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5310 jmp     cs:off_1A170
//
// Resolved target: _ZdlPvm
// Target address:  0x1A4F8
// GOT/IAT slot:    0x1A170
// Slot symbol:     off_1A170
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

