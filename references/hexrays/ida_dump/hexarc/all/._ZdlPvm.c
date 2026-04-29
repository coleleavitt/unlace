// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1A0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1A0 jmp     cs:off_4B98B8
//
// Resolved target: _ZdlPvm
// Target address:  0x4BC2B8
// GOT/IAT slot:    0x4B98B8
// Slot symbol:     off_4B98B8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

