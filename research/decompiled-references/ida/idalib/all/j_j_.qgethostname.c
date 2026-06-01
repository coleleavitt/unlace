// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x812040
// Name:            j_j_.qgethostname
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x812040 jmp     j__qgethostname
//
// Resolved target: j_.qgethostname
// Target address:  0x835630
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qgethostname(/* see target signature */)
{
    // Tail-call to j_.qgethostname via direct jump indirection
    return j_.qgethostname(/* forwarded args */);
}

