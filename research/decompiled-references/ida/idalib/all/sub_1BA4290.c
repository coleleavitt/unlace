unsigned __int64 __fastcall sub_1BA4290(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-130h]
  __int64 v14; // [rsp+20h] [rbp-128h] BYREF
  __int64 v15[31]; // [rsp+50h] [rbp-F8h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  sub_1B7E690(
    (__int64)&ptr,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( (unsigned __int8)sub_1AA8E70(*(_QWORD *)(*a1 + 744), *(_BYTE *)(a2 + 8), *(_DWORD *)(a2 + 12), nullptr, 0, a3) )
  {
    v5 = 1;
  }
  else
  {
    sub_1AA1E60(v15, *(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(_DWORD *)(a2 + 20), nullptr, 0, 0);
    v10 = sub_1B7AA40(a1, *(_WORD **)(a2 + 40), 0, a3, a4, v7, v8, v9);
    v11 = sub_1AA5AA0(
            *(_QWORD *)(*a1 + 744),
            *(_DWORD *)(a2 + 12),
            *(_BYTE *)(a2 + 8),
            *(unsigned __int8 *)(a2 + 48),
            *(double *)a3.m128_u64,
            0,
            0,
            v10);
    v5 = sub_1AA2840(
           *(_QWORD **)(*a1 + 744),
           12,
           *(_DWORD *)(a2 + 12),
           *(_DWORD *)(a2 + 20),
           0,
           0,
           nullptr,
           0,
           *(_BYTE *)(a2 + 48),
           0,
           *(_DWORD *)(a2 + 16),
           ptr,
           v13,
           v11);
    sub_1AA3250(v15);
  }
  if ( ptr != &v14 )
    free(ptr);
  return v5;
}
