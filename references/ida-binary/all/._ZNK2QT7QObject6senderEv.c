// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162E0
// Name:            ._ZNK2QT7QObject6senderEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162E0 jmp     cs:_ZNK2QT7QObject6senderEv_ptr
//
// Resolved target: _ZNK2QT7QObject6senderEv
// Target address:  0x8D6588
// GOT/IAT slot:    0x8A1E10
// Slot symbol:     _ZNK2QT7QObject6senderEv_ptr
// Target type:     _QWORD(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QObject6senderEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QObject6senderEv via GOT/IAT indirection
    return _ZNK2QT7QObject6senderEv(/* forwarded args */);
}

