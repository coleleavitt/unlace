// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111640
// Name:            ._ZNK2QT7QScreen17availableGeometryEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111640 jmp     cs:_ZNK2QT7QScreen17availableGeometryEv_ptr
//
// Resolved target: _ZNK2QT7QScreen17availableGeometryEv
// Target address:  0x8D3498
// GOT/IAT slot:    0x89F7C0
// Slot symbol:     _ZNK2QT7QScreen17availableGeometryEv_ptr
// Target type:     _QWORD(QT::QScreen *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QScreen17availableGeometryEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QScreen17availableGeometryEv via GOT/IAT indirection
    return _ZNK2QT7QScreen17availableGeometryEv(/* forwarded args */);
}

