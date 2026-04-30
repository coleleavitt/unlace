// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115BF0
// Name:            ._ZNK2QT9QMimeData4dataERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115BF0 jmp     cs:_ZNK2QT9QMimeData4dataERKNS_7QStringE_ptr
//
// Resolved target: _ZNK2QT9QMimeData4dataERKNS_7QStringE
// Target address:  0x8D6140
// GOT/IAT slot:    0x8A1A98
// Slot symbol:     _ZNK2QT9QMimeData4dataERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QMimeData *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZNK2QT9QMimeData4dataERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QMimeData4dataERKNS_7QStringE via GOT/IAT indirection
    return _ZNK2QT9QMimeData4dataERKNS_7QStringE(/* forwarded args */);
}

