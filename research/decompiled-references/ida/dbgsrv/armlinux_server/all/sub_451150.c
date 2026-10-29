/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451150
// Address: 0x0000000000451150

//----- (0000000000451150) ----------------------------------------------------
__int64 __fastcall sub_451150(__int64 a1, __int64 a2)
{
  int v2; // w2
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x19
  __int64 v9; // x22
  unsigned int v10; // w25
  const char *v11; // x21
  _BOOL4 v12; // w1

  v2 = *(_QWORD *)(a1 + 64) - 1;
  if ( v2 < 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 56LL * v2;
  v7 = v5 - 16;
  v8 = v5 + v6 + 40;
  v9 = v7 + v6 - 56LL * (unsigned int)v2;
  while ( *(_QWORD *)v8 != a2 )
  {
LABEL_3:
    v8 -= 56;
    if ( v8 == v9 )
      return 0;
  }
  v10 = *(unsigned __int8 *)(a2 + 25);
  v11 = (const char *)&qword_4B2D48;
  if ( !*(_BYTE *)(a2 + 25) )
    return 1;
  if ( *(_QWORD *)(a2 + 8) )
    v11 = *(const char **)a2;
  v12 = *(_QWORD *)(a1 + 8) <= (unsigned __int64)&v11[strlen(v11)] && *(_QWORD *)(a1 + 8) >= (unsigned __int64)v11;
  if ( !v12 )
  {
    if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v8 + 8) )
      return v10;
    goto LABEL_3;
  }
  return v12;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
