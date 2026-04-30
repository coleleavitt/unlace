// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B10
// Name:            ._ZNK2QT8QVariant12toStringListEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B10 jmp     cs:_ZNK2QT8QVariant12toStringListEv_ptr
//
// Resolved target: _ZNK2QT8QVariant12toStringListEv
// Target address:  0x8D37A8
// GOT/IAT slot:    0x89FA28
// Slot symbol:     _ZNK2QT8QVariant12toStringListEv_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant12toStringListEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant12toStringListEv via GOT/IAT indirection
    return _ZNK2QT8QVariant12toStringListEv(/* forwarded args */);
}

