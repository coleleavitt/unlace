// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A1A0
// Name:            ._ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A1A0 jmp     cs:_ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE
// Target address:  0x8D8D18
// GOT/IAT slot:    0x8A3D70
// Slot symbol:     _ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT10QCompleter19setCompletionPrefixERKNS_7QStringE(/* forwarded args */);
}

