// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117670
// Name:            ._ZNK2QT11QTextCursor5blockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117670 jmp     cs:_ZNK2QT11QTextCursor5blockEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor5blockEv
// Target address:  0x8D7200
// GOT/IAT slot:    0x8A27D8
// Slot symbol:     _ZNK2QT11QTextCursor5blockEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor5blockEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor5blockEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor5blockEv(/* forwarded args */);
}

