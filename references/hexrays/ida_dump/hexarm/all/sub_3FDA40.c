__int64 __fastcall sub_3FDA40(__int64 a1, int a2, int a3)
{
  __m128 *v3; // rax
  char *v5; // rbx
  __m128 si128; // xmm1
  __int16 v8; // ax
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int tinfo_size; // eax
  __int64 v16; // rax
  _QWORD *v17; // r14
  int v18; // eax
  const char *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // r14
  int v24; // [rsp+8h] [rbp-218h]
  __int64 v25; // [rsp+10h] [rbp-210h]
  __m128i v26; // [rsp+20h] [rbp-200h] BYREF
  __int64 *v27; // [rsp+30h] [rbp-1F0h] BYREF
  __int128 v28; // [rsp+38h] [rbp-1E8h]
  _BYTE v29[24]; // [rsp+50h] [rbp-1D0h] BYREF
  _BYTE v30[56]; // [rsp+68h] [rbp-1B8h] BYREF
  _BYTE v31[84]; // [rsp+A0h] [rbp-180h] BYREF
  int v32; // [rsp+F4h] [rbp-12Ch]
  __int64 v33; // [rsp+F8h] [rbp-128h]
  _BYTE v34[56]; // [rsp+108h] [rbp-118h] BYREF
  _BYTE v35[160]; // [rsp+140h] [rbp-E0h] BYREF
  char v36; // [rsp+1E0h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+1E8h] [rbp-38h]

  v3 = (__m128 *)v29;
  v5 = &v36;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v37 = __readfsqword(0x28u);
  do
  {
    v3->m128_i32[1] = -1;
    v3 += 5;
    v3[-5].m128_i16[0] = 0;
    v3[-5].m128_i16[1] = 0;
    v3[-5].m128_u64[1] = 0;
    v3[-4] = si128;
    v3[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v3[-3] + 8) = 0;
    v3[-2].m128_i32[2] = 0;
    v3[-1].m128_u64[0] = 0;
    v3[-1].m128_i32[2] = 0;
  }
  while ( v3 != (__m128 *)&v36 );
  v8 = *(_WORD *)(a1 + 48);
  if ( v8 == 30 )
  {
    if ( *(char *)(a1 + 54) < 0 )
    {
      v9 = 0;
      if ( (unsigned __int8)(*(_BYTE *)(a1 + 69) - 16) > 1u )
        goto LABEL_6;
      goto LABEL_16;
    }
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  if ( v8 != 32 || *(char *)(a1 + 54) >= 0 )
    goto LABEL_5;
  v9 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 69) - 16) > 1u )
    goto LABEL_6;
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFF00000000FF00LL) == 0xA2000000000100LL )
  {
    sub_3FD660(a1, a2, a3, 8);
    goto LABEL_24;
  }
LABEL_16:
  v9 = 0;
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFF00000000FF00LL) != 0xA2000000000300LL )
    goto LABEL_6;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 832);
  v26.m128i_i64[0] = 39;
  v25 = v12;
  v24 = v13;
  copy_tinfo_t(v30, &v26);
  clear_tinfo_t(&v26);
  v14 = getinf(59);
  sub_120450((__int64)v29, v24, 0, v14, v25, 0);
  v26.m128i_i64[0] = 39;
  tinfo_size = get_tinfo_size(0, 39, 0);
  sub_32F3F0((__int64)v31, a2, tinfo_size, (__int64)&v26);
  clear_tinfo_t(&v26);
  v16 = sub_3FB1A0(a1, 8);
  v31[80] = 4;
  v33 = v16;
  v32 = *(_DWORD *)(v16 + 68);
  copy_tinfo_t(v34, *(_QWORD *)(v16 + 72) + 72LL);
  v17 = (_QWORD *)(*(_QWORD *)(a1 + 800) + 240LL);
  v18 = get_tinfo_size(0, *v17, 0);
  sub_32F3F0((__int64)v35, a3, v18, (__int64)v17);
  v19 = "svst1_hor_za8";
  if ( *(_WORD *)(a1 + 48) == 30 )
    v19 = "svld1_hor_za8";
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_QWORD *)(a1 + 40);
  v26.m128i_i64[0] = 1;
  v22 = sub_335C70(v20, v21, (__int64)v19, &v26, 4, (__int64)v29, 0);
  clear_tinfo_t(&v26);
  v23 = *(_QWORD *)(v22 + 72);
  *(_DWORD *)(v23 + 280) |= 4u;
  if ( *(_WORD *)(a1 + 48) == 30 )
  {
    v26 = _mm_load_si128((const __m128i *)&xmmword_41F900);
    sub_316F70((__int64 *)(v23 + 216), &v26, *(double *)v26.m128i_i64, si128);
  }
  else
  {
    v26 = 0u;
    v27 = nullptr;
    v28 = 0;
    v27 = (__int64 *)qvector_reserve(&v27, 0, 1, 16);
    *(__m128i *)&v27[2 * v28] = _mm_load_si128((const __m128i *)&xmmword_41F900);
    *(_QWORD *)&v28 = v28 + 1;
    sub_63C80((__int64 *)(v23 + 136), v26.m128i_i64);
    sub_317070((__int64 *)(v23 + 152), &v27);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    qfree(v26.m128i_i64[0]);
  }
  sub_B4CD0(*(_QWORD **)(a1 + 16), v22);
LABEL_24:
  v9 = 1;
  do
  {
LABEL_6:
    v5 -= 80;
    cleanup_argloc(v5 + 56);
    v10 = *((_QWORD *)v5 + 4);
    if ( v10 )
    {
      *((_QWORD *)v5 + 5) = 0;
      qfree(v10);
    }
    clear_tinfo_t(v5 + 24);
    sub_11C7E0((__int64)v5);
  }
  while ( v5 != v29 );
  return v9;
}
