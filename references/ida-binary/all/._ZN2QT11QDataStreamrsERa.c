// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113240
// Name:            ._ZN2QT11QDataStreamrsERa
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113240 jmp     cs:_ZN2QT11QDataStreamrsERa_ptr
//
// Resolved target: _ZN2QT11QDataStreamrsERa
// Target address:  0x8D4698
// GOT/IAT slot:    0x8A05C0
// Slot symbol:     _ZN2QT11QDataStreamrsERa_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamrsERa(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamrsERa via GOT/IAT indirection
    return _ZN2QT11QDataStreamrsERa(/* forwarded args */);
}

