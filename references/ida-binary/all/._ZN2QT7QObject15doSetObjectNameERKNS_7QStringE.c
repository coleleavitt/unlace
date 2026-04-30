// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111800
// Name:            ._ZN2QT7QObject15doSetObjectNameERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111800 jmp     cs:_ZN2QT7QObject15doSetObjectNameERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QObject15doSetObjectNameERKNS_7QStringE
// Target address:  0x8D35D0
// GOT/IAT slot:    0x89F8A0
// Slot symbol:     _ZN2QT7QObject15doSetObjectNameERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject15doSetObjectNameERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject15doSetObjectNameERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QObject15doSetObjectNameERKNS_7QStringE(/* forwarded args */);
}

