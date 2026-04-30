// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150E0
// Name:            ._ZNK2QT7QWidget12saveGeometryEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150E0 jmp     cs:_ZNK2QT7QWidget12saveGeometryEv_ptr
//
// Resolved target: _ZNK2QT7QWidget12saveGeometryEv
// Target address:  0x8D5A50
// GOT/IAT slot:    0x8A1510
// Slot symbol:     _ZNK2QT7QWidget12saveGeometryEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget12saveGeometryEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget12saveGeometryEv via GOT/IAT indirection
    return _ZNK2QT7QWidget12saveGeometryEv(/* forwarded args */);
}

