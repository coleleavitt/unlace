unsigned __int64 __fastcall sub_33C350(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // r13
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 first_seg; // r12
  char *v10; // r15
  char **v11; // rbp
  char **v12; // rbx
  char *v13; // r15
  char *v14; // rbx
  char *v15; // rbp
  char *v16; // rax
  char **v17; // r12
  __int64 k; // rbx
  __int64 v19; // r13
  const char **v20; // r15
  char **v21; // rbx
  __int64 v22; // r12
  char v23; // al
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rsi
  char *v29; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rsi
  int v35; // eax
  const __m128i *v36; // rbp
  const char *v37; // r15
  __int32 v38; // r13d
  const __m128i *j; // rbx
  const char *v40; // rsi
  __m128i *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  char v46; // al
  char *v47; // rdx
  char *v48; // rsi
  char *v49; // rsi
  __m128i v50; // [rsp+0h] [rbp-A8h] BYREF
  char *v51; // [rsp+10h] [rbp-98h]
  char **i; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+20h] [rbp-88h]
  char *v54; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __int128 v56; // [rsp+38h] [rbp-70h]
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  __int128 v58; // [rsp+58h] [rbp-50h]
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v1 = a1 + 1160;
  v59 = __readfsqword(0x28u);
  v2 = (char *)a1;
  *(_DWORD *)(a1 + 1416) &= ~0x20u;
  v3 = *(_QWORD *)(a1 + 1160);
  v53 = v1;
  if ( v3 )
  {
    *((_QWORD *)v2 + 146) = 0;
    qfree(v3);
    *((_QWORD *)v2 + 145) = 0;
    *((_QWORD *)v2 + 147) = 0;
  }
  v4 = *((_QWORD *)v2 + 148);
  if ( v4 )
  {
    *((_QWORD *)v2 + 149) = 0;
    qfree(v4);
    *((_QWORD *)v2 + 148) = 0;
    *((_QWORD *)v2 + 150) = 0;
  }
  v5 = *((_QWORD *)v2 + 151);
  if ( v5 )
  {
    *((_QWORD *)v2 + 152) = 0;
    qfree(v5);
    *((_QWORD *)v2 + 151) = 0;
    *((_QWORD *)v2 + 153) = 0;
  }
  v6 = *((_QWORD *)v2 + 154);
  if ( v6 )
  {
    *((_QWORD *)v2 + 155) = 0;
    qfree(v6);
    *((_QWORD *)v2 + 154) = 0;
    *((_QWORD *)v2 + 156) = 0;
  }
  v7 = *((_QWORD *)v2 + 157);
  if ( v7 )
  {
    *((_QWORD *)v2 + 158) = 0;
    qfree(v7);
    *((_QWORD *)v2 + 157) = 0;
    *((_QWORD *)v2 + 159) = 0;
  }
  v8 = *((_QWORD *)v2 + 160);
  if ( v8 )
  {
    *((_QWORD *)v2 + 161) = 0;
    qfree(v8);
    *((_QWORD *)v2 + 160) = 0;
    *((_QWORD *)v2 + 162) = 0;
  }
  first_seg = get_first_seg();
  for ( i = &s; first_seg; first_seg = get_next_seg(*(_QWORD *)v22) )
  {
    s = nullptr;
    v56 = 0;
    if ( get_segm_name(i, first_seg, 0) <= 0 && s )
    {
      *(_QWORD *)&v56 = 0;
      qfree(s);
      s = nullptr;
      *((_QWORD *)&v56 + 1) = 0;
    }
    v10 = (char *)::s1;
    if ( (_QWORD)v56 )
      v10 = s;
    v11 = off_4B93C0;
    v12 = off_4B93C0;
    while ( strcasecmp(v10, *v12) )
    {
      if ( ++v12 == &off_4B93E0 )
      {
        s1 = nullptr;
        v58 = 0;
        get_segm_class(&s1, first_seg);
        v13 = s1;
        v14 = (char *)::s1;
        if ( (_QWORD)v58 )
          v14 = s1;
        while ( strcasecmp(v14, *v11) )
        {
          if ( &off_4B93E0 == ++v11 )
          {
            if ( v13 )
            {
              *(_QWORD *)&v58 = 0;
              qfree(v13);
            }
            goto LABEL_26;
          }
        }
        if ( v13 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v13);
        }
        break;
      }
    }
    v31 = *((_QWORD *)v2 + 146);
    v32 = _mm_loadl_epi64((const __m128i *)first_seg);
    v33 = _mm_loadl_epi64((const __m128i *)(first_seg + 8));
    v34 = *((_QWORD *)v2 + 145);
    if ( *((_QWORD *)v2 + 147) < (unsigned __int64)(v31 + 1) )
    {
      v50.m128i_i64[1] = v33.m128i_i64[0];
      v50.m128i_i64[0] = v32.m128i_i64[0];
      v44 = qvector_reserve(v53, v34, v31 + 1, 16);
      *((_QWORD *)v2 + 145) = v44;
      v31 = *((_QWORD *)v2 + 146);
      v34 = v44;
      v33 = _mm_loadl_epi64((const __m128i *)&v50.m128i_u64[1]);
      v32 = _mm_loadl_epi64(&v50);
    }
    *(__m128i *)(v34 + 16 * v31) = _mm_unpacklo_epi64(v32, v33);
    ++*((_QWORD *)v2 + 146);
LABEL_26:
    v15 = (char *)::s1;
    if ( (_QWORD)v56 )
    {
      v15 = s;
      v16 = strrchr(s, 58);
      if ( v16 )
        v15 = v16 + 1;
    }
    if ( (_BYTE)byte_4C2AB0 )
    {
      v50.m128i_i64[0] = (__int64)&xmmword_4C1910;
    }
    else
    {
      v35 = __cxa_guard_acquire(&byte_4C2AB0);
      v50.m128i_i64[0] = (__int64)&xmmword_4C1910;
      if ( v35 )
      {
        sub_33C100((__int64)(&xmmword_4C1910 - 43), &xmmword_4C1910, 10);
        sub_334220((const char **)&xmmword_4C1910 - 86, (const char **)&xmmword_4C1910 - 54);
        v50.m128i_i64[1] = first_seg;
        v54 = v2;
        v51 = v15;
        v36 = &xmmword_4C1910 - 27;
        do
        {
          v37 = (const char *)v36->m128i_i64[0];
          v38 = v36->m128i_i32[2];
          for ( j = v36; ; j[1] = _mm_load_si128(j) )
          {
            v40 = (const char *)j[-1].m128i_i64[0];
            v41 = (__m128i *)j--;
            if ( strcmp(v37, v40) >= 0 )
              break;
          }
          v42 = v50.m128i_i64[0];
          ++v36;
          v41->m128i_i64[0] = (__int64)v37;
          v41->m128i_i32[2] = v38;
        }
        while ( v36 != (const __m128i *)v42 );
        first_seg = v50.m128i_i64[1];
        v15 = v51;
        v2 = v54;
        __cxa_guard_release(&byte_4C2AB0);
      }
    }
    v51 = v2;
    v50.m128i_i64[1] = first_seg;
    v17 = &off_4C1660;
    for ( k = 43; k > 0; k = k - 1 - v19 )
    {
      while ( 1 )
      {
        v19 = k >> 1;
        v20 = (const char **)&v17[2 * (k >> 1)];
        if ( strcmp(*v20, v15) < 0 )
          break;
        k >>= 1;
        if ( v19 <= 0 )
          goto LABEL_35;
      }
      v17 = (char **)(v20 + 2);
    }
LABEL_35:
    v21 = v17;
    v2 = v51;
    v22 = v50.m128i_i64[1];
    if ( v21 != (char **)v50.m128i_i64[0] && !strcmp(*v21, v15) )
    {
      v45 = *((_DWORD *)v21 + 2);
      if ( v45 == 2 )
      {
        v24 = (__int64 *)(v2 + 1256);
        goto LABEL_40;
      }
      if ( v45 > 2 )
      {
        v24 = (__int64 *)(v2 + 1280);
        if ( v45 == 3 )
          goto LABEL_40;
      }
      else
      {
        if ( v45 == -1 )
          goto LABEL_77;
        if ( v45 == 1 )
        {
          v46 = *(_BYTE *)(v22 + 42);
          if ( v46 && (v46 & 2) != 0 )
          {
            s1 = nullptr;
            v47 = (char *)::s1;
            v58 = 0;
            if ( (_QWORD)v56 )
              v47 = s;
            sub_66DF0(
              (__int64 *)&s1,
              (__int64)"The decompiler did not consider the segment '%s' as read-only\n"
                       "because the segment has the write permission",
              v47);
            v48 = (char *)::s1;
            if ( (_QWORD)v58 )
              v48 = s1;
            sub_2AFAB0((__int64)"AUTOHIDE REGISTRY\n%s", v48);
            v49 = (char *)::s1;
            if ( (_QWORD)v58 )
              v49 = s1;
            sub_68620((__int64)"%s\n", v49);
            if ( s1 )
            {
              *(_QWORD *)&v58 = 0;
              qfree(s1);
            }
LABEL_75:
            v29 = s;
            if ( !s )
              continue;
            goto LABEL_43;
          }
LABEL_77:
          v24 = (__int64 *)(v2 + 1232);
          goto LABEL_40;
        }
      }
    }
    if ( *(_BYTE *)(v22 + 184) != 1 || (v24 = (__int64 *)(v2 + 1280), (unsigned int)getinf(5) != 11) )
    {
      v23 = *(_BYTE *)(v22 + 42);
      if ( v23 )
      {
        v24 = (__int64 *)(v2 + 1184);
        if ( (v23 & 2) != 0 )
          goto LABEL_75;
      }
      else
      {
        if ( *(_BYTE *)(v22 + 184) != 2 )
          goto LABEL_75;
        v24 = (__int64 *)(v2 + 1208);
      }
    }
LABEL_40:
    v25 = v24[1];
    v26 = _mm_loadl_epi64((const __m128i *)v22);
    v27 = _mm_loadl_epi64((const __m128i *)(v22 + 8));
    v28 = *v24;
    if ( v24[2] < (unsigned __int64)(v25 + 1) )
    {
      v50.m128i_i64[1] = v27.m128i_i64[0];
      v50.m128i_i64[0] = v26.m128i_i64[0];
      v43 = qvector_reserve(v24, v28, v25 + 1, 16);
      v25 = v24[1];
      v26 = _mm_loadl_epi64(&v50);
      *v24 = v43;
      v28 = v43;
      v27 = _mm_loadl_epi64((const __m128i *)&v50.m128i_u64[1]);
    }
    *(__m128i *)(v28 + 16 * v25) = _mm_unpacklo_epi64(v26, v27);
    v29 = s;
    ++v24[1];
    if ( !v29 )
      continue;
LABEL_43:
    *(_QWORD *)&v56 = 0;
    qfree(v29);
  }
  return v59 - __readfsqword(0x28u);
}
