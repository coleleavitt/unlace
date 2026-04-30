// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1179C0
// Name:            ._ZNK2QT8QVariant11toByteArrayEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1179C0 jmp     cs:_ZNK2QT8QVariant11toByteArrayEv_ptr
//
// Resolved target: _ZNK2QT8QVariant11toByteArrayEv
// Target address:  0x8D7408
// GOT/IAT slot:    0x8A2980
// Slot symbol:     _ZNK2QT8QVariant11toByteArrayEv_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant11toByteArrayEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant11toByteArrayEv via GOT/IAT indirection
    return _ZNK2QT8QVariant11toByteArrayEv(/* forwarded args */);
}

