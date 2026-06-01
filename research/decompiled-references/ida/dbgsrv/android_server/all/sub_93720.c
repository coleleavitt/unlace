/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93720
// Address: 0x0000000000093720

//----- (0000000000093720) ----------------------------------------------------
__int64 __fastcall sub_93720(__int64 a1, __int64 *a2, char **a3, int a4)
{
  __int64 v4; // x8
  __int64 v5; // x0

  v4 = *(_QWORD *)(a1 + 400);
  if ( v4 )
    v5 = v4 - 192;
  else
    v5 = 0;
  return sub_92E50(v5, a2, a3, a4);
}
