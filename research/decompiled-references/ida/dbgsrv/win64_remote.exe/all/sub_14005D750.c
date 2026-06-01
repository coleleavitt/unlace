/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D750
// Address: 0x000000014005D750

//----- (000000014005D750) ----------------------------------------------------
bool __fastcall sub_14005D750(void *a1, DWORD a2)
{
  if ( a2 == -1 )
    a2 = -1;
  return WaitForSingleObject(a1, a2) == 0;
}
