// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B560
// Name:            ._ZN2QT11QDataStreamrsERs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B560 jmp     cs:_ZN2QT11QDataStreamrsERs_ptr
//
// Resolved target: _ZN2QT11QDataStreamrsERs
// Target address:  0x8D99A8
// GOT/IAT slot:    0x8A4750
// Slot symbol:     _ZN2QT11QDataStreamrsERs_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamrsERs(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamrsERs via GOT/IAT indirection
    return _ZN2QT11QDataStreamrsERs(/* forwarded args */);
}

