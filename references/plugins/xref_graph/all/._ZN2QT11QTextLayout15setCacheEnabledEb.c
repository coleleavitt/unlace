// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17180
// Name:            ._ZN2QT11QTextLayout15setCacheEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17180 jmp     cs:off_4F8A8
//
// Resolved target: _ZN2QT11QTextLayout15setCacheEnabledEb
// Target address:  0x50D58
// GOT/IAT slot:    0x4F8A8
// Slot symbol:     off_4F8A8
// Target type:     _QWORD(QT::QTextLayout *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout15setCacheEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout15setCacheEnabledEb via GOT/IAT indirection
    return _ZN2QT11QTextLayout15setCacheEnabledEb(/* forwarded args */);
}

