__int64 __fastcall sub_1988CA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  int v5; // r14d
  __int64 v6; // rsi
  _QWORD *v7; // r13
  char v9; // [rsp+Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  _BYTE v12[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  ptr = v12;
  v11 = 0x400000000LL;
  v7 = sub_19885D0(a1, v6, a3, a4);
  v9 = 0;
  if ( (unsigned __int8)sub_197B2A0(
                          a1,
                          (unsigned __int16 **)(v4 + 48),
                          v5,
                          1,
                          (__int64)&ptr,
                          &v9,
                          *(double *)a3.m128_u64,
                          a4) )
  {
    v4 = 1;
  }
  else if ( v9 || *(_QWORD **)(v4 + 8) != v7 )
  {
    v4 = sub_C97F60(
           *(_QWORD **)(*a1 + 248),
           ptr,
           (unsigned int)v11,
           (__int64)v7,
           *(unsigned int *)(v4 + 20),
           *(unsigned int *)(v4 + 24),
           *(_DWORD *)(v4 + 28),
           *(_DWORD *)(v4 + 32));
  }
  if ( ptr != v12 )
    free(ptr);
  return v4;
}
