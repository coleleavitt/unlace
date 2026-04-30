// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0C0
// Name:            ._ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0C0 jmp     cs:_ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE_ptr
//
// Resolved target: _ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE
// Target address:  0x8D9698
// GOT/IAT slot:    0x8A4500
// Slot symbol:     _ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE_ptr
// Target type:     _QWORD(QT::QSyntaxHighlighter *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT18QSyntaxHighlighterC2EPNS_7QObjectE(/* forwarded args */);
}

