__int64 __fastcall sub_90900(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rsi

  v5 = *a1;
  v6 = *a1 + 16 * a1[1];
  if ( *a1 == v6 )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    while ( *(_DWORD *)v5 > a4 || a4 >= *(_DWORD *)(v5 + 4) + *(_DWORD *)v5 )
    {
      v5 += 16;
      if ( v6 == v5 )
        goto LABEL_11;
    }
    *(_DWORD *)a2 = *(_DWORD *)(v5 + 8);
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 12);
    v7 = 1;
  }
  v8 = a1[3];
  v9 = v8 + 16 * a1[4];
  if ( v9 == v8 )
    return v7;
  do
  {
    if ( a4 >= *(_DWORD *)v8 && a4 < *(_DWORD *)(v8 + 4) + *(_DWORD *)v8 )
    {
      v7 = 1;
      *(_DWORD *)a3 = *(_DWORD *)(v8 + 8);
      *(_BYTE *)(a3 + 4) = *(_BYTE *)(v8 + 12);
      return v7;
    }
    v8 += 16;
  }
  while ( v9 != v8 );
  return v7;
}

