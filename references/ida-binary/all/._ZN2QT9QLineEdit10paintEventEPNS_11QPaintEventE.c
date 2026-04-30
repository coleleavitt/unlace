// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B30
// Name:            ._ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B30 jmp     cs:_ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE_ptr
//
// Resolved target: _ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE
// Target address:  0x8D60C8
// GOT/IAT slot:    0x8A1A38
// Slot symbol:     _ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE via GOT/IAT indirection
    return _ZN2QT9QLineEdit10paintEventEPNS_11QPaintEventE(/* forwarded args */);
}

