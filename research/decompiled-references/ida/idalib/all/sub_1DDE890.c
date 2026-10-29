__int64 __fastcall sub_1DDE890(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbp
  char v10; // [rsp+Fh] [rbp-49h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (unsigned __int64 *)(a2 + 24);
  v6 = *((unsigned int *)v5 - 5);
  v10 = 0;
  ptr = v13;
  v12 = 0x400000000LL;
  if ( (unsigned __int8)sub_1DDBD00(a1, v5, v6, 1u, (__int64)&ptr, &v10, a3, a4) )
    v8 = 1;
  else
    v8 = sub_18C2A90(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), ptr, (unsigned int)v12, v7);
  if ( ptr != v13 )
    free(ptr);
  return v8;
}
