/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9348
// Address: 0x00000000000C9348

//----- (00000000000C9348) ----------------------------------------------------
__int64 __fastcall sub_C9348(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // x8
  int v5; // w9

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 )
    return 4294967294LL;
  if ( *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  v5 = *(_DWORD *)(v3 + 8);
  if ( ((unsigned int)(v5 - 57) > 0x38 || ((1LL << ((unsigned __int8)v5 - 57)) & 0x100400400011001LL) == 0)
    && v5 != 666
    && v5 != 42 )
  {
    return 4294967294LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v3 + 40);
  if ( a3 )
    *a3 = *(_DWORD *)(a1[7] + 5940LL);
  return 0;
}
