// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117830
// Name:            ._ZN2QT5QMenu12addSeparatorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117830 jmp     cs:_ZN2QT5QMenu12addSeparatorEv_ptr
//
// Resolved target: _ZN2QT5QMenu12addSeparatorEv
// Target address:  0x8D7310
// GOT/IAT slot:    0x8A28B8
// Slot symbol:     _ZN2QT5QMenu12addSeparatorEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QMenu12addSeparatorEv(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenu12addSeparatorEv via GOT/IAT indirection
    return _ZN2QT5QMenu12addSeparatorEv(/* forwarded args */);
}

