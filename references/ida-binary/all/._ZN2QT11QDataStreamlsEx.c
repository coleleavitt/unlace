// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D30
// Name:            ._ZN2QT11QDataStreamlsEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D30 jmp     cs:_ZN2QT11QDataStreamlsEx_ptr
//
// Resolved target: _ZN2QT11QDataStreamlsEx
// Target address:  0x8D7638
// GOT/IAT slot:    0x8A2B38
// Slot symbol:     _ZN2QT11QDataStreamlsEx_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamlsEx(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamlsEx via GOT/IAT indirection
    return _ZN2QT11QDataStreamlsEx(/* forwarded args */);
}

