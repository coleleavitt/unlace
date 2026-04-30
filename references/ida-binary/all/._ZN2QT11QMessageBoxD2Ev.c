// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115230
// Name:            ._ZN2QT11QMessageBoxD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115230 jmp     cs:_ZN2QT11QMessageBoxD2Ev_ptr
//
// Resolved target: _ZN2QT11QMessageBoxD2Ev
// Target address:  0x8D5B50
// GOT/IAT slot:    0x8A15B8
// Slot symbol:     _ZN2QT11QMessageBoxD2Ev_ptr
// Target type:     void(QT::QMessageBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBoxD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBoxD2Ev via GOT/IAT indirection
    return _ZN2QT11QMessageBoxD2Ev(/* forwarded args */);
}

