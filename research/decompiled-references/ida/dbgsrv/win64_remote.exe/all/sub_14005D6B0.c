/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D6B0
// Address: 0x000000014005D6B0

//----- (000000014005D6B0) ----------------------------------------------------
char __fastcall sub_14005D6B0(struct _RTL_CRITICAL_SECTION *a1)
{
  if ( !a1 )
    return 0;
  EnterCriticalSection(a1);
  return 1;
}
