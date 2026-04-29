// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16400
// Name:            ._ZN2QT9QSettingsD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16400 jmp     cs:off_4F1E8
//
// Resolved target: _ZN2QT9QSettingsD1Ev
// Target address:  0x50138
// GOT/IAT slot:    0x4F1E8
// Slot symbol:     off_4F1E8
// Target type:     void(QT::QSettings *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QSettingsD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSettingsD1Ev via GOT/IAT indirection
    return _ZN2QT9QSettingsD1Ev(/* forwarded args */);
}

