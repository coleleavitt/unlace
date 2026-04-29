// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x13708
// Name:     mem2base
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to mem2base are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void mem2base(/* see import library declaration */);

