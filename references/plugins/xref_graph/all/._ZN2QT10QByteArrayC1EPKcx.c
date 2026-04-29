// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16890
// Name:            ._ZN2QT10QByteArrayC1EPKcx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16890 jmp     cs:off_4F430
//
// Resolved target: _ZN2QT10QByteArrayC1EPKcx
// Target address:  0x50548
// GOT/IAT slot:    0x4F430
// Slot symbol:     off_4F430
// Target type:     _QWORD(QT::QByteArray *__hidden this, const char *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArrayC1EPKcx(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArrayC1EPKcx via GOT/IAT indirection
    return _ZN2QT10QByteArrayC1EPKcx(/* forwarded args */);
}

