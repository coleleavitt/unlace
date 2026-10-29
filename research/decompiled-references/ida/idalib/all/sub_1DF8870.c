__m128 *__fastcall sub_1DF8870(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  unsigned __int16 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 *result; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __m128 *v27; // rdx

  v14 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return (__m128 *)(&dword_0 + 1);
  v22 = sub_1A89000(
          *(__int64 **)(*a1 + 736),
          *(_DWORD *)(a2 + 8),
          (_QWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL),
          v15,
          v16,
          v17,
          a7,
          a8);
  if ( v22 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v25 = sub_1DF6720(a1, *(_WORD **)(a2 + 24), nullptr, a7, a8, a9, a10, v23, v24, a13, a14, v19, v20, v21);
  if ( v25 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v27 = (__m128 *)(v22 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v27, v26);
  if ( *(__m128 **)(a2 + 16) != v27 )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v27, v26);
  result = (__m128 *)a2;
  if ( *(_QWORD *)(a2 + 24) != v26 )
    return sub_1A861A0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v27, v26);
  return result;
}
