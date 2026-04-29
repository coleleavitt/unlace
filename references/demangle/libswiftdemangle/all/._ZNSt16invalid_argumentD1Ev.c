// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA640
// Name:            ._ZNSt16invalid_argumentD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA640 jmp     cs:off_48320
//
// Resolved target: _ZNSt16invalid_argumentD1Ev
// Target address:  0x485D0
// GOT/IAT slot:    0x48320
// Slot symbol:     off_48320
// Target type:     void(std::invalid_argument *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt16invalid_argumentD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSt16invalid_argumentD1Ev via GOT/IAT indirection
    return _ZNSt16invalid_argumentD1Ev(/* forwarded args */);
}

