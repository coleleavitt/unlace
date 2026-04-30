// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1179B0
// Name:            ._ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1179B0 jmp     cs:_ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx_ptr
//
// Resolved target: _ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx
// Target address:  0x8D7400
// GOT/IAT slot:    0x8A2978
// Slot symbol:     _ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, const QT::QChar *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx via GOT/IAT indirection
    return _ZN2QT7QString18toLocal8Bit_helperEPKNS_5QCharEx(/* forwarded args */);
}

