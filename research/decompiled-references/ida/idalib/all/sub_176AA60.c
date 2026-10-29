__int64 __fastcall sub_176AA60(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rbx
  int v5; // r14d
  __int64 v6; // rsi
  void **v7; // r13
  __int64 v9; // rdi
  char v10; // [rsp+Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  ptr = v13;
  v12 = 0x400000000LL;
  v7 = sub_176A2F0(a1, v6, a3);
  v10 = 0;
  if ( (unsigned __int8)sub_175C6E0(a1, (unsigned __int16 **)(v4 + 48), v5, 1, (__int64)&ptr, &v10) )
  {
    v4 = 1;
  }
  else
  {
    v9 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) || v10 || *(void ***)(v4 + 8) != v7 )
      v4 = sub_18C2AC0(
             v9,
             (_DWORD)ptr,
             v12,
             (_DWORD)v7,
             *(_DWORD *)(v4 + 20),
             *(_DWORD *)(v4 + 24),
             *(_DWORD *)(v4 + 28),
             *(_DWORD *)(v4 + 32));
  }
  if ( ptr != v13 )
    free(ptr);
  return v4;
}
