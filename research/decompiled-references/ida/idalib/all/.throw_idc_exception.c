// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA790
// Name:            .throw_idc_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA790 jmp     cs:off_2C7ABB0
//
// Resolved target: throw_idc_exception
// Target address:  0x37C920
// GOT/IAT slot:    0x2C7ABB0
// Slot symbol:     off_2C7ABB0
// Target type:     <no type info>
// ============================================================

void .throw_idc_exception(/* see target signature */)
{
    // Tail-call to throw_idc_exception via GOT/IAT indirection
    return throw_idc_exception(/* forwarded args */);
}

