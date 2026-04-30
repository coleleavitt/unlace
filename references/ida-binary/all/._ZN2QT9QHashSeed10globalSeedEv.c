// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114EC0
// Name:            ._ZN2QT9QHashSeed10globalSeedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114EC0 jmp     cs:_ZN2QT9QHashSeed10globalSeedEv_ptr
//
// Resolved target: _ZN2QT9QHashSeed10globalSeedEv
// Target address:  0x8D5920
// GOT/IAT slot:    0x8A1400
// Slot symbol:     _ZN2QT9QHashSeed10globalSeedEv_ptr
// Target type:     _QWORD(QT::QHashSeed *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QHashSeed10globalSeedEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QHashSeed10globalSeedEv via GOT/IAT indirection
    return _ZN2QT9QHashSeed10globalSeedEv(/* forwarded args */);
}

