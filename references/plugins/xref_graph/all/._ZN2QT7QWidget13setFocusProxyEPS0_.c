// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16050
// Name:            ._ZN2QT7QWidget13setFocusProxyEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16050 jmp     cs:off_4F010
//
// Resolved target: _ZN2QT7QWidget13setFocusProxyEPS0_
// Target address:  0x4FE30
// GOT/IAT slot:    0x4F010
// Slot symbol:     off_4F010
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget13setFocusProxyEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13setFocusProxyEPS0_ via GOT/IAT indirection
    return _ZN2QT7QWidget13setFocusProxyEPS0_(/* forwarded args */);
}

