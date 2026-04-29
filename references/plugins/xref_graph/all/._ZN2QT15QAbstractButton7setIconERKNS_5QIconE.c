// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17500
// Name:            ._ZN2QT15QAbstractButton7setIconERKNS_5QIconE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17500 jmp     cs:off_4FA68
//
// Resolved target: _ZN2QT15QAbstractButton7setIconERKNS_5QIconE
// Target address:  0x510A0
// GOT/IAT slot:    0x4FA68
// Slot symbol:     off_4FA68
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton7setIconERKNS_5QIconE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton7setIconERKNS_5QIconE via GOT/IAT indirection
    return _ZN2QT15QAbstractButton7setIconERKNS_5QIconE(/* forwarded args */);
}

