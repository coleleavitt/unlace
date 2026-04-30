// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B200
// Name:            ._ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B200 jmp     cs:_ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi_ptr
//
// Resolved target: _ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi
// Target address:  0x8D9748
// GOT/IAT slot:    0x8A45A0
// Slot symbol:     _ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi via GOT/IAT indirection
    return _ZN2QT16QCoreApplication13processEventsENS_6QFlagsINS_10QEventLoop17ProcessEventsFlagEEEi(/* forwarded args */);
}

