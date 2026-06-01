// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6C0
// Name:            .get_idcv_slice
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6C0 jmp     cs:off_2C7B348
//
// Resolved target: get_idcv_slice
// Target address:  0x799C40
// GOT/IAT slot:    0x2C7B348
// Slot symbol:     off_2C7B348
// Target type:     <no type info>
// ============================================================

void .get_idcv_slice(/* see target signature */)
{
    // Tail-call to get_idcv_slice via GOT/IAT indirection
    return get_idcv_slice(/* forwarded args */);
}

