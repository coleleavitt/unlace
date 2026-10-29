__int64 sub_1380F0()
{
  __int16 v0; // dx
  __int16 v1; // ax
  int v2; // ebx
  int default_encoding_idx; // eax
  int encoding_qty; // r15d
  int v5; // ebx
  char *v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  char *v9; // r15
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rax
  int v13; // eax
  __int16 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int16 v17; // dx
  char v18; // al
  char v19; // al
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 *v30; // rax
  char *v31; // r12
  size_t v32; // r15
  char *v33; // rax
  char *v34; // r15
  char *v35; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  __m128i v38; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v39; // [rsp+18h] [rbp-A8h]
  char v40; // [rsp+29h] [rbp-97h] BYREF
  __int16 v41; // [rsp+2Ah] [rbp-96h] BYREF
  int v42; // [rsp+2Ch] [rbp-94h] BYREF
  unsigned __int64 v43; // [rsp+30h] [rbp-90h] BYREF
  __int128 v44; // [rsp+38h] [rbp-88h]
  __int64 v45; // [rsp+50h] [rbp-70h] BYREF
  __int128 v46; // [rsp+58h] [rbp-68h]
  char *s1; // [rsp+70h] [rbp-50h] BYREF
  __m128i v48; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  v0 = WORD4(xmmword_244090);
  if ( WORD4(xmmword_244090) == 77 )
  {
    WORD4(xmmword_244090) = get_default_radix();
    v0 = WORD4(xmmword_244090);
  }
  v1 = 2;
  if ( v0 != 8 )
    v1 = v0 == 10;
  v41 = v1;
  v2 = 0;
  v42 = -1;
  v43 = 0;
  v45 = 0;
  v44 = 0;
  v46 = 0;
  do
  {
    default_encoding_idx = get_default_encoding_idx();
    v39 = &v45;
    sub_137DE0((__int64 *)&v43, &v45, &v42, default_encoding_idx, 1);
    ++v2;
  }
  while ( v2 != 3 );
  encoding_qty = get_encoding_qty();
  v5 = 1;
  if ( encoding_qty > 1 )
  {
    do
      sub_137DE0((__int64 *)&v43, v39, &v42, v5++, 0);
    while ( encoding_qty != v5 );
  }
  s1 = nullptr;
  v48 = 0;
  v6 = (char *)qvector_reserve();
  s1 = v6;
  v48.m128i_i64[0] = 18;
  *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_1D2730);
  v7 = v43;
  v6[16] = 115;
  v8 = v44;
  v9 = s1;
  v10 = v44 + 1;
  s1[17] = 0;
  if ( (unsigned __int64)&s1 >= v7 && (unsigned __int64)&s1 < v7 + 24LL * *((_QWORD *)&v44 + 1) )
  {
    v26 = _mm_loadl_epi64(&v48);
    v27 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
    s1 = nullptr;
    v48 = 0;
    if ( *((_QWORD *)&v44 + 1) < v10 )
    {
      v38.m128i_i64[0] = v27.m128i_i64[0];
      v38.m128i_i64[1] = v26.m128i_i64[0];
      v43 = qvector_reserve();
      v7 = v43;
      v27 = _mm_loadl_epi64(&v38);
      v26 = _mm_loadl_epi64((const __m128i *)&v38.m128i_u64[1]);
      v8 = v44;
    }
    v28 = v7 + 24 * v8;
    *(_QWORD *)v28 = v9;
    *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v26, v27);
    *(_QWORD *)&v44 = v44 + 1;
    if ( s1 )
    {
      v48.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    if ( *((_QWORD *)&v44 + 1) < v10 )
    {
      v43 = qvector_reserve();
      v7 = v43;
      v9 = s1;
      v8 = v44;
    }
    v11 = _mm_loadu_si128(&v48);
    v12 = v7 + 24 * v8;
    *(_QWORD *)v12 = v9;
    *(__m128i *)(v12 + 8) = v11;
    *(_QWORD *)&v44 = v44 + 1;
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( dword_2440A0 < 0 )
  {
    v13 = v44 - 1;
    v42 = v44 - 1;
  }
  else
  {
    v13 = v42;
  }
  if ( v13 < 0 )
    v42 = 0;
  v14 = v41;
  LOWORD(v45) = (4 * ((_WORD)xmmword_244090 != 0))
              | (BYTE10(xmmword_244090) >> 2) & 1
              | (2 * ((BYTE10(xmmword_244090) & 1) == 0));
  v15 = sub_18BA90(
          1070,
          (unsigned int)sub_135C80,
          (unsigned int)&v40,
          (unsigned int)&qword_250910,
          (_DWORD)v39,
          (unsigned int)&v41);
  v16 = v15;
  if ( v15 == 1 )
  {
    if ( v41 != v14 )
    {
      v17 = 16;
      if ( v41 )
        v17 = 2 * (v41 == 1) + 8;
      WORD4(xmmword_244090) = v17;
    }
    v18 = BYTE10(xmmword_244090) & 0xFB;
    if ( (v45 & 1) != 0 )
      v18 = BYTE10(xmmword_244090) | 4;
    if ( (v45 & 2) != 0 )
    {
      v19 = v18 & 0xFE;
      v16 = 0xFFFFFFFFLL;
    }
    else
    {
      v19 = v18 | 1;
    }
    BYTE10(xmmword_244090) = v19;
    LOWORD(xmmword_244090) = ((unsigned __int16)v45 >> 2) & 1;
    sub_14A8F0(v16);
    if ( v42 < 0 || v42 >= (unsigned __int64)v44 )
    {
      dword_2440A0 = 0;
LABEL_32:
      v20 = 1;
      goto LABEL_33;
    }
    s1 = nullptr;
    v48 = 0;
    v29 = v43 + 24LL * v42;
    v30 = *(__int64 **)(v29 + 8);
    v39 = v30;
    if ( v30 )
    {
      v32 = (size_t)v30;
      v33 = (char *)qalloc_or_throw();
      v48.m128i_i64[1] = v32;
      s1 = v33;
      memcpy(v33, *(const void **)v29, v32);
      v31 = s1;
      v48.m128i_i64[0] = v32;
      v34 = s1;
      if ( !strcmp(s1, "All IDB encodings") )
      {
        dword_2440A0 = -1;
LABEL_50:
        if ( v31 )
        {
          v48.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_32;
      }
      v35 = strstr(v31, " (");
      if ( v35 )
      {
        v36 = v35 - v34;
        if ( v35 - v34 != -1 )
        {
          if ( v36 )
          {
            v37 = v36 + 1;
            if ( (unsigned __int64)v39 < v36 + 1 )
            {
              if ( v48.m128i_i64[1] < v37 )
              {
                v38.m128i_i64[0] = v35 - v34;
                v38.m128i_i64[1] = v36 + 1;
                s1 = (char *)qvector_reserve();
                v31 = s1;
                v37 = v38.m128i_u64[1];
                v36 = v38.m128i_i64[0];
                v39 = (__int64 *)v48.m128i_i64[0];
              }
              v38.m128i_i64[1] = v37;
              v38.m128i_i64[0] = v36;
              memset((char *)v39 + (_QWORD)v31, 0, v37 - (_QWORD)v39);
              v35 = &s1[v38.m128i_i64[0]];
              v48.m128i_i64[0] = v38.m128i_i64[1];
            }
            else if ( v39 != (__int64 *)(v36 + 1) )
            {
              v48.m128i_i64[0] = v36 + 1;
            }
            *v35 = 0;
          }
          else if ( v34 )
          {
            v48.m128i_i64[0] = 0;
            qfree();
            s1 = nullptr;
            v48.m128i_i64[1] = 0;
          }
        }
      }
    }
    dword_2440A0 = add_encoding();
    v31 = s1;
    goto LABEL_50;
  }
  v20 = 0;
LABEL_33:
  v21 = v43;
  if ( v43 )
  {
    v22 = v44;
    if ( (_QWORD)v44 )
    {
      v23 = 0;
      do
      {
        v24 = (_QWORD *)(v21 + 24 * v23);
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
          v21 = v43;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return v20;
}

