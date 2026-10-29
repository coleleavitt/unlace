__int64 __fastcall sub_714490(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  unsigned __int8 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  void *v19; // rdi
  __int64 v20; // rsi
  double v21; // xmm4_8
  double v22; // xmm5_8
  __m128i v23; // xmm0
  double v24; // xmm4_8
  double v25; // xmm5_8
  __m128i si128; // xmm0
  __int64 v27; // rbx
  __int64 v28; // r14
  __m128i v29; // rax
  void *v31; // rax
  unsigned __int8 v33; // [rsp+Fh] [rbp-A9h]
  unsigned __int64 v34; // [rsp+10h] [rbp-A8h]
  void *v35[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v36; // [rsp+30h] [rbp-88h]
  void *v37[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v38; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+58h] [rbp-60h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( a2 )
  {
    v13 = *(unsigned int *)(a2 + 48);
    do
    {
      v14 = *(_QWORD *)(a2 + 24);
      v15 = sub_F65140(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v16 = **(_QWORD **)(a2 + 40);
      if ( ((*(_WORD *)(v16 + 2) >> 6) & 7) == 2 )
      {
        v18 = *(unsigned __int16 *)(v16 + 2 * v13 + 4LL * *(unsigned int *)(v16 + 4) + 20);
      }
      else
      {
        v17 = *(unsigned int *)(v16 + 4);
        if ( ((*(_WORD *)(v16 + 2) >> 6) & 7) == 4 )
          v18 = *(unsigned int *)(v16 + 4 * (v13 + v17) + 20);
        else
          v18 = *(unsigned __int8 *)(v13 + v16 + 4 * v17 + 20);
      }
      v19 = *(void **)(v14 + 16);
      v20 = *(unsigned int *)(v14 + 24);
      if ( (unsigned __int64)(v20 + 63) <= 0x7F )
      {
        LODWORD(v35[1]) = *(_DWORD *)(v14 + 24);
        v35[0] = v19;
        LODWORD(v37[1]) = v20;
      }
      else
      {
        v34 = v18;
        v33 = v15;
        sub_2205610(v35, v20, (unsigned __int64)(v20 + 63) >> 6, v19);
        LODWORD(v20) = v35[1];
        v15 = v33;
        v18 = v34;
        LODWORD(v37[1]) = v35[1];
        if ( LODWORD(v35[1]) > 0x40 )
        {
          sub_2205470(v37, v34, v33);
          goto LABEL_9;
        }
      }
      if ( v15 )
      {
        v31 = (void *)(v18 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v20));
        if ( !(_DWORD)v20 )
          v31 = nullptr;
        v37[0] = v31;
      }
      else
      {
        v37[0] = (void *)v18;
      }
LABEL_9:
      sub_C0CB30(v14 + 16, *(_QWORD *)(a2 + 32), v37);
      if ( LODWORD(v37[1]) > 0x40 && v37[0] )
        operator delete[](v37[0]);
      if ( LODWORD(v35[1]) > 0x40 && v35[0] )
        operator delete[](v35[0]);
      if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, v21, v22, a10, a11) )
        return 0;
      ++v13;
      v23 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 48)), (__m128i)0LL);
      a5 = _mm_srli_si128(v23, 8);
      *(_QWORD *)&a4 = _mm_add_epi64(v23, a5).m128i_u64[0];
    }
    while ( v13 < *(_QWORD *)&a4 );
  }
  sub_EE9E50(v37, a2);
  si128 = _mm_load_si128((const __m128i *)v37);
  v27 = v39;
  v28 = v40;
  v36 = v38;
  v29 = si128;
  *(__m128i *)v35 = si128;
LABEL_18:
  if ( v27 == v29.m128i_i64[0] )
  {
LABEL_24:
    if ( v28 == v29.m128i_i64[1] )
      return 1;
  }
  if ( (v29.m128i_i8[8] & 3) != 0 )
    v29.m128i_i64[0] = sub_EF2B30(v35);
  while ( (unsigned __int8)sub_70DBE0(
                             a1,
                             *(_QWORD *)v29.m128i_i64[0],
                             a3,
                             *(double *)si128.m128i_i64,
                             a5,
                             a6,
                             a7,
                             v24,
                             v25,
                             a10,
                             a11) )
  {
    v29.m128i_i64[1] = (__int64)v35[1];
    if ( ((__int64)v35[1] & 3) != 0 )
    {
      if ( v35[1] <= (char *)&dword_0 + 3 )
        sub_EF2750(v35, 1);
      else
        sub_EF2960(v35);
      v29 = *(__m128i *)v35;
      goto LABEL_18;
    }
    v29.m128i_i64[0] = (__int64)v35[0] + 8;
    v35[0] = (void *)v29.m128i_i64[0];
    if ( v27 == v29.m128i_i64[0] )
      goto LABEL_24;
  }
  return 0;
}
