// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111410
// Name:            ._ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111410 jmp     cs:_ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE_ptr
//
// Resolved target: _ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE
// Target address:  0x8D3318
// GOT/IAT slot:    0x89F6A8
// Slot symbol:     _ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE_ptr
// Target type:     _QWORD(QT::QObject *__hidden this, const Connection *)
// ============================================================

/* see target sig */ ._ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE via GOT/IAT indirection
    return _ZN2QT7QObject10disconnectERKNS_11QMetaObject10ConnectionE(/* forwarded args */);
}

