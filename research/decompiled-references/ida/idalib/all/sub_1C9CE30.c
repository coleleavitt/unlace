unsigned __int64 __fastcall sub_1C9CE30(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  unsigned __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int128 v20; // [rsp+0h] [rbp-148h]
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-130h]
  __int64 v23; // [rsp+20h] [rbp-128h] BYREF
  __int64 v24[31]; // [rsp+50h] [rbp-F8h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  sub_1C7EFD0(
    (unsigned __int64 *)&ptr,
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
                          v22,
                          a3) )
  {
    v11 = 1;
  }
  else
  {
    *((_QWORD *)&v20 + 1) = v22;
    *(_QWORD *)&v20 = ptr;
    sub_1AA1E60(
      v24,
      *(_QWORD *)(*a1 + 744),
      *(unsigned __int8 *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD **)(a2 + 24),
      *(_QWORD *)(a2 + 32),
      v20);
    v18 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 40), 0, a3, a4, a5, a6, v16, v17, a9, a10, v13, v14, v15);
    v19 = sub_1AA5AA0(
            *(_QWORD *)(*a1 + 744),
            *(_DWORD *)(a2 + 12),
            *(_BYTE *)(a2 + 8),
            4u,
            *(double *)a3.m128_u64,
            (__int64)ptr,
            v22,
            v18);
    v11 = sub_1AA2840(
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
            v22,
            v19);
    sub_1AA3250(v24);
  }
  if ( ptr != &v23 )
    free(ptr);
  return v11;
}
