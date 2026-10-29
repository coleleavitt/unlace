unsigned __int64 __fastcall sub_1D1EA10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rbx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  sub_1D1BE90(
    (__int64)&ptr,
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
                          vars8,
                          a3) )
    v5 = 1;
  else
    v5 = sub_1AA2840(
           *(_QWORD **)(*a1 + 744),
           16,
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
           vars8,
           0);
  if ( ptr != &ptr )
    free(ptr);
  return v5;
}
