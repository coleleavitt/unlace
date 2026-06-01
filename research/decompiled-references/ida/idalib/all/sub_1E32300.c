__int64 __fastcall sub_1E32300(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int16 *v15; // rsi
  __int64 v17; // r12
  unsigned __int16 *v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  __m128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r12
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __m128i v36; // [rsp+0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+10h] [rbp-58h]
  __m128 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+30h] [rbp-38h]

  v15 = nullptr;
  if ( (*(_WORD *)a2 & 0x200) != 0 )
    v15 = *(unsigned __int16 **)(a2 + 24);
  v17 = sub_1E31000(a1, v15, nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v17 == 1 )
    return 1;
  v19 = *(unsigned __int16 **)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + ((*(_QWORD *)a2 & 0x400) != 0)) + 24);
  v20 = sub_EEE140((_QWORD *)a2);
  sub_1E11A30((__int64)&v36, a1, *(unsigned int *)(a2 + 4), v20, v19, 2, a3, a4);
  if ( (_BYTE)v37 )
    return 1;
  v22 = (__m128)_mm_load_si128(&v36);
  v23 = *(unsigned int *)(a2 + 16);
  v24 = *(unsigned int *)(a2 + 4);
  v38 = v22;
  v25 = *(unsigned int *)(a2 + 20);
  v26 = *a1;
  v39 = v37;
  v30 = sub_1C396C0(
          v26,
          v24,
          v23,
          v17 & 0xFFFFFFFFFFFFFFFELL,
          v25,
          v21,
          *(double *)v22.m128_u64,
          v22.m128_i64[0],
          v22.m128_i64[1]);
  if ( v30 == 1 )
    return 1;
  v33 = sub_1E31000(
          a1,
          *(unsigned __int16 **)(a2
                               + 8LL
                               * (((*(_QWORD *)a2 & 0x200) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x400) != 0) + 1)
                               + 24),
          nullptr,
          v22,
          a4,
          a5,
          a6,
          v31,
          v32,
          a9,
          a10,
          v27,
          v28,
          v29);
  if ( v33 == 1 )
    return 1;
  else
    return sub_1C50070(
             *a1,
             *(_DWORD *)(a2 + 4),
             v30 & 0xFFFFFFFFFFFFFFFELL,
             (_WORD *)(v33 & 0xFFFFFFFFFFFFFFFELL),
             v34,
             v35,
             *(double *)v22.m128_u64);
}
