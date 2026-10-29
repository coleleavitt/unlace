__int64 *__fastcall clang_getRemappings(const char *src, __int64 a2)
{
  const char *v2; // rbx
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // r13
  bool v7; // zf
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rbp
  size_t v13; // rax
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r13
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // r13
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  _QWORD *v23; // r13
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  _QWORD *v26; // r13
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // r13
  char *v33; // r15
  size_t v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char *v37; // r13
  char *v38; // rbx
  __int64 v39; // rax
  _BYTE *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rbx
  void *v43; // rdi
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  const char *v47; // rbp
  char *v48; // r12
  __int64 v49; // rcx
  size_t v50; // r13
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbp
  _BYTE *v54; // rax
  __m128i *v55; // r12
  size_t v56; // r13
  unsigned __int64 v57; // rax
  __m128i si128; // xmm0
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  size_t v71; // [rsp+8h] [rbp-D0h]
  _QWORD v72[2]; // [rsp+10h] [rbp-C8h] BYREF
  void *v73[2]; // [rsp+20h] [rbp-B8h]
  void *v74[2]; // [rsp+30h] [rbp-A8h]
  __int128 v75; // [rsp+40h] [rbp-98h]
  void *v76[2]; // [rsp+50h] [rbp-88h]
  void *v77[2]; // [rsp+60h] [rbp-78h]
  __int128 v78; // [rsp+70h] [rbp-68h]
  void *v79[2]; // [rsp+80h] [rbp-58h]
  __int64 v80; // [rsp+90h] [rbp-48h]

  v2 = src;
  v3 = getenv("LIBCLANG_LOGGING");
  v6 = v3;
  if ( !src )
  {
    if ( v3 )
    {
      v59 = sub_26260E0("LIBCLANG_LOGGING", a2, v4, v5);
      v60 = *(_QWORD *)(v59 + 32);
      v12 = nullptr;
      if ( (unsigned __int64)(*(_QWORD *)(v59 + 24) - v60) <= 0x32 )
      {
        sub_26240F0(v59, "clang_getRemappings was called with NULL parameter\n", 51);
      }
      else
      {
        *(__m128i *)v60 = _mm_load_si128((const __m128i *)&xmmword_3C7E150);
        *(__m128i *)(v60 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E160);
        *(__m128i *)(v60 + 32) = _mm_load_si128((const __m128i *)&xmmword_3C7E170);
        *(_DWORD *)(v60 + 47) = 175269236;
        *(_QWORD *)(v59 + 32) += 51LL;
      }
      return v12;
    }
    return nullptr;
  }
  v7 = *src == 0;
  LOWORD(v74[0]) = 257;
  if ( !v7 )
  {
    v72[0] = src;
    LOBYTE(v74[0]) = 3;
  }
  v8 = nullptr;
  if ( (unsigned int)sub_2638790(v72, 0) )
  {
    if ( v6 )
    {
      v45 = sub_26260E0(v72, 0, v9, v10);
      v46 = *(_QWORD *)(v45 + 32);
      v47 = (const char *)v45;
      if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v46) <= 0x1D )
      {
        v8 = "Error by clang_getRemappings(\"";
        v63 = sub_26240F0(v45, "Error by clang_getRemappings(\"", 30);
        v48 = *(char **)(v63 + 32);
        v47 = (const char *)v63;
      }
      else
      {
        *(__m128i *)v46 = _mm_load_si128((const __m128i *)&xmmword_3C7E180);
        *(__m128i *)(v46 + 14) = _mm_load_si128((const __m128i *)&xmmword_3C7E190);
        v48 = (char *)(*(_QWORD *)(v45 + 32) + 30LL);
        *(_QWORD *)(v45 + 32) = v48;
      }
      v50 = strlen(src);
      v51 = *((_QWORD *)v47 + 3) - (_QWORD)v48;
      if ( v51 < v50 )
      {
        src = v47;
        v8 = v2;
        v62 = sub_26240F0(v47, v2, v50);
        v48 = *(char **)(v62 + 32);
        v47 = (const char *)v62;
        v51 = *(_QWORD *)(v62 + 24) - (_QWORD)v48;
      }
      else if ( v50 )
      {
        src = v48;
        v8 = v2;
        memcpy(v48, v2, v50);
        v69 = *((_QWORD *)v47 + 3);
        v48 = (char *)(v50 + *((_QWORD *)v47 + 4));
        *((_QWORD *)v47 + 4) = v48;
        v51 = v69 - (_QWORD)v48;
      }
      if ( v51 <= 2 )
      {
        v8 = "\")\n";
        src = v47;
        sub_26240F0(v47, "\")\n", 3);
      }
      else
      {
        v52 = 10530;
        v48[2] = 10;
        *(_WORD *)v48 = 10530;
        *((_QWORD *)v47 + 4) += 3LL;
      }
      v53 = sub_26260E0(src, v8, v52, v49);
      v54 = *(_BYTE **)(v53 + 32);
      if ( *(_BYTE **)(v53 + 24) == v54 )
      {
        v65 = sub_26240F0(v53, "\"", 1);
        v55 = *(__m128i **)(v65 + 32);
        v53 = v65;
      }
      else
      {
        *v54 = 34;
        v55 = (__m128i *)(*(_QWORD *)(v53 + 32) + 1LL);
        *(_QWORD *)(v53 + 32) = v55;
      }
      v56 = strlen(v2);
      v57 = *(_QWORD *)(v53 + 24) - (_QWORD)v55;
      if ( v57 < v56 )
      {
        v64 = sub_26240F0(v53, v2, v56);
        v55 = *(__m128i **)(v64 + 32);
        v53 = v64;
        v57 = *(_QWORD *)(v64 + 24) - (_QWORD)v55;
      }
      else if ( v56 )
      {
        memcpy(v55, v2, v56);
        v68 = *(_QWORD *)(v53 + 24);
        v55 = (__m128i *)(v56 + *(_QWORD *)(v53 + 32));
        *(_QWORD *)(v53 + 32) = v55;
        v57 = v68 - (_QWORD)v55;
      }
      if ( v57 <= 0x10 )
      {
        v61 = v53;
        v12 = nullptr;
        sub_26240F0(v61, "\" does not exist\n", 17);
        return v12;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E1A0);
      v55[1].m128i_i8[0] = 10;
      *v55 = si128;
      *(_QWORD *)(v53 + 32) += 17LL;
    }
    return nullptr;
  }
  v72[1] = 0;
  *(_OWORD *)v73 = 0;
  *(_OWORD *)v74 = 0;
  v75 = 0;
  *(_OWORD *)v76 = 0;
  *(_OWORD *)v77 = 0;
  v78 = 0;
  *(_OWORD *)v79 = 0;
  v72[0] = &off_4A33B80;
  v80 = 0;
  v11 = operator new(0x18u);
  *(_QWORD *)(v11 + 16) = 0;
  v12 = (__int64 *)v11;
  *(_OWORD *)v11 = 0;
  v13 = strlen(src);
  v14 = src;
  if ( (unsigned __int8)sub_1F5B1C0(v12, src, v13, v72) )
  {
    if ( v6 )
    {
      v30 = sub_26260E0(v12, src, v15, v16);
      v31 = *(_QWORD *)(v30 + 32);
      v32 = (const char *)v30;
      if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v31) <= 0x1D )
      {
        v14 = "Error by clang_getRemappings(\"";
        v67 = sub_26240F0(v30, "Error by clang_getRemappings(\"", 30);
        v33 = *(char **)(v67 + 32);
        v32 = (const char *)v67;
      }
      else
      {
        *(__m128i *)v31 = _mm_load_si128((const __m128i *)&xmmword_3C7E180);
        *(__m128i *)(v31 + 14) = _mm_load_si128((const __m128i *)&xmmword_3C7E190);
        v33 = (char *)(*(_QWORD *)(v30 + 32) + 30LL);
        *(_QWORD *)(v30 + 32) = v33;
      }
      v34 = strlen(src);
      v36 = *((_QWORD *)v32 + 3) - (_QWORD)v33;
      if ( v36 < v34 )
      {
        src = v32;
        v14 = v2;
        v66 = sub_26240F0(v32, v2, v34);
        v33 = *(char **)(v66 + 32);
        v32 = (const char *)v66;
        v36 = *(_QWORD *)(v66 + 24) - (_QWORD)v33;
      }
      else if ( v34 )
      {
        src = v33;
        v14 = v2;
        v71 = v34;
        memcpy(v33, v2, v34);
        v70 = *((_QWORD *)v32 + 3);
        v34 = *((_QWORD *)v32 + 4) + v71;
        *((_QWORD *)v32 + 4) = v34;
        v33 = (char *)v34;
        v36 = v70 - v34;
      }
      if ( v36 <= 2 )
      {
        v14 = "\")\n";
        src = v32;
        sub_26240F0(v32, "\")\n", 3);
      }
      else
      {
        v33[2] = 10;
        *(_WORD *)v33 = 10530;
        *((_QWORD *)v32 + 4) += 3LL;
      }
      v37 = (char *)v73[0];
      v38 = (char *)v73[1];
      while ( v38 != v37 )
      {
        while ( 1 )
        {
          v39 = sub_26260E0(src, v14, v34, v35);
          v14 = *((const char **)v37 + 1);
          src = (const char *)sub_26240F0(v39, v14, *((_QWORD *)v37 + 2));
          v40 = *((_BYTE **)src + 4);
          if ( (unsigned __int64)v40 >= *((_QWORD *)src + 3) )
            break;
          v34 = (size_t)(v40 + 1);
          v37 += 40;
          *((_QWORD *)src + 4) = v40 + 1;
          *v40 = 10;
          if ( v38 == v37 )
            goto LABEL_51;
        }
        v14 = byte_9 + 1;
        v37 += 40;
        sub_26239D0(src, 10);
      }
    }
LABEL_51:
    v41 = v12[1];
    v42 = *v12;
    if ( v41 != *v12 )
    {
      do
      {
        v43 = *(void **)(v42 + 32);
        if ( v43 != (void *)(v42 + 48) )
          operator delete(v43, *(_QWORD *)(v42 + 48) + 1LL);
        if ( *(_QWORD *)v42 != v42 + 16 )
          operator delete(*(void **)v42, *(_QWORD *)(v42 + 16) + 1LL);
        v42 += 64;
      }
      while ( v41 != v42 );
      v42 = *v12;
    }
    if ( v42 )
      operator delete((void *)v42, v12[2] - v42);
    v44 = v12;
    v12 = nullptr;
    operator delete(v44, 0x18u);
  }
  v72[0] = &off_4A33B80;
  if ( v79[0] )
    operator delete(v79[0], v80 - (unsigned __int64)v79[0]);
  v17 = (_QWORD *)v78;
  v18 = v77[1];
  if ( (void *)v78 != v77[1] )
  {
    do
    {
      v19 = (_QWORD *)v18[1];
      if ( v19 != v18 + 3 )
        operator delete(v19, v18[3] + 1LL);
      v18 += 5;
    }
    while ( v17 != v18 );
    v18 = v77[1];
  }
  if ( v18 )
    operator delete(v18, *((_QWORD *)&v78 + 1) - (_QWORD)v18);
  v20 = v76[1];
  v21 = v76[0];
  if ( v76[1] != v76[0] )
  {
    do
    {
      v22 = (_QWORD *)v21[1];
      if ( v22 != v21 + 3 )
        operator delete(v22, v21[3] + 1LL);
      v21 += 5;
    }
    while ( v20 != v21 );
    v21 = v76[0];
  }
  if ( v21 )
    operator delete(v21, (char *)v77[0] - (char *)v21);
  v23 = (_QWORD *)v75;
  v24 = v74[1];
  if ( (void *)v75 != v74[1] )
  {
    do
    {
      v25 = (_QWORD *)v24[1];
      if ( v25 != v24 + 3 )
        operator delete(v25, v24[3] + 1LL);
      v24 += 5;
    }
    while ( v23 != v24 );
    v24 = v74[1];
  }
  if ( v24 )
    operator delete(v24, *((_QWORD *)&v75 + 1) - (_QWORD)v24);
  v26 = v73[1];
  v27 = v73[0];
  if ( v73[1] != v73[0] )
  {
    do
    {
      v28 = (_QWORD *)v27[1];
      if ( v28 != v27 + 3 )
        operator delete(v28, v27[3] + 1LL);
      v27 += 5;
    }
    while ( v26 != v27 );
    v27 = v73[0];
  }
  if ( v27 )
    operator delete(v27, (char *)v74[0] - (char *)v27);
  sub_C65020(v72);
  return v12;
}

