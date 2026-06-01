char *__fastcall sub_184F30(
        _BYTE *a1,
        int *a2,
        _DWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        char **a9)
{
  char *i; // r12
  char *v11; // rax
  char *v12; // r15
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  void *v18; // r12
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rax
  void *v22; // rdi
  const char *v23; // r12
  char *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r14
  size_t v28; // r12
  const char *v29; // r15
  char v30; // al
  char *v31; // rax
  __int64 v32; // rax
  __int64 v34; // rax
  unsigned int v35; // edx
  char **v36; // rax
  char *v37; // rdx
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  __m128i v42; // [rsp+8h] [rbp-90h] BYREF
  _QWORD *v43; // [rsp+18h] [rbp-80h]
  _DWORD *v44; // [rsp+20h] [rbp-78h]
  __int64 *v45; // [rsp+28h] [rbp-70h]
  char **v46; // [rsp+30h] [rbp-68h]
  int *v47; // [rsp+38h] [rbp-60h]
  void *v48; // [rsp+40h] [rbp-58h] BYREF
  __m128i v49; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v47 = a2;
  v43 = a4;
  v44 = a5;
  v45 = a7;
  v46 = a9;
  v50 = __readfsqword(0x28u);
  *a3 = 0;
  *a5 = 0;
  *a4 = "O~K~";
  a4[1] = 0;
  a4[2] = "Cancel";
  if ( a7 )
    a7[1] = 0;
  *a8 = 0;
  for ( i = &a1[*a1 == 36]; ; i = v12 + 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( !strncasecmp(i, "STARTITEM ", 0xAu) )
        {
          v23 = i + 10;
          *a3 = strtol(v23, nullptr, 10);
          v24 = strchr(v23, 10);
          if ( !v24 )
            goto LABEL_35;
          i = v24 + 1;
        }
        if ( strncasecmp(i, "AUTOSYNC\n", 9u) )
          break;
        *a8 |= 1u;
        i += 9;
      }
      if ( strncasecmp(i, "BUTTON ", 7u) )
        break;
      v27 = 0;
      v28 = 3;
      v29 = (const char *)skip_spaces();
      while ( strncasecmp(v29, (&off_234DA0)[v27], v28) )
      {
        if ( v27 == 2 )
          goto LABEL_36;
        v28 = strlen((&off_234DA0)[++v27]);
      }
      v29 += v28;
      v30 = *v29;
      if ( *v29 == 42 )
      {
        ++v29;
        *v44 = v27;
        v30 = *v29;
      }
      if ( v30 != 32 && v30 != 10 )
        goto LABEL_36;
      v29 = (const char *)skip_spaces();
      v31 = strchr(v29, 10);
      if ( !v31 )
        goto LABEL_36;
      *v31 = 0;
      i = v31 + 1;
      trim();
      if ( !strcmp(v29, "NONE") )
        v29 = nullptr;
      v43[v27] = v29;
    }
    if ( strncasecmp(i, "ACTION ", 7u) )
      break;
    v11 = strchr(i, 10);
    v12 = v11;
    if ( !v11 )
      goto LABEL_35;
    *v11 = 0;
    if ( a6 )
    {
      v48 = nullptr;
      v42.m128i_i64[1] = (__int64)(i + 7);
      v49 = 0;
      v13 = strlen(i + 7);
      v42.m128i_i64[0] = v13 + 1;
      v48 = (void *)qvector_reserve();
      v49.m128i_i64[0] = v42.m128i_i64[0];
      memmove(v48, (const void *)v42.m128i_i64[1], v13);
      *((_BYTE *)v48 + v13) = 0;
      v14 = a6[1];
      v15 = *a6;
      v16 = a6[2];
      v17 = v14 + 1;
      if ( (unsigned __int64)&v48 < *a6 || (unsigned __int64)&v48 >= v15 + 24 * v16 )
      {
        if ( v16 < v17 )
        {
          v32 = qvector_reserve();
          *a6 = v32;
          v15 = v32;
          v14 = a6[1];
        }
        v25 = _mm_loadu_si128(&v49);
        v26 = v15 + 24 * v14;
        *(_QWORD *)v26 = v48;
        *(__m128i *)(v26 + 8) = v25;
        ++a6[1];
      }
      else
      {
        v18 = v48;
        v19 = _mm_loadl_epi64(&v49);
        v48 = nullptr;
        v20 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
        v49 = 0;
        if ( v16 < v17 )
        {
          v42.m128i_i64[1] = v20.m128i_i64[0];
          v42.m128i_i64[0] = v19.m128i_i64[0];
          v34 = qvector_reserve();
          *a6 = v34;
          v15 = v34;
          v20 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
          v14 = a6[1];
          v19 = _mm_loadl_epi64(&v42);
        }
        v21 = v15 + 24 * v14;
        *(_QWORD *)v21 = v18;
        v22 = v48;
        *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v19, v20);
        ++a6[1];
        if ( v22 )
        {
          v49.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  if ( !strncmp(i, "HELP\n", 5u) )
  {
    if ( i[5] == 37 && i[6] == 115 )
    {
      v35 = *v47;
      if ( (unsigned int)*v47 > 0x2F )
      {
        v36 = *((char ***)v47 + 1);
        *((_QWORD *)v47 + 1) = v36 + 1;
      }
      else
      {
        v36 = (char **)(*((_QWORD *)v47 + 2) + v35);
        *v47 = v35 + 8;
      }
      v37 = *v36;
    }
    else
    {
      v37 = i + 5;
    }
    tv_dynhelp = v37;
    v40 = strstr(i + 5, "\nENDHELP\n");
    if ( !v40 )
    {
LABEL_35:
      v29 = nullptr;
LABEL_36:
      sub_92120((__int64)"form: error at %s", v29);
      return nullptr;
    }
    v40[1] = 0;
    i = v40 + 9;
  }
  else
  {
    sub_17C3C0(v45, nullptr, i);
  }
  if ( !v45 || (v38 = "Help", (unsigned __int64)v45[1] <= 1) )
  {
    v38 = (char *)tv_dynhelp;
    if ( tv_dynhelp )
      v38 = "Help";
  }
  v43[3] = v38;
  *v46 = i;
  v39 = strchr(i, 10);
  if ( !v39 )
    goto LABEL_35;
  *v39 = 0;
  return v39 + 1;
}

