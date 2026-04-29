// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16EE0
// Name:            ._ZN2QT9QLineEdit7setTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16EE0 jmp     cs:off_4F758
//
// Resolved target: _ZN2QT9QLineEdit7setTextERKNS_7QStringE
// Target address:  0x50B10
// GOT/IAT slot:    0x4F758
// Slot symbol:     off_4F758
// Target type:     <no type info>
// ============================================================

void ._ZN2QT9QLineEdit7setTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit7setTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QLineEdit7setTextERKNS_7QStringE(/* forwarded args */);
}

