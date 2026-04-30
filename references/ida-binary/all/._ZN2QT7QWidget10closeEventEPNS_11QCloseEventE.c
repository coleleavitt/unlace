// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1131B0
// Name:            ._ZN2QT7QWidget10closeEventEPNS_11QCloseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1131B0 jmp     cs:_ZN2QT7QWidget10closeEventEPNS_11QCloseEventE_ptr
//
// Resolved target: _ZN2QT7QWidget10closeEventEPNS_11QCloseEventE
// Target address:  0x8D4640
// GOT/IAT slot:    0x8A0578
// Slot symbol:     _ZN2QT7QWidget10closeEventEPNS_11QCloseEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget10closeEventEPNS_11QCloseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget10closeEventEPNS_11QCloseEventE via GOT/IAT indirection
    return _ZN2QT7QWidget10closeEventEPNS_11QCloseEventE(/* forwarded args */);
}

