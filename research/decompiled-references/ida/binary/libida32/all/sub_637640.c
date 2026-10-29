__int64 __fastcall sub_637640(
        __int64 *a1,
        __int64 a2,
        char *a3,
        char **a4,
        char *a5,
        __int64 a6,
        __int64 a7,
        FILE **a8,
        __int64 a9)
{
  char *v10; // rdi
  unsigned __int64 v12; // rbp
  int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v18; // eax
  unsigned __int8 v19; // r15
  __int64 v20; // rax
  unsigned __int8 v21; // al
  char *v22; // r14
  __int64 v23; // r15
  char *v24; // rax
  char *v25; // r15
  size_t v26; // rax
  int v27; // eax
  __int64 v28; // rax
  FILE *v29; // rbp
  size_t v30; // rbp
  __int64 v31; // rax
  char *v32; // rsi
  unsigned __int64 v33; // rdx
  void *v34; // rbp
  __int64 v35; // r12
  __m128i v36; // xmm0
  char *v37; // rax
  __int64 v38; // r8
  int v39; // r9d
  unsigned __int64 v40; // r15
  char *v41; // rax
  const char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rcx
  __int64 v46; // r12
  char *v47; // rdx
  void *v48; // rdi
  const char *errdesc; // rax
  const char *v50; // rbx
  size_t v51; // rax
  size_t v52; // rbp
  __m128i v53; // xmm0
  char *v54; // rax
  void *v55; // rdi
  char *v56; // r12
  __int64 v57; // rax
  __m128i src; // [rsp+10h] [rbp-10A8h] BYREF
  FILE **v61; // [rsp+20h] [rbp-1098h]
  char *haystack; // [rsp+28h] [rbp-1090h]
  void *v63; // [rsp+30h] [rbp-1088h] BYREF
  __int128 v64; // [rsp+38h] [rbp-1080h]
  void *ptr; // [rsp+50h] [rbp-1068h] BYREF
  __m128i v66; // [rsp+58h] [rbp-1060h] BYREF
  int v67; // [rsp+6Ah] [rbp-104Eh] BYREF
  __int16 v68; // [rsp+6Eh] [rbp-104Ah]
  char s[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v70; // [rsp+1078h] [rbp-40h]

  src.m128i_i64[0] = a2;
  haystack = a5;
  v61 = a8;
  src.m128i_i64[1] = a9;
  v70 = __readfsqword(0x28u);
  *a8 = nullptr;
  if ( !a4 )
    return 0;
  v10 = *a4;
  if ( *a4 )
  {
    a4[1] = nullptr;
    qfree(v10);
    *a4 = nullptr;
    a4[2] = nullptr;
  }
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(614);
    BUG();
  }
  v12 = a1[2];
  if ( v12 > 1 )
  {
    v13 = 1;
    v14 = a1[1];
    v15 = 1;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 8 * v15);
      if ( !strcmp(*(const char **)v16, a3) )
        break;
      v15 = ++v13;
      if ( v13 >= v12 )
        goto LABEL_33;
    }
    if ( v16 )
    {
      ++*(_DWORD *)(v16 + 80);
      return v16;
    }
  }
LABEL_33:
  if ( src.m128i_i64[0] || (unsigned __int8)qisabspath(a3) )
  {
    v28 = sub_62A410(a6, a7, (const char *)src.m128i_i64[0], (__int64)a3, (__int64)a5, a6);
    v29 = (FILE *)fopenRB(v28);
  }
  else
  {
    v63 = nullptr;
    v64 = 0;
    sub_577950((_QWORD *)*a1, 1);
    qdirname(s);
    if ( s[0] )
    {
      ptr = nullptr;
      v66 = 0;
      v30 = strlen(s);
      src.m128i_i64[0] = v30 + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, v30 + 1, 1);
      v66.m128i_i64[0] = v30 + 1;
      memmove(ptr, s, v30);
      *((_BYTE *)ptr + v30) = 0;
      v31 = v64;
      v32 = (char *)v63;
      v33 = v64 + 1;
      if ( &ptr < v63 || &ptr >= (void **)((char *)v63 + 24 * *((_QWORD *)&v64 + 1)) )
      {
        if ( *((_QWORD *)&v64 + 1) < v33 )
        {
          v63 = (void *)qvector_reserve(&v63, v63, v33, 24);
          v32 = (char *)v63;
          v31 = v64;
        }
        v53 = _mm_loadu_si128(&v66);
        v54 = &v32[24 * v31];
        *(_QWORD *)v54 = ptr;
        *(__m128i *)(v54 + 8) = v53;
        *(_QWORD *)&v64 = v64 + 1;
      }
      else
      {
        v34 = ptr;
        v35 = v66.m128i_i64[1];
        ptr = nullptr;
        v36 = _mm_loadl_epi64(&v66);
        v66 = 0;
        if ( *((_QWORD *)&v64 + 1) < v33 )
        {
          src.m128i_i64[0] = v36.m128i_i64[0];
          v63 = (void *)qvector_reserve(&v63, v63, v33, 24);
          v32 = (char *)v63;
          v36 = _mm_loadl_epi64(&src);
          v31 = v64;
        }
        v37 = &v32[24 * v31];
        *(_QWORD *)v37 = v34;
        *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)v35);
        *(_QWORD *)&v64 = v64 + 1;
        if ( ptr )
        {
          v66.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
    }
    get_ida_subdirs();
    v40 = 0;
    if ( !(_QWORD)v64 )
    {
      if ( v63 )
        qfree(v63);
      goto LABEL_64;
    }
    do
    {
      v41 = (char *)v63 + 24 * v40;
      v42 = ::haystack;
      if ( *((_QWORD *)v41 + 1) )
        v42 = *(const char **)v41;
      v43 = sub_62A410(a6, a7, v42, (__int64)a3, v38, v39);
      v29 = (FILE *)fopenRB(v43);
      v44 = v64;
      ++v40;
    }
    while ( v40 < (unsigned __int64)v64 && !v29 );
    v45 = (char *)v63;
    if ( v63 )
    {
      if ( (_QWORD)v64 )
      {
        v46 = 0;
        do
        {
          v47 = &v45[24 * v46];
          v48 = *(void **)v47;
          if ( *(_QWORD *)v47 )
          {
            *((_QWORD *)v47 + 1) = 0;
            src.m128i_i64[0] = v44;
            qfree(v48);
            v45 = (char *)v63;
            v44 = src.m128i_i64[0];
          }
          ++v46;
        }
        while ( v44 != v46 );
      }
      *(_QWORD *)&v64 = 0;
      qfree(v45);
    }
  }
  if ( !v29 )
  {
LABEL_64:
    errdesc = (const char *)get_errdesc(a3);
    v50 = errdesc;
    if ( errdesc && (v51 = strlen(errdesc), (v52 = v51) != 0) )
    {
      v55 = *a4;
      v56 = (char *)(v51 + 1);
      if ( (unsigned __int64)a4[2] < v51 + 1 )
      {
        v57 = qvector_reserve(a4, *a4, v51 + 1, 1);
        *a4 = (char *)v57;
        v55 = (void *)v57;
      }
      a4[1] = v56;
      memmove(v55, v50, v52);
      (*a4)[v52] = 0;
    }
    else
    {
      a4[1] = nullptr;
    }
    return 0;
  }
  *v61 = v29;
  qfread(v29, &v67);
  if ( v67 != 1413563465 || v68 != 19529 )
    goto LABEL_37;
  if ( (unsigned int)freadbytes() )
    goto LABEL_59;
  v18 = *(_DWORD *)src.m128i_i64[1];
  if ( *(_DWORD *)src.m128i_i64[1] != 18 )
  {
    if ( v18 <= 0xF )
    {
      qfseek(v29, -4, 1);
      v18 = *(_DWORD *)src.m128i_i64[1];
    }
    if ( v18 > 0x12 )
      goto LABEL_37;
  }
  if ( (unsigned int)freadbytes()
    || (v19 = qfgetc(v29, &ptr), src.m128i_i64[0] = v19, v20 = qfread(v29, s), src.m128i_i64[0] != v20)
    || (s[v19] = 0, v21 = qfgetc(v29, s), v22 = haystack, v23 = v21, v21 != qfread(v29, haystack)) )
  {
LABEL_59:
    v16 = 0;
LABEL_30:
    sub_3573A0(a4);
LABEL_31:
    sub_634830(a1, v16, 0);
    qfclose(v29);
    return 0;
  }
  v22[v23] = 0;
  v24 = strstr(v22, "macosx_arm");
  v25 = v24;
  if ( v24 )
  {
    src.m128i_i64[0] = (__int64)(v24 + 10);
    v26 = strlen(v24 + 10);
    memcpy(v25 + 6, (const void *)src.m128i_i64[0], v26 + 1);
  }
  v16 = sub_62AF20((__int64)a3, (__int64)s);
  if ( !v16 )
  {
LABEL_37:
    sub_3573A0(a4);
    v16 = 0;
    goto LABEL_31;
  }
  *(_DWORD *)(v16 + 32) = (_DWORD)ptr;
  *(_BYTE *)(v16 + 36) = qfgetc(v29, s);
  *(_BYTE *)(v16 + 37) = qfgetc(v29, s);
  *(_BYTE *)(v16 + 38) = qfgetc(v29, s);
  *(_BYTE *)(v16 + 39) = qfgetc(v29, s);
  *(_BYTE *)(v16 + 40) = qfgetc(v29, s);
  *(_BYTE *)(v16 + 41) = qfgetc(v29, s);
  v27 = *(_DWORD *)(v16 + 32);
  if ( (v27 & 4) != 0 )
  {
    *(_BYTE *)(v16 + 42) = qfgetc(v29, s);
    *(_BYTE *)(v16 + 43) = qfgetc(v29, s);
    *(_BYTE *)(v16 + 44) = qfgetc(v29, s);
    v27 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    *(_BYTE *)(v16 + 44) = 8;
    *(_WORD *)(v16 + 42) = 1026;
  }
  if ( (v27 & 0x100) != 0 )
  {
    *(_BYTE *)(v16 + 45) = qfgetc(v29, s);
    v27 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    *(_BYTE *)(v16 + 45) = 0;
  }
  *(_DWORD *)(v16 + 48) = 0;
  if ( (v27 & 0x200) != 0 && !(unsigned int)freadbytes() )
    goto LABEL_30;
  return v16;
}

