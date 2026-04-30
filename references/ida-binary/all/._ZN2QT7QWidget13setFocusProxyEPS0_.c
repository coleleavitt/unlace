// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111110
// Name:            ._ZN2QT7QWidget13setFocusProxyEPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111110 jmp     cs:_ZN2QT7QWidget13setFocusProxyEPS0__ptr
//
// Resolved target: _ZN2QT7QWidget13setFocusProxyEPS0_
// Target address:  0x8D3120
// GOT/IAT slot:    0x89F528
// Slot symbol:     _ZN2QT7QWidget13setFocusProxyEPS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget13setFocusProxyEPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13setFocusProxyEPS0_ via GOT/IAT indirection
    return _ZN2QT7QWidget13setFocusProxyEPS0_(/* forwarded args */);
}

