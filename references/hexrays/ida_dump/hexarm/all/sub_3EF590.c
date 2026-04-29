__int64 __fastcall sub_3EF590(
        __int64 a1,
        const char *a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int8 a6,
        double a7,
        __m128 a8)
{
  _BYTE *v8; // rax
  _BYTE *v10; // rbx
  __m128i si128; // xmm2
  __int64 v13; // rsi
  __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned int dtype_size; // eax
  const char *v17; // r8
  __int64 v18; // r14
  __int64 *v19; // rdi
  __int64 *v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // r14
  __int64 v23; // rdi
  unsigned int v25; // eax
  __m128i v26; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v27; // [rsp+10h] [rbp-190h]
  __int64 *v28; // [rsp+18h] [rbp-188h]
  const char *v29; // [rsp+20h] [rbp-180h]
  unsigned __int8 *v30; // [rsp+28h] [rbp-178h]
  unsigned int v31; // [rsp+34h] [rbp-16Ch]
  __m128i *v32; // [rsp+38h] [rbp-168h]
  __int64 v33; // [rsp+48h] [rbp-158h] BYREF
  __m128 v34; // [rsp+50h] [rbp-150h] BYREF
  __m128i v35; // [rsp+60h] [rbp-140h] BYREF
  __int64 v36; // [rsp+70h] [rbp-130h]
  __m128i v37; // [rsp+78h] [rbp-128h] BYREF
  int v38; // [rsp+88h] [rbp-118h] BYREF
  __int64 v39; // [rsp+90h] [rbp-110h]
  int v40; // [rsp+98h] [rbp-108h]
  _BYTE v41[80]; // [rsp+A0h] [rbp-100h] BYREF
  _BYTE v42[16]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+100h] [rbp-A0h]
  _BYTE v44[8]; // [rsp+108h] [rbp-98h] BYREF
  __int64 v45; // [rsp+110h] [rbp-90h]
  __m128i v46; // [rsp+118h] [rbp-88h]
  _BYTE v47[16]; // [rsp+128h] [rbp-78h] BYREF
  int v48; // [rsp+138h] [rbp-68h]
  _BYTE v49[40]; // [rsp+140h] [rbp-60h] BYREF
  unsigned __int64 v50; // [rsp+168h] [rbp-38h]

  v8 = v41;
  v10 = v49;
  v29 = a2;
  LODWORD(v28) = a3;
  v30 = a4;
  v31 = a5;
  v50 = __readfsqword(0x28u);
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    *(_OWORD *)(v8 + 40) = 0;
    *(_WORD *)v8 = 0;
    v8 += 80;
    *((_WORD *)v8 - 39) = 0;
    *((_DWORD *)v8 - 19) = -1;
    *((_QWORD *)v8 - 9) = 0;
    *((__m128i *)v8 - 4) = si128;
    *((_QWORD *)v8 - 6) = 0;
    *((_DWORD *)v8 - 6) = 0;
    *((_QWORD *)v8 - 2) = 0;
    *((_DWORD *)v8 - 2) = 0;
  }
  while ( v8 != v49 );
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v26.m128i_i32[0] = get_dtype_size(2);
  v32 = (__m128i *)&v34;
  sub_32C760((__int64 *)&v34, v13, v26.m128i_u32[0], 2);
  sub_32F3F0((__int64)v41, (int)v28, v26.m128i_i32[0], (__int64)&v34);
  clear_tinfo_t(&v34);
  if ( v30 )
  {
    sub_123480((__int64)v32, v30);
    v36 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v35 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v37 = 0;
    sub_124BC0((__int64)v42, (unsigned __int8 *)v32);
    v28 = &v35.m128i_i64[1];
    v43 = v35.m128i_i64[0];
    v30 = v44;
    copy_tinfo_t(v44, &v35.m128i_u64[1]);
    a8 = 0;
    v14 = v36;
    v36 = 0;
    v15 = _mm_loadu_si128(&v37);
    v37 = 0;
    if ( v45 )
    {
      v27 = v14;
      v26 = v15;
      v46.m128i_i64[0] = 0;
      qfree(v45);
      v14 = v27;
      v15 = _mm_load_si128(&v26);
    }
    v45 = v14;
    v26.m128i_i64[0] = (__int64)&v38;
    v46 = v15;
    copy_argloc(v47, &v38);
    v48 = v40;
    cleanup_argloc(v26.m128i_i64[0]);
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v36);
    }
    clear_tinfo_t(v28);
    sub_11C7E0((__int64)v32);
    v28 = *(__int64 **)(*(_QWORD *)(a1 + 800) + 112LL);
    dtype_size = get_dtype_size(a6);
    sub_32C760(v32->m128i_i64, (__int64)v28, dtype_size, 2);
    copy_tinfo_t(v30, v32);
    clear_tinfo_t(v32);
    LODWORD(v30) = 2;
  }
  else
  {
    LODWORD(v30) = 1;
  }
  v17 = "dword";
  if ( a6 != 2 )
  {
    if ( a6 > 2u )
    {
      v17 = "qword";
      if ( a6 != 7 )
        v17 = nullptr;
    }
    else
    {
      v17 = "byte";
      if ( a6 )
        v17 = "word";
    }
  }
  qsnprintf(v49, 32, "__%s%s", v29, v17);
  if ( v31 == -1 )
  {
    v33 = 1;
  }
  else
  {
    v29 = *(const char **)(*(_QWORD *)(a1 + 800) + 112LL);
    v25 = get_dtype_size(a6);
    sub_32C760(&v33, (__int64)v29, v25, 2);
  }
  v18 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v49, &v33, (int)v30, (__int64)v41, 1);
  v19 = (__int64 *)(*(_QWORD *)(v18 + 72) + 216LL);
  v34 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_316F70(v19, v32, *(double *)v34.m128_u64, a8);
  v20 = (__int64 *)(*(_QWORD *)(v18 + 72) + 216LL);
  v34 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 8) + 128LL));
  sub_317F90(v20, v32);
  *(_DWORD *)(*(_QWORD *)(v18 + 72) + 280LL) |= 0x24u;
  if ( v31 != -1 )
  {
    v21 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 68));
    v34.m128_i32[0] = 1;
    *(unsigned __int64 *)((char *)v34.m128_u64 + 4) = _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v31)).m128i_u64[0];
    v18 = (__int64)sub_124BF0(v18, (unsigned __int8 *)v32);
    sub_11C7E0((__int64)v32);
  }
  v22 = sub_B4CD0(*(_QWORD **)(a1 + 16), v18);
  clear_tinfo_t(&v33);
  do
  {
    v10 -= 80;
    cleanup_argloc(v10 + 56);
    v23 = *((_QWORD *)v10 + 4);
    if ( v23 )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree(v23);
    }
    clear_tinfo_t(v10 + 24);
    sub_11C7E0((__int64)v10);
  }
  while ( v10 != v41 );
  return v22;
}
