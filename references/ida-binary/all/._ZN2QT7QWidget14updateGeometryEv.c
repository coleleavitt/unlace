// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D50
// Name:            ._ZN2QT7QWidget14updateGeometryEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D50 jmp     cs:_ZN2QT7QWidget14updateGeometryEv_ptr
//
// Resolved target: _ZN2QT7QWidget14updateGeometryEv
// Target address:  0x8D7658
// GOT/IAT slot:    0x8A2B48
// Slot symbol:     _ZN2QT7QWidget14updateGeometryEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget14updateGeometryEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget14updateGeometryEv via GOT/IAT indirection
    return _ZN2QT7QWidget14updateGeometryEv(/* forwarded args */);
}

