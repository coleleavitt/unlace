// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93C0
// Name:            .get_idc_filename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93C0 jmp     cs:off_2C7A1C8
//
// Resolved target: get_idc_filename
// Target address:  0x7A0300
// GOT/IAT slot:    0x2C7A1C8
// Slot symbol:     off_2C7A1C8
// Target type:     <no type info>
// ============================================================

void .get_idc_filename(/* see target signature */)
{
    // Tail-call to get_idc_filename via GOT/IAT indirection
    return get_idc_filename(/* forwarded args */);
}

