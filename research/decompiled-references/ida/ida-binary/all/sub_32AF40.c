__int64 sub_32AF40()
{
  __int16 v0; // dx
  __int16 v1; // ax
  int v2; // ebx
  int default_encoding_idx; // eax
  int encoding_qty; // r15d
  int v5; // ebx
  char *v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  char *v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __m128i v12; // xmm0
  char *v13; // rax
  int v14; // eax
  __int16 v15; // r15
  unsigned int v16; // eax
  const char *v17; // rsi
  __int64 v18; // rdi
  __int16 v19; // dx
  char v20; // al
  char v21; // al
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  char *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  const char *v34; // rdi
  char *v35; // r12
  size_t v36; // r15
  char *v37; // rax
  char *v38; // r15
  char *v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  const char *v43; // [rsp-10h] [rbp-D0h]
  __m128i v44; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v45; // [rsp+18h] [rbp-A8h]
  char v46; // [rsp+29h] [rbp-97h] BYREF
  __int16 v47; // [rsp+2Ah] [rbp-96h] BYREF
  int v48; // [rsp+2Ch] [rbp-94h] BYREF
  __int64 v49; // [rsp+30h] [rbp-90h] BYREF
  __int128 v50; // [rsp+38h] [rbp-88h]
  __int64 v51; // [rsp+50h] [rbp-70h] BYREF
  __int128 v52; // [rsp+58h] [rbp-68h]
  char *s1; // [rsp+70h] [rbp-50h] BYREF
  __m128i v54; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  v0 = xmmword_8BCDC0;
  if ( (_WORD)xmmword_8BCDC0 == 77 )
  {
    LOWORD(xmmword_8BCDC0) = get_default_radix();
    v0 = xmmword_8BCDC0;
  }
  v1 = 2;
  if ( v0 != 8 )
    v1 = v0 == 10;
  v47 = v1;
  v2 = 0;
  v48 = -1;
  v49 = 0;
  v51 = 0;
  v50 = 0;
  v52 = 0;
  do
  {
    default_encoding_idx = get_default_encoding_idx((unsigned int)(1 << v2));
    v45 = &v51;
    sub_32AC30((__int64)&v49, (__int64)&v51, &v48, default_encoding_idx, 1, 0.0);
    ++v2;
  }
  while ( v2 != 3 );
  encoding_qty = get_encoding_qty();
  v5 = 1;
  if ( encoding_qty > 1 )
  {
    do
      sub_32AC30((__int64)&v49, (__int64)v45, &v48, v5++, 0, 0.0);
    while ( encoding_qty != v5 );
  }
  s1 = nullptr;
  v54 = 0;
  v6 = (char *)qvector_reserve(&s1, 0, 18, 1);
  s1 = v6;
  v54.m128i_i64[0] = 18;
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_5DD050);
  v7 = (const char *)v49;
  v6[16] = 115;
  v8 = v50;
  v9 = s1;
  v10 = v50 + 1;
  s1[17] = 0;
  v11 = *((_QWORD *)&v50 + 1);
  if ( &s1 >= (char **)v7 && &s1 < (char **)&v7[24 * *((_QWORD *)&v50 + 1)] )
  {
    v29 = _mm_loadl_epi64(&v54);
    v30 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
    s1 = nullptr;
    v54 = 0;
    if ( *((_QWORD *)&v50 + 1) < v10 )
    {
      v44.m128i_i64[0] = v30.m128i_i64[0];
      v44.m128i_i64[1] = v29.m128i_i64[0];
      v49 = qvector_reserve(&v49, v7, v10, 24);
      v7 = (const char *)v49;
      v30 = _mm_loadl_epi64(&v44);
      v29 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
      v8 = v50;
    }
    v12 = _mm_unpacklo_epi64(v29, v30);
    v31 = (char *)&v7[24 * v8];
    *(_QWORD *)v31 = v9;
    *(__m128i *)(v31 + 8) = v12;
    *(_QWORD *)&v50 = v50 + 1;
    if ( s1 )
    {
      v54.m128i_i64[0] = 0;
      *(double *)v12.m128i_i64 = qfree(s1, v7, v11);
    }
  }
  else
  {
    if ( *((_QWORD *)&v50 + 1) < v10 )
    {
      v49 = qvector_reserve(&v49, v7, v10, 24);
      v7 = (const char *)v49;
      v9 = s1;
      v8 = v50;
    }
    v12 = _mm_loadu_si128(&v54);
    v13 = (char *)&v7[24 * v8];
    *(_QWORD *)v13 = v9;
    *(__m128i *)(v13 + 8) = v12;
    *(_QWORD *)&v50 = v50 + 1;
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    *(double *)v12.m128i_i64 = qfree(v51, v7, v11);
  }
  if ( SDWORD2(xmmword_8BCDC0) < 0 )
  {
    v14 = v50 - 1;
    v48 = v50 - 1;
  }
  else
  {
    v14 = v48;
  }
  if ( v14 < 0 )
    v48 = 0;
  v15 = v47;
  LOWORD(v51) = (4 * ((_WORD)xmmword_8BCDB0 != 0))
              | (BYTE2(xmmword_8BCDC0) >> 2) & 1
              | (2 * ((BYTE2(xmmword_8BCDC0) & 1) == 0));
  v16 = sub_507F10(
          1070,
          (unsigned int)sub_328820,
          (unsigned int)&v46,
          (unsigned int)&qword_8D0AC0,
          (_DWORD)v45,
          (unsigned int)&v47,
          *(double *)v12.m128i_i64,
          &v49,
          &v48);
  v17 = v43;
  v18 = v16;
  if ( v16 == 1 )
  {
    if ( v47 != v15 )
    {
      v19 = 16;
      if ( v47 )
        v19 = 2 * (v47 == 1) + 8;
      LOWORD(xmmword_8BCDC0) = v19;
    }
    v20 = BYTE2(xmmword_8BCDC0) & 0xFB;
    if ( (v51 & 1) != 0 )
      v20 = BYTE2(xmmword_8BCDC0) | 4;
    if ( (v51 & 2) != 0 )
    {
      v21 = v20 & 0xFE;
      v18 = 0xFFFFFFFFLL;
    }
    else
    {
      v21 = v20 | 1;
    }
    BYTE2(xmmword_8BCDC0) = v21;
    LOWORD(xmmword_8BCDB0) = ((unsigned __int16)v51 >> 2) & 1;
    sub_388150(v18);
    if ( v48 < 0 || v48 >= (unsigned __int64)v50 )
    {
      DWORD2(xmmword_8BCDC0) = 0;
LABEL_32:
      v22 = 1;
      goto LABEL_33;
    }
    s1 = nullptr;
    v54 = 0;
    v32 = v49 + 24LL * v48;
    v33 = *(_QWORD *)(v32 + 8);
    v45 = (__int64 *)v33;
    if ( !v33 )
      goto LABEL_49;
    v36 = v33;
    v37 = (char *)qalloc_or_throw(v33);
    v54.m128i_i64[1] = v36;
    s1 = v37;
    memcpy(v37, *(const void **)v32, v36);
    v35 = s1;
    v17 = "All IDB encodings";
    v54.m128i_i64[0] = v36;
    v38 = s1;
    if ( !strcmp(s1, "All IDB encodings") )
    {
      DWORD2(xmmword_8BCDC0) = -1;
LABEL_51:
      if ( v35 )
      {
        v54.m128i_i64[0] = 0;
        qfree(v35, v17);
      }
      goto LABEL_32;
    }
    v17 = " (";
    v39 = strstr(v35, " (");
    if ( v39 )
    {
      v40 = v39 - v38;
      if ( v39 - v38 != -1 )
      {
        if ( v40 )
        {
          v41 = v40 + 1;
          if ( (unsigned __int64)v45 < v40 + 1 )
          {
            if ( v54.m128i_i64[1] < v41 )
            {
              v44.m128i_i64[0] = v39 - v38;
              v44.m128i_i64[1] = v40 + 1;
              s1 = (char *)qvector_reserve(&s1, v38, v40 + 1, 1);
              v35 = s1;
              v41 = v44.m128i_u64[1];
              v40 = v44.m128i_i64[0];
              v45 = (__int64 *)v54.m128i_i64[0];
            }
            v17 = nullptr;
            v44.m128i_i64[1] = v41;
            v44.m128i_i64[0] = v40;
            memset((char *)v45 + (_QWORD)v35, 0, v41 - (_QWORD)v45);
            v39 = &s1[v44.m128i_i64[0]];
            v54.m128i_i64[0] = v44.m128i_i64[1];
          }
          else if ( v45 != (__int64 *)(v40 + 1) )
          {
            v54.m128i_i64[0] = v40 + 1;
          }
          *v39 = 0;
          v42 = v54.m128i_i64[0];
        }
        else
        {
          if ( !v38 )
            goto LABEL_63;
          v54.m128i_i64[0] = 0;
          qfree(v38, " (");
          s1 = nullptr;
          v42 = v54.m128i_i64[0];
          v54.m128i_i64[1] = 0;
        }
        if ( !v42 )
        {
LABEL_49:
          v34 = &::s1;
LABEL_50:
          DWORD2(xmmword_8BCDC0) = add_encoding(v34);
          v35 = s1;
          goto LABEL_51;
        }
        v38 = s1;
      }
    }
LABEL_63:
    v34 = v38;
    goto LABEL_50;
  }
  v22 = 0;
LABEL_33:
  v23 = v49;
  if ( v49 )
  {
    v24 = v50;
    if ( (_QWORD)v50 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27, v17);
          v23 = v49;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v23, v17);
  }
  return v22;
}
