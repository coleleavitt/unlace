// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175F0
// Name:            ._ZNK2QT11QDockWidget8featuresEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175F0 jmp     cs:_ZNK2QT11QDockWidget8featuresEv_ptr
//
// Resolved target: _ZNK2QT11QDockWidget8featuresEv
// Target address:  0x8D71B8
// GOT/IAT slot:    0x8A2798
// Slot symbol:     _ZNK2QT11QDockWidget8featuresEv_ptr
// Target type:     _QWORD(QT::QDockWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QDockWidget8featuresEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QDockWidget8featuresEv via GOT/IAT indirection
    return _ZNK2QT11QDockWidget8featuresEv(/* forwarded args */);
}

