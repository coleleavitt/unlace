__int64 __fastcall sub_1569E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  unsigned int v5; // eax
  __int128 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r13
  int v9; // eax
  unsigned __int8 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm2
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int8 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // [rsp-8h] [rbp-1D8h]
  int v29; // [rsp+0h] [rbp-1D0h]
  __int64 v30; // [rsp+8h] [rbp-1C8h]
  __m128i v31; // [rsp+20h] [rbp-1B0h] BYREF
  char *v32; // [rsp+30h] [rbp-1A0h]
  unsigned __int8 *v33; // [rsp+38h] [rbp-198h]
  __m128i v34; // [rsp+40h] [rbp-190h] BYREF
  int *v35; // [rsp+50h] [rbp-180h]
  __int64 *v36; // [rsp+58h] [rbp-178h]
  unsigned int v37; // [rsp+64h] [rbp-16Ch]
  __int128 v38; // [rsp+68h] [rbp-168h] BYREF
  __int64 v39; // [rsp+78h] [rbp-158h] BYREF
  __int64 v40; // [rsp+80h] [rbp-150h] BYREF
  __int128 v41; // [rsp+88h] [rbp-148h]
  unsigned __int8 v42[16]; // [rsp+A0h] [rbp-130h] BYREF
  __m128i v43; // [rsp+B0h] [rbp-120h]
  __int64 v44; // [rsp+C0h] [rbp-110h]
  __m128i v45; // [rsp+C8h] [rbp-108h] BYREF
  int v46; // [rsp+D8h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-F0h]
  int v48; // [rsp+E8h] [rbp-E8h]
  _BYTE v49[16]; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+100h] [rbp-D0h]
  char v51; // [rsp+108h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+110h] [rbp-C0h]
  __m128i v53; // [rsp+118h] [rbp-B8h]
  int v54; // [rsp+138h] [rbp-98h]
  _BYTE v55[16]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v56; // [rsp+150h] [rbp-80h]
  char v57; // [rsp+158h] [rbp-78h] BYREF
  __int64 v58; // [rsp+160h] [rbp-70h]
  __m128i v59; // [rsp+168h] [rbp-68h]
  int v60; // [rsp+188h] [rbp-48h]
  char v61; // [rsp+190h] [rbp-40h] BYREF
  unsigned __int64 v62; // [rsp+198h] [rbp-38h]

  *(_QWORD *)&v38 = a1;
  v62 = __readfsqword(0x28u);
  if ( !a1 )
  {
    if ( !under_debugger )
      sub_383060(52674);
    BUG();
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), v42, 0) )
    return 0;
  if ( *(_QWORD *)v42 )
    return 0;
  v5 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)&v6 = v38;
  *((_QWORD *)&v6 + 1) = a2 + 32;
  *((_QWORD *)&v38 + 1) = a2;
  v37 = v5;
  v7 = (_DWORD *)sub_129440(v6, (__int64)&v38 + 8, 0);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = *v7;
  if ( v9 == 11 )
  {
    if ( *((_BYTE *)v8 + 32) != 4 )
      return 0;
    v8 = *((_DWORD **)v8 + 5);
    v9 = *v8;
  }
  if ( v9 != 14
    || v8[9] != 2 * v37
    || *((_QWORD *)&v38 + 1) != a2
    && !(unsigned __int8)sub_1301F0((const __m128i *)v38, a2, a2 + 32, *((__int64 *)&v38 + 1), (__int64)(v8 + 16)) )
  {
    return 0;
  }
  if ( (unsigned __int64)(int)(8 * v37) <= 0x3F )
  {
    v10 = (unsigned __int8 *)(v8 + 8);
    v36 = (__int64 *)(1LL << (8 * (unsigned __int8)v37));
    if ( !(unsigned __int8)sub_11FD80((char *)v8 + 32, &v39, 1u) || (v39 & -(__int64)v36) == 0 )
    {
      v34.m128i_i64[0] = (__int64)(v8 + 12);
      if ( !(unsigned __int8)sub_11FD80((char *)v8 + 48, &v39, 1u) || (v39 & -(__int64)v36) == 0 )
        goto LABEL_14;
    }
    return 0;
  }
  v10 = (unsigned __int8 *)(v8 + 8);
  sub_11FD80((char *)v8 + 32, &v39, 1u);
  v34.m128i_i64[0] = (__int64)(v8 + 12);
  sub_11FD80((char *)v8 + 48, &v39, 1u);
LABEL_14:
  v40 = 0;
  v36 = &v40;
  v41 = 0;
  v11 = sub_155920(&v40);
  if ( (unsigned __int8)sub_155D40(v38, (__int64)v10, *((__int64 *)&v38 + 1), a2, v11)
    && (v12 = sub_155920(v36), (unsigned __int8)sub_155D40(v38, v34.m128i_i64[0], *((__int64 *)&v38 + 1), a2, v12)) )
  {
    v14 = v49;
    v33 = v49;
    v32 = &v61;
    v15 = v38;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      *(_OWORD *)(v14 + 40) = 0;
      *(_WORD *)v14 = 0;
      v14 += 80;
      *((_WORD *)v14 - 39) = 0;
      *((_DWORD *)v14 - 19) = -1;
      *((_QWORD *)v14 - 9) = 0;
      *((__m128i *)v14 - 4) = si128;
      *((_QWORD *)v14 - 6) = 0;
      *((_DWORD *)v14 - 6) = 0;
      *((_QWORD *)v14 - 2) = 0;
      *((_DWORD *)v14 - 2) = 0;
    }
    while ( v32 != v14 );
    *(_QWORD *)&v38 = v15;
    v31.m128i_i64[0] = (__int64)v55;
    sub_123A40((__int64)v42, v10, v15, v13);
    v44 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v43 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v45 = 0;
    sub_125180((__int64)v33, v42);
    v50 = v43.m128i_i64[0];
    copy_tinfo_t();
    v17 = v44;
    v44 = 0;
    v18 = _mm_loadu_si128(&v45);
    v45 = 0;
    if ( v52 )
    {
      v35 = (int *)v17;
      v31 = v18;
      v53.m128i_i64[0] = 0;
      qfree(v52);
      v18 = _mm_load_si128(&v31);
      v17 = (__int64)v35;
    }
    v52 = v17;
    v35 = &v46;
    v53 = v18;
    copy_argloc();
    v54 = v48;
    cleanup_argloc();
    if ( v44 )
    {
      v45.m128i_i64[0] = 0;
      qfree(v44);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v42);
    v31.m128i_i64[0] = (__int64)v55;
    sub_123A40((__int64)v42, (unsigned __int8 *)v34.m128i_i64[0], v19, v20);
    v44 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v31.m128i_i64[0] = (__int64)v55;
    v43 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v45 = 0;
    sub_125180((__int64)v55, v42);
    v56 = v43.m128i_i64[0];
    copy_tinfo_t();
    v21 = v44;
    v44 = 0;
    v22 = _mm_loadu_si128(&v45);
    v45 = 0;
    if ( v58 )
    {
      v30 = v21;
      v34 = v22;
      v59.m128i_i64[0] = 0;
      qfree(v58);
      v21 = v30;
      v22 = _mm_load_si128(&v34);
    }
    v58 = v21;
    v59 = v22;
    copy_argloc();
    v60 = v48;
    cleanup_argloc();
    if ( v44 )
    {
      v45.m128i_i64[0] = 0;
      qfree(v44);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v42);
    v34.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v38 + 480) + 112LL);
    if ( (unsigned __int8)sub_12AB50(v33, v34.m128i_i64[0], v37, 1)
      && (v3 = sub_12AB50((unsigned __int8 *)v31.m128i_i64[0], v34.m128i_i64[0], v37, 1), (_BYTE)v3) )
    {
      sub_1559D0((__int64)v36, 0);
      sub_32C430(v42, v34.m128i_i64[0], v37, 2);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      *(_QWORD *)v42 = 8;
      v23 = sub_335B10(
              *(_QWORD *)(v38 + 64),
              *((_QWORD *)v8 + 3),
              (unsigned int)"is_mul_ok",
              (unsigned int)v42,
              2,
              (_DWORD)v33,
              1,
              v28,
              v29,
              v30,
              (unsigned int)&v57,
              (unsigned int)&v51);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v23 + 72) + 284LL) = 17;
      sub_11CDA0(a2 + 32);
      v24 = v38;
      *(_BYTE *)(a2 + 32) = 4;
      *(_QWORD *)(a2 + 40) = v23;
      LODWORD(v24) = *(unsigned __int8 *)(*(_QWORD *)(v24 + 480) + 131LL);
      *(_DWORD *)(a2 + 36) = v24;
      *(_DWORD *)(a2 + 52) = v24;
      *(_DWORD *)a2 = (*(_DWORD *)a2 != 44) + 43;
    }
    else
    {
      v3 = 0;
    }
    v25 = (__int64)v32;
    v26 = v33;
    do
    {
      v25 -= 80;
      cleanup_argloc();
      v27 = *(_QWORD *)(v25 + 32);
      if ( v27 )
      {
        *(_QWORD *)(v25 + 40) = 0;
        qfree(v27);
      }
      clear_tinfo_t();
      sub_11CDA0(v25);
    }
    while ( (unsigned __int8 *)v25 != v26 );
  }
  else
  {
    v3 = 0;
  }
  sub_1559D0((__int64)v36, 1);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  return v3;
}
