// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120D0
// Name:            ._ZNK2QT5QFont10pointSizeFEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120D0 jmp     cs:_ZNK2QT5QFont10pointSizeFEv_ptr
//
// Resolved target: _ZNK2QT5QFont10pointSizeFEv
// Target address:  0x8D3B50
// GOT/IAT slot:    0x89FD08
// Slot symbol:     _ZNK2QT5QFont10pointSizeFEv_ptr
// Target type:     _QWORD(QT::QFont *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QFont10pointSizeFEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFont10pointSizeFEv via GOT/IAT indirection
    return _ZNK2QT5QFont10pointSizeFEv(/* forwarded args */);
}

