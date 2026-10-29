unsigned __int64 __fastcall sub_EBE170(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 a8,
        __int128 a9,
        const __m128i *a10,
        __int128 a11,
        __int128 a12,
        __int128 a13,
        __int128 a14,
        __int128 a15,
        __int128 a16,
        __int128 a17,
        __int64 a18,
        __int64 a19,
        void *a20,
        size_t n,
        int a22)
{
  const __m128i *v23; // r13
  size_t v24; // r14
  unsigned __int64 v25; // rbx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  int v28; // eax
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  void *src; // [rsp+18h] [rbp-50h]
  _OWORD v42[4]; // [rsp+20h] [rbp-48h] BYREF

  v23 = a10;
  src = a20;
  v24 = n;
  v25 = sub_EBD890(
          (__int64 *)(a1 + 2352),
          *((_QWORD *)&a8 + 1) + 8 * *((_QWORD *)&a8 + 1) * (3LL * (a7 == 1) + 5) + 104,
          3u);
  *(_DWORD *)(v25 + 16) = DWORD2(a8);
  *(_DWORD *)v25 = a2;
  *(_DWORD *)(v25 + 4) = a6;
  v26 = _mm_loadu_si128((const __m128i *)&a9);
  *(_DWORD *)(v25 + 8) = 85;
  *(_DWORD *)(v25 + 12) = a3;
  *(_QWORD *)(v25 + 24) = 0;
  *(_DWORD *)(v25 + 32) = 103;
  *(_QWORD *)(v25 + 40) = 0;
  *(_DWORD *)(v25 + 56) = a4;
  *(_DWORD *)(v25 + 60) = a5;
  *(__m128i *)(v25 + 64) = v26;
  v27 = _mm_loadu_si128(v23);
  *(_DWORD *)(v25 + 48) = a7;
  v28 = a22;
  *(__m128i *)(v25 + 80) = v27;
  *(_DWORD *)(v25 + 52) = v28;
  *(_QWORD *)(v25 + 96) = v23[1].m128i_i64[0];
  v42[0] = a8;
  sub_EB8020((__int64)v42, (char *)(v25 + 104));
  v29 = (char *)(v25 + 8LL * *(unsigned int *)(v25 + 16) + 104);
  v42[0] = _mm_loadu_si128((const __m128i *)&a11);
  sub_EB8020((__int64)v42, v29);
  v30 = 16LL * *(unsigned int *)(v25 + 16);
  v42[0] = _mm_loadu_si128((const __m128i *)&a12);
  sub_EB8020((__int64)v42, (char *)(v25 + v30 + 104));
  v31 = 3LL * *(unsigned int *)(v25 + 16);
  v42[0] = _mm_loadu_si128((const __m128i *)&a13);
  sub_EB8020((__int64)v42, (char *)(v25 + 8 * v31 + 104));
  v32 = 32LL * *(unsigned int *)(v25 + 16);
  v42[0] = _mm_loadu_si128((const __m128i *)&a14);
  sub_EB8020((__int64)v42, (char *)(v25 + v32 + 104));
  v33 = a18;
  *(_DWORD *)(v25 + 32) = 103;
  *(_QWORD *)(v25 + 24) = v33;
  *(_QWORD *)(v25 + 40) = a19;
  if ( v24 )
  {
    memmove(
      (void *)(v25 + 8LL * *(_DWORD *)(v25 + 16) * (3 * (unsigned int)(*(_DWORD *)(v25 + 48) == 1) + 5) + 104),
      src,
      v24);
    if ( a7 != 1 )
      return v25;
LABEL_5:
    v35 = 5LL * *(unsigned int *)(v25 + 16);
    v42[0] = _mm_loadu_si128((const __m128i *)&a15);
    sub_EB8020((__int64)v42, (char *)(v25 + 8 * v35 + 104));
    v36 = 3LL * *(unsigned int *)(v25 + 16);
    v42[0] = _mm_loadu_si128((const __m128i *)&a16);
    sub_EB8020((__int64)v42, (char *)(v25 + 16 * v36 + 104));
    v37 = *(unsigned int *)(v25 + 16);
    v42[0] = _mm_loadu_si128((const __m128i *)&a17);
    sub_EB8020((__int64)v42, (char *)(v25 + 56 * v37 + 104));
    return v25;
  }
  if ( a7 == 1 )
    goto LABEL_5;
  return v25;
}
