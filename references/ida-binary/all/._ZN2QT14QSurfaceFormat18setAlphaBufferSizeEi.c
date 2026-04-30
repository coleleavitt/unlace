// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C40
// Name:            ._ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C40 jmp     cs:_ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi_ptr
//
// Resolved target: _ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi
// Target address:  0x8D7588
// GOT/IAT slot:    0x8A2AC0
// Slot symbol:     _ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi_ptr
// Target type:     _QWORD(QT::QSurfaceFormat *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormat18setAlphaBufferSizeEi(/* forwarded args */);
}

