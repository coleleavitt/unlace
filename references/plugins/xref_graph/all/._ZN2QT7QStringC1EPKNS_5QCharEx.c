// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16430
// Name:            ._ZN2QT7QStringC1EPKNS_5QCharEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16430 jmp     cs:off_4F200
//
// Resolved target: _ZN2QT7QStringC1EPKNS_5QCharEx
// Target address:  0x50158
// GOT/IAT slot:    0x4F200
// Slot symbol:     off_4F200
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QStringC1EPKNS_5QCharEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringC1EPKNS_5QCharEx via GOT/IAT indirection
    return _ZN2QT7QStringC1EPKNS_5QCharEx(/* forwarded args */);
}

