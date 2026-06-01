__int64 __fastcall sub_7827E0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rax

  v1 = *(__int64 **)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -54;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v5 = qvector_reserve(v1, v3, v2 + 1, 1);
    *v1 = v5;
    v3 = v5;
    v2 = v1[1];
  }
  *(_BYTE *)(v3 + v2) = -54;
  ++v1[1];
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
