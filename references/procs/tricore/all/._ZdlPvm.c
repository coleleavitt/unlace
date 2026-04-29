// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6490
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6490 jmp     cs:off_24230
//
// Resolved target: _ZdlPvm
// Target address:  0x26000
// GOT/IAT slot:    0x24230
// Slot symbol:     off_24230
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

