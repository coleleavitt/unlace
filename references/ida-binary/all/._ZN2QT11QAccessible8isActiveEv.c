// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119490
// Name:            ._ZN2QT11QAccessible8isActiveEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119490 jmp     cs:_ZN2QT11QAccessible8isActiveEv_ptr
//
// Resolved target: _ZN2QT11QAccessible8isActiveEv
// Target address:  0x8D84B8
// GOT/IAT slot:    0x8A36E8
// Slot symbol:     _ZN2QT11QAccessible8isActiveEv_ptr
// Target type:     _QWORD(QT::QAccessible *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QAccessible8isActiveEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QAccessible8isActiveEv via GOT/IAT indirection
    return _ZN2QT11QAccessible8isActiveEv(/* forwarded args */);
}

