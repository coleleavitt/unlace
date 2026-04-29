__int64 __fastcall sub_152520(__int64 a1, __int64 a2)
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
  char *v13; // rax
  __int64 v14; // rdx
  __m128i si128; // xmm2
  int *v16; // rax
  __m128i v17; // xmm0
  int *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // [rsp-8h] [rbp-1D8h]
  int v26; // [rsp+0h] [rbp-1D0h]
  int *v27; // [rsp+8h] [rbp-1C8h]
  __m128i v28; // [rsp+20h] [rbp-1B0h] BYREF
  char *v29; // [rsp+30h] [rbp-1A0h]
  _BYTE *v30; // [rsp+38h] [rbp-198h]
  __m128i v31; // [rsp+40h] [rbp-190h] BYREF
  int *v32; // [rsp+50h] [rbp-180h]
  __int64 *v33; // [rsp+58h] [rbp-178h]
  unsigned int v34; // [rsp+64h] [rbp-16Ch]
  __int128 v35; // [rsp+68h] [rbp-168h] BYREF
  __int64 v36; // [rsp+78h] [rbp-158h] BYREF
  __int64 v37; // [rsp+80h] [rbp-150h] BYREF
  __int128 v38; // [rsp+88h] [rbp-148h]
  unsigned __int8 v39[16]; // [rsp+A0h] [rbp-130h] BYREF
  __m128i v40; // [rsp+B0h] [rbp-120h] BYREF
  int *v41; // [rsp+C0h] [rbp-110h]
  __m128i v42; // [rsp+C8h] [rbp-108h] BYREF
  int v43; // [rsp+D8h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-F0h]
  int v45; // [rsp+E8h] [rbp-E8h]
  _BYTE v46[16]; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+100h] [rbp-D0h]
  char v48[8]; // [rsp+108h] [rbp-C8h] BYREF
  int *v49; // [rsp+110h] [rbp-C0h]
  __m128i v50; // [rsp+118h] [rbp-B8h]
  char v51[16]; // [rsp+128h] [rbp-A8h] BYREF
  int v52; // [rsp+138h] [rbp-98h]
  _BYTE v53[16]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v54; // [rsp+150h] [rbp-80h]
  char v55[8]; // [rsp+158h] [rbp-78h] BYREF
  int *v56; // [rsp+160h] [rbp-70h]
  __m128i v57; // [rsp+168h] [rbp-68h]
  char v58[16]; // [rsp+178h] [rbp-58h] BYREF
  int v59; // [rsp+188h] [rbp-48h]
  char v60; // [rsp+190h] [rbp-40h] BYREF
  unsigned __int64 v61; // [rsp+198h] [rbp-38h]

  *(_QWORD *)&v35 = a1;
  v61 = __readfsqword(0x28u);
  if ( !a1 )
  {
    if ( !under_debugger )
      sub_37DDE0(52674);
    BUG();
  }
  if ( !(unsigned __int8)sub_11B8C0((char *)(a2 + 48), v39, 0) )
    return 0;
  if ( v39[0] )
    return 0;
  v5 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)&v6 = v35;
  *((_QWORD *)&v6 + 1) = a2 + 32;
  *((_QWORD *)&v35 + 1) = a2;
  v34 = v5;
  v7 = (_DWORD *)sub_124F80(v6, (__int64)&v35 + 8, 0);
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
    || v8[9] != 2 * v34
    || *((_QWORD *)&v35 + 1) != a2
    && !(unsigned __int8)sub_12BD30((const __m128i *)v35, a2, a2 + 32, *((__int64 *)&v35 + 1), (__int64)(v8 + 16)) )
  {
    return 0;
  }
  if ( (unsigned __int64)(int)(8 * v34) <= 0x3F )
  {
    v10 = (unsigned __int8 *)(v8 + 8);
    v33 = (__int64 *)(1LL << (8 * (unsigned __int8)v34));
    if ( !(unsigned __int8)sub_11B8C0((char *)v8 + 32, &v36, 1u) || (v36 & -(__int64)v33) == 0 )
    {
      v31.m128i_i64[0] = (__int64)(v8 + 12);
      if ( !(unsigned __int8)sub_11B8C0((char *)v8 + 48, &v36, 1u) || (v36 & -(__int64)v33) == 0 )
        goto LABEL_14;
    }
    return 0;
  }
  v10 = (unsigned __int8 *)(v8 + 8);
  sub_11B8C0((char *)v8 + 32, &v36, 1u);
  v31.m128i_i64[0] = (__int64)(v8 + 12);
  sub_11B8C0((char *)v8 + 48, &v36, 1u);
LABEL_14:
  v37 = 0;
  v33 = &v37;
  v38 = 0;
  v11 = sub_151460(&v37);
  if ( (unsigned __int8)sub_151880(v35, (__int64)v10, *((__int64 *)&v35 + 1), a2, v11)
    && (v12 = sub_151460(v33), (unsigned __int8)sub_151880(v35, v31.m128i_i64[0], *((__int64 *)&v35 + 1), a2, v12)) )
  {
    v13 = v46;
    v30 = v46;
    v29 = &v60;
    v14 = v35;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
      *(_OWORD *)(v13 + 40) = 0;
      *(_WORD *)v13 = 0;
      v13 += 80;
      *((_WORD *)v13 - 39) = 0;
      *((_DWORD *)v13 - 19) = -1;
      *((_QWORD *)v13 - 9) = 0;
      *((__m128i *)v13 - 4) = si128;
      *((_QWORD *)v13 - 6) = 0;
      *((_DWORD *)v13 - 6) = 0;
      *((_QWORD *)v13 - 2) = 0;
      *((_DWORD *)v13 - 2) = 0;
    }
    while ( v29 != v13 );
    *(_QWORD *)&v35 = v14;
    v28.m128i_i64[0] = (__int64)v53;
    sub_11F580((__int64)v39, v10);
    v41 = nullptr;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v40 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
    v42 = 0;
    sub_120CC0((__int64)v30, (unsigned __int8 *)v39);
    v47 = v40.m128i_i64[0];
    copy_tinfo_t(&v48, &v40.m128i_u64[1]);
    v16 = v41;
    v41 = nullptr;
    v17 = _mm_loadu_si128(&v42);
    v42 = 0;
    if ( v49 )
    {
      v32 = v16;
      v28 = v17;
      v50.m128i_i64[0] = 0;
      qfree(v49);
      v17 = _mm_load_si128(&v28);
      v16 = v32;
    }
    v49 = v16;
    v32 = &v43;
    v50 = v17;
    copy_argloc(&v51, &v43);
    v52 = v45;
    cleanup_argloc(v32);
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
    clear_tinfo_t(&v40.m128i_u64[1]);
    sub_1188E0((__int64)v39);
    v28.m128i_i64[0] = (__int64)v53;
    sub_11F580((__int64)v39, (unsigned __int8 *)v31.m128i_i64[0]);
    v41 = nullptr;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v28.m128i_i64[0] = (__int64)v53;
    v40 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
    v42 = 0;
    sub_120CC0((__int64)v53, (unsigned __int8 *)v39);
    v54 = v40.m128i_i64[0];
    copy_tinfo_t(&v55, &v40.m128i_u64[1]);
    v18 = v41;
    v41 = nullptr;
    v19 = _mm_loadu_si128(&v42);
    v42 = 0;
    if ( v56 )
    {
      v27 = v18;
      v31 = v19;
      v57.m128i_i64[0] = 0;
      qfree(v56);
      v18 = v27;
      v19 = _mm_load_si128(&v31);
    }
    v56 = v18;
    v57 = v19;
    copy_argloc(&v58, v32);
    v59 = v45;
    cleanup_argloc(v32);
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
    clear_tinfo_t(&v40.m128i_u64[1]);
    sub_1188E0((__int64)v39);
    v31.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v35 + 480) + 112LL);
    if ( (unsigned __int8)sub_126690((unsigned __int64)v30, v31.m128i_i64[0], v34, 1)
      && (v3 = sub_126690(v28.m128i_u64[0], v31.m128i_i64[0], v34, 1), (_BYTE)v3) )
    {
      sub_151510((__int64)v33, 0);
      sub_327180(v39, v31.m128i_i64[0], v34, 2);
      copy_tinfo_t(&v48, v39);
      clear_tinfo_t(v39);
      copy_tinfo_t(&v55, &v48);
      v39[0] = 8;
      v20 = sub_330570(
              *(_QWORD *)(v35 + 64),
              *((_QWORD *)v8 + 3),
              (unsigned int)"is_mul_ok",
              (unsigned int)v39,
              2,
              (_DWORD)v30,
              1,
              v25,
              v26,
              (_DWORD)v27,
              (unsigned int)&v55,
              (unsigned int)&v48);
      clear_tinfo_t(v39);
      *(_DWORD *)(*(_QWORD *)(v20 + 72) + 284LL) = 17;
      sub_1188E0(a2 + 32);
      v21 = v35;
      *(_BYTE *)(a2 + 32) = 4;
      *(_QWORD *)(a2 + 40) = v20;
      LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)(v21 + 480) + 131LL);
      *(_DWORD *)(a2 + 36) = v21;
      *(_DWORD *)(a2 + 52) = v21;
      *(_DWORD *)a2 = (*(_DWORD *)a2 != 44) + 43;
    }
    else
    {
      v3 = 0;
    }
    v22 = (__int64)v29;
    v23 = (__int64)v30;
    do
    {
      v22 -= 80;
      cleanup_argloc(v22 + 56);
      v24 = *(_QWORD *)(v22 + 32);
      if ( v24 )
      {
        *(_QWORD *)(v22 + 40) = 0;
        qfree(v24);
      }
      clear_tinfo_t(v22 + 24);
      sub_1188E0(v22);
    }
    while ( v22 != v23 );
  }
  else
  {
    v3 = 0;
  }
  sub_151510((__int64)v33, 1);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v3;
}
