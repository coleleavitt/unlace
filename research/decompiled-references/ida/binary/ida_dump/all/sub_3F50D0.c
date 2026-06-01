__int64 __fastcall sub_3F50D0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        double a6,
        __m128 a7)
{
  _BYTE *v7; // rax
  _BYTE *v9; // rbx
  __m128i si128; // xmm2
  __int64 v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int dtype_size; // eax
  __int64 v15; // r14
  __int64 *v16; // rdi
  __int64 *v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // r14
  unsigned int v21; // eax
  __m128i v22; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v23; // [rsp+10h] [rbp-190h]
  __int64 *v24; // [rsp+18h] [rbp-188h]
  __int64 v25; // [rsp+20h] [rbp-180h]
  unsigned __int8 *v26; // [rsp+28h] [rbp-178h]
  unsigned int v27; // [rsp+34h] [rbp-16Ch]
  __m128i *v28; // [rsp+38h] [rbp-168h]
  __int64 v29; // [rsp+48h] [rbp-158h] BYREF
  __m128 v30; // [rsp+50h] [rbp-150h] BYREF
  __m128i v31; // [rsp+60h] [rbp-140h] BYREF
  __int64 v32; // [rsp+70h] [rbp-130h]
  __m128i v33; // [rsp+78h] [rbp-128h] BYREF
  int v34; // [rsp+88h] [rbp-118h] BYREF
  __int64 v35; // [rsp+90h] [rbp-110h]
  int v36; // [rsp+98h] [rbp-108h]
  _BYTE v37[80]; // [rsp+A0h] [rbp-100h] BYREF
  _BYTE v38[16]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+100h] [rbp-A0h]
  char v40; // [rsp+108h] [rbp-98h] BYREF
  __int64 v41; // [rsp+110h] [rbp-90h]
  __m128i v42; // [rsp+118h] [rbp-88h]
  int v43; // [rsp+138h] [rbp-68h]
  _BYTE v44[40]; // [rsp+140h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+168h] [rbp-38h]

  v7 = v37;
  v9 = v44;
  v25 = a2;
  LODWORD(v24) = a3;
  v26 = a4;
  v27 = a5;
  v45 = __readfsqword(0x28u);
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    *(_OWORD *)(v7 + 40) = 0;
    *(_WORD *)v7 = 0;
    v7 += 80;
    *((_WORD *)v7 - 39) = 0;
    *((_DWORD *)v7 - 19) = -1;
    *((_QWORD *)v7 - 9) = 0;
    *((__m128i *)v7 - 4) = si128;
    *((_QWORD *)v7 - 6) = 0;
    *((_DWORD *)v7 - 6) = 0;
    *((_QWORD *)v7 - 2) = 0;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( v7 != v44 );
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v22.m128i_i32[0] = get_dtype_size();
  v28 = (__m128i *)&v30;
  sub_32C430((__int64 *)&v30, v11, v22.m128i_u32[0], 2);
  sub_32F0D0((__int64)v37, (int)v24, v22.m128i_i32[0]);
  clear_tinfo_t();
  if ( v26 )
  {
    sub_123A40((__int64)v28, v26);
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v31 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v33 = 0;
    sub_125180((__int64)v38, (unsigned __int8 *)v28);
    v24 = &v31.m128i_i64[1];
    v39 = v31.m128i_i64[0];
    v26 = (unsigned __int8 *)&v40;
    copy_tinfo_t();
    a7 = 0;
    v12 = v32;
    v32 = 0;
    v13 = _mm_loadu_si128(&v33);
    v33 = 0;
    if ( v41 )
    {
      v23 = v12;
      v22 = v13;
      v42.m128i_i64[0] = 0;
      qfree();
      v12 = v23;
      v13 = _mm_load_si128(&v22);
    }
    v41 = v12;
    v22.m128i_i64[0] = (__int64)&v34;
    v42 = v13;
    copy_argloc();
    v43 = v36;
    cleanup_argloc();
    if ( v32 )
    {
      v33.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v28);
    v24 = *(__int64 **)(*(_QWORD *)(a1 + 800) + 112LL);
    dtype_size = get_dtype_size();
    sub_32C430(v28->m128i_i64, (__int64)v24, dtype_size, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    LODWORD(v26) = 2;
  }
  else
  {
    LODWORD(v26) = 1;
  }
  qsnprintf();
  if ( v27 == -1 )
  {
    v29 = 1;
  }
  else
  {
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
    v21 = get_dtype_size();
    sub_32C430(&v29, v25, v21, 2);
  }
  v15 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v44, &v29, (int)v26, (__int64)v37, 1);
  v16 = (__int64 *)(*(_QWORD *)(v15 + 72) + 216LL);
  v30 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424800);
  sub_316BB0(v16, v28, *(double *)v30.m128_u64, a7);
  v17 = (__int64 *)(*(_QWORD *)(v15 + 72) + 216LL);
  v30 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 8) + 128LL));
  sub_317BD0(v17, v28);
  *(_DWORD *)(*(_QWORD *)(v15 + 72) + 280LL) |= 0x24u;
  if ( v27 != -1 )
  {
    v18 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 68));
    v30.m128_i32[0] = 1;
    *(unsigned __int64 *)((char *)v30.m128_u64 + 4) = _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v27)).m128i_u64[0];
    v15 = (__int64)sub_1251B0(v15, (unsigned __int8 *)v28);
    sub_11CDA0((__int64)v28);
  }
  v19 = sub_B5290(*(_QWORD **)(a1 + 16), v15);
  clear_tinfo_t();
  do
  {
    v9 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v9 + 4) )
    {
      *((_QWORD *)v9 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v9);
  }
  while ( v9 != v37 );
  return v19;
}
