// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1121E0
// Name:            ._ZN2QT14QSurfaceFormatD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1121E0 jmp     cs:_ZN2QT14QSurfaceFormatD1Ev_ptr
//
// Resolved target: _ZN2QT14QSurfaceFormatD1Ev
// Target address:  0x8D3BE8
// GOT/IAT slot:    0x89FD90
// Slot symbol:     _ZN2QT14QSurfaceFormatD1Ev_ptr
// Target type:     void(QT::QSurfaceFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormatD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormatD1Ev via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormatD1Ev(/* forwarded args */);
}

