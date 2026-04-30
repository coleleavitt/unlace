// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AEA0
// Name:            ._ZN2QT11QTextCursor10insertTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AEA0 jmp     cs:_ZN2QT11QTextCursor10insertTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT11QTextCursor10insertTextERKNS_7QStringE
// Target address:  0x8D9560
// GOT/IAT slot:    0x8A43F0
// Slot symbol:     _ZN2QT11QTextCursor10insertTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTextCursor *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT11QTextCursor10insertTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextCursor10insertTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT11QTextCursor10insertTextERKNS_7QStringE(/* forwarded args */);
}

