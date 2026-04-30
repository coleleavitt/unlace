// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B2B0
// Name:            ._ZN2QT11QTextCursor10deleteCharEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B2B0 jmp     cs:_ZN2QT11QTextCursor10deleteCharEv_ptr
//
// Resolved target: _ZN2QT11QTextCursor10deleteCharEv
// Target address:  0x8D97C8
// GOT/IAT slot:    0x8A45F8
// Slot symbol:     _ZN2QT11QTextCursor10deleteCharEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursor10deleteCharEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursor10deleteCharEv via GOT/IAT indirection
    return _ZN2QT11QTextCursor10deleteCharEv(/* forwarded args */);
}

