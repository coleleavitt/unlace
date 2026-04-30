// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D40
// Name:            ._ZN2QT14QSurfaceFormat20setStencilBufferSizeEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D40 jmp     cs:_ZN2QT14QSurfaceFormat20setStencilBufferSizeEi_ptr
//
// Resolved target: _ZN2QT14QSurfaceFormat20setStencilBufferSizeEi
// Target address:  0x8D3920
// GOT/IAT slot:    0x89FB40
// Slot symbol:     _ZN2QT14QSurfaceFormat20setStencilBufferSizeEi_ptr
// Target type:     _QWORD(QT::QSurfaceFormat *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormat20setStencilBufferSizeEi(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormat20setStencilBufferSizeEi via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormat20setStencilBufferSizeEi(/* forwarded args */);
}

