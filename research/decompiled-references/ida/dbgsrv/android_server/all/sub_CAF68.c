/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CAF68
// Address: 0x00000000000CAF68

//----- (00000000000CAF68) ----------------------------------------------------
__int64 __fastcall sub_CAF68(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // x8
  int v7; // w9

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v5 = a1[7];
  if ( !v5 )
    return 4294967294LL;
  if ( *(_QWORD **)v5 != a1 )
    return 4294967294LL;
  v7 = *(_DWORD *)(v5 + 8);
  if ( ((unsigned int)(v7 - 57) > 0x38 || ((1LL << ((unsigned __int8)v7 - 57)) & 0x100400400011001LL) == 0)
    && v7 != 666
    && v7 != 42 )
  {
    return 4294967294LL;
  }
  *(_DWORD *)(v5 + 188) = a5;
  *(_DWORD *)(v5 + 192) = a3;
  *(_DWORD *)(v5 + 204) = a2;
  *(_DWORD *)(v5 + 208) = a4;
  return 0;
}
