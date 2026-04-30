// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118CB0
// Name:            ._ZN2QT7QObject12blockSignalsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118CB0 jmp     cs:_ZN2QT7QObject12blockSignalsEb_ptr
//
// Resolved target: _ZN2QT7QObject12blockSignalsEb
// Target address:  0x8D7FB0
// GOT/IAT slot:    0x8A32F8
// Slot symbol:     _ZN2QT7QObject12blockSignalsEb_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QObject12blockSignalsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject12blockSignalsEb via GOT/IAT indirection
    return _ZN2QT7QObject12blockSignalsEb(/* forwarded args */);
}

