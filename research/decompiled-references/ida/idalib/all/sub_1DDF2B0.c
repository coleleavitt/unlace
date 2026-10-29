__int64 __fastcall sub_1DDF2B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  _QWORD *v8; // r13
  __int64 v10; // rdi
  char v11; // [rsp+Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  _BYTE v14[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  ptr = v14;
  v13 = 0x400000000LL;
  v8 = sub_1DD1AB0((__int64)a1, v7, a3, a4);
  v11 = 0;
  if ( (unsigned __int8)sub_1DDBD00(a1, (unsigned __int64 *)(v5 + 48), v6, 1u, (__int64)&ptr, &v11, a3, a4) )
  {
    v5 = 1;
  }
  else
  {
    v10 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) || v11 || *(_QWORD **)(v5 + 8) != v8 )
      v5 = sub_18C2AC0(
             v10,
             ptr,
             (unsigned int)v13,
             (__int64)v8,
             *(unsigned int *)(v5 + 20),
             *(unsigned int *)(v5 + 24),
             *(_DWORD *)(v5 + 28),
             *(_DWORD *)(v5 + 32));
  }
  if ( ptr != v14 )
    free(ptr);
  return v5;
}
