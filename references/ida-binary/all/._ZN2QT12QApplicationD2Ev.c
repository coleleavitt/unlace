// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114890
// Name:            ._ZN2QT12QApplicationD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114890 jmp     cs:_ZN2QT12QApplicationD2Ev_ptr
//
// Resolved target: _ZN2QT12QApplicationD2Ev
// Target address:  0x8D54E8
// GOT/IAT slot:    0x8A10E8
// Slot symbol:     _ZN2QT12QApplicationD2Ev_ptr
// Target type:     void(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplicationD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplicationD2Ev via GOT/IAT indirection
    return _ZN2QT12QApplicationD2Ev(/* forwarded args */);
}

