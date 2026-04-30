// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BB0
// Name:            ._ZN2QT11QListWidget10insertItemEiRKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BB0 jmp     cs:_ZN2QT11QListWidget10insertItemEiRKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT11QListWidget10insertItemEiRKNS_7QStringE
// Target address:  0x8D3818
// GOT/IAT slot:    0x89FA78
// Slot symbol:     _ZN2QT11QListWidget10insertItemEiRKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, int, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget10insertItemEiRKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget10insertItemEiRKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT11QListWidget10insertItemEiRKNS_7QStringE(/* forwarded args */);
}

