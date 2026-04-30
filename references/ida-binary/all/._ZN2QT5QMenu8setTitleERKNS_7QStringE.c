// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111770
// Name:            ._ZN2QT5QMenu8setTitleERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111770 jmp     cs:_ZN2QT5QMenu8setTitleERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT5QMenu8setTitleERKNS_7QStringE
// Target address:  0x8D3560
// GOT/IAT slot:    0x89F858
// Slot symbol:     _ZN2QT5QMenu8setTitleERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT5QMenu8setTitleERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenu8setTitleERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT5QMenu8setTitleERKNS_7QStringE(/* forwarded args */);
}

