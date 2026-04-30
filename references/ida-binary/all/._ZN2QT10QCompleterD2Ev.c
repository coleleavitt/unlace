// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5E0
// Name:            ._ZN2QT10QCompleterD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5E0 jmp     cs:_ZN2QT10QCompleterD2Ev_ptr
//
// Resolved target: _ZN2QT10QCompleterD2Ev
// Target address:  0x8D8FC8
// GOT/IAT slot:    0x8A3F90
// Slot symbol:     _ZN2QT10QCompleterD2Ev_ptr
// Target type:     void(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QCompleterD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT10QCompleterD2Ev via GOT/IAT indirection
    return _ZN2QT10QCompleterD2Ev(/* forwarded args */);
}

