// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C00
// Name:            ._ZN2QT11QScrollAreaD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C00 jmp     cs:off_4F5E8
//
// Resolved target: _ZN2QT11QScrollAreaD2Ev
// Target address:  0x50860
// GOT/IAT slot:    0x4F5E8
// Slot symbol:     off_4F5E8
// Target type:     void(QT::QScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollAreaD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollAreaD2Ev via GOT/IAT indirection
    return _ZN2QT11QScrollAreaD2Ev(/* forwarded args */);
}

