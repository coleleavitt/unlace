// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1124C0
// Name:            ._ZNK2QT9QTextLine6ascentEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1124C0 jmp     cs:_ZNK2QT9QTextLine6ascentEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine6ascentEv
// Target address:  0x8D3DD8
// GOT/IAT slot:    0x89FF00
// Slot symbol:     _ZNK2QT9QTextLine6ascentEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine6ascentEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine6ascentEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine6ascentEv(/* forwarded args */);
}

