/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043C80
// Address: 0x0000000140043C80

//----- (0000000140043C80) ----------------------------------------------------
__int64 __fastcall sub_140043C80(__int64 a1, __int64 *a2)
{
  if ( *a2 )
  {
    sub_14001A450(a2, 0);
    j_free((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  return 0xFFFFFFFFLL;
}
