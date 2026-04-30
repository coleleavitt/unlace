// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A620
// Name:            ._ZN2QT11QTextCursor18removeSelectedTextEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A620 jmp     cs:_ZN2QT11QTextCursor18removeSelectedTextEv_ptr
//
// Resolved target: _ZN2QT11QTextCursor18removeSelectedTextEv
// Target address:  0x8D8FF0
// GOT/IAT slot:    0x8A3FB0
// Slot symbol:     _ZN2QT11QTextCursor18removeSelectedTextEv_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursor18removeSelectedTextEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursor18removeSelectedTextEv via GOT/IAT indirection
    return _ZN2QT11QTextCursor18removeSelectedTextEv(/* forwarded args */);
}

