// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D3D0
// Name:            .__cxa_guard_release
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D3D0 jmp     cs:off_B31D0
//
// Resolved target: __cxa_guard_release
// Target address:  0xB3968
// GOT/IAT slot:    0xB31D0
// Slot symbol:     off_B31D0
// Target type:     void(__guard *)
// ============================================================

/* see target sig */ .__cxa_guard_release(/* see target signature */)
{
    // Tail-call to __cxa_guard_release via GOT/IAT indirection
    return __cxa_guard_release(/* forwarded args */);
}

