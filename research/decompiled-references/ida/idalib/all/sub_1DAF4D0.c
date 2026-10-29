__m128 *__fastcall sub_1DAF4D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128i a8,
        __m128i a9,
        double a10,
        double a11,
        __m128 a12,
        __m128i a13)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 *result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __m128 *v26; // rdx

  v13 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v13 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v21 = sub_1A89000(
          *(__int64 **)(*a1 + 736),
          *(_DWORD *)(a2 + 8),
          (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL),
          v14,
          v15,
          v16,
          a6,
          a7);
  if ( v21 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v24 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a6, a7, a8, a9, v22, v23, a12, a13, v18, v19, v20);
  if ( v24 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v26 = (__m128 *)(v21 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v26, v25);
  if ( *(__m128 **)(a2 + 16) != v26 )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v26, v25);
  result = (__m128 *)a2;
  if ( *(_QWORD *)(a2 + 24) != v25 )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v26, v25);
  return result;
}
