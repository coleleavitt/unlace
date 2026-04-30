// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F10
// Name:            ._ZN2QT11QTranslatorD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F10 jmp     cs:_ZN2QT11QTranslatorD2Ev_ptr
//
// Resolved target: _ZN2QT11QTranslatorD2Ev
// Target address:  0x8D8128
// GOT/IAT slot:    0x8A3428
// Slot symbol:     _ZN2QT11QTranslatorD2Ev_ptr
// Target type:     void(QT::QTranslator *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTranslatorD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTranslatorD2Ev via GOT/IAT indirection
    return _ZN2QT11QTranslatorD2Ev(/* forwarded args */);
}

