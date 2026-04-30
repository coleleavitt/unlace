// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115CC0
// Name:            ._ZNO2QT7QString3midExx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115CC0 jmp     cs:_ZNO2QT7QString3midExx_ptr
//
// Resolved target: _ZNO2QT7QString3midExx
// Target address:  0x8D61B8
// GOT/IAT slot:    0x8A1B00
// Slot symbol:     _ZNO2QT7QString3midExx_ptr
// Target type:     <no type info>
// ============================================================

void ._ZNO2QT7QString3midExx(/* see target signature */)
{
    // Tail-call to _ZNO2QT7QString3midExx via GOT/IAT indirection
    return _ZNO2QT7QString3midExx(/* forwarded args */);
}

