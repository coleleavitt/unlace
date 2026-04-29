// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47C0
// Name:            .Z3_mk_unsigned_int64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47C0 jmp     cs:off_4E3C8
//
// Resolved target: Z3_mk_unsigned_int64
// Target address:  0x4F9E8
// GOT/IAT slot:    0x4E3C8
// Slot symbol:     off_4E3C8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_unsigned_int64(/* see target signature */)
{
    // Tail-call to Z3_mk_unsigned_int64 via GOT/IAT indirection
    return Z3_mk_unsigned_int64(/* forwarded args */);
}

