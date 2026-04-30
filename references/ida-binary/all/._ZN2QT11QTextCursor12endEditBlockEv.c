// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1124A0
// Name:            ._ZN2QT11QTextCursor12endEditBlockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1124A0 jmp     cs:_ZN2QT11QTextCursor12endEditBlockEv_ptr
//
// Resolved target: _ZN2QT11QTextCursor12endEditBlockEv
// Target address:  0x8D3DC8
// GOT/IAT slot:    0x89FEF0
// Slot symbol:     _ZN2QT11QTextCursor12endEditBlockEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursor12endEditBlockEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursor12endEditBlockEv via GOT/IAT indirection
    return _ZN2QT11QTextCursor12endEditBlockEv(/* forwarded args */);
}

