// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112890
// Name:            ._ZN2QT14QSurfaceFormat16setDefaultFormatERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112890 jmp     cs:_ZN2QT14QSurfaceFormat16setDefaultFormatERKS0__ptr
//
// Resolved target: _ZN2QT14QSurfaceFormat16setDefaultFormatERKS0_
// Target address:  0x8D4050
// GOT/IAT slot:    0x8A00E8
// Slot symbol:     _ZN2QT14QSurfaceFormat16setDefaultFormatERKS0__ptr
// Target type:     _QWORD(QT::QSurfaceFormat *__hidden this, const QT::QSurfaceFormat *)
// ============================================================

/* see target sig */ ._ZN2QT14QSurfaceFormat16setDefaultFormatERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT14QSurfaceFormat16setDefaultFormatERKS0_ via GOT/IAT indirection
    return _ZN2QT14QSurfaceFormat16setDefaultFormatERKS0_(/* forwarded args */);
}

