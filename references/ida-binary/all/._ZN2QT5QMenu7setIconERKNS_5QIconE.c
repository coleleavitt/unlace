// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B00
// Name:            ._ZN2QT5QMenu7setIconERKNS_5QIconE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B00 jmp     cs:_ZN2QT5QMenu7setIconERKNS_5QIconE_ptr
//
// Resolved target: _ZN2QT5QMenu7setIconERKNS_5QIconE
// Target address:  0x8D88E8
// GOT/IAT slot:    0x8A3A20
// Slot symbol:     _ZN2QT5QMenu7setIconERKNS_5QIconE_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT5QMenu7setIconERKNS_5QIconE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenu7setIconERKNS_5QIconE via GOT/IAT indirection
    return _ZN2QT5QMenu7setIconERKNS_5QIconE(/* forwarded args */);
}

