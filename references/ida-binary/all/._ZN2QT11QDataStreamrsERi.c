// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1145A0
// Name:            ._ZN2QT11QDataStreamrsERi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1145A0 jmp     cs:_ZN2QT11QDataStreamrsERi_ptr
//
// Resolved target: _ZN2QT11QDataStreamrsERi
// Target address:  0x8D5310
// GOT/IAT slot:    0x8A0F70
// Slot symbol:     _ZN2QT11QDataStreamrsERi_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamrsERi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamrsERi via GOT/IAT indirection
    return _ZN2QT11QDataStreamrsERi(/* forwarded args */);
}

