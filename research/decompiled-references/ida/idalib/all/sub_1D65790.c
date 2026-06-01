unsigned __int64 __fastcall sub_1D65790(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int128 v12; // [rsp+0h] [rbp-148h]
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-130h]
  __int64 v15; // [rsp+20h] [rbp-128h] BYREF
  __int64 v16[31]; // [rsp+50h] [rbp-F8h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  sub_1D45410(
    (unsigned __int16 **)&ptr,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( (unsigned __int8)sub_1AA8E70(
                          *(_QWORD *)(*a1 + 744),
                          *(_BYTE *)(a2 + 8),
                          *(_DWORD *)(a2 + 12),
                          (char *)ptr,
                          v14,
                          a3) )
  {
    v5 = 1;
  }
  else
  {
    *((_QWORD *)&v12 + 1) = v14;
    *(_QWORD *)&v12 = ptr;
    sub_1AA1E60(
      v16,
      *(_QWORD *)(*a1 + 744),
      *(unsigned __int8 *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD **)(a2 + 24),
      *(_QWORD *)(a2 + 32),
      v12);
    v10 = sub_1D42130(a1, *(_WORD **)(a2 + 40), 0, a3, a4, v7, v8, v9);
    v11 = sub_1AA5AA0(
            *(_QWORD *)(*a1 + 744),
            *(_DWORD *)(a2 + 12),
            *(_BYTE *)(a2 + 8),
            4u,
            *(double *)a3.m128_u64,
            (__int64)ptr,
            v14,
            v10);
    v5 = sub_1AA2840(
           *(_QWORD **)(*a1 + 744),
           6,
           *(_DWORD *)(a2 + 12),
           *(_DWORD *)(a2 + 20),
           0,
           0,
           nullptr,
           0,
           4,
           0,
           *(_DWORD *)(a2 + 16),
           ptr,
           v14,
           v11);
    sub_1AA3250(v16);
  }
  if ( ptr != &v15 )
    free(ptr);
  return v5;
}
