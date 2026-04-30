// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1198F0
// Name:            ._ZN2QT5QFont12setStyleNameERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1198F0 jmp     cs:_ZN2QT5QFont12setStyleNameERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT5QFont12setStyleNameERKNS_7QStringE
// Target address:  0x8D87A8
// GOT/IAT slot:    0x8A3918
// Slot symbol:     _ZN2QT5QFont12setStyleNameERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT5QFont12setStyleNameERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont12setStyleNameERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT5QFont12setStyleNameERKNS_7QStringE(/* forwarded args */);
}

