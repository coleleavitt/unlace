// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B6B0
// Name:            ._ZN2QT15QAbstractButton7setIconERKNS_5QIconE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B6B0 jmp     cs:_ZN2QT15QAbstractButton7setIconERKNS_5QIconE_ptr
//
// Resolved target: _ZN2QT15QAbstractButton7setIconERKNS_5QIconE
// Target address:  0x8D9A70
// GOT/IAT slot:    0x8A47F8
// Slot symbol:     _ZN2QT15QAbstractButton7setIconERKNS_5QIconE_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton7setIconERKNS_5QIconE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton7setIconERKNS_5QIconE via GOT/IAT indirection
    return _ZN2QT15QAbstractButton7setIconERKNS_5QIconE(/* forwarded args */);
}

