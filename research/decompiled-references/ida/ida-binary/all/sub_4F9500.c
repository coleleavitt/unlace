char *__fastcall sub_4F9500(
        _BYTE *a1,
        int *a2,
        _DWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        __int64 *a15,
        _DWORD *a16,
        char **a17)
{
  char *i; // r12
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  char *v26; // r15
  size_t v27; // r12
  __int64 v28; // rax
  const char *v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  void *v32; // r12
  __m128i v33; // xmm0
  char *v34; // rax
  void *v35; // rdi
  const char *v36; // r12
  char *v37; // rax
  char *v38; // rax
  char *v39; // rdi
  __int64 v40; // r14
  size_t v41; // r12
  const char *v42; // r15
  char v43; // al
  char *v44; // rax
  __int64 v45; // rax
  __int64 v47; // rax
  unsigned int v48; // edx
  char **v49; // rax
  char *v50; // rdx
  const char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  __m128i v55; // [rsp+8h] [rbp-90h] BYREF
  _QWORD *v56; // [rsp+18h] [rbp-80h]
  _DWORD *v57; // [rsp+20h] [rbp-78h]
  __int64 *v58; // [rsp+28h] [rbp-70h]
  char **v59; // [rsp+30h] [rbp-68h]
  int *v60; // [rsp+38h] [rbp-60h]
  void *v61; // [rsp+40h] [rbp-58h] BYREF
  __m128i v62; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-40h]

  v60 = a2;
  v56 = a4;
  v57 = a5;
  v58 = a15;
  v59 = a17;
  v63 = __readfsqword(0x28u);
  *a3 = 0;
  *a5 = 0;
  *a4 = "O~K~";
  a4[1] = 0;
  a4[2] = "Cancel";
  if ( a15 )
    a15[1] = 0;
  *a16 = 0;
  for ( i = &a1[*a1 == 36]; ; i = v26 + 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( !strncasecmp(i, "STARTITEM ", 0xAu) )
        {
          v36 = i + 10;
          *a3 = strtol(v36, nullptr, 10);
          v37 = strchr(v36, 10);
          if ( !v37 )
            goto LABEL_35;
          i = v37 + 1;
        }
        if ( strncasecmp(i, "AUTOSYNC\n", 9u) )
          break;
        *a16 |= 1u;
        i += 9;
      }
      if ( strncasecmp(i, "BUTTON ", 7u) )
        break;
      v39 = i + 7;
      v40 = 0;
      v41 = 3;
      v42 = (const char *)skip_spaces(v39);
      while ( strncasecmp(v42, (&off_86D5D0)[v40], v41) )
      {
        if ( v40 == 2 )
          goto LABEL_36;
        v41 = strlen((&off_86D5D0)[++v40]);
      }
      v42 += v41;
      v43 = *v42;
      if ( *v42 == 42 )
      {
        ++v42;
        *v57 = v40;
        v43 = *v42;
      }
      if ( v43 != 32 && v43 != 10 )
        goto LABEL_36;
      v42 = (const char *)skip_spaces(v42);
      v44 = strchr(v42, 10);
      if ( !v44 )
        goto LABEL_36;
      *v44 = 0;
      i = v44 + 1;
      trim(v42);
      if ( !strcmp(v42, "NONE") )
        v42 = nullptr;
      v56[v40] = v42;
    }
    if ( strncasecmp(i, "ACTION ", 7u) )
      break;
    v19 = strchr(i, 10);
    v26 = v19;
    if ( !v19 )
      goto LABEL_35;
    *v19 = 0;
    if ( a6 )
    {
      v61 = nullptr;
      v55.m128i_i64[1] = (__int64)(i + 7);
      v62 = 0;
      v27 = strlen(i + 7);
      v55.m128i_i64[0] = v27 + 1;
      v61 = (void *)qvector_reserve(&v61, 0, v27 + 1, 1);
      v62.m128i_i64[0] = v55.m128i_i64[0];
      memmove(v61, (const void *)v55.m128i_i64[1], v27);
      *((_BYTE *)v61 + v27) = 0;
      v28 = *(_QWORD *)(a6 + 8);
      v29 = *(const char **)a6;
      v30 = *(_QWORD *)(a6 + 16);
      v31 = v28 + 1;
      if ( (unsigned __int64)&v61 < *(_QWORD *)a6 || &v61 >= (void **)&v29[24 * v30] )
      {
        if ( v30 < v31 )
        {
          v45 = qvector_reserve(a6, v29, v28 + 1, 24);
          *(_QWORD *)a6 = v45;
          v29 = (const char *)v45;
          v28 = *(_QWORD *)(a6 + 8);
        }
        a7 = (__m128)_mm_loadu_si128(&v62);
        v38 = (char *)&v29[24 * v28];
        *(_QWORD *)v38 = v61;
        *(__m128 *)(v38 + 8) = a7;
        ++*(_QWORD *)(a6 + 8);
      }
      else
      {
        a9 = 0;
        v32 = v61;
        v33 = _mm_loadl_epi64(&v62);
        v61 = nullptr;
        a8 = (__m128)_mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
        v62 = 0;
        if ( v30 < v31 )
        {
          v55.m128i_i64[1] = a8.m128_u64[0];
          v55.m128i_i64[0] = v33.m128i_i64[0];
          v47 = qvector_reserve(a6, v29, v28 + 1, 24);
          *(_QWORD *)a6 = v47;
          v29 = (const char *)v47;
          a8 = (__m128)_mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
          v28 = *(_QWORD *)(a6 + 8);
          v33 = _mm_loadl_epi64(&v55);
        }
        a7 = (__m128)_mm_unpacklo_epi64(v33, (__m128i)a8);
        v34 = (char *)&v29[24 * v28];
        *(_QWORD *)v34 = v32;
        v35 = v61;
        *(__m128 *)(v34 + 8) = a7;
        ++*(_QWORD *)(a6 + 8);
        if ( v35 )
        {
          v62.m128i_i64[0] = 0;
          *(double *)a7.m128_u64 = qfree(v35, v29);
        }
      }
    }
  }
  if ( !strncmp(i, "HELP\n", 5u) )
  {
    if ( i[5] == 37 && i[6] == 115 )
    {
      v48 = *v60;
      if ( (unsigned int)*v60 > 0x2F )
      {
        v49 = *((char ***)v60 + 1);
        *((_QWORD *)v60 + 1) = v49 + 1;
      }
      else
      {
        v49 = (char **)(*((_QWORD *)v60 + 2) + v48);
        *v60 = v48 + 8;
      }
      v50 = *v49;
    }
    else
    {
      v50 = i + 5;
    }
    unk_8D2348 = v50;
    v53 = strstr(i + 5, "\nENDHELP\n");
    if ( !v53 )
    {
LABEL_35:
      v42 = nullptr;
LABEL_36:
      sub_169630(
        (int)"form: error at %s",
        (__int64)v42,
        v20,
        v21,
        v22,
        v23,
        a7,
        a8,
        a9,
        a10,
        v24,
        v25,
        a13,
        a14,
        (char)a3);
      return nullptr;
    }
    v53[1] = 0;
    i = v53 + 9;
  }
  else
  {
    sub_4BEF60(v58, nullptr, i);
  }
  if ( !v58 || (v51 = "Help", (unsigned __int64)v58[1] <= 1) )
  {
    v51 = (const char *)unk_8D2348;
    if ( unk_8D2348 )
      v51 = "Help";
  }
  v56[3] = v51;
  *v59 = i;
  v52 = strchr(i, 10);
  v20 = (__int64)v52;
  if ( !v52 )
    goto LABEL_35;
  *v52 = 0;
  return v52 + 1;
}
