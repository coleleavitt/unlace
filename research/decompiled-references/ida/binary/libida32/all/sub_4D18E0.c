__int64 __fastcall sub_4D18E0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  char *v10; // rsi
  __m128i v11; // xmm0
  unsigned int v12; // ebp
  __int64 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  char *v20; // rsi
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __m128i si128; // xmm0
  __int64 v24; // rax
  __m128i *v25; // rsi
  __m128i v26; // xmm0
  char *v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rax
  const void *v30; // r13
  int v31; // r9d
  const char *v32; // rcx
  char *v33; // rsi
  char *v34; // rdi
  size_t v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  size_t v38; // r8
  __int64 *v39; // rax
  size_t v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rbx
  int v43; // eax
  const void **v44; // rax
  unsigned __int64 v45; // r14
  char *v46; // rsi
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  _BYTE *v49; // rsi
  __int64 v50; // r14
  __int64 v51; // r8
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rsi
  const void *v54; // r13
  void *v55; // rax
  size_t v56; // rdx
  char *v57; // rsi
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // [rsp+0h] [rbp-20A8h]
  size_t n; // [rsp+20h] [rbp-2088h]
  size_t na; // [rsp+20h] [rbp-2088h]
  size_t nb; // [rsp+20h] [rbp-2088h]
  size_t nd; // [rsp+20h] [rbp-2088h]
  size_t nc; // [rsp+20h] [rbp-2088h]
  __int64 v72; // [rsp+28h] [rbp-2080h]
  size_t v73; // [rsp+28h] [rbp-2080h]
  __int64 v74; // [rsp+30h] [rbp-2078h] BYREF
  __int64 *v75; // [rsp+38h] [rbp-2070h]
  void *ptr; // [rsp+40h] [rbp-2068h] BYREF
  __int128 v77; // [rsp+48h] [rbp-2060h]
  char dest[4096]; // [rsp+60h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1060h] [rbp-1048h] BYREF
  unsigned __int64 v80; // [rsp+2068h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  if ( (debug & 0x20) != 0 )
    sub_383DA0();
  v74 = 0;
  v75 = nullptr;
  if ( (unsigned int)parse_json_file(&v74, a2, 0) )
  {
    v22 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x15 )
    {
      v24 = qvector_reserve(a3, v22, 22, 1);
      *a3 = v24;
      v22 = v24;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383A30);
    a3[1] = 22;
    *(__m128i *)v22 = si128;
    *(_QWORD *)(v22 + 13) = 0x2E4E4F534A206573LL;
    *(_BYTE *)(*a3 + 21) = 0;
    goto LABEL_17;
  }
  if ( (_DWORD)v74 != 3 )
    sub_4CD900();
  v4 = v75[1];
  if ( !v4 )
    goto LABEL_39;
  v5 = *v75;
  v6 = 0;
  v7 = *v75;
  while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "IDAMetadataDescriptorVersion") )
  {
    ++v6;
    v7 += 40;
    if ( v4 == v6 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v7 + 24) != 1 )
  {
LABEL_39:
    v25 = (__m128i *)*a3;
    if ( (unsigned __int64)a3[2] <= 0x42 )
    {
      v29 = qvector_reserve(a3, v25, 67, 1);
      *a3 = v29;
      v25 = (__m128i *)v29;
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_2383A40);
    a3[1] = 67;
    v25[4].m128i_i16[0] = 11817;
    *v25 = v26;
    v25[1] = _mm_load_si128((const __m128i *)&xmmword_2383A50);
    v25[2] = _mm_load_si128((const __m128i *)&xmmword_2383A60);
    v25[3] = _mm_load_si128((const __m128i *)&xmmword_2383A70);
    *(_BYTE *)(*a3 + 66) = 0;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v7 + 32);
  v9 = 0;
  if ( (_DWORD)v8 != 1 )
  {
    sub_3573A0((char **)a3);
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  while ( !*(_QWORD *)(v5 + 8) || strcmp(*(const char **)v5, "plugin") )
  {
    ++v9;
    v5 += 40;
    if ( v4 == v9 )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v5 + 24) != 3 )
  {
LABEL_14:
    v10 = (char *)*a3;
    if ( (unsigned __int64)a3[2] <= 0x1E )
    {
      v61 = qvector_reserve(a3, v10, 31, 1);
      *a3 = v61;
      v10 = (char *)v61;
    }
    v11 = _mm_load_si128((const __m128i *)&xmmword_2383A80);
    a3[1] = 31;
    *(__m128i *)v10 = v11;
    *(__m128i *)(v10 + 14) = _mm_load_si128((const __m128i *)&xmmword_2383A90);
    *(_BYTE *)(*a3 + 30) = 0;
    goto LABEL_17;
  }
  v14 = *(__int64 **)(v5 + 32);
  ptr = nullptr;
  v77 = 0;
  v15 = v14[1];
  if ( !v15 )
    goto LABEL_42;
  v16 = *v14;
  v17 = 0;
  while ( !*(_QWORD *)(v16 + 8) || strcmp(*(const char **)v16, "entryPoint") )
  {
    ++v17;
    v16 += 40;
    if ( v15 == v17 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v16 + 24) != 2 )
  {
LABEL_42:
    v27 = (char *)*a3;
    if ( (unsigned __int64)a3[2] <= 0x1B )
    {
      v60 = qvector_reserve(a3, v27, 28, 1);
      *a3 = v60;
      v27 = (char *)v60;
    }
    v28 = _mm_load_si128((const __m128i *)&xmmword_2383AA0);
    a3[1] = 28;
    *(__m128i *)v27 = v28;
    *(__m128i *)(v27 + 11) = _mm_load_si128((const __m128i *)&xmmword_2383AB0);
    *(_BYTE *)(*a3 + 27) = 0;
    goto LABEL_33;
  }
  v18 = *(_QWORD *)(v16 + 32);
  if ( (void **)v18 == &ptr
    || (v19 = *(_QWORD *)(v18 + 8), v19 <= 1)
    || (v30 = *(const void **)v18,
        ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v18 + 8), 1),
        *(_QWORD *)&v77 = v19,
        memmove(ptr, v30, v19 - 1),
        *((char *)ptr + v19 - 1) = 0,
        (unsigned __int64)v77 <= 1) )
  {
    v20 = (char *)*a3;
    if ( (unsigned __int64)a3[2] <= 0x20 )
    {
      v59 = qvector_reserve(a3, v20, 33, 1);
      *a3 = v59;
      v20 = (char *)v59;
    }
    v21 = _mm_load_si128((const __m128i *)&xmmword_2383AC0);
    a3[1] = 33;
    *(__m128i *)v20 = v21;
    *((__m128i *)v20 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383AD0);
    *(_BYTE *)(*a3 + 32) = 0;
    goto LABEL_33;
  }
  if ( !get_file_ext(ptr) )
  {
    if ( (debug & 0x20) != 0 )
      sub_383DA0();
    v47 = v77;
    v48 = 2;
    if ( (_QWORD)v77 )
    {
      v48 = v77 + 1;
      v47 = v77 - 1;
    }
    v49 = ptr;
    if ( *((_QWORD *)&v77 + 1) < v48 )
    {
      na = v48;
      ptr = (void *)qvector_reserve(&ptr, ptr, v48, 1);
      v48 = na;
      v49 = ptr;
    }
    *(_QWORD *)&v77 = v48;
    v49[v47] = 46;
    *((_BYTE *)ptr + v47 + 1) = 0;
    v50 = v77;
    if ( (_QWORD)v77 )
    {
      v51 = v77 + 1;
      v52 = v77 + 2;
      v50 = v77 - 1;
    }
    else
    {
      v52 = 3;
      v51 = 2;
    }
    v53 = ptr;
    if ( *((_QWORD *)&v77 + 1) < v52 )
    {
      v72 = v51;
      nb = v52;
      ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
      v51 = v72;
      v53 = ptr;
      v52 = nb;
    }
    *(_QWORD *)&v77 = v52;
    v53[v51] = 0;
    *(_WORD *)((char *)ptr + v50) = 28531;
  }
  qdirname(dest);
  v32 = haystack;
  if ( (_QWORD)v77 )
    LODWORD(v32) = (_DWORD)ptr;
  v33 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
  if ( qmakepath((int)s, 4096, (int)dest, (int)v32, 0, v31, v65) )
  {
    v12 = qfileexist(s, 4096);
    if ( (_BYTE)v12 )
    {
      v34 = s;
      v35 = strlen(s);
      v38 = v35;
      if ( v35 )
      {
        v56 = v35 + 1;
        v34 = (char *)*a1;
        if ( a1[2] < v35 + 1 )
        {
          v73 = v35;
          nc = v35 + 1;
          v62 = qvector_reserve(a1, *a1, v56, 1);
          v38 = v73;
          v56 = nc;
          *a1 = v62;
          v34 = (char *)v62;
        }
        v33 = s;
        nd = v38;
        a1[1] = v56;
        memmove(v34, s, v38);
        v38 = nd;
        *(_BYTE *)(*a1 + nd) = 0;
      }
      else
      {
        a1[1] = 0;
      }
      if ( *(_DWORD *)(v5 + 24) != 3 )
        sub_4CD8E0(v34, v33, v36, v37, v38);
      v39 = *(__int64 **)(v5 + 32);
      v40 = v39[1];
      if ( !v40 )
        goto LABEL_89;
      v41 = *v39;
      v42 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v41 + 8) )
        {
          n = v40;
          v43 = strcmp(*(const char **)v41, "name");
          v40 = n;
          if ( !v43 )
            break;
        }
        ++v42;
        v41 += 40;
        if ( v40 == v42 )
          goto LABEL_89;
      }
      if ( *(_DWORD *)(v41 + 24) != 2 )
      {
LABEL_89:
        v57 = (char *)*a3;
        if ( (unsigned __int64)a3[2] <= 0x15 )
        {
          v63 = qvector_reserve(a3, v57, 22, 1);
          *a3 = v63;
          v57 = (char *)v63;
        }
        v58 = _mm_load_si128((const __m128i *)&xmmword_2383AE0);
        a3[1] = 22;
        *(__m128i *)v57 = v58;
        *(_QWORD *)(v57 + 13) = 0x2E22656D616E2220LL;
        *(_BYTE *)(*a3 + 21) = 0;
        goto LABEL_33;
      }
      v44 = *(const void ***)(v41 + 32);
      if ( a1 + 3 != (__int64 *)v44 )
      {
        v45 = (unsigned __int64)v44[1];
        if ( v45 <= 1 )
        {
          a1[4] = 0;
LABEL_63:
          v46 = (char *)*a3;
          if ( (unsigned __int64)a3[2] <= 0xD )
          {
            v64 = qvector_reserve(a3, v46, 14, 1);
            *a3 = v64;
            v46 = (char *)v64;
          }
          a3[1] = 14;
          qmemcpy(v46, "empty \"name\".", 13);
          *(_BYTE *)(*a3 + 13) = 0;
          goto LABEL_33;
        }
        v54 = *v44;
        v55 = (void *)a1[3];
        if ( a1[5] < v45 )
        {
          v55 = (void *)qvector_reserve(a1 + 3, a1[3], v45, 1);
          a1[3] = (__int64)v55;
        }
        a1[4] = v45;
        memmove(v55, v54, v45 - 1);
        *(_BYTE *)(a1[3] + v45 - 1) = 0;
      }
      if ( (unsigned __int64)a1[4] > 1 )
      {
        if ( (debug & 0x20) != 0 )
          sub_383DA0();
        goto LABEL_34;
      }
      goto LABEL_63;
    }
  }
  sub_3573A0((char **)a3);
LABEL_33:
  v12 = 0;
LABEL_34:
  if ( ptr )
  {
    *(_QWORD *)&v77 = 0;
    qfree(ptr);
  }
LABEL_18:
  jvalue_t_clear(&v74);
  return v12;
}

