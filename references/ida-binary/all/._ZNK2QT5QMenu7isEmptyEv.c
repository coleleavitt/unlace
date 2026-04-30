// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111780
// Name:            ._ZNK2QT5QMenu7isEmptyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111780 jmp     cs:_ZNK2QT5QMenu7isEmptyEv_ptr
//
// Resolved target: _ZNK2QT5QMenu7isEmptyEv
// Target address:  0x8D3568
// GOT/IAT slot:    0x89F860
// Slot symbol:     _ZNK2QT5QMenu7isEmptyEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QMenu7isEmptyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QMenu7isEmptyEv via GOT/IAT indirection
    return _ZNK2QT5QMenu7isEmptyEv(/* forwarded args */);
}

