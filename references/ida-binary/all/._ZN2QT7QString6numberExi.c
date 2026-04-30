// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119C20
// Name:            ._ZN2QT7QString6numberExi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119C20 jmp     cs:_ZN2QT7QString6numberExi_ptr
//
// Resolved target: _ZN2QT7QString6numberExi
// Target address:  0x8D89A0
// GOT/IAT slot:    0x8A3AB0
// Slot symbol:     _ZN2QT7QString6numberExi_ptr
// Target type:     _QWORD(QT::QString *__hidden this, __int64, int)
// ============================================================

/* see target sig */ ._ZN2QT7QString6numberExi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6numberExi via GOT/IAT indirection
    return _ZN2QT7QString6numberExi(/* forwarded args */);
}

