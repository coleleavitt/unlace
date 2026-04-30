// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116910
// Name:            ._ZNK2QT7QObject20dynamicPropertyNamesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116910 jmp     cs:_ZNK2QT7QObject20dynamicPropertyNamesEv_ptr
//
// Resolved target: _ZNK2QT7QObject20dynamicPropertyNamesEv
// Target address:  0x8D69A0
// GOT/IAT slot:    0x8A2128
// Slot symbol:     _ZNK2QT7QObject20dynamicPropertyNamesEv_ptr
// Target type:     _QWORD(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QObject20dynamicPropertyNamesEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QObject20dynamicPropertyNamesEv via GOT/IAT indirection
    return _ZNK2QT7QObject20dynamicPropertyNamesEv(/* forwarded args */);
}

