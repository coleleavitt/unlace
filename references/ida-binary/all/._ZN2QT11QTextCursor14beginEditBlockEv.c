// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115290
// Name:            ._ZN2QT11QTextCursor14beginEditBlockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115290 jmp     cs:_ZN2QT11QTextCursor14beginEditBlockEv_ptr
//
// Resolved target: _ZN2QT11QTextCursor14beginEditBlockEv
// Target address:  0x8D5B90
// GOT/IAT slot:    0x8A15E8
// Slot symbol:     _ZN2QT11QTextCursor14beginEditBlockEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursor14beginEditBlockEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursor14beginEditBlockEv via GOT/IAT indirection
    return _ZN2QT11QTextCursor14beginEditBlockEv(/* forwarded args */);
}

