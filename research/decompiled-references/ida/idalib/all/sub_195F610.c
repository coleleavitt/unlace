__int64 __fastcall sub_195F610(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 **v5; // rsi
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rbp
  char v10; // [rsp+Fh] [rbp-49h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (unsigned __int16 **)(a2 + 24);
  v6 = *((_DWORD *)v5 - 5);
  v10 = 0;
  ptr = v13;
  v12 = 0x400000000LL;
  if ( (unsigned __int8)sub_195E940(a1, v5, v6, 1, (__int64)&ptr, &v10, a3, a4) )
    v8 = 1;
  else
    v8 = sub_C08D70(
           *(_QWORD **)(*a1 + 248),
           *(_DWORD *)(a2 + 16),
           ptr,
           (unsigned int)v12,
           *(unsigned int *)(a2 + 20),
           v7);
  if ( ptr != v13 )
    free(ptr);
  return v8;
}
