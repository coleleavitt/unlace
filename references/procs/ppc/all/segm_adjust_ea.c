// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x960C0
// Name:     segm_adjust_ea
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to segm_adjust_ea are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void segm_adjust_ea(/* see import library declaration */);

