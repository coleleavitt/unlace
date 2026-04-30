// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA50
// Name:            ._ZN2QT13QTextDocument17setDocumentMarginEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA50 jmp     cs:_ZN2QT13QTextDocument17setDocumentMarginEd_ptr
//
// Resolved target: _ZN2QT13QTextDocument17setDocumentMarginEd
// Target address:  0x8D92C8
// GOT/IAT slot:    0x8A41C8
// Slot symbol:     _ZN2QT13QTextDocument17setDocumentMarginEd_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT13QTextDocument17setDocumentMarginEd(/* see target signature */)
{
    // Tail-call to _ZN2QT13QTextDocument17setDocumentMarginEd via GOT/IAT indirection
    return _ZN2QT13QTextDocument17setDocumentMarginEd(/* forwarded args */);
}

