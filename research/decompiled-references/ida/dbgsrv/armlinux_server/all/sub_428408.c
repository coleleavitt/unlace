/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428408
// Address: 0x0000000000428408

//----- (0000000000428408) ----------------------------------------------------
__int64 __fastcall sub_428408(__int64 a1, __int64 a2)
{
  __int64 v2; // x5
  __int64 v3; // x0
  unsigned int v4; // w4
  __int64 v5; // x2
  unsigned int v6; // w20
  __int64 v7; // x19
  __int64 v8; // x0
  unsigned __int64 v9; // x21

  v2 = a1 + 16;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 1;
  v4 = *(_DWORD *)(a2 + 88);
  v5 = v2;
  do
  {
    while ( *(_DWORD *)(v3 + 32) >= v4 )
    {
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        goto LABEL_5;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v3 );
LABEL_5:
  if ( v2 == v5 )
    return 1;
  v6 = 1;
  if ( v4 >= *(_DWORD *)(v5 + 32) )
  {
    v7 = v5 + 48;
    v8 = *(_QWORD *)(v5 + 64);
    if ( v8 != v5 + 48 )
    {
      v9 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v8 + 32) <= v9 )
      {
        do
        {
          v6 = *(_DWORD *)(v8 + 40);
          v8 = sub_49F748(v8);
        }
        while ( v7 != v8 && *(_QWORD *)(v8 + 32) <= v9 );
      }
    }
  }
  return v6;
}
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
