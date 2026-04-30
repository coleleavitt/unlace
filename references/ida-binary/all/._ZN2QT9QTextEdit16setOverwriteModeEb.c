// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C10
// Name:            ._ZN2QT9QTextEdit16setOverwriteModeEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C10 jmp     cs:_ZN2QT9QTextEdit16setOverwriteModeEb_ptr
//
// Resolved target: _ZN2QT9QTextEdit16setOverwriteModeEb
// Target address:  0x8D7570
// GOT/IAT slot:    0x8A2AA8
// Slot symbol:     _ZN2QT9QTextEdit16setOverwriteModeEb_ptr
// Target type:     _QWORD(QT::QTextEdit *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTextEdit16setOverwriteModeEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTextEdit16setOverwriteModeEb via GOT/IAT indirection
    return _ZN2QT9QTextEdit16setOverwriteModeEb(/* forwarded args */);
}

