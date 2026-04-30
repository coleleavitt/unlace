// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B1D0
// Name:            ._ZN2QT5QChar7isPrintEDi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B1D0 jmp     cs:_ZN2QT5QChar7isPrintEDi_ptr
//
// Resolved target: _ZN2QT5QChar7isPrintEDi
// Target address:  0x8D9730
// GOT/IAT slot:    0x8A4588
// Slot symbol:     _ZN2QT5QChar7isPrintEDi_ptr
// Target type:     _QWORD(QT::QChar *__hidden this, char32_t)
// ============================================================

/* see target sig */ ._ZN2QT5QChar7isPrintEDi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QChar7isPrintEDi via GOT/IAT indirection
    return _ZN2QT5QChar7isPrintEDi(/* forwarded args */);
}

