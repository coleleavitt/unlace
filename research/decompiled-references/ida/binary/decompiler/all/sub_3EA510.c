__int64 __fastcall sub_3EA510(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  _BYTE *v5; // rax
  _BYTE *v7; // rbx
  __m128i si128; // xmm2
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned int dtype_size; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // r14
  unsigned int v21; // eax
  __int64 v22; // [rsp-8h] [rbp-1A8h]
  __int64 v23; // [rsp-8h] [rbp-1A8h]
  __m128i v24; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+10h] [rbp-190h]
  __int8 *v26; // [rsp+18h] [rbp-188h]
  __int64 v27; // [rsp+20h] [rbp-180h]
  unsigned __int8 *v28; // [rsp+28h] [rbp-178h]
  unsigned int v29; // [rsp+34h] [rbp-16Ch]
  __m128 *v30; // [rsp+38h] [rbp-168h]
  __int64 v31; // [rsp+48h] [rbp-158h] BYREF
  __m128 v32; // [rsp+50h] [rbp-150h] BYREF
  __m128i v33; // [rsp+60h] [rbp-140h] BYREF
  __int64 v34; // [rsp+70h] [rbp-130h]
  __m128i v35; // [rsp+78h] [rbp-128h] BYREF
  int v36; // [rsp+88h] [rbp-118h] BYREF
  __int64 v37; // [rsp+90h] [rbp-110h]
  int v38; // [rsp+98h] [rbp-108h]
  _BYTE v39[80]; // [rsp+A0h] [rbp-100h] BYREF
  _BYTE v40[16]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+100h] [rbp-A0h]
  char v42; // [rsp+108h] [rbp-98h] BYREF
  __int64 v43; // [rsp+110h] [rbp-90h]
  __m128i v44; // [rsp+118h] [rbp-88h]
  int v45; // [rsp+138h] [rbp-68h]
  _BYTE v46[40]; // [rsp+140h] [rbp-60h] BYREF
  unsigned __int64 v47; // [rsp+168h] [rbp-38h]

  v5 = v39;
  v7 = v46;
  v27 = a2;
  LODWORD(v26) = a3;
  v28 = a4;
  v29 = a5;
  v47 = __readfsqword(0x28u);
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    *(_OWORD *)(v5 + 40) = 0;
    *(_WORD *)v5 = 0;
    v5 += 80;
    *((_WORD *)v5 - 39) = 0;
    *((_DWORD *)v5 - 19) = -1;
    *((_QWORD *)v5 - 9) = 0;
    *((__m128i *)v5 - 4) = si128;
    *((_QWORD *)v5 - 6) = 0;
    *((_DWORD *)v5 - 6) = 0;
    *((_QWORD *)v5 - 2) = 0;
    *((_DWORD *)v5 - 2) = 0;
  }
  while ( v46 != v5 );
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v24.m128i_i32[0] = get_dtype_size();
  v30 = &v32;
  sub_328FE0(&v32, v9, v24.m128i_u32[0], 2);
  sub_32BC70(v39, (unsigned int)v26, v24.m128i_u32[0], &v32);
  clear_tinfo_t();
  if ( v28 )
  {
    sub_121540((__int64)v30, v28);
    v34 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v33 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    v35 = 0;
    sub_122C80((__int64)v40, (unsigned __int8 *)v30);
    v26 = &v33.m128i_i8[8];
    v41 = v33.m128i_i64[0];
    v28 = (unsigned __int8 *)&v42;
    copy_tinfo_t();
    v10 = v34;
    v34 = 0;
    v11 = _mm_loadu_si128(&v35);
    v35 = 0;
    if ( v43 )
    {
      v25 = v10;
      v24 = v11;
      v44.m128i_i64[0] = 0;
      qfree();
      v10 = v25;
      v11 = _mm_load_si128(&v24);
    }
    v43 = v10;
    v24.m128i_i64[0] = (__int64)&v36;
    v44 = v11;
    copy_argloc();
    v45 = v38;
    cleanup_argloc();
    if ( v34 )
    {
      v35.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960((__int64)v30);
    v26 = *(__int8 **)(*(_QWORD *)(a1 + 800) + 112LL);
    dtype_size = get_dtype_size();
    sub_328FE0(v30, v26, dtype_size, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    LODWORD(v28) = 2;
  }
  else
  {
    LODWORD(v28) = 1;
  }
  qsnprintf();
  if ( v29 == -1 )
  {
    v31 = 1;
  }
  else
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
    v21 = get_dtype_size();
    sub_328FE0(&v31, v27, v21, 2);
  }
  v13 = sub_332690(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 40),
          (unsigned int)v46,
          (unsigned int)&v31,
          (_DWORD)v28,
          (unsigned int)v39,
          1,
          v22,
          v24.m128i_i32[0],
          v24.m128i_i32[2],
          v25,
          (_DWORD)v26);
  sub_313630(*(_QWORD *)(v13 + 72) + 216LL, &xmmword_4ED7D0, v23, v14, v15, v16);
  v17 = *(_QWORD *)(v13 + 72) + 216LL;
  v32 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 8) + 128LL));
  sub_314680(v17, v30);
  *(_DWORD *)(*(_QWORD *)(v13 + 72) + 280LL) |= 0x24u;
  if ( v29 != -1 )
  {
    v18 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 68));
    v32.m128_i32[0] = 1;
    *(unsigned __int64 *)((char *)v32.m128_u64 + 4) = _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v29)).m128i_u64[0];
    v13 = (__int64)sub_122CB0(v13, (unsigned __int8 *)v30);
    sub_11A960((__int64)v30);
  }
  v19 = sub_B4460(*(_QWORD **)(a1 + 16), v13);
  clear_tinfo_t();
  do
  {
    v7 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v7 + 4) )
    {
      *((_QWORD *)v7 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960((__int64)v7);
  }
  while ( v7 != v39 );
  return v19;
}
