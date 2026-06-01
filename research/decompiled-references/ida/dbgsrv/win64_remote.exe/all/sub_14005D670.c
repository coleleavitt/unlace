/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D670
// Address: 0x000000014005D670

//----- (000000014005D670) ----------------------------------------------------
char __fastcall sub_14005D670(struct _RTL_CRITICAL_SECTION *Block)
{
  if ( !Block )
    return 0;
  DeleteCriticalSection(Block);
  j_j_free(Block);
  return 1;
}
