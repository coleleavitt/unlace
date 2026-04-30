// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116D0
// Name:            ._ZN2QT12QApplication15topLevelWidgetsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116D0 jmp     cs:_ZN2QT12QApplication15topLevelWidgetsEv_ptr
//
// Resolved target: _ZN2QT12QApplication15topLevelWidgetsEv
// Target address:  0x8D34F0
// GOT/IAT slot:    0x89F808
// Slot symbol:     _ZN2QT12QApplication15topLevelWidgetsEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication15topLevelWidgetsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication15topLevelWidgetsEv via GOT/IAT indirection
    return _ZN2QT12QApplication15topLevelWidgetsEv(/* forwarded args */);
}

