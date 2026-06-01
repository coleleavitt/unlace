__int64 __fastcall sub_42EC40(size_t a1, __int64 *a2, __int64 a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // r14
  _QWORD *v11; // r12
  const char *v12; // rsi
  _QWORD *v13; // r13
  const char *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rsi
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // r9
  __int64 (__fastcall *v25)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v26; // rdi
  __int64 (*v27)(); // rax
  const char *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 i; // rbx
  __int64 *v50; // rax
  __int64 v51; // rdi
  __m128i si128; // xmm3
  const char *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  __int128 v58; // xmm1
  __int64 v59; // r13
  __m128i v60; // xmm0
  __int64 v61; // rax
  __int64 v62; // rbx
  size_t v63; // r14
  __int64 v64; // rdi
  void *v65; // rax
  char v66; // al
  __m128i *v67; // r15
  __int64 v68; // r13
  __m128i *v69; // rbp
  const char *v70; // rsi
  __m128i *v71; // r12
  const char *v72; // rdi
  int v73; // eax
  __m128i *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  const char *v77; // rsi
  const char *v78; // rdi
  __int64 v79; // rax
  size_t v80; // r13
  __int64 v81; // r12
  _QWORD *v82; // rdi
  const char *v83; // rsi
  __m128i *v84; // rax
  _QWORD *v85; // rdx
  __int64 v86; // rdi
  __m128i v87; // xmm0
  __int64 v88; // r8
  __m128i v89; // xmm1
  __int64 v90; // rbx
  __int64 v91; // rsi
  __int64 j; // rdx
  __int64 v93; // rax
  __int64 v94; // r14
  __int64 v95; // rdx
  __int64 v96; // rbp
  __int64 k; // rbx
  __int64 *v98; // rax
  __int64 v99; // rdi
  __m128i v100; // xmm5
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // r15
  __int64 v104; // r12
  __m128i v105; // xmm1
  __int64 v106; // rax
  __int64 v107; // r13
  void *v108; // rax
  size_t v109; // rdx
  void *v110; // rax
  const char *v111; // rsi
  const char *v112; // rsi
  const char *v113; // rdi
  unsigned int v114; // eax
  size_t n[2]; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v117; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD *v118; // [rsp+30h] [rbp-A8h]
  int v119; // [rsp+38h] [rbp-A0h]
  unsigned int v120; // [rsp+3Ch] [rbp-9Ch]
  __int64 v121; // [rsp+40h] [rbp-98h] BYREF
  __m128i v122; // [rsp+48h] [rbp-90h] BYREF
  __int64 v123; // [rsp+60h] [rbp-78h] BYREF
  __int128 v124; // [rsp+68h] [rbp-70h]
  __int64 v125; // [rsp+80h] [rbp-58h] BYREF
  __int128 v126; // [rsp+88h] [rbp-50h]
  unsigned __int64 v127; // [rsp+98h] [rbp-40h]

  n[0] = a1;
  v119 = a4;
  v127 = __readfsqword(0x28u);
  v5 = sub_426230(a1, (const char *)a2);
  v6 = sub_417080((__int64)v5);
  v7 = *(_QWORD *)(v6 + 8);
  v118 = (_QWORD *)v6;
  if ( !v7 )
    return 0;
  v8 = *(unsigned __int8 (**)(void))(*(_QWORD *)v7 + 480LL);
  if ( (char *)v8 != (char *)sub_178B60 )
  {
    if ( v8() )
      return 0;
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 > 1 )
  {
    v54 = *(const char **)a3;
    if ( *(_BYTE *)(*(_QWORD *)a3 + v9 - 2) == 47 )
    {
      if ( *v54 != 47 || v54[1] != 47 )
        return 0;
      if ( v54[2] )
        return 0;
    }
  }
  v10 = *(_QWORD **)(n[0] + 16);
  v11 = (_QWORD *)(n[0] + 8);
  v117.m128i_i64[0] = n[0] + 8;
  if ( !v10 )
    goto LABEL_21;
  while ( 1 )
  {
    v17 = v10[5];
    if ( !v9 )
      break;
    v12 = *(const char **)a3;
    v13 = v10;
    v14 = &s1;
    if ( v17 )
      goto LABEL_7;
LABEL_8:
    v15 = strcmp(v14, v12);
    v16 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v15 >= 0 )
    {
      v11 = v13;
      v10 = v16;
    }
    if ( !v10 )
      goto LABEL_17;
  }
  if ( v17 )
  {
LABEL_15:
    v13 = v10;
    v12 = &s1;
LABEL_7:
    v14 = (const char *)v10[4];
    goto LABEL_8;
  }
  while ( 1 )
  {
    v18 = v10[2];
    if ( !v18 )
      break;
    v11 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v18 + 40) )
      goto LABEL_15;
  }
  v11 = v10;
LABEL_17:
  if ( (_QWORD *)v117.m128i_i64[0] != v11 )
  {
    if ( v11[5] )
    {
      v19 = (const char *)v11[4];
      if ( !v9 )
      {
        if ( strcmp(&s1, v19) < 0 )
          goto LABEL_21;
LABEL_53:
        if ( a2 )
        {
          v45 = v11[8];
          v46 = 0;
          *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
          if ( v45 )
          {
            v117.m128i_i64[0] = v45;
            v55 = 0;
            v56 = qalloc_or_throw(80 * v45);
            v57 = v117.m128i_i64[0];
            v58 = 0;
            v46 = v56;
            v59 = v56;
            do
            {
              v62 = v11[7] + 80 * v55;
              *(_OWORD *)(v59 + 8) = v58;
              *(_QWORD *)v59 = 0;
              v63 = *(_QWORD *)(v62 + 8);
              if ( v63 )
              {
                v64 = *(_QWORD *)(v62 + 8);
                v117.m128i_i64[0] = v57;
                v65 = (void *)qalloc_or_throw(v64);
                *(_QWORD *)(v59 + 16) = v63;
                *(_QWORD *)v59 = v65;
                v19 = *(const char **)v62;
                memcpy(v65, *(const void **)v62, v63);
                *(_QWORD *)(v59 + 8) = v63;
                v57 = v117.m128i_i64[0];
                v58 = 0;
              }
              ++v55;
              v59 += 80;
              *(__m128i *)(v59 - 56) = _mm_loadu_si128((const __m128i *)(v62 + 24));
              v60 = _mm_loadu_si128((const __m128i *)(v62 + 56));
              *(_QWORD *)(v59 - 40) = *(_QWORD *)(v62 + 40);
              v61 = *(_QWORD *)(v62 + 48);
              *(__m128i *)(v59 - 24) = v60;
              *(_QWORD *)(v59 - 32) = v61;
              *(_BYTE *)(v59 - 8) = *(_BYTE *)(v62 + 72);
            }
            while ( v57 != v55 );
          }
          v47 = *a2;
          if ( *a2 )
          {
            v48 = a2[1];
            if ( v48 )
            {
              for ( i = 0; i != v48; ++i )
              {
                v50 = (__int64 *)(v47 + 80 * i);
                v51 = *v50;
                if ( *v50 )
                {
                  v50[1] = 0;
                  qfree(v51, v19);
                  v47 = *a2;
                }
              }
            }
            a2[1] = 0;
            qfree(v47, v19);
          }
          si128 = _mm_load_si128((const __m128i *)n);
          *a2 = v46;
          *(__m128i *)(a2 + 1) = si128;
        }
        return 1;
      }
    }
    else
    {
      v19 = &s1;
      if ( !v9 )
        goto LABEL_53;
    }
    if ( strcmp(*(const char **)a3, v19) >= 0 )
      goto LABEL_53;
  }
LABEL_21:
  v121 = 0;
  v123 = 0;
  v122 = 0;
  v124 = 0;
  v123 = qvector_reserve(&v123, 0, 1, 24);
  v20 = &s1;
  v21 = v123 + 24 * v124;
  *(_QWORD *)v21 = 0;
  *(_OWORD *)(v21 + 8) = 0;
  *(_QWORD *)&v124 = v124 + 1;
  if ( *(_QWORD *)(a3 + 8) )
    v20 = *(const char **)a3;
  v22 = v123;
  sub_425D00(v123, v20, "*", 0);
  v23 = sub_426230(v22, v20);
  v24 = (unsigned int)(unsigned __int8)sub_418320((__int64)v23) + 6;
  v25 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v118 + 240LL);
  if ( v25 == vault_with_events_t__::vfunc_30 )
  {
    v26 = v118[1];
    if ( !v26
      || (v27 = *(__int64 (**)())(*(_QWORD *)v26 + 480LL), v27 != sub_178B60)
      && (v120 = v24, v66 = v27(), v24 = v120, v66) )
    {
      LODWORD(v28) = 52;
LABEL_35:
      if ( !(_BYTE)v119 )
      {
        v20 = "Failed to retrieve vault files";
        sub_416980((unsigned int)v28, (__int64)"Failed to retrieve vault files");
      }
      v34 = 0;
      goto LABEL_38;
    }
    v125 = 0;
    v126 = 0;
    v28 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64 *, __int64, __int64))(*(_QWORD *)v118[1] + 208LL))(
                          v118[1],
                          &v125,
                          &v121,
                          &v123,
                          4294967293LL,
                          v24);
    v20 = v28;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v118 + 24LL))(v118, v28, &v125);
    v29 = v125;
    if ( v125 )
    {
      v30 = v126;
      if ( (_QWORD)v126 )
      {
        v31 = 0;
        do
        {
          v32 = v29 + 32 * v31;
          v33 = *(_QWORD *)(v32 + 8);
          if ( v33 )
          {
            *(_QWORD *)(v32 + 16) = 0;
            qfree(v33, v28);
            v29 = v125;
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
      *(_QWORD *)&v126 = 0;
      qfree(v29, v28);
    }
  }
  else
  {
    v20 = (const char *)&v121;
    LODWORD(v28) = v25(v118, (__int64)&v121, (__int64)&v123, 4294967293LL, (unsigned int)v24);
  }
  if ( (_DWORD)v28 && (_DWORD)v28 != 43 )
    goto LABEL_35;
  v67 = *(__m128i **)(n[0] + 16);
  if ( !v67 )
  {
    v69 = (__m128i *)v117.m128i_i64[0];
    goto LABEL_98;
  }
  v68 = *(_QWORD *)(a3 + 8);
  v69 = (__m128i *)v117.m128i_i64[0];
  while ( 2 )
  {
    v75 = v67[2].m128i_i64[1];
    if ( v68 )
    {
      v70 = *(const char **)a3;
      v71 = v67;
      v72 = &s1;
      if ( !v75 )
        goto LABEL_84;
      goto LABEL_83;
    }
    if ( v75 )
    {
LABEL_91:
      v71 = v67;
      v70 = &s1;
LABEL_83:
      v72 = (const char *)v67[2].m128i_i64[0];
LABEL_84:
      v73 = strcmp(v72, v70);
      v74 = (__m128i *)v67[1].m128i_i64[0];
      v67 = (__m128i *)v67[1].m128i_i64[1];
      if ( v73 >= 0 )
      {
        v69 = v71;
        v67 = v74;
      }
      if ( !v67 )
        goto LABEL_93;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v76 = v67[1].m128i_i64[0];
    if ( !v76 )
      break;
    v69 = v67;
    v67 = (__m128i *)v67[1].m128i_i64[0];
    if ( *(_QWORD *)(v76 + 40) )
      goto LABEL_91;
  }
  v69 = v67;
LABEL_93:
  if ( (__m128i *)v117.m128i_i64[0] == v69 )
    goto LABEL_98;
  if ( v69[2].m128i_i64[1] )
  {
    v77 = (const char *)v69[2].m128i_i64[0];
    v78 = &s1;
    if ( v68 )
      goto LABEL_96;
LABEL_97:
    if ( strcmp(v78, v77) < 0 )
    {
LABEL_98:
      v79 = operator new(0x58u);
      v80 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(v79 + 32) = 0;
      v81 = v79;
      *(_OWORD *)(v79 + 40) = 0;
      if ( v80 )
      {
        v110 = (void *)qalloc_or_throw(v80);
        *(_QWORD *)(v81 + 32) = v110;
        v111 = *(const char **)a3;
        *(_QWORD *)(v81 + 48) = v80;
        memcpy(v110, v111, v80);
        *(_QWORD *)(v81 + 40) = v80;
      }
      *(_QWORD *)(v81 + 80) = 0;
      v82 = (_QWORD *)n[0];
      v83 = (const char *)v69;
      *(_QWORD *)(v81 + 56) = 0;
      *(_OWORD *)(v81 + 64) = 0;
      v84 = (__m128i *)sub_42EA80(v82, v69, v81 + 32);
      v69 = v84;
      if ( v85 )
      {
        if ( v84 || (_QWORD *)v117.m128i_i64[0] == v85 )
        {
          v86 = 1;
        }
        else
        {
          v112 = &s1;
          if ( v85[5] )
            v112 = (const char *)v85[4];
          v113 = &s1;
          if ( *(_QWORD *)(v81 + 40) )
            v113 = *(const char **)(v81 + 32);
          v118 = v85;
          v114 = strcmp(v113, v112);
          v85 = v118;
          v86 = v114 >> 31;
        }
        v69 = (__m128i *)v81;
        std::_Rb_tree_insert_and_rebalance(v86, v81, v85, v117.m128i_i64[0]);
        ++*(_QWORD *)(n[0] + 40);
      }
      else if ( v81 )
      {
        v101 = *(_QWORD *)(v81 + 32);
        if ( v101 )
        {
          *(_QWORD *)(v81 + 40) = 0;
          qfree(v101, v83);
        }
        operator delete((void *)v81, 0x58u);
      }
    }
  }
  else
  {
    v77 = &s1;
    if ( v68 )
    {
LABEL_96:
      v78 = *(const char **)a3;
      goto LABEL_97;
    }
  }
  v87 = _mm_loadu_si128(&v122);
  v88 = v121;
  v89 = _mm_loadu_si128(v69 + 4);
  v90 = v87.m128i_i64[0];
  v121 = v69[3].m128i_i64[1];
  v69[3].m128i_i64[1] = v88;
  v91 = v88;
  v69[4] = v87;
  v122 = v89;
  for ( j = 0xCCCCCCCCCCCCCCCDLL * ((80 * v87.m128i_i64[0]) >> 4); j > 0; j >>= 1 )
  {
    while ( 1 )
    {
      v93 = v91 + 80 * (j >> 1);
      if ( *(_DWORD *)(v93 + 64) )
        break;
      v91 = v93 + 80;
      j = j - 1 - (j >> 1);
      if ( j <= 0 )
        goto LABEL_109;
    }
  }
LABEL_109:
  v20 = (const char *)(0xCCCCCCCCCCCCCCCDLL * ((v91 - v88) >> 4));
  v69[5].m128i_i64[0] = (__int64)v20;
  if ( a2 )
  {
    v94 = 0;
    if ( v87.m128i_i64[0] )
    {
      *(__m128i *)n = v87;
      v102 = qalloc_or_throw(80 * v87.m128i_i64[0]);
      v87 = _mm_load_si128((const __m128i *)n);
      v94 = v102;
      v103 = v102;
      v104 = 0;
      do
      {
        v107 = v69[3].m128i_i64[1] + 80 * v104;
        *(_QWORD *)v103 = 0;
        *(_OWORD *)(v103 + 8) = 0;
        if ( *(_QWORD *)(v107 + 8) )
        {
          n[0] = *(_QWORD *)(v107 + 8);
          v117 = v87;
          v108 = (void *)qalloc_or_throw(n[0]);
          v109 = n[0];
          *(_QWORD *)v103 = v108;
          *(_QWORD *)(v103 + 16) = v109;
          v20 = *(const char **)v107;
          memcpy(v108, *(const void **)v107, v109);
          v87 = _mm_load_si128(&v117);
          *(_QWORD *)(v103 + 8) = n[0];
        }
        ++v104;
        v103 += 80;
        *(__m128i *)(v103 - 56) = _mm_loadu_si128((const __m128i *)(v107 + 24));
        v105 = _mm_loadu_si128((const __m128i *)(v107 + 56));
        *(_QWORD *)(v103 - 40) = *(_QWORD *)(v107 + 40);
        v106 = *(_QWORD *)(v107 + 48);
        *(__m128i *)(v103 - 24) = v105;
        *(_QWORD *)(v103 - 32) = v106;
        *(_BYTE *)(v103 - 8) = *(_BYTE *)(v107 + 72);
      }
      while ( v90 != v104 );
    }
    *(__m128i *)n = _mm_unpacklo_epi64(v87, v87);
    v95 = *a2;
    if ( *a2 )
    {
      v96 = a2[1];
      if ( v96 )
      {
        for ( k = 0; k != v96; ++k )
        {
          v98 = (__int64 *)(v95 + 80 * k);
          v99 = *v98;
          if ( *v98 )
          {
            v98[1] = 0;
            qfree(v99, v20);
            v95 = *a2;
          }
        }
      }
      a2[1] = 0;
      qfree(v95, v20);
    }
    v100 = _mm_load_si128((const __m128i *)n);
    *a2 = v94;
    *(__m128i *)(a2 + 1) = v100;
  }
  v34 = 1;
LABEL_38:
  v35 = v123;
  if ( v123 )
  {
    v36 = v124;
    if ( (_QWORD)v124 )
    {
      v37 = 0;
      do
      {
        v38 = (__int64 *)(v35 + 24 * v37);
        v39 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          qfree(v39, v20);
          v35 = v123;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v35, v20);
  }
  v40 = v121;
  if ( v121 )
  {
    v41 = v122.m128i_i64[0];
    if ( v122.m128i_i64[0] )
    {
      v42 = 0;
      do
      {
        v43 = (__int64 *)(v40 + 80 * v42);
        v44 = *v43;
        if ( *v43 )
        {
          v43[1] = 0;
          qfree(v44, v20);
          v40 = v121;
        }
        ++v42;
      }
      while ( v41 != v42 );
    }
    v122.m128i_i64[0] = 0;
    qfree(v40, v20);
  }
  return v34;
}
