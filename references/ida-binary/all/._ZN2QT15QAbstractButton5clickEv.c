// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111C10
// Name:            ._ZN2QT15QAbstractButton5clickEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111C10 jmp     cs:_ZN2QT15QAbstractButton5clickEv_ptr
//
// Resolved target: _ZN2QT15QAbstractButton5clickEv
// Target address:  0x8D3848
// GOT/IAT slot:    0x89FAA8
// Slot symbol:     _ZN2QT15QAbstractButton5clickEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton5clickEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton5clickEv via GOT/IAT indirection
    return _ZN2QT15QAbstractButton5clickEv(/* forwarded args */);
}

