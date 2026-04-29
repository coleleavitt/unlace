// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x168C0
// Name:            ._ZN2QT9QHashSeed10globalSeedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x168C0 jmp     cs:off_4F448
//
// Resolved target: _ZN2QT9QHashSeed10globalSeedEv
// Target address:  0x50588
// GOT/IAT slot:    0x4F448
// Slot symbol:     off_4F448
// Target type:     _QWORD(QT::QHashSeed *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QHashSeed10globalSeedEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QHashSeed10globalSeedEv via GOT/IAT indirection
    return _ZN2QT9QHashSeed10globalSeedEv(/* forwarded args */);
}

