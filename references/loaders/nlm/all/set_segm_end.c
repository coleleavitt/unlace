// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8730
// Name:     set_segm_end
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_segm_end are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_segm_end(/* see import library declaration */);

