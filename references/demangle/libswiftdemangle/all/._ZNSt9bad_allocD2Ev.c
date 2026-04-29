// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA610
// Name:            ._ZNSt9bad_allocD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA610 jmp     cs:off_48308
//
// Resolved target: _ZNSt9bad_allocD2Ev
// Target address:  0x485C0
// GOT/IAT slot:    0x48308
// Slot symbol:     off_48308
// Target type:     void(std::bad_alloc *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt9bad_allocD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt9bad_allocD2Ev via GOT/IAT indirection
    return _ZNSt9bad_allocD2Ev(/* forwarded args */);
}

