// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F10
// Name:            ._ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F10 jmp     cs:_ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE
// Target address:  0x8D4488
// GOT/IAT slot:    0x8A0428
// Slot symbol:     _ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QWidget17setAccessibleNameERKNS_7QStringE(/* forwarded args */);
}

