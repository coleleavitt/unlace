// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B300
// Name:            ._ZNK2QT11QTextCursor9selectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B300 jmp     cs:_ZNK2QT11QTextCursor9selectionEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor9selectionEv
// Target address:  0x8D97F8
// GOT/IAT slot:    0x8A4620
// Slot symbol:     _ZNK2QT11QTextCursor9selectionEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor9selectionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor9selectionEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor9selectionEv(/* forwarded args */);
}

