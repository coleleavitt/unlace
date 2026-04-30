// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116380
// Name:            ._ZNK2QT11QTextFormat13brushPropertyEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116380 jmp     cs:_ZNK2QT11QTextFormat13brushPropertyEi_ptr
//
// Resolved target: _ZNK2QT11QTextFormat13brushPropertyEi
// Target address:  0x8D65F8
// GOT/IAT slot:    0x8A1E60
// Slot symbol:     _ZNK2QT11QTextFormat13brushPropertyEi_ptr
// Target type:     _QWORD(QT::QTextFormat *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextFormat13brushPropertyEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextFormat13brushPropertyEi via GOT/IAT indirection
    return _ZNK2QT11QTextFormat13brushPropertyEi(/* forwarded args */);
}

