// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118460
// Name:            ._Znam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118460 jmp     cs:_Znam_ptr
//
// Resolved target: _Znam
// Target address:  0x8D7AB0
// GOT/IAT slot:    0x8A2ED0
// Slot symbol:     _Znam_ptr
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znam(/* see target signature */)
{
    // Tail-call to _Znam via GOT/IAT indirection
    return _Znam(/* forwarded args */);
}

