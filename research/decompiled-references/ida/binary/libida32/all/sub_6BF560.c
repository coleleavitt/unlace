__int64 __fastcall sub_6BF560(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v6; // rsi
  char *v7; // r13
  const char *v8; // rsi
  __int128 v9; // rax
  const char **v10; // r14
  const char **v11; // r15
  void *v12; // rbp
  __m128i v13; // xmm0
  char *v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // rbp
  void *v19; // rax
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  const char **v22; // rbp
  const char **v23; // r8
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r12
  const char *v28; // rcx
  char *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // r13
  char *v32; // r14
  void *v33; // rdi
  void *v34; // rdi
  const char **v35; // rbx
  char *v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rbx
  char *v39; // rax
  void *v40; // rdi
  void *v42; // rax
  const void *v43; // rsi
  __int64 v44; // r12
  char *v45; // rax
  char *v46; // r13
  size_t v47; // rbp
  char *v48; // r13
  __int64 v49; // r14
  const void *v50; // rsi
  size_t v51; // rbp
  void *v52; // rax
  void *v53; // rax
  __int64 v54; // [rsp+0h] [rbp-130h]
  const char **v55; // [rsp+0h] [rbp-130h]
  const char **v59; // [rsp+20h] [rbp-110h]
  __m128i v60; // [rsp+28h] [rbp-108h] BYREF
  char v61[8]; // [rsp+38h] [rbp-F8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-F0h] BYREF
  void *v63; // [rsp+48h] [rbp-E8h] BYREF
  __int128 v64; // [rsp+50h] [rbp-E0h]
  void *v65; // [rsp+68h] [rbp-C8h] BYREF
  const char **v66; // [rsp+70h] [rbp-C0h]
  __int64 v67; // [rsp+78h] [rbp-B8h]
  void *ptr; // [rsp+88h] [rbp-A8h] BYREF
  __m128i v69; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-90h]
  __int64 v71; // [rsp+A8h] [rbp-88h] BYREF
  _DWORD v72[6]; // [rsp+B0h] [rbp-80h] BYREF
  void *v73; // [rsp+C8h] [rbp-68h]
  __int128 v74; // [rsp+D0h] [rbp-60h]
  char v75; // [rsp+E0h] [rbp-50h]
  unsigned __int64 v76; // [rsp+F0h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 48);
  v7 = v61;
  v76 = __readfsqword(0x28u);
  v64 = 0;
  v63 = nullptr;
  sub_E4C640(v61, v6);
  v8 = v61;
  sub_E4F260(&v65, v61, a4);
  v10 = (const char **)v65;
  v11 = v66;
  if ( v65 == v66 )
  {
    v22 = (const char **)v63;
    v23 = (const char **)((char *)v63 + 24 * v64);
    if ( v23 == v63 )
      goto LABEL_42;
  }
  else
  {
    v54 = a2;
    do
    {
      while ( 1 )
      {
        v15 = *v10;
        ptr = nullptr;
        v69 = 0;
        if ( v15 )
        {
          v16 = strlen(v15);
          v17 = v16 + 1;
          v18 = v16;
          v19 = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
          v69.m128i_i64[0] = v17;
          ptr = v19;
          memmove(v19, v15, v18);
          *((_BYTE *)ptr + v18) = 0;
        }
        v9 = v64;
        v8 = (const char *)v63;
        v20 = v64 + 1;
        if ( &ptr < v63 || &ptr >= (void **)((char *)v63 + 24 * *((_QWORD *)&v64 + 1)) )
          break;
        v12 = ptr;
        v13 = _mm_loadu_si128(&v69);
        ptr = nullptr;
        v69 = 0;
        if ( *((_QWORD *)&v64 + 1) < v20 )
        {
          v60 = v13;
          *(_QWORD *)&v9 = qvector_reserve(&v63, v63, v64 + 1, 24);
          v13 = _mm_load_si128(&v60);
          v63 = (void *)v9;
          v8 = (const char *)v9;
          *(_QWORD *)&v9 = v64;
        }
        v14 = (char *)&v8[24 * v9];
        *(_QWORD *)v14 = v12;
        *(__m128i *)(v14 + 8) = v13;
        *(_QWORD *)&v64 = v64 + 1;
        if ( ptr )
        {
          v69.m128i_i64[0] = 0;
          qfree(ptr);
        }
        v10 += 4;
        if ( v11 == v10 )
          goto LABEL_15;
      }
      if ( *((_QWORD *)&v64 + 1) < v20 )
      {
        v63 = (void *)qvector_reserve(&v63, v63, v64 + 1, 24);
        v8 = (const char *)v63;
        *(_QWORD *)&v9 = v64;
      }
      *((_QWORD *)&v9 + 1) = ptr;
      v10 += 4;
      v21 = _mm_loadu_si128(&v69);
      *(_QWORD *)&v9 = &v8[24 * v9];
      *(_QWORD *)v9 = ptr;
      *(__m128i *)(v9 + 8) = v21;
      *(_QWORD *)&v64 = v64 + 1;
    }
    while ( v11 != v10 );
LABEL_15:
    v22 = (const char **)v63;
    a2 = v54;
    v7 = v61;
    v23 = (const char **)((char *)v63 + 24 * v64);
    if ( v23 == v63 )
      goto LABEL_37;
  }
  v55 = v23;
  v60.m128i_i64[0] = (__int64)v61;
  do
  {
    if ( (unsigned __int64)v22[1] > 1 )
    {
      v24 = *(_QWORD *)(a2 + 8);
      v62 = 0;
      ptr = nullptr;
      v69 = 0;
      if ( v24 )
      {
        v44 = 0;
        v45 = (char *)qalloc_or_throw(80 * v24, v8, *((_QWORD *)&v9 + 1));
        v69.m128i_i64[1] = v24;
        ptr = v45;
        v46 = v45;
        v59 = v22;
        while ( 1 )
        {
          v48 = &v46[80 * v44];
          v49 = *(_QWORD *)a2 + 80 * v44;
          *(_DWORD *)v48 = 0;
          v50 = (const void *)v49;
          copy_argloc(v48, v49);
          *((_QWORD *)v48 + 2) = 0;
          *(_OWORD *)(v48 + 24) = 0;
          v51 = *(_QWORD *)(v49 + 24);
          if ( v51 )
          {
            v52 = (void *)qalloc_or_throw(*(_QWORD *)(v49 + 24), (const char *)v49);
            *((_QWORD *)v48 + 4) = v51;
            *((_QWORD *)v48 + 2) = v52;
            v50 = *(const void **)(v49 + 16);
            memcpy(v52, v50, v51);
            *((_QWORD *)v48 + 3) = v51;
          }
          *((_QWORD *)v48 + 5) = 0;
          *((_OWORD *)v48 + 3) = 0;
          v47 = *(_QWORD *)(v49 + 48);
          if ( v47 )
          {
            v53 = (void *)qalloc_or_throw(*(_QWORD *)(v49 + 48), (const char *)v50);
            *((_QWORD *)v48 + 7) = v47;
            *((_QWORD *)v48 + 5) = v53;
            memcpy(v53, *(const void **)(v49 + 40), v47);
            *((_QWORD *)v48 + 6) = v47;
          }
          *((_QWORD *)v48 + 8) = 0;
          ++v44;
          copy_tinfo_t(v48 + 64);
          *((_DWORD *)v48 + 18) = *(_DWORD *)(v49 + 72);
          if ( v24 == v44 )
            break;
          v46 = (char *)ptr;
        }
        v69.m128i_i64[0] = v24;
        v22 = v59;
      }
      v25 = *(_QWORD *)(a2 + 24);
      v71 = 0;
      v70 = v25;
      copy_tinfo_t(&v71);
      v72[0] = 0;
      copy_argloc(v72, a2 + 40);
      v26 = *(_DWORD *)(a2 + 56);
      v27 = *(_QWORD *)(a2 + 72);
      v73 = nullptr;
      v72[4] = v26;
      v74 = 0;
      if ( v27 )
      {
        v42 = (void *)qalloc_or_throw(8 * v27, (const char *)(a2 + 40));
        v43 = *(const void **)(a2 + 64);
        *((_QWORD *)&v74 + 1) = v27;
        v73 = v42;
        memcpy(v42, v43, 8 * v27);
        *(_QWORD *)&v74 = v27;
      }
      v75 = *(_BYTE *)(a2 + 88);
      create_tinfo(&v62, a3, 12, &ptr);
      v28 = haystack;
      if ( v22[1] )
        v28 = *v22;
      v8 = (const char *)&v62;
      sub_6BED00(a1, &v62, 0, v28, nullptr, a4, 0);
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73);
      }
      cleanup_argloc(v72);
      clear_tinfo_t(&v71);
      v29 = (char *)ptr;
      if ( ptr )
      {
        v30 = v69.m128i_i64[0];
        if ( v69.m128i_i64[0] )
        {
          v31 = 0;
          do
          {
            v32 = &v29[80 * v31];
            clear_tinfo_t(v32 + 64);
            v33 = *((void **)v32 + 5);
            if ( v33 )
            {
              *((_QWORD *)v32 + 6) = 0;
              qfree(v33);
            }
            v34 = *((void **)v32 + 2);
            if ( v34 )
            {
              *((_QWORD *)v32 + 3) = 0;
              qfree(v34);
            }
            ++v31;
            cleanup_argloc(v32);
            v29 = (char *)ptr;
          }
          while ( v30 != v31 );
        }
        v69.m128i_i64[0] = 0;
        qfree(v29);
      }
      clear_tinfo_t(&v62);
    }
    v22 += 3;
  }
  while ( v55 != v22 );
  v7 = (char *)v60.m128i_i64[0];
LABEL_37:
  v35 = v66;
  v10 = (const char **)v65;
  if ( v66 != v65 )
  {
    do
    {
      if ( *v10 != (const char *)(v10 + 2) )
      {
        v8 = v10[2] + 1;
        operator delete((void *)*v10, (unsigned __int64)v8);
      }
      v10 += 4;
    }
    while ( v35 != v10 );
    v10 = (const char **)v65;
  }
LABEL_42:
  if ( v10 )
  {
    v8 = (const char *)(v67 - (_QWORD)v10);
    operator delete(v10, v67 - (_QWORD)v10);
  }
  sub_E4C6B0(v7, v8, *((_QWORD *)&v9 + 1));
  v36 = (char *)v63;
  if ( v63 )
  {
    v37 = v64;
    if ( (_QWORD)v64 )
    {
      v38 = 0;
      do
      {
        v39 = &v36[24 * v38];
        v40 = *(void **)v39;
        if ( *(_QWORD *)v39 )
        {
          *((_QWORD *)v39 + 1) = 0;
          qfree(v40);
          v36 = (char *)v63;
        }
        ++v38;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v64 = 0;
    qfree(v36);
  }
  return 1;
}

