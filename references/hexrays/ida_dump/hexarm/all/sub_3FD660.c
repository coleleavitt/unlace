__int64 __fastcall sub_3FD660(__int64 a1, int a2, int a3, int a4)
{
  __m128i *v5; // rax
  _BYTE *v6; // rbx
  __m128i si128; // xmm1
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // edx
  int tinfo_size; // eax
  __int64 v13; // rax
  char v14; // dl
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v21; // [rsp+18h] [rbp-1A8h]
  _QWORD *v22; // [rsp+20h] [rbp-1A0h]
  __int64 v23; // [rsp+38h] [rbp-188h] BYREF
  __int64 v24; // [rsp+40h] [rbp-180h] BYREF
  __int64 v25; // [rsp+48h] [rbp-178h] BYREF
  __int64 *v26; // [rsp+50h] [rbp-170h] BYREF
  __int128 v27; // [rsp+58h] [rbp-168h]
  _BYTE v28[4]; // [rsp+70h] [rbp-150h] BYREF
  int v29; // [rsp+74h] [rbp-14Ch]
  __int64 v30; // [rsp+78h] [rbp-148h]
  _BYTE v31[56]; // [rsp+88h] [rbp-138h] BYREF
  _BYTE v32[80]; // [rsp+C0h] [rbp-100h] BYREF
  _BYTE v33[80]; // [rsp+110h] [rbp-B0h] BYREF
  _BYTE v34[40]; // [rsp+160h] [rbp-60h] BYREF
  unsigned __int64 v35; // [rsp+188h] [rbp-38h]

  v5 = (__m128i *)v28;
  v6 = v34;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v35 = __readfsqword(0x28u);
  do
  {
    v5->m128i_i32[1] = -1;
    v5 += 5;
    v5[-5].m128i_i16[0] = 0;
    v5[-5].m128i_i16[1] = 0;
    v5[-5].m128i_i64[1] = 0;
    v5[-4] = si128;
    v5[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v5[-3] + 8) = 0;
    v5[-2].m128i_i32[2] = 0;
    v5[-1].m128i_i64[0] = 0;
    v5[-1].m128i_i32[2] = 0;
  }
  while ( v5 != (__m128i *)v34 );
  v9 = sub_3FB1A0(a1, a4);
  v10 = *(_QWORD *)(v9 + 72);
  v11 = *(_DWORD *)(v9 + 68);
  v28[0] = 4;
  v30 = v9;
  v29 = v11;
  copy_tinfo_t(v31, v10 + 72);
  v22 = (_QWORD *)(*(_QWORD *)(a1 + 800) + 208LL);
  tinfo_size = get_tinfo_size(0, *v22, 0);
  sub_32F3F0((__int64)v32, a3, tinfo_size, (__int64)v22);
  v13 = (unsigned int)(a4 - 8);
  v14 = 37;
  v23 = 0;
  if ( (unsigned int)v13 <= 0x18 )
    v14 = asc_42E1D0[v13];
  v24 = 0;
  LOWORD(v26) = -1;
  v25 = 0;
  BYTE2(v26) = v14;
  sub_3FB0A0(&v23, (__int64)&v24);
  clear_tinfo_t(&v25);
  v15 = get_tinfo_size(0, v23, 0);
  sub_32F3F0((__int64)v33, a2, v15, (__int64)&v23);
  qsnprintf(v34, 32, "svst1_u%d", a4);
  v24 = 1;
  v16 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v34, &v24, 3, (__int64)v28, 0);
  clear_tinfo_t(&v24);
  *(_DWORD *)(*(_QWORD *)(v16 + 72) + 280LL) |= 4u;
  v21 = *(_QWORD *)(v16 + 72);
  v24 = 0;
  v25 = 0;
  v26 = nullptr;
  v27 = 0;
  v26 = (__int64 *)qvector_reserve(&v26, 0, 1, 16);
  *(__m128i *)&v26[2 * v27] = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_QWORD *)&v27 = v27 + 1;
  sub_63C80((__int64 *)(v21 + 136), &v24);
  sub_317070((__int64 *)(v21 + 152), &v26);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  qfree(v24);
  v17 = sub_B4CD0(*(_QWORD **)(a1 + 16), v16);
  clear_tinfo_t(&v23);
  do
  {
    v6 -= 80;
    cleanup_argloc(v6 + 56);
    v18 = *((_QWORD *)v6 + 4);
    if ( v18 )
    {
      *((_QWORD *)v6 + 5) = 0;
      qfree(v18);
    }
    clear_tinfo_t(v6 + 24);
    sub_11C7E0((__int64)v6);
  }
  while ( v6 != v28 );
  return v17;
}
