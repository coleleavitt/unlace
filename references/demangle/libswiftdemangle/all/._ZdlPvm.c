// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6B0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6B0 jmp     cs:off_48358
//
// Resolved target: _ZdlPvm
// Target address:  0x32800
// GOT/IAT slot:    0x48358
// Slot symbol:     off_48358
// Target type:     void __fastcall(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

