__int64 __fastcall sub_7645E0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int16 v4; // bp
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  if ( dword_2C52654[0] <= 0 )
    return 1612;
  v1 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -44;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v9 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v9;
    v3 = v9;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -44;
  ++v1[1];
  v4 = dword_2C52654[0];
  ++*(_DWORD *)(a1 + 200);
  if ( v4 <= 0xFu )
  {
    v6 = *(__int64 **)(a1 + 192);
    *(_BYTE *)(a1 + 204) = v4;
    v7 = v6[1];
    v8 = *v6;
    if ( v6[2] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(v6, v8, v7 + 1, 1);
      *v6 = v10;
      v8 = v10;
      v7 = v6[1];
    }
    *(_BYTE *)(v8 + v7) = v4;
    ++v6[1];
    ++*(_DWORD *)(a1 + 200);
  }
  else
  {
    sub_764420(a1, 0, v4);
  }
  return 0;
}

