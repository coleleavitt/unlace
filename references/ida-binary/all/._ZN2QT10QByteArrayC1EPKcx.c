// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114BE0
// Name:            ._ZN2QT10QByteArrayC1EPKcx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114BE0 jmp     cs:_ZN2QT10QByteArrayC1EPKcx_ptr
//
// Resolved target: _ZN2QT10QByteArrayC1EPKcx
// Target address:  0x8D5760
// GOT/IAT slot:    0x8A1290
// Slot symbol:     _ZN2QT10QByteArrayC1EPKcx_ptr
// Target type:     _QWORD(QT::QByteArray *__hidden this, const char *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArrayC1EPKcx(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArrayC1EPKcx via GOT/IAT indirection
    return _ZN2QT10QByteArrayC1EPKcx(/* forwarded args */);
}

