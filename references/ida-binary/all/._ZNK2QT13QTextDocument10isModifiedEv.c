// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118D10
// Name:            ._ZNK2QT13QTextDocument10isModifiedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118D10 jmp     cs:_ZNK2QT13QTextDocument10isModifiedEv_ptr
//
// Resolved target: _ZNK2QT13QTextDocument10isModifiedEv
// Target address:  0x8D7FE0
// GOT/IAT slot:    0x8A3328
// Slot symbol:     _ZNK2QT13QTextDocument10isModifiedEv_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QTextDocument10isModifiedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QTextDocument10isModifiedEv via GOT/IAT indirection
    return _ZNK2QT13QTextDocument10isModifiedEv(/* forwarded args */);
}

