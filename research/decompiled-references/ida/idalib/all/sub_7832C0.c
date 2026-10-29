__int64 __fastcall sub_7832C0(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 212) == 0xD3 )
    return 0;
  v2 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -47;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < (unsigned __int64)(v3 + 1) )
  {
    v5 = qvector_reserve(v2, v4, v3 + 1, 1);
    *v2 = v5;
    v4 = v5;
    v3 = v2[1];
  }
  *(_BYTE *)(v4 + v3) = -47;
  ++v2[1];
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
