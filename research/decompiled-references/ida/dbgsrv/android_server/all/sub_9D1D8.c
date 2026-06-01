/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D1D8
// Address: 0x000000000009D1D8

//----- (000000000009D1D8) ----------------------------------------------------
__int64 __fastcall sub_9D1D8(__int64 a1, __int64 *a2)
{
  if ( *a2 )
  {
    sub_39980(a2, 0);
    qfree((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  return 0xFFFFFFFFLL;
}
