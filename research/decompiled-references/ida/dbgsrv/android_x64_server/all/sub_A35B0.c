/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A35B0
// Address: 0x00000000000A35B0

//----- (00000000000A35B0) ----------------------------------------------------
__int64 __fastcall sub_A35B0(__int64 a1, __int64 *a2)
{
  if ( *a2 )
  {
    sub_38980(a2, 0);
    qfree((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  return 0xFFFFFFFFLL;
}
