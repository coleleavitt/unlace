// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115300
// Name:            ._ZN2QT7QAction8activateENS0_11ActionEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115300 jmp     cs:_ZN2QT7QAction8activateENS0_11ActionEventE_ptr
//
// Resolved target: _ZN2QT7QAction8activateENS0_11ActionEventE
// Target address:  0x8D5BC8
// GOT/IAT slot:    0x8A1620
// Slot symbol:     _ZN2QT7QAction8activateENS0_11ActionEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QAction8activateENS0_11ActionEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QAction8activateENS0_11ActionEventE via GOT/IAT indirection
    return _ZN2QT7QAction8activateENS0_11ActionEventE(/* forwarded args */);
}

