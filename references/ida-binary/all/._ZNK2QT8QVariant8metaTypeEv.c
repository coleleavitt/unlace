// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194F0
// Name:            ._ZNK2QT8QVariant8metaTypeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194F0 jmp     cs:_ZNK2QT8QVariant8metaTypeEv_ptr
//
// Resolved target: _ZNK2QT8QVariant8metaTypeEv
// Target address:  0x8D84F8
// GOT/IAT slot:    0x8A3718
// Slot symbol:     _ZNK2QT8QVariant8metaTypeEv_ptr
// Target type:     _QWORD(QT::QVariant *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QVariant8metaTypeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QVariant8metaTypeEv via GOT/IAT indirection
    return _ZNK2QT8QVariant8metaTypeEv(/* forwarded args */);
}

