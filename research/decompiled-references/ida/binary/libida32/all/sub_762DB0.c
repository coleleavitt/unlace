__int64 __fastcall sub_762DB0(__int64 a1)
{
  char v1; // r12
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = 112;
  if ( *(_DWORD *)(a1 + 208) != 1 )
    v1 = -32;
  v2 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = v1;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < (unsigned __int64)(v3 + 1) )
  {
    v9 = qvector_reserve(v2, v4, v3 + 1, 1);
    *v2 = v9;
    v4 = v9;
    v3 = v2[1];
  }
  *(_BYTE *)(v4 + v3) = v1;
  ++v2[1];
  v5 = *(__int64 **)(a1 + 192);
  ++*(_DWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 204) = -81;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve(v5, v7, v6 + 1, 1);
    *v5 = v10;
    v7 = v10;
    v6 = v5[1];
  }
  *(_BYTE *)(v7 + v6) = -81;
  ++v5[1];
  ++*(_DWORD *)(a1 + 200);
  return 0;
}

