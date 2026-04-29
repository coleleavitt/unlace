// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6440
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6440 jmp     cs:off_8D208
//
// Resolved target: _ZdlPvm
// Target address:  0x8D7A0
// GOT/IAT slot:    0x8D208
// Slot symbol:     off_8D208
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

