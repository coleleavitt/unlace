// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112270
// Name:            ._ZN2QT15QAbstractButton7setTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112270 jmp     cs:_ZN2QT15QAbstractButton7setTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT15QAbstractButton7setTextERKNS_7QStringE
// Target address:  0x8D3C48
// GOT/IAT slot:    0x89FDD8
// Slot symbol:     _ZN2QT15QAbstractButton7setTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton7setTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton7setTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT15QAbstractButton7setTextERKNS_7QStringE(/* forwarded args */);
}

