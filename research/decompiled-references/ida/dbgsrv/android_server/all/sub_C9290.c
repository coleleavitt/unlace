/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9290
// Address: 0x00000000000C9290

//----- (00000000000C9290) ----------------------------------------------------
__int64 __fastcall sub_C9290(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8
  int v4; // w9

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v2 = a1[7];
  if ( !v2 )
    return 4294967294LL;
  if ( *(_QWORD **)v2 != a1 )
    return 4294967294LL;
  v4 = *(_DWORD *)(v2 + 8);
  if ( ((unsigned int)(v4 - 57) > 0x38 || ((1LL << ((unsigned __int8)v4 - 57)) & 0x100400400011001LL) == 0)
    && v4 != 666
    && v4 != 42 )
  {
    return 4294967294LL;
  }
  if ( *(_DWORD *)(v2 + 48) != 2 )
    return 4294967294LL;
  *(_QWORD *)(v2 + 56) = a2;
  return 0;
}
