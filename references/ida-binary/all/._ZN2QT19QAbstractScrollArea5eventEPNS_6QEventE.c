// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162F0
// Name:            ._ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162F0 jmp     cs:_ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE
// Target address:  0x8D6590
// GOT/IAT slot:    0x8A1E18
// Slot symbol:     _ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, QT::QEvent *)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea5eventEPNS_6QEventE(/* forwarded args */);
}

