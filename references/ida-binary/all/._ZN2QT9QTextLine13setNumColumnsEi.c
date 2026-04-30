// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD90
// Name:            ._ZN2QT9QTextLine13setNumColumnsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD90 jmp     cs:_ZN2QT9QTextLine13setNumColumnsEi_ptr
//
// Resolved target: _ZN2QT9QTextLine13setNumColumnsEi
// Target address:  0x8D94B8
// GOT/IAT slot:    0x8A4368
// Slot symbol:     _ZN2QT9QTextLine13setNumColumnsEi_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QTextLine13setNumColumnsEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextLine13setNumColumnsEi via GOT/IAT indirection
    return _ZN2QT9QTextLine13setNumColumnsEi(/* forwarded args */);
}

