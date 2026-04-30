// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140E0
// Name:            ._ZN2QT14QStackedWidget15setCurrentIndexEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140E0 jmp     cs:_ZN2QT14QStackedWidget15setCurrentIndexEi_ptr
//
// Resolved target: _ZN2QT14QStackedWidget15setCurrentIndexEi
// Target address:  0x8D4FF0
// GOT/IAT slot:    0x8A0D10
// Slot symbol:     _ZN2QT14QStackedWidget15setCurrentIndexEi_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT14QStackedWidget15setCurrentIndexEi(/* see target signature */)
{
    // Tail-call to _ZN2QT14QStackedWidget15setCurrentIndexEi via GOT/IAT indirection
    return _ZN2QT14QStackedWidget15setCurrentIndexEi(/* forwarded args */);
}

