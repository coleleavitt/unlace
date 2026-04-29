// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9400
// Name:            j_.check_spoiled_jpt
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x9400 jmp     _check_spoiled_jpt
//
// Resolved target: .check_spoiled_jpt
// Target address:  0x7060
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64()
// ============================================================

/* see target sig */ j_.check_spoiled_jpt(/* see target signature */)
{
    // Tail-call to .check_spoiled_jpt via direct jump indirection
    return .check_spoiled_jpt(/* forwarded args */);
}

