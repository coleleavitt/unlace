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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned int dtype_size; // eax
  __int64 v17; // r14
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // r14
  __int64 v24; // rdi
  unsigned int v26; // eax
  __m128i v27; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v28; // [rsp+10h] [rbp-190h]
  __int64 *v29; // [rsp+18h] [rbp-188h]
  __int64 v30; // [rsp+20h] [rbp-180h]
  unsigned __int8 *v31; // [rsp+28h] [rbp-178h]
  unsigned int v32; // [rsp+34h] [rbp-16Ch]
  __m128i *v33; // [rsp+38h] [rbp-168h]
  __int64 v34; // [rsp+48h] [rbp-158h] BYREF
  __m128 v35; // [rsp+50h] [rbp-150h] BYREF
  __m128i v36; // [rsp+60h] [rbp-140h] BYREF
  __int64 v37; // [rsp+70h] [rbp-130h]
  __m128i v38; // [rsp+78h] [rbp-128h] BYREF
  int v39; // [rsp+88h] [rbp-118h] BYREF
  __int64 v40; // [rsp+90h] [rbp-110h]
  int v41; // [rsp+98h] [rbp-108h]
  _BYTE v42[80]; // [rsp+A0h] [rbp-100h] BYREF
  _BYTE v43[16]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+100h] [rbp-A0h]
  char v45; // [rsp+108h] [rbp-98h] BYREF
  __int64 v46; // [rsp+110h] [rbp-90h]
  __m128i v47; // [rsp+118h] [rbp-88h]
  int v48; // [rsp+138h] [rbp-68h]
  _BYTE v49[40]; // [rsp+140h] [rbp-60h] BYREF
  unsigned __int64 v50; // [rsp+168h] [rbp-38h]

  v7 = v42;
  v9 = v49;
  v30 = a2;
  LODWORD(v29) = a3;
  v31 = a4;
  v32 = a5;
  v50 = __readfsqword(0x28u);
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
  while ( v7 != v49 );
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v27.m128i_i32[0] = get_dtype_size();
  v33 = (__m128i *)&v35;
  sub_32C430((__int64 *)&v35, v11, v27.m128i_u32[0], 2);
  sub_32F0D0((__int64)v42, (int)v29, v27.m128i_i32[0]);
  clear_tinfo_t();
  if ( v31 )
  {
    sub_123A40((__int64)v33, v31, v12, v13);
    v37 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v36 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v38 = 0;
    sub_125180((__int64)v43, (unsigned __int8 *)v33);
    v29 = &v36.m128i_i64[1];
    v44 = v36.m128i_i64[0];
    v31 = (unsigned __int8 *)&v45;
    copy_tinfo_t();
    a7 = 0;
    v14 = v37;
    v37 = 0;
    v15 = _mm_loadu_si128(&v38);
    v38 = 0;
    if ( v46 )
    {
      v28 = v14;
      v27 = v15;
      v47.m128i_i64[0] = 0;
      qfree(v46);
      v14 = v28;
      v15 = _mm_load_si128(&v27);
    }
    v46 = v14;
    v27.m128i_i64[0] = (__int64)&v39;
    v47 = v15;
    copy_argloc();
    v48 = v41;
    cleanup_argloc();
    if ( v37 )
    {
      v38.m128i_i64[0] = 0;
      qfree(v37);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v33);
    v29 = *(__int64 **)(*(_QWORD *)(a1 + 800) + 112LL);
    dtype_size = get_dtype_size();
    sub_32C430(v33->m128i_i64, (__int64)v29, dtype_size, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    LODWORD(v31) = 2;
  }
  else
  {
    LODWORD(v31) = 1;
  }
  qsnprintf();
  if ( v32 == -1 )
  {
    v34 = 1;
  }
  else
  {
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
    v26 = get_dtype_size();
    sub_32C430(&v34, v30, v26, 2);
  }
  v17 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v49, (__int64)&v34, (int)v31, (__int64)v42, 1);
  v18 = (__int64 *)(*(_QWORD *)(v17 + 72) + 216LL);
  v35 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424800);
  sub_316BB0(v18, v33, *(double *)v35.m128_u64, a7);
  v19 = (__int64 *)(*(_QWORD *)(v17 + 72) + 216LL);
  v35 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 8) + 128LL));
  sub_317BD0(v19, v33);
  *(_DWORD *)(*(_QWORD *)(v17 + 72) + 280LL) |= 0x24u;
  if ( v32 != -1 )
  {
    v22 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 68));
    v35.m128_i32[0] = 1;
    *(unsigned __int64 *)((char *)v35.m128_u64 + 4) = _mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(v32)).m128i_u64[0];
    v17 = (__int64)sub_1251B0(v17, (unsigned __int8 *)v33, v20, v21);
    sub_11CDA0((__int64)v33);
  }
  v23 = sub_B5290(*(_QWORD **)(a1 + 16), v17);
  clear_tinfo_t();
  do
  {
    v9 -= 80;
    cleanup_argloc();
    v24 = *((_QWORD *)v9 + 4);
    if ( v24 )
    {
      *((_QWORD *)v9 + 5) = 0;
      qfree(v24);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v9);
  }
  while ( v9 != v42 );
  return v23;
}
