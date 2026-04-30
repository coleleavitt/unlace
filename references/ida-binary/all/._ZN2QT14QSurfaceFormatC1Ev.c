// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143B0
// Name:            ._ZN2QT14QSurfaceFormatC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143B0 jmp     cs:_ZN2QT14QSurfaceFormatC1Ev_ptr
//
// Resolved target: _ZN2QT14QSurfaceFormatC1Ev
// Target address:  0x8D51A8
// GOT/IAT slot:    0x8A0E78
// Slot symbol:     _ZN2QT14QSurfaceFormatC1Ev_ptr
// Target type:     _QWORD(QT::QSurfaceFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormatC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormatC1Ev via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormatC1Ev(/* forwarded args */);
}

