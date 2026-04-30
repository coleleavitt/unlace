// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F20
// Name:            ._ZN2QT7QStringaSENS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F20 jmp     cs:_ZN2QT7QStringaSENS_5QCharE_ptr
//
// Resolved target: _ZN2QT7QStringaSENS_5QCharE
// Target address:  0x8D5950
// GOT/IAT slot:    0x8A1430
// Slot symbol:     _ZN2QT7QStringaSENS_5QCharE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QStringaSENS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringaSENS_5QCharE via GOT/IAT indirection
    return _ZN2QT7QStringaSENS_5QCharE(/* forwarded args */);
}

