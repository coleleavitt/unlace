// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7440
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7440 jmp     cs:off_19208
//
// Resolved target: _ZdlPvm
// Target address:  0x19738
// GOT/IAT slot:    0x19208
// Slot symbol:     off_19208
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

