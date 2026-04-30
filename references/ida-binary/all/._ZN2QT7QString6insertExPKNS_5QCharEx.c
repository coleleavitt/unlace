// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B20
// Name:            ._ZN2QT7QString6insertExPKNS_5QCharEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B20 jmp     cs:_ZN2QT7QString6insertExPKNS_5QCharEx_ptr
//
// Resolved target: _ZN2QT7QString6insertExPKNS_5QCharEx
// Target address:  0x8D56D0
// GOT/IAT slot:    0x8A1230
// Slot symbol:     _ZN2QT7QString6insertExPKNS_5QCharEx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, __int64, const QT::QChar *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QString6insertExPKNS_5QCharEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6insertExPKNS_5QCharEx via GOT/IAT indirection
    return _ZN2QT7QString6insertExPKNS_5QCharEx(/* forwarded args */);
}

