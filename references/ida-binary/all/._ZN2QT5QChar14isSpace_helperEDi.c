// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115A70
// Name:            ._ZN2QT5QChar14isSpace_helperEDi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115A70 jmp     cs:_ZN2QT5QChar14isSpace_helperEDi_ptr
//
// Resolved target: _ZN2QT5QChar14isSpace_helperEDi
// Target address:  0x8D6048
// GOT/IAT slot:    0x8A19D8
// Slot symbol:     _ZN2QT5QChar14isSpace_helperEDi_ptr
// Target type:     _QWORD(QT::QChar *__hidden this, char32_t)
// ============================================================

/* see target sig */ ._ZN2QT5QChar14isSpace_helperEDi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QChar14isSpace_helperEDi via GOT/IAT indirection
    return _ZN2QT5QChar14isSpace_helperEDi(/* forwarded args */);
}

