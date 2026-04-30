// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B50
// Name:            ._ZN2QT5QChar7toUpperEDi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B50 jmp     cs:_ZN2QT5QChar7toUpperEDi_ptr
//
// Resolved target: _ZN2QT5QChar7toUpperEDi
// Target address:  0x8D4C68
// GOT/IAT slot:    0x8A0A48
// Slot symbol:     _ZN2QT5QChar7toUpperEDi_ptr
// Target type:     _QWORD(QT::QChar *__hidden this, char32_t)
// ============================================================

/* see target sig */ ._ZN2QT5QChar7toUpperEDi(/* see target signature */)
{
    // Tail-call to _ZN2QT5QChar7toUpperEDi via GOT/IAT indirection
    return _ZN2QT5QChar7toUpperEDi(/* forwarded args */);
}

