// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113FC0
// Name:            ._ZN2QT10QStatusBar11showMessageERKNS_7QStringEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113FC0 jmp     cs:_ZN2QT10QStatusBar11showMessageERKNS_7QStringEi_ptr
//
// Resolved target: _ZN2QT10QStatusBar11showMessageERKNS_7QStringEi
// Target address:  0x8D4F50
// GOT/IAT slot:    0x8A0C80
// Slot symbol:     _ZN2QT10QStatusBar11showMessageERKNS_7QStringEi_ptr
// Target type:     _QWORD(QT::QStatusBar *__hidden this, const QT::QString *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QStatusBar11showMessageERKNS_7QStringEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QStatusBar11showMessageERKNS_7QStringEi via GOT/IAT indirection
    return _ZN2QT10QStatusBar11showMessageERKNS_7QStringEi(/* forwarded args */);
}

