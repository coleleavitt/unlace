// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7640
// Name:            .std_out_segm_footer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7640 jmp     cs:off_2C79308
//
// Resolved target: std_out_segm_footer
// Target address:  0x510CF0
// GOT/IAT slot:    0x2C79308
// Slot symbol:     off_2C79308
// Target type:     <no type info>
// ============================================================

void .std_out_segm_footer(/* see target signature */)
{
    // Tail-call to std_out_segm_footer via GOT/IAT indirection
    return std_out_segm_footer(/* forwarded args */);
}

