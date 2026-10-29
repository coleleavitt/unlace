__int64 __fastcall sub_2BAB80(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12)
{
  __m128i *v14; // rsi
  __int64 v16; // rcx
  int v17; // r12d
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  unsigned int v26; // r15d
  const __m128i *v27; // rax
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // rcx
  double v31; // xmm4_8
  double v32; // xmm5_8
  const __m128i *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rcx
  double v36; // xmm4_8
  double v37; // xmm5_8
  char v38; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+Ch] [rbp-7Ch]
  __m128i v40; // [rsp+10h] [rbp-78h] BYREF
  __m128i v41; // [rsp+20h] [rbp-68h] BYREF
  __m128 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(a1 + 384) )
  {
    v40.m128i_i64[0] = __PAIR64__(a3, a2);
    v14 = &v40;
    v40.m128i_i64[1] = -1;
    v17 = sub_2B6070(
            (_QWORD *)a1,
            &v40,
            (__int64)&v40.m128i_i64[1],
            0,
            *(double *)a5.m128_u64,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12);
    v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 504LL);
    if ( v18 == sub_2B36E0 )
    {
      v14 = (__m128i *)a1;
      v19 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, (__int64)&v40, (__int64)sub_2B36E0, v16, *(double *)a5.m128_u64);
      v39 = *(_DWORD *)(v19 + 32);
      if ( v39 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1) )
        sub_169700(
          (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
          a1,
          v20,
          v21,
          v22,
          v23,
          a5,
          a6,
          a7,
          a8,
          v24,
          v25,
          a11,
          a12,
          v38);
      v26 = *(_DWORD *)(v19 + 24);
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(__int64))v18)(a1);
    }
    if ( v17 == v26 )
    {
      v33 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, (__int64)v14, v20, v21, *(double *)a5.m128_u64);
      v34 = *(_QWORD *)(a1 + 16);
      v14 = &v41;
      v41 = _mm_loadu_si128(v33);
      a5 = (__m128)_mm_loadu_si128(v33 + 1);
      v42 = a5;
      v43 = v33[2].m128i_i64[0];
      v42.m128_u64[1] = v40.m128i_u64[1];
      sub_2004D0(v34, v41.m128i_i8, 0, v35, *(double *)a5.m128_u64, a6, a7, a8, v36, v37, a11, a12);
    }
    if ( a4 == 3 )
    {
      if ( v17 < 0 )
        return 0;
    }
    else
    {
      if ( a4 != 1 )
        return 0;
      v14 = (__m128i *)&v40.m128i_u64[1];
      if ( !(unsigned __int8)sub_2BA960(
                               (__int64 *)a1,
                               &v40.m128i_u32[2],
                               (__int64)&v40,
                               v26,
                               v22,
                               v23,
                               a5,
                               a6,
                               a7,
                               a8,
                               v24,
                               v25,
                               a11,
                               a12) )
        return 0;
    }
    v27 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, (__int64)v14, v20, v21, *(double *)a5.m128_u64);
    v28 = *(_QWORD *)(a1 + 16);
    v41 = _mm_loadu_si128(v27);
    v29 = _mm_loadu_si128(v27 + 1);
    v42 = (__m128)v29;
    v43 = v27[2].m128i_i64[0];
    v42.m128_u64[1] = v40.m128i_u64[1];
    sub_2004D0(v28, v41.m128i_i8, 0, v30, *(double *)v29.m128i_i64, a6, a7, a8, v31, v32, a11, a12);
  }
  return 0;
}
