__int64 __fastcall sub_1B91680(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int v5; // r14d
  __int64 v6; // rsi
  _QWORD *v7; // r13
  __int64 v8; // rbp
  char v10; // [rsp+Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  ptr = v13;
  v12 = 0x400000000LL;
  v7 = sub_1B90FD0(a1, v6, a3, a4);
  v10 = 0;
  if ( (unsigned __int8)sub_1B7D2C0(a1, (unsigned __int16 **)(a2 + 48), v5, 1u, (__int64)&ptr, &v10, a3, a4) )
    v8 = 1;
  else
    v8 = sub_18C2AC0(
           *a1,
           ptr,
           (unsigned int)v12,
           (__int64)v7,
           *(unsigned int *)(a2 + 20),
           *(unsigned int *)(a2 + 24),
           *(_DWORD *)(a2 + 28),
           *(_DWORD *)(a2 + 32));
  if ( ptr != v13 )
    free(ptr);
  return v8;
}
