// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116F80
// Name:            ._ZN2QT11QTextStream7readAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116F80 jmp     cs:_ZN2QT11QTextStream7readAllEv_ptr
//
// Resolved target: _ZN2QT11QTextStream7readAllEv
// Target address:  0x8D6D80
// GOT/IAT slot:    0x8A2460
// Slot symbol:     _ZN2QT11QTextStream7readAllEv_ptr
// Target type:     _QWORD(QT::QTextStream *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextStream7readAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStream7readAllEv via GOT/IAT indirection
    return _ZN2QT11QTextStream7readAllEv(/* forwarded args */);
}

