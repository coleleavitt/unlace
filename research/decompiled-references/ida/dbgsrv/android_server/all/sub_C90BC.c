/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C90BC
// Address: 0x00000000000C90BC

//----- (00000000000C90BC) ----------------------------------------------------
__int64 __fastcall sub_C90BC(_QWORD *a1, void *dest, unsigned int *a3)
{
  __int64 v3; // x8
  __int64 result; // x0
  int v5; // w9
  __int64 v7; // x9
  __int64 v8; // x10
  unsigned int v9; // w20

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v3 = a1[7];
  if ( !v3 || *(_QWORD **)v3 != a1 )
    return 4294967294LL;
  v5 = *(_DWORD *)(v3 + 8);
  if ( ((unsigned int)(v5 - 57) > 0x38 || ((1LL << ((unsigned __int8)v5 - 57)) & 0x100400400011001LL) == 0)
    && v5 != 666
    && v5 != 42 )
  {
    return 4294967294LL;
  }
  v7 = *(unsigned int *)(v3 + 172);
  v8 = *(unsigned int *)(v3 + 180);
  if ( (unsigned int)(v8 + v7) <= *(_DWORD *)(v3 + 80) )
    v9 = v8 + v7;
  else
    v9 = *(_DWORD *)(v3 + 80);
  if ( dest && v9 )
    memcpy(dest, (const void *)(*(_QWORD *)(v3 + 96) + v7 + v8 - v9), v9);
  result = 0;
  if ( a3 )
    *a3 = v9;
  return result;
}
