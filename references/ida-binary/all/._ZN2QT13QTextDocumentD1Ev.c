// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D20
// Name:            ._ZN2QT13QTextDocumentD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D20 jmp     cs:_ZN2QT13QTextDocumentD1Ev_ptr
//
// Resolved target: _ZN2QT13QTextDocumentD1Ev
// Target address:  0x8D6C18
// GOT/IAT slot:    0x8A2330
// Slot symbol:     _ZN2QT13QTextDocumentD1Ev_ptr
// Target type:     void(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QTextDocumentD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QTextDocumentD1Ev via GOT/IAT indirection
    return _ZN2QT13QTextDocumentD1Ev(/* forwarded args */);
}

