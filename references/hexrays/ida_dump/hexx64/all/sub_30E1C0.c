__int64 __fastcall sub_30E1C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __m128i si128; // xmm1
  char *v12; // rbx
  __m128i *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rdi
  __int64 v22; // [rsp-8h] [rbp-1A8h]
  int v23; // [rsp+8h] [rbp-198h]
  unsigned __int64 v24; // [rsp+10h] [rbp-190h]
  __int64 v25; // [rsp+10h] [rbp-190h]
  int v26; // [rsp+18h] [rbp-188h]
  __int64 *v27; // [rsp+18h] [rbp-188h]
  __int64 v28; // [rsp+20h] [rbp-180h]
  __int64 v29; // [rsp+20h] [rbp-180h]
  unsigned int v30; // [rsp+30h] [rbp-170h]
  __int64 v32; // [rsp+40h] [rbp-160h] BYREF
  __int64 v33; // [rsp+48h] [rbp-158h]
  __int64 v34; // [rsp+50h] [rbp-150h] BYREF
  __int128 v35; // [rsp+58h] [rbp-148h]
  _BYTE v36[24]; // [rsp+70h] [rbp-130h] BYREF
  char v37; // [rsp+88h] [rbp-118h] BYREF
  _BYTE v38[80]; // [rsp+C0h] [rbp-E0h] BYREF
  _BYTE v39[24]; // [rsp+110h] [rbp-90h] BYREF
  _BYTE v40[56]; // [rsp+128h] [rbp-78h] BYREF
  char v41; // [rsp+160h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+168h] [rbp-38h]

  v5 = *(_QWORD *)(a3 + 40);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  v42 = __readfsqword(0x28u);
  v9 = v5 - v7;
  if ( v9 % v6 )
  {
    sub_6D0A0(
      (__int64)"VDGO: %a: bad call inside \"runtime.duffcopy\" (wrong offset %zu - should be a multiple of %zu)\n",
      a4,
      *(_QWORD *)(a3 + 24),
      v9);
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 480);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v12 = &v41;
    v24 = *(_QWORD *)(a1 + 48) * ((*(_QWORD *)(a1 + 16) - v7) / v6 - v9 / v6);
    v30 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL);
    v13 = (__m128i *)v36;
    do
    {
      v13->m128i_i32[1] = -1;
      v13 += 5;
      v13[-5].m128i_i16[0] = 0;
      v13[-5].m128i_i16[1] = 0;
      v13[-5].m128i_i64[1] = 0;
      v13[-4] = si128;
      v13[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v13[-3] + 8) = 0;
      v13[-2].m128i_i32[2] = 0;
      v13[-1].m128i_i64[0] = 0;
      v13[-1].m128i_i32[2] = 0;
    }
    while ( v13 != (__m128i *)&v41 );
    sub_32F0D0(v36, *(unsigned int *)(a1 + 36), v30, v10 + 232, 0.0);
    sub_32F0D0(v38, *(unsigned int *)(a1 + 32), v30, v10 + 240, 0.0);
    v14 = *(_QWORD *)(v10 + 112);
    v15 = *(_QWORD *)(a3 + 24);
    v32 = 39;
    v28 = v15;
    v26 = v14;
    copy_tinfo_t(v40, &v32);
    clear_tinfo_t(&v32);
    v16 = getinf(59);
    sub_120A10((__int64)v39, v26, (int)v24, v16, v28, 0);
    v17 = sub_335B10(
            *(_QWORD *)(a2 + 64),
            *(_QWORD *)(a3 + 24),
            (unsigned int)"memcpy",
            (unsigned int)&v37,
            3,
            (unsigned int)v36,
            1,
            v22,
            (unsigned int)v38,
            v23,
            v24,
            v26);
    v18 = *(_QWORD *)(v17 + 72);
    v32 = 0;
    v29 = v18;
    v33 = 0;
    sub_63E80(&v32, *(_DWORD *)(a1 + 36), v30);
    v34 = 0;
    v35 = 0;
    v27 = (__int64 *)(v29 + 136);
    sub_64280((__int64 *)(v29 + 136), &v32);
    v25 = v29 + 152;
    sub_316CB0(v29 + 152, &v34);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    qfree(v32);
    v32 = 0;
    v33 = 0;
    sub_63E80(&v32, *(_DWORD *)(a1 + 32), v30);
    v34 = 0;
    v35 = 0;
    sub_64280(v27, &v32);
    sub_316CB0(v25, &v34);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    qfree(v32);
    v19 = *(_DWORD *)(a1 + 40);
    if ( v19 != -1 )
    {
      v32 = 0;
      v33 = 0;
      sub_63E80(&v32, v19, *(_DWORD *)(a1 + 48));
      v34 = 0;
      v35 = 0;
      sub_64280(v27, &v32);
      sub_316CB0(v25, &v34);
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
      qfree(v32);
    }
    *(_DWORD *)(v29 + 284) = 5;
    sub_11D890(v17, a3);
    if ( v17 )
    {
      sub_11CDA0(v17 + 64);
      sub_11CDA0(v17 + 48);
      sub_11CDA0(v17 + 32);
      j__qfree(v17);
    }
    do
    {
      v12 -= 80;
      cleanup_argloc(v12 + 56);
      v20 = *((_QWORD *)v12 + 4);
      if ( v20 )
      {
        *((_QWORD *)v12 + 5) = 0;
        qfree(v20);
      }
      clear_tinfo_t(v12 + 24);
      sub_11CDA0((__int64)v12);
    }
    while ( v12 != v36 );
    return 1;
  }
}
