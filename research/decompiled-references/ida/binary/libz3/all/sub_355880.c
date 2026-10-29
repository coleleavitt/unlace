__int64 __fastcall sub_355880(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 v7; // rbx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // edi
  __int64 *v18; // rcx
  unsigned int v19; // edx
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *i; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r15
  _QWORD *v29; // r14
  unsigned int v30; // edx
  __int64 v31; // r13
  int v32; // r10d
  __int64 v33; // rcx
  __int64 *v34; // r14
  int v35; // esi
  __int64 v36; // r10
  __int64 v37; // rdi
  __int64 *v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  void *v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r13
  void *v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r13d
  _QWORD *v55; // rax
  _QWORD *v56; // rsi
  size_t v57; // rdx
  unsigned int v58; // r14d
  unsigned int v59; // ecx
  __int64 *v60; // r15
  __int64 v61; // rdi
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 *v65; // rsi
  __int64 *v66; // r9
  __int64 *v67; // rax
  __int64 *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rax
  void *v75; // rbx
  __int64 v76; // rax
  int v77; // r9d
  __m128i *v78; // rdx
  __m128i *v79; // rax
  const __m128i *v80; // r15
  __m128i *v81; // r8
  __int64 v82; // rdx
  __m128i *v83; // rsi
  __m128i *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // r13
  void *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rax
  char v93; // dl
  char v94; // cl
  __int64 v95; // rax
  char v96; // dl
  char v97; // cl
  __int64 v98; // [rsp+0h] [rbp-148h]
  __int64 v99; // [rsp+18h] [rbp-130h]
  unsigned int v100; // [rsp+28h] [rbp-120h]
  size_t v101; // [rsp+28h] [rbp-120h]
  int v102; // [rsp+28h] [rbp-120h]
  char *v103; // [rsp+28h] [rbp-120h]
  int v104; // [rsp+30h] [rbp-118h]
  void *v105; // [rsp+30h] [rbp-118h]
  int v106; // [rsp+38h] [rbp-110h]
  int v107; // [rsp+38h] [rbp-110h]
  char *ptr; // [rsp+40h] [rbp-108h]
  __int64 v109; // [rsp+48h] [rbp-100h]
  __int64 v110; // [rsp+58h] [rbp-F0h] BYREF
  void *src; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v112; // [rsp+68h] [rbp-E0h]
  _QWORD v113[2]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v114[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v115; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD *v116; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v117; // [rsp+A0h] [rbp-A8h]
  __int64 v118; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-98h]
  __int64 v120; // [rsp+B8h] [rbp-90h]
  __int64 v121; // [rsp+C0h] [rbp-88h]
  __int64 v122; // [rsp+D0h] [rbp-78h] BYREF
  int v123; // [rsp+D8h] [rbp-70h]
  __int128 v124; // [rsp+E0h] [rbp-68h]
  _QWORD v125[2]; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v126[9]; // [rsp+100h] [rbp-48h] BYREF

  v7 = a1;
  if ( *(_BYTE *)(a1 + 557) )
    return sub_34DCC0(a1, a2, a3, (__int64)a4);
  v122 = *(_QWORD *)(a1 + 8);
  v9 = v122;
  sub_180C5A0(&v115, "pb");
  v10 = sub_15DA4C0(v9 + 560, &v115);
  v11 = *(_QWORD *)(a2 + 8);
  v125[0] = 0;
  v123 = v10;
  v12 = *(_QWORD *)(a1 + 8);
  v125[1] = 0;
  v126[0] = 1;
  v126[1] = 0;
  v99 = v12;
  v124 = 0;
  if ( v11 )
    v13 = *(unsigned int *)(v11 - 4);
  else
    v13 = 0;
  v14 = sub_168D9F0(&v122, v13, v11, a3);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = *(unsigned int *)(a1 + 600);
  v17 = *(_DWORD *)(v15 + 12);
  v18 = *(__int64 **)(v7 + 592);
  v19 = v16 - 1;
  v16 *= 16;
  v20 = (__int64 *)((char *)v18 + v16);
  v21 = 16LL * (v17 & v19);
  v22 = &v18[(unsigned __int64)v21 / 8];
  if ( v21 != v16 )
  {
    for ( i = &v18[(unsigned __int64)v21 / 8]; v20 != i; i += 2 )
    {
      v24 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v17 && v15 == v24 )
          goto LABEL_29;
      }
      else if ( !v24 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v22 != v18; v18 += 2 )
  {
    v52 = *v18;
    if ( (unsigned __int64)*v18 > 1 )
    {
      if ( *(_DWORD *)(v52 + 12) == v17 && v15 == v52 )
      {
        i = v18;
LABEL_29:
        v98 = i[1];
        goto LABEL_30;
      }
    }
    else if ( !v52 )
    {
      break;
    }
  }
LABEL_14:
  v25 = sub_300BE0(v7, "r");
  ++*(_DWORD *)(v15 + 8);
  v98 = v25;
  v110 = v15;
  sub_349180((_QWORD *)(v7 + 272), &v110);
  v26 = *(_QWORD **)(a2 + 8);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    src = nullptr;
    if ( (_DWORD)v27 )
    {
      v28 = v26;
      v29 = &v26[v27];
      do
        sub_349180(&src, v28++);
      while ( v29 != v28 );
    }
  }
  else
  {
    src = nullptr;
  }
  v112 = a3;
  v113[0] = 0;
  v113[1] = 0;
  v114[0] = 1;
  v114[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v113, a4);
  v30 = *(_DWORD *)(v7 + 600);
  if ( 3 * v30 < 4 * (*(_DWORD *)(v7 + 604) + *(_DWORD *)(v7 + 608)) )
  {
    v104 = 2 * v30;
    v101 = 32LL * v30;
    v76 = sub_186B270(v101);
    v33 = v101;
    v77 = v104;
    v31 = v76;
    v78 = (__m128i *)v76;
    v79 = (__m128i *)(v101 + v76);
    if ( v104 )
    {
      if ( (((_BYTE)v79 - (_BYTE)v31) & 0x10) == 0
        || (v78 = (__m128i *)(v31 + 16), *(_OWORD *)v31 = 0, v79 != (__m128i *)(v31 + 16)) )
      {
        do
        {
          *v78 = 0;
          v78 += 2;
          v78[-1] = 0;
        }
        while ( v79 != v78 );
      }
    }
    v80 = *(const __m128i **)(v7 + 592);
    v32 = v104 - 1;
    v34 = (__int64 *)v79;
    v81 = (__m128i *)&v80[*(unsigned int *)(v7 + 600)];
    if ( v80 != v81 )
    {
      do
      {
        if ( v80->m128i_i64[0] > 1uLL )
        {
          v82 = 16LL * (*(_DWORD *)(v80->m128i_i64[0] + 12) & (unsigned int)v32);
          v83 = (__m128i *)(v31 + v82);
          if ( v101 == v82 )
          {
LABEL_103:
            if ( (__m128i *)v31 == v83 )
            {
LABEL_133:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v84 = (__m128i *)v31;
            while ( v84->m128i_i64[0] )
            {
              if ( v83 == ++v84 )
                goto LABEL_133;
            }
          }
          else
          {
            v84 = (__m128i *)(v31 + v82);
            while ( v84->m128i_i64[0] )
            {
              if ( v79 == ++v84 )
                goto LABEL_103;
            }
          }
          *v84 = _mm_loadu_si128(v80);
        }
        ++v80;
      }
      while ( v81 != v80 );
      v81 = *(__m128i **)(v7 + 592);
    }
    if ( v81 )
    {
      v107 = v104;
      v105 = (void *)v101;
      v102 = v77 - 1;
      sub_186B220(v81);
      v77 = v107;
      v33 = (__int64)v105;
      v32 = v102;
    }
    *(_QWORD *)(v7 + 592) = v31;
    *(_DWORD *)(v7 + 600) = v77;
    *(_DWORD *)(v7 + 608) = 0;
  }
  else
  {
    v31 = *(_QWORD *)(v7 + 592);
    v32 = v30 - 1;
    v33 = 16LL * v30;
    v34 = (__int64 *)(v31 + v33);
  }
  v35 = *(_DWORD *)(v15 + 12);
  v36 = 16LL * (v35 & (unsigned int)v32);
  v37 = v31 + v36;
  if ( v36 != v33 )
  {
    v38 = (__int64 *)(v31 + v36);
    v39 = nullptr;
    while ( 1 )
    {
      v40 = *v38;
      if ( (unsigned __int64)*v38 > 1 )
      {
        if ( *(_DWORD *)(v40 + 12) == v35 && v15 == v40 )
        {
          *v38 = v15;
          v38[1] = v98;
          goto LABEL_62;
        }
      }
      else
      {
        if ( !v40 )
        {
          if ( v39 )
            goto LABEL_131;
          v39 = v38;
          goto LABEL_132;
        }
        v39 = v38;
      }
      v38 += 2;
      if ( v38 == v34 )
        goto LABEL_56;
    }
  }
  v39 = nullptr;
  while ( 1 )
  {
LABEL_56:
    if ( v37 == v31 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v53 = *(_QWORD *)v31;
    if ( *(_QWORD *)v31 <= 1u )
      break;
    if ( *(_DWORD *)(v53 + 12) == v35 && v15 == v53 )
    {
      *(_QWORD *)v31 = v15;
      *(_QWORD *)(v31 + 8) = v98;
      goto LABEL_62;
    }
LABEL_55:
    v31 += 16;
  }
  if ( v53 )
  {
    v39 = (__int64 *)v31;
    goto LABEL_55;
  }
  if ( v39 )
LABEL_131:
    --*(_DWORD *)(v7 + 608);
  else
    v39 = (__int64 *)v31;
LABEL_132:
  *v39 = v15;
  v39[1] = v98;
  ++*(_DWORD *)(v7 + 604);
LABEL_62:
  v116 = nullptr;
  v115 = v98;
  if ( src )
  {
    v54 = *((_DWORD *)src - 1);
    v100 = *((_DWORD *)src - 2);
    v55 = (_QWORD *)sub_186B270(8LL * v100 + 8);
    v56 = src;
    v116 = v55 + 1;
    *v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v100), _mm_cvtsi32_si128(v54)).m128i_u64[0];
    if ( v56 )
    {
      v57 = 8LL * *((unsigned int *)v56 - 1);
      if ( v57 <= 8 )
      {
        if ( v57 == 8 )
          v55[1] = *v56;
      }
      else
      {
        memmove(v55 + 1, v56, v57);
      }
    }
  }
  v118 = 0;
  v119 = 0;
  v117 = v112;
  v120 = 1;
  v121 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v118, (int *)v113);
  v58 = *(_DWORD *)(v7 + 624);
  v59 = 2 * v58;
  v106 = 2 * v58;
  if ( 3 * v58 < 4 * (*(_DWORD *)(v7 + 628) + *(_DWORD *)(v7 + 632)) )
  {
    v58 *= 2;
    v60 = (__int64 *)sub_355580(v59);
    sub_355600(*(_QWORD *)(v7 + 616), *(_DWORD *)(v7 + 624), (__int64)v60, v58);
    ptr = *(char **)(v7 + 616);
    if ( ptr )
    {
      v85 = *(unsigned int *)(v7 + 624);
      if ( (_DWORD)v85 )
      {
        v86 = *(_QWORD *)(v7 + 616);
        v109 = v7;
        v103 = &ptr[56 * v85];
        do
        {
          while ( 1 )
          {
            v87 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v86 + 24);
            sub_182CBA0(v87, v86 + 40);
            v88 = *(_QWORD *)(v86 + 8);
            if ( !v88 )
              break;
            v86 += 56;
            sub_186B220((void *)(v88 - 8));
            if ( (char *)v86 == v103 )
              goto LABEL_117;
          }
          v86 += 56;
        }
        while ( (char *)v86 != v103 );
LABEL_117:
        v7 = v109;
      }
      sub_186B220(ptr);
    }
    *(_QWORD *)(v7 + 616) = v60;
    *(_DWORD *)(v7 + 632) = 0;
    *(_DWORD *)(v7 + 624) = v106;
  }
  else
  {
    v60 = *(__int64 **)(v7 + 616);
  }
  v61 = v115;
  v62 = *(_DWORD *)(v115 + 12);
  v63 = 56LL * (v62 & (v58 - 1));
  v64 = 56LL * v58;
  v65 = &v60[(unsigned __int64)v63 / 8];
  v66 = &v60[(unsigned __int64)v64 / 8];
  if ( v63 == v64 )
  {
    v68 = nullptr;
    while ( 1 )
    {
LABEL_79:
      if ( v65 == v60 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v70 = *v60;
      if ( (unsigned __int64)*v60 > 1 )
      {
        if ( *(_DWORD *)(v70 + 12) == v62 && v115 == v70 )
        {
          *v60 = v115;
          sub_349020(v60 + 1, (__int64 *)&v116);
          goto LABEL_84;
        }
      }
      else
      {
        if ( !v70 )
        {
          if ( v68 )
            --*(_DWORD *)(v7 + 632);
          else
            v68 = v60;
          *v68 = v61;
          sub_349020(v68 + 1, (__int64 *)&v116);
          ++*(_DWORD *)(v7 + 628);
          goto LABEL_84;
        }
        v68 = v60;
      }
      v60 += 7;
    }
  }
  v67 = &v60[(unsigned __int64)v63 / 8];
  v68 = nullptr;
  while ( 2 )
  {
    v69 = *v67;
    if ( (unsigned __int64)*v67 > 1 )
    {
      if ( *(_DWORD *)(v69 + 12) == v62 && v115 == v69 )
      {
        *v67 = v115;
        sub_349020(v67 + 1, (__int64 *)&v116);
        goto LABEL_84;
      }
      goto LABEL_72;
    }
    if ( v69 )
    {
      v68 = v67;
LABEL_72:
      v67 += 7;
      if ( v66 == v67 )
        goto LABEL_79;
      continue;
    }
    break;
  }
  if ( v68 )
    --*(_DWORD *)(v7 + 632);
  else
    v68 = v67;
  *v68 = v61;
  if ( &v116 != (_QWORD **)(v68 + 1) )
  {
    v90 = v68[1];
    if ( v90 )
      sub_186B220((void *)(v90 - 8));
    v68[1] = 0;
    v68[1] = (__int64)v116;
    v116 = nullptr;
  }
  *((_DWORD *)v68 + 4) = v117;
  v91 = *((_DWORD *)v68 + 6);
  *((_DWORD *)v68 + 6) = v118;
  LODWORD(v118) = v91;
  v92 = v68[4];
  v68[4] = v119;
  v119 = v92;
  v93 = *((_BYTE *)v68 + 28);
  *((_BYTE *)v68 + 28) = BYTE4(v118) & 2 | v93 & 0xFD;
  BYTE4(v118) = v93 & 2 | BYTE4(v118) & 0xFD;
  v94 = *((_BYTE *)v68 + 28);
  *((_BYTE *)v68 + 28) = BYTE4(v118) & 1 | v94 & 0xFE;
  BYTE4(v118) = v94 & 1 | BYTE4(v118) & 0xFE;
  LODWORD(v92) = *((_DWORD *)v68 + 10);
  *((_DWORD *)v68 + 10) = v120;
  LODWORD(v120) = v92;
  v95 = v68[6];
  v68[6] = v121;
  v121 = v95;
  v96 = *((_BYTE *)v68 + 44);
  *((_BYTE *)v68 + 44) = BYTE4(v120) & 2 | v96 & 0xFD;
  BYTE4(v120) = v96 & 2 | BYTE4(v120) & 0xFD;
  v97 = *((_BYTE *)v68 + 44) & 1;
  *((_BYTE *)v68 + 44) = BYTE4(v120) & 1 | *((_BYTE *)v68 + 44) & 0xFE;
  LOBYTE(v95) = BYTE4(v120);
  ++*(_DWORD *)(v7 + 628);
  BYTE4(v120) = v97 | v95 & 0xFE;
LABEL_84:
  sub_25A130((char *)&v118);
  if ( v116 )
    sub_186B220(v116 - 1);
  v71 = *(_QWORD *)(v7 + 8);
  v72 = sub_15E1B70(v71);
  v73 = v72;
  if ( v72 )
  {
    ++*(_DWORD *)(v72 + 8);
    v74 = sub_2FF8B0(v7);
    sub_E5EBF0(v74, v73);
    v115 = v73;
    ++*(_DWORD *)(v73 + 8);
  }
  else
  {
    v89 = sub_2FF8B0(v7);
    sub_E5EBF0(v89, 0);
    v115 = 0;
  }
  sub_349180((_QWORD *)(v7 + 208), &v115);
  sub_34AF90(v7, v98, v15);
  sub_349160(v73, v71);
  v75 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v113);
  sub_182CBA0(v75, v114);
  if ( src )
    sub_186B220((char *)src - 8);
LABEL_30:
  if ( (*(_DWORD *)(v15 + 8))-- == 1 )
    sub_15D7BC0(v99, v15);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v125);
  sub_182CBA0(v42, v126);
  v43 = *((_QWORD *)&v124 + 1);
  if ( *((_QWORD *)&v124 + 1) )
  {
    v44 = *(unsigned int *)(*((_QWORD *)&v124 + 1) - 4LL);
    if ( (_DWORD)v44 )
    {
      v45 = *((_QWORD *)&v124 + 1) + 16 * v44;
      do
      {
        v46 = v43;
        v43 += 16;
        sub_15D0DF0(v46);
      }
      while ( v43 != v45 );
      v43 = *((_QWORD *)&v124 + 1);
    }
    sub_186B220((void *)(v43 - 8));
  }
  v47 = v124;
  if ( (_QWORD)v124 )
  {
    v48 = *(unsigned int *)(v124 - 4);
    if ( (_DWORD)v48 )
    {
      v49 = v124 + 32 * v48;
      do
      {
        v50 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v47);
        v51 = v47 + 16;
        v47 += 32;
        sub_182CBA0(v50, v51);
      }
      while ( v47 != v49 );
      v47 = v124;
    }
    sub_186B220((void *)(v47 - 8));
  }
  return v98;
}

