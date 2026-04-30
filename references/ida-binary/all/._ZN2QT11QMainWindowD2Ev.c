// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1149E0
// Name:            ._ZN2QT11QMainWindowD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1149E0 jmp     cs:_ZN2QT11QMainWindowD2Ev_ptr
//
// Resolved target: _ZN2QT11QMainWindowD2Ev
// Target address:  0x8D55F0
// GOT/IAT slot:    0x8A1190
// Slot symbol:     _ZN2QT11QMainWindowD2Ev_ptr
// Target type:     void(QT::QMainWindow *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindowD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindowD2Ev via GOT/IAT indirection
    return _ZN2QT11QMainWindowD2Ev(/* forwarded args */);
}

