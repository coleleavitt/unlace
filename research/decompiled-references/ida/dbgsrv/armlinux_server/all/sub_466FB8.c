/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466FB8
// Address: 0x0000000000466FB8

//----- (0000000000466FB8) ----------------------------------------------------
__int64 __fastcall sub_466FB8(__int64 a1, __int64 *a2, char **a3, int a4)
{
  __int64 v4; // x4
  __int64 v5; // x0

  v4 = *(_QWORD *)(a1 + 480);
  v5 = v4 - 192;
  if ( !v4 )
    v5 = 0;
  return sub_466060(v5, a2, a3, a4);
}
