__int64 __fastcall sub_1C03A60(
        __m128 *a1,
        unsigned int a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10)
{
  unsigned int v14; // ebx
  __int64 *v15; // rbx
  __int64 v16; // rax
  __m128 v18; // xmm1
  void *v19; // rax
  _QWORD *v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r14
  char v23; // al
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // r11d
  unsigned __int64 v27; // rax
  int v28; // [rsp+8h] [rbp-80h]
  __m128i src; // [rsp+20h] [rbp-68h] BYREF
  void *v30[2]; // [rsp+30h] [rbp-58h]
  __int128 v31; // [rsp+40h] [rbp-48h]

  sub_1BD2860((__int64 *)a8, 0);
  v14 = *(_DWORD *)(a7 + 16);
  if ( v14 )
  {
    src = 0;
    *(_OWORD *)v30 = 0;
    v31 = 0;
    v15 = sub_19CB370(a1, (_DWORD *)a9, *(_QWORD *)(a9 + 8), a2, 0, &src, (__m128)0LL, a4, 0, 0, a7, 0, 0, 0, nullptr);
    if ( HIDWORD(v30[1]) )
      free(v30[0]);
    if ( v15 != (__int64 *)((char *)&dword_0 + 1) )
    {
      v16 = sub_192A5E0(
              (__int64)a1,
              0,
              (unsigned __int16 *)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL),
              a2,
              nullptr,
              0,
              (__m128)0LL,
              a4,
              a2,
              0,
              0,
              0);
      *a10 = v16;
      if ( v16 != 1 )
        return 0;
    }
LABEL_18:
    v14 = 2;
    *a10 = 1;
    return v14;
  }
  v18 = (__m128)_mm_loadu_si128(a6);
  v19 = (void *)a6[1].m128i_i64[0];
  src = (__m128i)v18;
  v20 = (_QWORD *)a1[15].m128_u64[1];
  v30[0] = v19;
  v21 = sub_C98860(v20, 0, 0, 0, &src, 1, &src, (__int64)&src, 0, 0);
  if ( v21 == 1 )
    return 2;
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v23 = sub_1BF5170((__int64)a1, v22, v22, (unsigned __int64 *)&a9, 1, a2, a3, v18, (unsigned int *)a8, a10);
  if ( !*(_DWORD *)(a8 + 8) && (*(_DWORD *)(a8 + 2864) & 0x3FFFFFFF) == 0
    || v23
    || ((v24 = *(_QWORD *)(v22 + 40), src = _mm_loadu_si128((const __m128i *)(v22 + 40)), !v24)
      ? (v25 = *(_DWORD *)(v22 + 24))
      : (v25 = sub_BF6BF0(&src)),
        v26 = sub_1BF27B0(a8, a1, v25, (__int64 **)&src, *(double *)a3.m128_u64, v18),
        v26 == 1) )
  {
    v14 = 1;
    *a10 = 1;
    return v14;
  }
  v28 = v26;
  v27 = sub_1C028B0(
          (__int64)a1,
          0,
          v22,
          v22,
          a2,
          a2,
          a3,
          v18,
          (unsigned __int64 *)&a9,
          1u,
          0,
          a8,
          src.m128i_i64,
          v26,
          0);
  *a10 = v27;
  if ( v27 == 1 || v28 )
    goto LABEL_18;
  return v14;
}
