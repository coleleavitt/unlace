// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD10
// Name:            ._ZN2QT7QWidget4moveERKNS_6QPointE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD10 jmp     cs:_ZN2QT7QWidget4moveERKNS_6QPointE_ptr
//
// Resolved target: _ZN2QT7QWidget4moveERKNS_6QPointE
// Target address:  0x8D9E58
// GOT/IAT slot:    0x8A4B28
// Slot symbol:     _ZN2QT7QWidget4moveERKNS_6QPointE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget4moveERKNS_6QPointE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget4moveERKNS_6QPointE via GOT/IAT indirection
    return _ZN2QT7QWidget4moveERKNS_6QPointE(/* forwarded args */);
}

