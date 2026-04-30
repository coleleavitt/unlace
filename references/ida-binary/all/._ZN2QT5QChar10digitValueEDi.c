// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BF0
// Name:            ._ZN2QT5QChar10digitValueEDi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BF0 jmp     cs:_ZN2QT5QChar10digitValueEDi_ptr
//
// Resolved target: _ZN2QT5QChar10digitValueEDi
// Target address:  0x8D3838
// GOT/IAT slot:    0x89FA98
// Slot symbol:     _ZN2QT5QChar10digitValueEDi_ptr
// Target type:     _QWORD(QT::QChar *__hidden this, char32_t)
// ============================================================

/* see target sig */ ._ZN2QT5QChar10digitValueEDi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QChar10digitValueEDi via GOT/IAT indirection
    return _ZN2QT5QChar10digitValueEDi(/* forwarded args */);
}

