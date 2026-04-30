// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117AA0
// Name:            ._ZN2QT8QPrinter7newPageEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117AA0 jmp     cs:_ZN2QT8QPrinter7newPageEv_ptr
//
// Resolved target: _ZN2QT8QPrinter7newPageEv
// Target address:  0x8D7498
// GOT/IAT slot:    0x8A29F0
// Slot symbol:     _ZN2QT8QPrinter7newPageEv_ptr
// Target type:     _QWORD(QT::QPrinter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPrinter7newPageEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPrinter7newPageEv via GOT/IAT indirection
    return _ZN2QT8QPrinter7newPageEv(/* forwarded args */);
}

