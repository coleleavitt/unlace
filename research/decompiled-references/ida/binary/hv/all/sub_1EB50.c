__int64 __fastcall sub_1EB50(__int64 a1)
{
  __int64 v1; // r12
  bool v2; // zf
  __int64 v4; // r15
  __int64 v5; // r13
  void *v6; // rcx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  char *v9; // rax
  __int64 v10; // rsi
  const char *v11; // rdx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  char *v14; // rax
  size_t v15; // r13
  char *v16; // rsi
  void *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  char *v21; // rax
  const char *v22; // rdx
  void *v23; // r12
  __m128i si128; // xmm0
  void *v25; // rdi
  char *v26; // r14
  __int64 v27; // rdi
  unsigned int v28; // r12d
  __int64 v29; // rdi
  void **v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 (__fastcall *v33)(__int64, void **, __int64, void **, void *, void *, __int64); // rax
  unsigned int v34; // eax
  char *v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rbx
  char *v38; // rax
  void *v39; // rdi
  char *v40; // rdx
  __int64 v41; // r14
  __int64 v42; // rbx
  char *v43; // rax
  void *v44; // rdi
  char *v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rbx
  char *v48; // rax
  void *v49; // rdi
  char *v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rbx
  char *v53; // rax
  void *v54; // rdi
  char *v56; // rsi
  __int64 v57; // rax
  const char *v58; // rax
  const char *v59; // r14
  size_t v60; // r13
  __int64 v61; // rdi
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  __m128i v66; // [rsp+8h] [rbp-108h] BYREF
  void *v67; // [rsp+18h] [rbp-F8h]
  void *v68; // [rsp+20h] [rbp-F0h]
  void *v69; // [rsp+28h] [rbp-E8h]
  void *v70[2]; // [rsp+30h] [rbp-E0h] BYREF
  void *v71; // [rsp+40h] [rbp-D0h] BYREF
  __int128 v72; // [rsp+48h] [rbp-C8h]
  void *v73; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+68h] [rbp-A8h]
  void *v75; // [rsp+80h] [rbp-90h] BYREF
  __int128 v76; // [rsp+88h] [rbp-88h]
  void *v77; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v78; // [rsp+A8h] [rbp-68h]
  void *ptr; // [rsp+C0h] [rbp-50h] BYREF
  __m128i v80; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    v28 = 12;
    sub_8F890(0, 0);
    sub_708D0(
      (unsigned int)"please specify a valid site with -s or with the VAULT_SITE envvar\n",
      0,
      v62,
      v63,
      v64,
      v65);
    return v28;
  }
  v2 = *(_QWORD *)(a1 + 8) == 0;
  v71 = nullptr;
  v73 = nullptr;
  v75 = nullptr;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  if ( v2 )
  {
    v15 = *(_QWORD *)(v1 + 40);
    if ( v15 )
    {
      v61 = *(_QWORD *)(v1 + 40);
      v70[0] = &v75;
      v68 = &v71;
      v67 = &v73;
      v17 = (void *)sub_96030(v61);
      memcpy(v17, *(const void **)(v1 + 32), v15);
      v19 = v76;
      v16 = (char *)v75;
      v18 = v76 + 1;
      if ( *((_QWORD *)&v76 + 1) >= (unsigned __int64)(v76 + 1) )
      {
        v70[0] = &v75;
        goto LABEL_20;
      }
    }
    else
    {
      v16 = nullptr;
      v17 = nullptr;
      v18 = 1;
    }
    v70[0] = &v75;
    v75 = (void *)sub_96080(&v75, v16, v18, 24);
    v16 = (char *)v75;
    v19 = v76;
LABEL_20:
    v20 = (int)v70[0];
    v21 = &v16[24 * v19];
    *(_QWORD *)v21 = v17;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    *(_QWORD *)&v76 = v76 + 1;
    v68 = &v71;
    v67 = &v73;
    sub_1B5C0(a1, (int)&v73, v20, 1u, (__int64)&v71);
    v22 = haystack;
    if ( *(_QWORD *)(v1 + 40) )
      v22 = *(const char **)(v1 + 32);
    sub_652F0(&ptr, *(_QWORD *)(a1 + 32), v22);
    v23 = ptr;
    ptr = nullptr;
    si128 = _mm_loadu_si128(&v80);
    v80 = 0;
    v25 = *(void **)v75;
    v26 = (char *)v75;
    if ( *(_QWORD *)v75 )
    {
      *((_QWORD *)v75 + 1) = 0;
      *(__m128i *)v70 = si128;
      j__free(v25);
      si128 = _mm_load_si128((const __m128i *)v70);
    }
    *(_QWORD *)v26 = v23;
    *(__m128i *)(v26 + 8) = si128;
    if ( ptr )
    {
      v80.m128i_i64[0] = 0;
      j__free(ptr);
    }
    goto LABEL_26;
  }
  v68 = &v71;
  v67 = &v73;
  v70[0] = &v75;
  sub_1B790((__int64 *)a1, (int)&v73, 1u, (__int64)&v71);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1 + 72LL * *(_QWORD *)(a1 + 8);
  if ( v5 != *(_QWORD *)a1 )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 32);
      v11 = haystack;
      if ( *(_QWORD *)(v4 + 8) )
        v11 = *(const char **)v4;
      v70[0] = &v75;
      sub_652F0(&ptr, v10, v11);
      v57 = v76;
      v56 = (char *)v75;
      v12 = v76 + 1;
      if ( &ptr < v75 || &ptr >= (void **)((char *)v75 + 24 * *((_QWORD *)&v76 + 1)) )
      {
        if ( *((_QWORD *)&v76 + 1) < v12 )
        {
          v70[0] = &v75;
          v75 = (void *)sub_96080(&v75, v75, v76 + 1, 24);
          v56 = (char *)v75;
          v57 = v76;
        }
        v13 = _mm_loadu_si128(&v80);
        v14 = &v56[24 * v57];
        *(_QWORD *)v14 = ptr;
        *(__m128i *)(v14 + 8) = v13;
        *(_QWORD *)&v76 = v76 + 1;
      }
      else
      {
        v6 = ptr;
        v7 = _mm_loadl_epi64(&v80);
        ptr = nullptr;
        v8 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
        v80 = 0;
        v69 = v6;
        if ( *((_QWORD *)&v76 + 1) < v12 )
        {
          v66.m128i_i64[0] = v8.m128i_i64[0];
          v70[0] = &v75;
          v66.m128i_i64[1] = v7.m128i_i64[0];
          v75 = (void *)sub_96080(&v75, v75, v76 + 1, 24);
          v56 = (char *)v75;
          v8 = _mm_loadl_epi64(&v66);
          v7 = _mm_loadl_epi64((const __m128i *)&v66.m128i_u64[1]);
          v57 = v76;
        }
        v9 = &v56[24 * v57];
        *(_QWORD *)v9 = v69;
        *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v7, v8);
        *(_QWORD *)&v76 = v76 + 1;
        if ( ptr )
        {
          v80.m128i_i64[0] = 0;
          j__free(ptr);
        }
      }
      v4 += 72;
    }
    while ( v5 != v4 );
  }
LABEL_26:
  v27 = *(_QWORD *)(a1 + 24);
  v70[0] = &v75;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 224LL))(v27, a1 + 204, 0);
  if ( !v28 )
  {
    v29 = *(_QWORD *)(a1 + 24);
    v77 = nullptr;
    v30 = &v77;
    v78 = 0;
    v31 = *(unsigned int *)(a1 + 184);
    v32 = *(unsigned int *)(a1 + 204);
    v33 = *(__int64 (__fastcall **)(__int64, void **, __int64, void **, void *, void *, __int64))(*(_QWORD *)v29 + 376LL);
    if ( *(_BYTE *)(a1 + 211) )
      v30 = nullptr;
    v70[0] = &v75;
    v34 = v33(v29, v30, v32, &v75, v67, v68, v31);
    v28 = v34;
    if ( v34 )
    {
      if ( v34 != 52 )
      {
        v58 = (const char *)sub_8FA30(0);
        ptr = nullptr;
        v59 = v58;
        v80 = 0;
        if ( v58 )
        {
          v60 = strlen(v58);
          v69 = (void *)(v60 + 1);
          ptr = (void *)sub_96080(&ptr, 0, v60 + 1, 1);
          v80.m128i_i64[0] = (__int64)v69;
          memmove(ptr, v59, v60);
          *((_BYTE *)ptr + v60) = 0;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 232LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 204));
        sub_8F890(0, ptr);
        if ( ptr )
        {
          v80.m128i_i64[0] = 0;
          j__free(ptr);
        }
      }
    }
    else
    {
      sub_19CE0(a1, (__int64)"added worklist %d\n", *(_DWORD *)(a1 + 204));
      sub_1A410(a1, (unsigned int **)&v77);
    }
    v35 = (char *)v77;
    if ( v77 )
    {
      v36 = v78;
      if ( (_QWORD)v78 )
      {
        v37 = 0;
        do
        {
          v38 = &v35[32 * v37];
          v39 = *((void **)v38 + 1);
          if ( v39 )
          {
            *((_QWORD *)v38 + 2) = 0;
            j__free(v39);
            v35 = (char *)v77;
          }
          ++v37;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v78 = 0;
      j__free(v35);
    }
  }
  v40 = (char *)v75;
  if ( v75 )
  {
    v41 = v76;
    if ( (_QWORD)v76 )
    {
      v42 = 0;
      do
      {
        v43 = &v40[24 * v42];
        v44 = *(void **)v43;
        if ( *(_QWORD *)v43 )
        {
          *((_QWORD *)v43 + 1) = 0;
          j__free(v44);
          v40 = (char *)v75;
        }
        ++v42;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v76 = 0;
    j__free(v40);
  }
  v45 = (char *)v73;
  if ( v73 )
  {
    v46 = v74;
    if ( (_QWORD)v74 )
    {
      v47 = 0;
      do
      {
        v48 = &v45[24 * v47];
        v49 = *(void **)v48;
        if ( *(_QWORD *)v48 )
        {
          *((_QWORD *)v48 + 1) = 0;
          j__free(v49);
          v45 = (char *)v73;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v74 = 0;
    j__free(v45);
  }
  v50 = (char *)v71;
  if ( v71 )
  {
    v51 = v72;
    if ( (_QWORD)v72 )
    {
      v52 = 0;
      do
      {
        v53 = &v50[24 * v52];
        v54 = *(void **)v53;
        if ( *(_QWORD *)v53 )
        {
          *((_QWORD *)v53 + 1) = 0;
          j__free(v54);
          v50 = (char *)v71;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v72 = 0;
    j__free(v50);
  }
  return v28;
}

