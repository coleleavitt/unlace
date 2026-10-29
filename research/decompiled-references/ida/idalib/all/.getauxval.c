// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF70
// Name:            .getauxval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF70 jmp     cs:off_2C7B7A0
//
// Resolved target: getauxval
// Target address:  0x2D11CE8
// GOT/IAT slot:    0x2C7B7A0
// Slot symbol:     off_2C7B7A0
// Target type:     unsigned __int64(unsigned __int64 type)
// ============================================================

/* see target sig */ .getauxval(/* see target signature */)
{
    // Tail-call to getauxval via GOT/IAT indirection
    return getauxval(/* forwarded args */);
}

