__int64 __fastcall sub_1963B60(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-130h]
  __int64 v15; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v16[248]; // [rsp+50h] [rbp-F8h] BYREF

  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  sub_19507E0(
    (unsigned int *)&ptr,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( (unsigned __int8)sub_1AA8E70(
                          *(_QWORD *)(*a1 + 744),
                          *(unsigned __int8 *)(a2 + 8),
                          *(unsigned int *)(a2 + 12),
                          0,
                          0) )
  {
    v5 = 1;
  }
  else
  {
    sub_1AA1E60((unsigned int)v16, *(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(_DWORD *)(a2 + 20), 0, 0, 0);
    v10 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 40), 0, a3, a4, v7, v8, v9);
    v11 = sub_1AA5AA0(
            *(_QWORD *)(*a1 + 744),
            *(_DWORD *)(a2 + 12),
            *(unsigned __int8 *)(a2 + 8),
            *(unsigned __int8 *)(a2 + 48),
            0,
            0,
            v10);
    v5 = sub_1AA2840(
           *(_QWORD *)(*a1 + 744),
           12,
           *(unsigned int *)(a2 + 12),
           *(unsigned int *)(a2 + 20),
           0,
           0,
           0,
           0,
           *(unsigned __int8 *)(a2 + 48),
           0,
           *(unsigned int *)(a2 + 16),
           ptr,
           v14,
           v11);
    sub_1AA3250(v16, 12, v12);
  }
  if ( ptr != &v15 )
    free(ptr);
  return v5;
}
