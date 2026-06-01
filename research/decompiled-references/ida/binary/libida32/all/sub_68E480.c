__int64 __fastcall sub_68E480(__int64 a1, __int64 a2, void **a3, int a4, int a5)
{
  int v6; // eax
  void *v7; // r12
  char *v8; // rbp
  __m128i v9; // xmm0
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  void *v14; // r11
  char *v15; // rbx
  int *v16; // rdi
  int v17; // r10d
  char *v18; // rcx
  char *v19; // r9
  int v20; // edx
  char *v21; // rax
  __int64 v22; // rax
  int v23; // r15d
  char *v24; // rax
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  void *v30; // r15
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  int v35; // r14d
  char *v36; // rdi
  void *v37; // rbx
  void *v38; // r12
  char *v39; // r15
  void *v40; // rdi
  void *v41; // rdi
  _DWORD *v42; // rax
  _DWORD *v43; // r12
  const char *v44; // rsi
  void *v45; // r15
  _DWORD *v46; // rbx
  _DWORD *v47; // rdx
  size_t v48; // rax
  __int64 v49; // rsi
  char *v50; // rdi
  __int64 v51; // r13
  __int64 v52; // rax
  __m128i v53; // xmm6
  __int64 v54; // rax
  signed __int64 v55; // r12
  void *v56; // rax
  const void *v57; // rsi
  char *v58; // rbx
  void *v59; // r12
  char *v60; // rbx
  __int64 v61; // rcx
  const char *v62; // rsi
  __int64 v63; // r14
  void *v64; // rax
  size_t v65; // rdx
  void *v66; // rax
  size_t v67; // rdx
  __m128i v68; // [rsp+0h] [rbp-128h] BYREF
  int v69; // [rsp+10h] [rbp-118h]
  int v70; // [rsp+14h] [rbp-114h]
  size_t n; // [rsp+18h] [rbp-110h]
  void *v72; // [rsp+20h] [rbp-108h] BYREF
  __m128i v73; // [rsp+28h] [rbp-100h]
  void *v74; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v75; // [rsp+48h] [rbp-E0h]
  void *ptr[4]; // [rsp+60h] [rbp-C8h] BYREF
  void *v77[4]; // [rsp+80h] [rbp-A8h] BYREF
  void *v78; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-80h] BYREF
  int v80; // [rsp+B8h] [rbp-70h]
  void *v81; // [rsp+C0h] [rbp-68h]
  __int128 v82; // [rsp+C8h] [rbp-60h]
  char v83; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v84; // [rsp+E8h] [rbp-40h]

  v68.m128i_i64[0] = a1;
  v70 = a4;
  v69 = a5;
  v84 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 24);
  v73 = 0;
  v72 = nullptr;
  if ( (v6 & 8) != 0 )
  {
    v30 = *(void **)(a2 + 8);
    memset(ptr, 0, 24);
    memset(v77, 0, 24);
    if ( v30 )
    {
      v77[0] = (void *)qalloc_or_throw(80LL * (_QWORD)v30, (const char *)a2);
      v58 = (char *)v77[0];
      v59 = nullptr;
      v77[2] = v30;
      while ( 1 )
      {
        v60 = &v58[80 * (_QWORD)v59];
        v61 = *(_QWORD *)a2 + 80LL * (_QWORD)v59;
        *(_DWORD *)v60 = 0;
        v62 = (const char *)v61;
        v63 = v61;
        copy_argloc(v60, v61);
        *((_QWORD *)v60 + 2) = 0;
        *(_OWORD *)(v60 + 24) = 0;
        if ( *(_QWORD *)(v63 + 24) )
        {
          n = *(_QWORD *)(v63 + 24);
          v64 = (void *)qalloc_or_throw(n, v62);
          v65 = n;
          *((_QWORD *)v60 + 2) = v64;
          *((_QWORD *)v60 + 4) = v65;
          v62 = *(const char **)(v63 + 16);
          memcpy(v64, v62, v65);
          *((_QWORD *)v60 + 3) = n;
        }
        *((_QWORD *)v60 + 5) = 0;
        *((_OWORD *)v60 + 3) = 0;
        if ( *(_QWORD *)(v63 + 48) )
        {
          n = *(_QWORD *)(v63 + 48);
          v66 = (void *)qalloc_or_throw(n, v62);
          v67 = n;
          *((_QWORD *)v60 + 5) = v66;
          *((_QWORD *)v60 + 7) = v67;
          memcpy(v66, *(const void **)(v63 + 40), v67);
          *((_QWORD *)v60 + 6) = n;
        }
        *((_QWORD *)v60 + 8) = 0;
        copy_tinfo_t(v60 + 64);
        v59 = (char *)v59 + 1;
        *((_DWORD *)v60 + 18) = *(_DWORD *)(v63 + 72);
        if ( v30 == v59 )
          break;
        v58 = (char *)v77[0];
      }
      v77[1] = v30;
      v6 = *(_DWORD *)(a2 + 24);
    }
    LODWORD(v77[3]) = v6;
    v32 = *(_DWORD *)(a2 + 28);
    v78 = nullptr;
    HIDWORD(v77[3]) = v32;
    copy_tinfo_t(&v78);
    LODWORD(v79) = 0;
    copy_argloc(&v79, a2 + 40);
    v33 = *(_DWORD *)(a2 + 56);
    v34 = *(_QWORD *)(a2 + 72);
    v81 = nullptr;
    v82 = 0;
    v80 = v33;
    if ( v34 )
    {
      n = 8 * v34;
      v56 = (void *)qalloc_or_throw(8 * v34, (const char *)(a2 + 40));
      v57 = *(const void **)(a2 + 64);
      v81 = v56;
      *((_QWORD *)&v82 + 1) = v34;
      memcpy(v56, v57, 8 * v34);
      *(_QWORD *)&v82 = v34;
    }
    v83 = *(_BYTE *)(a2 + 88);
    v35 = 0;
    if ( sub_375980(0x7DCu, ptr, v77) && ptr[1] )
      v35 = *(_DWORD *)ptr[0];
    if ( v81 )
    {
      *(_QWORD *)&v82 = 0;
      qfree(v81);
    }
    cleanup_argloc(&v79);
    clear_tinfo_t(&v78);
    v36 = (char *)v77[0];
    if ( v77[0] )
    {
      v37 = v77[1];
      if ( v77[1] )
      {
        v38 = nullptr;
        do
        {
          v39 = &v36[80 * (_QWORD)v38];
          clear_tinfo_t(v39 + 64);
          v40 = *((void **)v39 + 5);
          if ( v40 )
          {
            *((_QWORD *)v39 + 6) = 0;
            qfree(v40);
          }
          v41 = *((void **)v39 + 2);
          if ( v41 )
          {
            *((_QWORD *)v39 + 3) = 0;
            qfree(v41);
          }
          v38 = (char *)v38 + 1;
          cleanup_argloc(v39);
          v36 = (char *)v77[0];
        }
        while ( v37 != v38 );
      }
      v77[1] = nullptr;
      qfree(v36);
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    if ( v35 == -1 )
    {
      v42 = (_DWORD *)sub_68D7E0(v68.m128i_i64[0]);
      v43 = v42;
      if ( v42 )
      {
        if ( *v42 == 3 )
        {
          if ( !a3[1] )
            goto LABEL_99;
          v44 = (const char *)*a3;
          if ( !(unsigned int)compare_arglocs(v42, *a3) )
            goto LABEL_2;
          v45 = a3[1];
          if ( v45 )
          {
            v46 = (_DWORD *)qalloc_or_throw(16LL * (_QWORD)v45, v44);
            v47 = v46;
            v48 = 0;
            do
            {
              n = v48;
              v49 = (__int64)*a3 + 16 * v48;
              *v47 = 0;
              v68.m128i_i64[0] = (__int64)v47;
              copy_argloc(v47, v49);
              v48 = n + 1;
              v47 = (_DWORD *)(v68.m128i_i64[0] + 16);
            }
            while ( v45 != (void *)(n + 1) );
          }
          else
          {
LABEL_99:
            v48 = 0;
            v46 = nullptr;
          }
          v50 = (char *)v72;
          v68 = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
          if ( v72 )
          {
            if ( v73.m128i_i64[0] )
            {
              v51 = 0;
              do
              {
                v52 = v51++;
                cleanup_argloc(&v50[16 * v52]);
                v50 = (char *)v72;
              }
              while ( v73.m128i_i64[0] != v51 );
            }
            v73.m128i_i64[0] = 0;
            qfree(v50);
          }
          v53 = _mm_load_si128(&v68);
          v72 = v46;
          LODWORD(v77[0]) = 0;
          v73 = v53;
          copy_argloc(v77, v43);
          v54 = v73.m128i_i64[0];
          a3 = &v72;
          v55 = (char *)v46 - (_BYTE *)v72;
          if ( v73.m128i_i64[1] < (unsigned __int64)(v73.m128i_i64[0] + 1) )
          {
            v72 = (void *)qvector_reserve(&v72, v72, v73.m128i_i64[0] + 1, 16);
            v54 = v73.m128i_i64[0];
            v46 = (char *)v72 + v55;
          }
          memmove(v46 + 4, v46, 16 * v54 - v55);
          *v46 = 0;
          copy_argloc(v46, v77);
          ++v73.m128i_i64[0];
          cleanup_argloc(v77);
        }
      }
    }
  }
LABEL_2:
  memset(v77, 0, sizeof(v77));
  v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B0DB08, (__m128i)(unsigned __int64)&v74);
  v79 = 0;
  v78 = nullptr;
  sub_375980(0x7D4u, v77, (v69 & 8) == 0 ? 112 : 64);
  v7 = a3[1];
  v8 = (char *)*a3;
  v74 = nullptr;
  v9 = _mm_load_si128(&v68);
  LOBYTE(ptr[2]) = 0;
  v75 = 0;
  v10 = &v8[16 * (_QWORD)v7];
  *(__m128i *)ptr = v9;
  if ( v8 == v10 )
  {
    if ( (v69 & 4) == 0 && (_BYTE)v70 )
      LOBYTE(v8) = v77[2] == nullptr;
    else
      LODWORD(v8) = 1;
  }
  else
  {
    while ( 1 )
    {
      v11 = 1;
      if ( *(_DWORD *)v8 == 2 )
      {
        v12 = **((_QWORD **)v8 + 1) + 24LL * *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) - 24;
        v11 = *(unsigned __int16 *)(v12 + 18) + (unsigned int)*(unsigned __int16 *)(v12 + 16);
      }
      v13 = for_all_arglocs(ptr, v8, v11, 0);
      if ( v13 )
        break;
      v8 += 16;
      if ( v10 == v8 )
      {
        v14 = v74;
        v15 = (char *)v74 + 4 * v75;
        if ( v15 == v74 )
        {
LABEL_22:
          if ( (v69 & 4) == 0 && LOBYTE(ptr[2]) | (unsigned __int8)v70 )
            LOBYTE(v8) = v77[2] == (void *)v13;
          else
            LODWORD(v8) = 1;
          goto LABEL_36;
        }
        v16 = (int *)v74;
        v17 = 0;
        LODWORD(v8) = v77[0];
        v18 = (char *)v77[1] + 4 * (__int64)v77[2];
        v19 = (char *)v78 + 4 * v79;
        while ( 2 )
        {
          v20 = *v16;
          if ( v77[1] == v18 )
            goto LABEL_25;
          v21 = (char *)v77[1];
          while ( v20 != *(_DWORD *)v21 )
          {
            v21 += 4;
            if ( v18 == v21 )
              goto LABEL_25;
          }
          if ( v18 == v21 || (v22 = (v21 - (char *)v77[1]) >> 2, v23 = v22, (_DWORD)v22 == -1) )
          {
LABEL_25:
            if ( v78 == v19 )
              goto LABEL_35;
            v24 = (char *)v78;
            while ( v20 != *(_DWORD *)v24 )
            {
              v24 += 4;
              if ( v19 == v24 )
                goto LABEL_35;
            }
            if ( v24 == v19 || (v23 = (v24 - (_BYTE *)v78) >> 2, v23 == -1) )
            {
LABEL_35:
              LODWORD(v8) = 0;
              goto LABEL_36;
            }
            if ( LODWORD(v77[0]) == 3 )
              goto LABEL_48;
            if ( (v69 & 2) != 0 )
            {
LABEL_34:
              ++v17;
LABEL_21:
              if ( v15 == (char *)++v16 )
                goto LABEL_22;
              continue;
            }
          }
          else
          {
            if ( LODWORD(v77[0]) != 3 )
            {
              if ( (v69 & 2) == 0 && (_DWORD)v22 != v13 )
                goto LABEL_35;
              ++v13;
              goto LABEL_21;
            }
LABEL_48:
            if ( (v69 & 2) != 0 )
            {
              ++v13;
              goto LABEL_34;
            }
            if ( v13 != v23 )
              goto LABEL_35;
            ++v13;
          }
          break;
        }
        if ( v17 != v23 )
          goto LABEL_35;
        goto LABEL_34;
      }
    }
    v14 = v74;
    LODWORD(v8) = 0;
LABEL_36:
    if ( v14 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(v14);
    }
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v77[1] )
  {
    v77[2] = nullptr;
    qfree(v77[1]);
  }
  v25 = (char *)v72;
  if ( v72 )
  {
    v26 = v73.m128i_i64[0];
    if ( v73.m128i_i64[0] )
    {
      v27 = 0;
      do
      {
        v28 = v27++;
        cleanup_argloc(&v25[16 * v28]);
        v25 = (char *)v72;
      }
      while ( v26 != v27 );
    }
    v73.m128i_i64[0] = 0;
    qfree(v25);
  }
  return (unsigned int)v8;
}

