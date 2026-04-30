// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113910
// Name:            ._ZN2QT14QSurfaceFormat10setSamplesEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113910 jmp     cs:_ZN2QT14QSurfaceFormat10setSamplesEi_ptr
//
// Resolved target: _ZN2QT14QSurfaceFormat10setSamplesEi
// Target address:  0x8D4AF8
// GOT/IAT slot:    0x8A0928
// Slot symbol:     _ZN2QT14QSurfaceFormat10setSamplesEi_ptr
// Target type:     _QWORD(QT::QSurfaceFormat *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormat10setSamplesEi(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormat10setSamplesEi via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormat10setSamplesEi(/* forwarded args */);
}

