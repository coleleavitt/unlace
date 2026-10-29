// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F10
// Name:            .idbattrs_need_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F10 jmp     cs:off_2C79F70
//
// Resolved target: idbattrs_need_merging
// Target address:  0x6345C0
// GOT/IAT slot:    0x2C79F70
// Slot symbol:     off_2C79F70
// Target type:     <no type info>
// ============================================================

void .idbattrs_need_merging(/* see target signature */)
{
    // Tail-call to idbattrs_need_merging via GOT/IAT indirection
    return idbattrs_need_merging(/* forwarded args */);
}

