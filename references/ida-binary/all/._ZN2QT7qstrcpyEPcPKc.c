// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E50
// Name:            ._ZN2QT7qstrcpyEPcPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E50 jmp     cs:_ZN2QT7qstrcpyEPcPKc_ptr
//
// Resolved target: _ZN2QT7qstrcpyEPcPKc
// Target address:  0x8D6CC0
// GOT/IAT slot:    0x8A23C8
// Slot symbol:     _ZN2QT7qstrcpyEPcPKc_ptr
// Target type:     _QWORD(char *, const char *)
// ============================================================

/* see target sig */ ._ZN2QT7qstrcpyEPcPKc(/* see target signature */)
{
    // Tail-call to _ZN2QT7qstrcpyEPcPKc via GOT/IAT indirection
    return _ZN2QT7qstrcpyEPcPKc(/* forwarded args */);
}

