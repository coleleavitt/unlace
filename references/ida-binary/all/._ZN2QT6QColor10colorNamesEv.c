// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115910
// Name:            ._ZN2QT6QColor10colorNamesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115910 jmp     cs:_ZN2QT6QColor10colorNamesEv_ptr
//
// Resolved target: _ZN2QT6QColor10colorNamesEv
// Target address:  0x8D5F70
// GOT/IAT slot:    0x8A1928
// Slot symbol:     _ZN2QT6QColor10colorNamesEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QColor10colorNamesEv(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor10colorNamesEv via GOT/IAT indirection
    return _ZN2QT6QColor10colorNamesEv(/* forwarded args */);
}

