// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113680
// Name:            ._ZN2QT11QDataStreamrsERx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113680 jmp     cs:_ZN2QT11QDataStreamrsERx_ptr
//
// Resolved target: _ZN2QT11QDataStreamrsERx
// Target address:  0x8D4940
// GOT/IAT slot:    0x8A07E0
// Slot symbol:     _ZN2QT11QDataStreamrsERx_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamrsERx(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamrsERx via GOT/IAT indirection
    return _ZN2QT11QDataStreamrsERx(/* forwarded args */);
}

