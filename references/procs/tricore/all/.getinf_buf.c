// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6760
// Name:            .getinf_buf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6760 jmp     cs:off_24398
//
// Resolved target: getinf_buf
// Target address:  0x26180
// GOT/IAT slot:    0x24398
// Slot symbol:     off_24398
// Target type:     <no type info>
// ============================================================

void .getinf_buf(/* see target signature */)
{
    // Tail-call to getinf_buf via GOT/IAT indirection
    return getinf_buf(/* forwarded args */);
}

