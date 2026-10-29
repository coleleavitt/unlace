__int64 __fastcall sub_6AEC50(__int64 a1, __int64 a2, void **a3, int a4, int a5)
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
  __int64 v33; // rax
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
  void *v44; // r15
  _DWORD *v45; // rbx
  _DWORD *v46; // rdx
  size_t v47; // rax
  __int64 v48; // rsi
  char *v49; // rdi
  __int64 v50; // r13
  __int64 v51; // rax
  __m128i v52; // xmm6
  __int64 v53; // rax
  signed __int64 v54; // r12
  void *v55; // rax
  const void *v56; // rsi
  char *v57; // rbx
  void *v58; // r12
  char *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r14
  void *v62; // rax
  size_t v63; // rdx
  void *v64; // rax
  size_t v65; // rdx
  __m128i v66; // [rsp+0h] [rbp-128h] BYREF
  int v67; // [rsp+10h] [rbp-118h]
  int v68; // [rsp+14h] [rbp-114h]
  size_t n; // [rsp+18h] [rbp-110h]
  void *v70; // [rsp+20h] [rbp-108h] BYREF
  __m128i v71; // [rsp+28h] [rbp-100h]
  void *v72; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v73; // [rsp+48h] [rbp-E0h]
  void *ptr[4]; // [rsp+60h] [rbp-C8h] BYREF
  void *v75[4]; // [rsp+80h] [rbp-A8h] BYREF
  void *v76; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-70h]
  void *v79; // [rsp+C0h] [rbp-68h]
  __int128 v80; // [rsp+C8h] [rbp-60h]
  char v81; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+E8h] [rbp-40h]

  v66.m128i_i64[0] = a1;
  v68 = a4;
  v67 = a5;
  v82 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 24);
  v71 = 0;
  v70 = nullptr;
  if ( (v6 & 8) != 0 )
  {
    v30 = *(void **)(a2 + 8);
    memset(ptr, 0, 24);
    memset(v75, 0, 24);
    if ( v30 )
    {
      v75[0] = (void *)qalloc_or_throw(80LL * (_QWORD)v30);
      v57 = (char *)v75[0];
      v58 = nullptr;
      v75[2] = v30;
      while ( 1 )
      {
        v59 = &v57[80 * (_QWORD)v58];
        v60 = *(_QWORD *)a2 + 80LL * (_QWORD)v58;
        *(_DWORD *)v59 = 0;
        v61 = v60;
        copy_argloc(v59, v60);
        *((_QWORD *)v59 + 2) = 0;
        *(_OWORD *)(v59 + 24) = 0;
        if ( *(_QWORD *)(v61 + 24) )
        {
          n = *(_QWORD *)(v61 + 24);
          v62 = (void *)qalloc_or_throw(n);
          v63 = n;
          *((_QWORD *)v59 + 2) = v62;
          *((_QWORD *)v59 + 4) = v63;
          memcpy(v62, *(const void **)(v61 + 16), v63);
          *((_QWORD *)v59 + 3) = n;
        }
        *((_QWORD *)v59 + 5) = 0;
        *((_OWORD *)v59 + 3) = 0;
        if ( *(_QWORD *)(v61 + 48) )
        {
          n = *(_QWORD *)(v61 + 48);
          v64 = (void *)qalloc_or_throw(n);
          v65 = n;
          *((_QWORD *)v59 + 5) = v64;
          *((_QWORD *)v59 + 7) = v65;
          memcpy(v64, *(const void **)(v61 + 40), v65);
          *((_QWORD *)v59 + 6) = n;
        }
        *((_QWORD *)v59 + 8) = 0;
        copy_tinfo_t(v59 + 64);
        v58 = (char *)v58 + 1;
        *((_DWORD *)v59 + 18) = *(_DWORD *)(v61 + 72);
        if ( v30 == v58 )
          break;
        v57 = (char *)v75[0];
      }
      v75[1] = v30;
      v6 = *(_DWORD *)(a2 + 24);
    }
    LODWORD(v75[3]) = v6;
    v32 = *(_DWORD *)(a2 + 28);
    v76 = nullptr;
    HIDWORD(v75[3]) = v32;
    copy_tinfo_t(&v76);
    LODWORD(v77) = 0;
    copy_argloc(&v77, a2 + 40);
    v33 = *(_QWORD *)(a2 + 56);
    v34 = *(_QWORD *)(a2 + 72);
    v79 = nullptr;
    v80 = 0;
    v78 = v33;
    if ( v34 )
    {
      n = 8 * v34;
      v55 = (void *)qalloc_or_throw(8 * v34);
      v56 = *(const void **)(a2 + 64);
      v79 = v55;
      *((_QWORD *)&v80 + 1) = v34;
      memcpy(v55, v56, 8 * v34);
      *(_QWORD *)&v80 = v34;
    }
    v81 = *(_BYTE *)(a2 + 88);
    v35 = 0;
    if ( sub_3792E0(0x7DCu, ptr, v75) && ptr[1] )
      v35 = *(_DWORD *)ptr[0];
    if ( v79 )
    {
      *(_QWORD *)&v80 = 0;
      qfree(v79);
    }
    cleanup_argloc(&v77);
    clear_tinfo_t(&v76);
    v36 = (char *)v75[0];
    if ( v75[0] )
    {
      v37 = v75[1];
      if ( v75[1] )
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
          v36 = (char *)v75[0];
        }
        while ( v37 != v38 );
      }
      v75[1] = nullptr;
      qfree(v36);
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    if ( v35 == -1 )
    {
      v42 = (_DWORD *)sub_6ADFD0(v66.m128i_i64[0]);
      v43 = v42;
      if ( v42 )
      {
        if ( *v42 == 3 )
        {
          if ( !a3[1] )
            goto LABEL_99;
          if ( !(unsigned int)compare_arglocs(v42, *a3) )
            goto LABEL_2;
          v44 = a3[1];
          if ( v44 )
          {
            v45 = (_DWORD *)qalloc_or_throw(16LL * (_QWORD)v44);
            v46 = v45;
            v47 = 0;
            do
            {
              n = v47;
              v48 = (__int64)*a3 + 16 * v47;
              *v46 = 0;
              v66.m128i_i64[0] = (__int64)v46;
              copy_argloc(v46, v48);
              v47 = n + 1;
              v46 = (_DWORD *)(v66.m128i_i64[0] + 16);
            }
            while ( v44 != (void *)(n + 1) );
          }
          else
          {
LABEL_99:
            v47 = 0;
            v45 = nullptr;
          }
          v49 = (char *)v70;
          v66 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
          if ( v70 )
          {
            if ( v71.m128i_i64[0] )
            {
              v50 = 0;
              do
              {
                v51 = v50++;
                cleanup_argloc(&v49[16 * v51]);
                v49 = (char *)v70;
              }
              while ( v71.m128i_i64[0] != v50 );
            }
            v71.m128i_i64[0] = 0;
            qfree(v49);
          }
          v52 = _mm_load_si128(&v66);
          v70 = v45;
          LODWORD(v75[0]) = 0;
          v71 = v52;
          copy_argloc(v75, v43);
          v53 = v71.m128i_i64[0];
          a3 = &v70;
          v54 = (char *)v45 - (_BYTE *)v70;
          if ( v71.m128i_i64[1] < (unsigned __int64)(v71.m128i_i64[0] + 1) )
          {
            v70 = (void *)qvector_reserve(&v70, v70, v71.m128i_i64[0] + 1, 16);
            v53 = v71.m128i_i64[0];
            v45 = (char *)v70 + v54;
          }
          memmove(v45 + 4, v45, 16 * v53 - v54);
          *v45 = 0;
          copy_argloc(v45, v75);
          ++v71.m128i_i64[0];
          cleanup_argloc(v75);
        }
      }
    }
  }
LABEL_2:
  memset(v75, 0, sizeof(v75));
  v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B37AC8, (__m128i)(unsigned __int64)&v72);
  v77 = 0;
  v76 = nullptr;
  sub_3792E0(0x7D4u, v75, (v67 & 8) == 0 ? 112 : 64);
  v7 = a3[1];
  v8 = (char *)*a3;
  v72 = nullptr;
  v9 = _mm_load_si128(&v66);
  LOBYTE(ptr[2]) = 0;
  v73 = 0;
  v10 = &v8[16 * (_QWORD)v7];
  *(__m128i *)ptr = v9;
  if ( v8 == v10 )
  {
    if ( (v67 & 4) == 0 && (_BYTE)v68 )
      LOBYTE(v8) = v75[2] == nullptr;
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
        v14 = v72;
        v15 = (char *)v72 + 4 * v73;
        if ( v15 == v72 )
        {
LABEL_22:
          if ( (v67 & 4) == 0 && LOBYTE(ptr[2]) | (unsigned __int8)v68 )
            LOBYTE(v8) = v75[2] == (void *)v13;
          else
            LODWORD(v8) = 1;
          goto LABEL_36;
        }
        v16 = (int *)v72;
        v17 = 0;
        LODWORD(v8) = v75[0];
        v18 = (char *)v75[1] + 4 * (__int64)v75[2];
        v19 = (char *)v76 + 4 * v77;
        while ( 2 )
        {
          v20 = *v16;
          if ( v75[1] == v18 )
            goto LABEL_25;
          v21 = (char *)v75[1];
          while ( v20 != *(_DWORD *)v21 )
          {
            v21 += 4;
            if ( v18 == v21 )
              goto LABEL_25;
          }
          if ( v18 == v21 || (v22 = (v21 - (char *)v75[1]) >> 2, v23 = v22, (_DWORD)v22 == -1) )
          {
LABEL_25:
            if ( v76 == v19 )
              goto LABEL_35;
            v24 = (char *)v76;
            while ( v20 != *(_DWORD *)v24 )
            {
              v24 += 4;
              if ( v19 == v24 )
                goto LABEL_35;
            }
            if ( v24 == v19 || (v23 = (v24 - (_BYTE *)v76) >> 2, v23 == -1) )
            {
LABEL_35:
              LODWORD(v8) = 0;
              goto LABEL_36;
            }
            if ( LODWORD(v75[0]) == 3 )
              goto LABEL_48;
            if ( (v67 & 2) != 0 )
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
            if ( LODWORD(v75[0]) != 3 )
            {
              if ( (v67 & 2) == 0 && (_DWORD)v22 != v13 )
                goto LABEL_35;
              ++v13;
              goto LABEL_21;
            }
LABEL_48:
            if ( (v67 & 2) != 0 )
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
    v14 = v72;
    LODWORD(v8) = 0;
LABEL_36:
    if ( v14 )
    {
      *(_QWORD *)&v73 = 0;
      qfree(v14);
    }
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  if ( v75[1] )
  {
    v75[2] = nullptr;
    qfree(v75[1]);
  }
  v25 = (char *)v70;
  if ( v70 )
  {
    v26 = v71.m128i_i64[0];
    if ( v71.m128i_i64[0] )
    {
      v27 = 0;
      do
      {
        v28 = v27++;
        cleanup_argloc(&v25[16 * v28]);
        v25 = (char *)v70;
      }
      while ( v26 != v27 );
    }
    v71.m128i_i64[0] = 0;
    qfree(v25);
  }
  return (unsigned int)v8;
}
