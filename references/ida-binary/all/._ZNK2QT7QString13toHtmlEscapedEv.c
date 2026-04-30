// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A980
// Name:            ._ZNK2QT7QString13toHtmlEscapedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A980 jmp     cs:_ZNK2QT7QString13toHtmlEscapedEv_ptr
//
// Resolved target: _ZNK2QT7QString13toHtmlEscapedEv
// Target address:  0x8D9248
// GOT/IAT slot:    0x8A4160
// Slot symbol:     _ZNK2QT7QString13toHtmlEscapedEv_ptr
// Target type:     _QWORD(QT::QString *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QString13toHtmlEscapedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QString13toHtmlEscapedEv via GOT/IAT indirection
    return _ZNK2QT7QString13toHtmlEscapedEv(/* forwarded args */);
}

