// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD80
// Name:            .get_refinfo_descs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD80 jmp     cs:off_2C7B6A8
//
// Resolved target: get_refinfo_descs
// Target address:  0x41B730
// GOT/IAT slot:    0x2C7B6A8
// Slot symbol:     off_2C7B6A8
// Target type:     <no type info>
// ============================================================

void .get_refinfo_descs(/* see target signature */)
{
    // Tail-call to get_refinfo_descs via GOT/IAT indirection
    return get_refinfo_descs(/* forwarded args */);
}

