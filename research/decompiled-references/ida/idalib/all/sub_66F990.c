bool __fastcall sub_66F990(
        __int64 *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int128 v11; // kr00_16
  unsigned __int64 *v13; // r12
  unsigned __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v9 = *a1;
  v15 = __readfsqword(0x28u);
  v14 = 0;
  sub_630CA0(v9, 26, &v14, 0x10u, a8);
  v10 = a1[3];
  v14 = (unsigned __int128)_mm_sub_epi64(
                             _mm_load_si128((const __m128i *)&v14),
                             _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2));
  v11 = __PAIR128__(_mm_movehl_ps(a5, (__m128)v14).m128_u64[0], v14);
  if ( *(_DWORD *)(v10 + 24) == 4 )
  {
    if ( (unsigned __int8)rangeset_t_has_common(a1 + 135, &v14, 0) )
      return 0;
    v11 = v14;
  }
  if ( (unsigned __int64)v11 >= *((_QWORD *)&v11 + 1) )
    return 0;
  v13 = sub_506150((__int64)(a1 + 203));
  if ( !v13 )
    return 0;
  return (*(_QWORD *)(a1[3] + 16) & (*sub_5060F0((__int64)(a1 + 203), 0xFFFFFFFFFFFFFFFFLL) - a2)) >= (*(_QWORD *)(a1[3] + 16) & (*v13 - a2));
}
