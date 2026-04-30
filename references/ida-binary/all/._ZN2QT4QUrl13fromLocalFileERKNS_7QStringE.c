// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113DF0
// Name:            ._ZN2QT4QUrl13fromLocalFileERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113DF0 jmp     cs:_ZN2QT4QUrl13fromLocalFileERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT4QUrl13fromLocalFileERKNS_7QStringE
// Target address:  0x8D4E20
// GOT/IAT slot:    0x8A0B98
// Slot symbol:     _ZN2QT4QUrl13fromLocalFileERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QUrl *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT4QUrl13fromLocalFileERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT4QUrl13fromLocalFileERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT4QUrl13fromLocalFileERKNS_7QStringE(/* forwarded args */);
}

