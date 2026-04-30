// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B40
// Name:            ._ZNK2QT11QTextCursor11blockNumberEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B40 jmp     cs:_ZNK2QT11QTextCursor11blockNumberEv_ptr
//
// Resolved target: _ZNK2QT11QTextCursor11blockNumberEv
// Target address:  0x8D4C58
// GOT/IAT slot:    0x8A0A40
// Slot symbol:     _ZNK2QT11QTextCursor11blockNumberEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextCursor11blockNumberEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextCursor11blockNumberEv via GOT/IAT indirection
    return _ZNK2QT11QTextCursor11blockNumberEv(/* forwarded args */);
}

