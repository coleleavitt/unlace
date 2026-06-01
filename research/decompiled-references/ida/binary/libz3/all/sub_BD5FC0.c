__int64 __fastcall sub_BD5FC0(__int64 a1, __int64 *a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // r12
  char **v7; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char *v14; // rbp
  __int64 v15; // rbx
  unsigned int *v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  int v19; // esi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  size_t v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  size_t v25; // rdx
  bool v26; // zf
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  unsigned int v30; // r12d
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r8
  _DWORD *v34; // r15
  __int64 v35; // rax
  __int64 *v36; // r9
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // r9
  _QWORD *v42; // r12
  _QWORD *v43; // r13
  void *v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r12
  char *v47; // rbp
  __int64 v48; // r15
  char *v49; // r13
  __int64 v50; // rsi
  int v51; // eax
  _QWORD *v52; // rsi
  _QWORD *v53; // rdx
  unsigned int v54; // eax
  unsigned int v55; // r8d
  size_t v56; // rsi
  unsigned int v57; // r14d
  unsigned int *v58; // rax
  __int64 v59; // rsi
  int v60; // edx
  _QWORD *v61; // rsi
  char *v62; // r15
  _QWORD *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // edx
  _QWORD *v68; // rcx
  __int64 v69; // r12
  char *v70; // rax
  char *v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  _QWORD *v74; // rax
  __int64 v75; // r13
  char *v76; // rax
  _QWORD *v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r12
  __int64 v81; // rax
  int v82; // r8d
  int v83; // r9d
  _DWORD *v84; // rbp
  __int64 v85; // rax
  _DWORD *v86; // r13
  _DWORD *v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // eax
  _DWORD *v98; // rsi
  unsigned int v99; // r13d
  __int64 v100; // rdi
  __int64 v101; // rax
  _QWORD *v102; // rbp
  _QWORD *v103; // r12
  void *v104; // rdi
  unsigned __int64 v106; // rdx
  __int64 *v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  __int64 v110; // r9
  unsigned __int64 v111; // rax
  __int64 v112; // r8
  int v113; // edx
  int v114; // [rsp+0h] [rbp-1E8h]
  __int64 v115; // [rsp+0h] [rbp-1E8h]
  __int64 v116; // [rsp+0h] [rbp-1E8h]
  __int64 v118; // [rsp+8h] [rbp-1E0h]
  __int64 v119; // [rsp+8h] [rbp-1E0h]
  int v120; // [rsp+8h] [rbp-1E0h]
  __int64 *src; // [rsp+10h] [rbp-1D8h]
  int srca; // [rsp+10h] [rbp-1D8h]
  int srcb; // [rsp+10h] [rbp-1D8h]
  int v124; // [rsp+18h] [rbp-1D0h]
  __int64 v125; // [rsp+18h] [rbp-1D0h]
  __int64 v126; // [rsp+18h] [rbp-1D0h]
  unsigned int v127; // [rsp+1Ch] [rbp-1CCh]
  char *v128; // [rsp+20h] [rbp-1C8h]
  __int64 v129; // [rsp+20h] [rbp-1C8h]
  __int64 v130; // [rsp+20h] [rbp-1C8h]
  int v131; // [rsp+28h] [rbp-1C0h]
  unsigned __int64 v132; // [rsp+28h] [rbp-1C0h]
  __int64 v133; // [rsp+28h] [rbp-1C0h]
  __int64 v134; // [rsp+28h] [rbp-1C0h]
  __int64 v135; // [rsp+30h] [rbp-1B8h]
  __int64 v136; // [rsp+30h] [rbp-1B8h]
  void *v137; // [rsp+30h] [rbp-1B8h]
  void *v138; // [rsp+38h] [rbp-1B0h]
  __int64 v139; // [rsp+40h] [rbp-1A8h]
  char *v140; // [rsp+48h] [rbp-1A0h]
  unsigned int v141; // [rsp+50h] [rbp-198h]
  unsigned int v142; // [rsp+54h] [rbp-194h]
  int v143[2]; // [rsp+58h] [rbp-190h]
  _DWORD *v144; // [rsp+70h] [rbp-178h] BYREF
  __int64 v145; // [rsp+78h] [rbp-170h]
  void *v146; // [rsp+90h] [rbp-158h]
  __int64 v147; // [rsp+98h] [rbp-150h]
  _QWORD v148[16]; // [rsp+A0h] [rbp-148h] BYREF
  void *v149; // [rsp+120h] [rbp-C8h]
  int v150[2]; // [rsp+128h] [rbp-C0h]
  _BYTE v151[184]; // [rsp+130h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)a3;
  v139 = *a2;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) + 24LL) + 8LL);
  if ( *(_BYTE *)(v10 + 8) != 1 )
    sub_DBF6E(0);
  *(_QWORD *)v143 = *(_QWORD *)v10;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = -1;
  if ( (*((_BYTE *)a2 + 44) & 8) == 0 )
  {
    LODWORD(src) = *(_DWORD *)(v139 + 24);
    v12 = (_DWORD)src - 1;
  }
  if ( !sub_B70A50((__int64 *)(v11 + 8440), a3, *(_DWORD *)v9, v12, (_QWORD **)a2 + 15, 0) )
    return 0;
  v13 = *(_DWORD *)(v9 + 24);
  v148[0] = v9;
  v14 = (char *)(v9 + 32);
  ++*(_DWORD *)(a1 + 292);
  v127 = v13;
  v142 = *(_DWORD *)(v139 + 24);
  v146 = v148;
  v149 = v151;
  *(_QWORD *)v150 = 0x1000000000LL;
  v147 = 0x1000000001LL;
  v140 = (char *)(8LL * v13);
  if ( v140 )
  {
    v15 = *(_QWORD *)(v9 + 32);
    v16 = (unsigned int *)sub_186B270(0x18u);
    src = (__int64 *)(v16 + 2);
    *((_QWORD *)v16 + 1) = v15;
    *(_QWORD *)v16 = 0x100000002LL;
    v17 = (_QWORD *)sub_186B270(0x18u);
    v18 = v17 + 1;
    v19 = v16[1];
    *v17 = 2;
    v17[1] = 0;
    v20 = (unsigned __int64)(v17 + 1);
    v128 = &v140[(_QWORD)v14];
    v21 = *v16;
    v22 = 8 * v21 + 8;
    while ( 1 )
    {
      v131 = v21;
      v23 = sub_186B270(v22);
      *v18 = v23 + 8;
      *(_DWORD *)v23 = v131;
      v24 = v16[1];
      *(_DWORD *)(v23 + 4) = v19;
      v25 = 8 * v24;
      v26 = v25 == 8;
      if ( v25 <= 8 )
      {
        v113 = *(_DWORD *)(v20 - 4);
        if ( v26 )
          *(_QWORD *)(v23 + 8) = *((_QWORD *)v16 + 1);
        v27 = v113 + 1;
      }
      else
      {
        memcpy((void *)(v23 + 8), src, v25);
        v27 = *(_DWORD *)(v20 - 4) + 1;
      }
      *(_DWORD *)(v20 - 4) = v27;
      v14 += 8;
      sub_186B220(v16);
      if ( v128 == v14 )
        break;
      v28 = *(_QWORD *)v14;
      v16 = (unsigned int *)sub_186B270(0x18u);
      src = (__int64 *)(v16 + 2);
      *((_QWORD *)v16 + 1) = v28;
      *(_QWORD *)v16 = 0x100000002LL;
      v29 = *(unsigned int *)(v20 - 4);
      if ( (_DWORD)v29 == *(_DWORD *)(v20 - 8) )
      {
        v30 = (unsigned int)(3 * v29 + 1) >> 1;
        v31 = 8 * v30 + 8;
        v141 = v30;
        if ( 8 * (int)v29 + 8 >= (unsigned int)v31 || (unsigned int)v29 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v144, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v144);
          sub_233E40((__int64)&v144);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = sub_186B270(v31);
        v33 = *(unsigned int *)(v20 - 4);
        v34 = (_DWORD *)v32;
        v32 += 8;
        *(_DWORD *)(v32 - 4) = v33;
        v132 = v32;
        v35 = 8 * v33;
        v36 = (__int64 *)(v20 + 8 * v33);
        if ( (__int64 *)v20 != v36 )
        {
          v37 = v35 - 8;
          if ( (unsigned __int64)(v35 - 8) <= 8 || v20 < (unsigned __int64)(v34 + 6) && v132 < v20 + 16 )
          {
            v106 = v132;
            v107 = (__int64 *)v20;
            do
            {
              v108 = *v107;
              *v107++ = 0;
              v106 += 8LL;
              *(_QWORD *)(v106 - 8) = v108;
            }
            while ( v107 != v36 );
          }
          else
          {
            v38 = 0;
            a5 = 0;
            v39 = (v37 >> 3) + 1;
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + v38 * 4));
              *(_OWORD *)(v20 + v38 * 4) = 0;
              *(__m128 *)&v34[v38 + 2] = a4;
              v38 += 4;
            }
            while ( 4 * (v39 >> 1) != v38 );
            if ( (v39 & 1) != 0 )
            {
              v40 = 8 * (v39 & 0xFFFFFFFFFFFFFFFELL);
              v41 = *(_QWORD *)(v20 + v40);
              *(_QWORD *)(v20 + v40) = 0;
              *(_QWORD *)&v34[v40 / 4 + 2] = v41;
            }
          }
        }
        v42 = (_QWORD *)(v20 + 8 * v33);
        v43 = (_QWORD *)v20;
        if ( (_DWORD)v33 )
        {
          do
          {
            while ( *v43 )
            {
              v44 = (void *)(*v43++ - 8LL);
              sub_186B220(v44);
              if ( v43 == v42 )
                goto LABEL_25;
            }
            ++v43;
          }
          while ( v43 != v42 );
        }
LABEL_25:
        sub_186B220((void *)(v20 - 8));
        v20 = v132;
        v19 = v16[1];
        *v34 = v141;
        v18 = (_QWORD *)(v132 + 8LL * (unsigned int)v34[1]);
        v45 = *v16;
        *v18 = 0;
        LODWORD(v21) = v45;
        v22 = 8 * v45 + 8;
      }
      else
      {
        v18 = (_QWORD *)(v20 + 8 * v29);
        v22 = 24;
        LODWORD(v21) = 2;
        v19 = 1;
        *v18 = 0;
      }
    }
  }
  else
  {
    v20 = 0;
  }
  if ( v142 > 1 )
  {
    v46 = (__int64 *)(v139 + 40);
    src = (__int64 *)(v139 + 8LL * (v142 - 2) + 48);
    v47 = &v140[v20];
    while ( 1 )
    {
      v48 = *v46;
      v49 = (char *)v20;
      if ( v127 )
        break;
LABEL_40:
      v60 = v147;
      v61 = v146;
      if ( (unsigned int)v147 >= HIDWORD(v147) )
      {
        v75 = (unsigned int)(2 * HIDWORD(v147));
        v76 = (char *)sub_186B270(8 * v75);
        v60 = v147;
        v77 = v146;
        v61 = v76;
        if ( (_DWORD)v147 )
        {
          if ( (unsigned int)(v147 - 1) <= 2 || v76 == (char *)v146 + 8 )
          {
            v109 = 0;
            v110 = 8LL * (unsigned int)v147;
            do
            {
              v61[v109 / 8] = v77[v109 / 8];
              v109 += 8LL;
            }
            while ( v109 != v110 );
          }
          else
          {
            v78 = 0;
            v79 = 16LL * ((unsigned int)v147 >> 1);
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)&v77[v78 / 8]);
              *(__m128 *)&v61[v78 / 8] = a4;
              v78 += 16LL;
            }
            while ( v79 != v78 );
            if ( (v60 & 1) != 0 )
              v61[v60 & 0xFFFFFFFE] = v77[v60 & 0xFFFFFFFE];
          }
        }
        if ( v77 != v148 && v77 )
        {
          LODWORD(v128) = (_DWORD)v61;
          sub_186B220(v77);
          v60 = v147;
        }
        v146 = v61;
        HIDWORD(v147) = v75;
      }
      ++v46;
      v61[v60] = v48;
      LODWORD(v147) = v60 + 1;
      if ( src == v46 )
        goto LABEL_42;
    }
    while ( 1 )
    {
      v53 = *(_QWORD **)v49;
      if ( !*(_QWORD *)v49 )
        break;
      v54 = *((_DWORD *)v53 - 1);
      if ( v54 == *((_DWORD *)v53 - 2) )
      {
        v55 = (3 * v54 + 1) >> 1;
        v56 = 8 * v55 + 8;
        v57 = v55;
        if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v144, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v144);
          sub_233E40((__int64)&v144);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v58 = (unsigned int *)sub_186B300(v53 - 1, v56);
        v59 = v58[1];
        *v58 = v57;
        v49 += 8;
        *((_QWORD *)v49 - 1) = v58 + 2;
        *(_QWORD *)&v58[2 * v59 + 2] = v48;
        v58[1] = v59 + 1;
        if ( v47 == v49 )
          goto LABEL_40;
      }
      else
      {
        v50 = v54;
        v51 = v54 + 1;
        v52 = &v53[v50];
LABEL_34:
        v49 += 8;
        *v52 = v48;
        *((_DWORD *)v53 - 1) = v51;
        if ( v47 == v49 )
          goto LABEL_40;
      }
    }
    v74 = (_QWORD *)sub_186B270(0x18u);
    v53 = v74 + 1;
    *(_QWORD *)v49 = v74 + 1;
    v52 = v74 + 1;
    *v74 = 2;
    v51 = 1;
    goto LABEL_34;
  }
LABEL_42:
  v62 = (char *)v20;
  if ( v127 )
  {
    do
    {
      v64 = *(_QWORD *)v62;
      if ( *(_QWORD *)v62 )
        v65 = *(unsigned int *)(v64 - 4);
      else
        v65 = 0;
      v66 = sub_BDD3C0(a1, v65, v64);
      v67 = v150[0];
      v68 = (_QWORD *)v66;
      if ( v150[0] < (unsigned int)v150[1] )
      {
        v63 = v149;
      }
      else
      {
        src = (__int64 *)v66;
        v69 = (unsigned int)(2 * v150[1]);
        v70 = (char *)sub_186B270(8 * v69);
        v67 = v150[0];
        v71 = (char *)v149;
        v63 = v70;
        v68 = src;
        if ( v150[0] )
        {
          if ( (unsigned int)(v150[0] - 1) <= 2 || v70 == (char *)v149 + 8 )
          {
            v111 = 0;
            v112 = 8LL * (unsigned int)v150[0];
            do
            {
              v63[v111 / 8] = *(_QWORD *)&v71[v111];
              v111 += 8LL;
            }
            while ( v112 != v111 );
          }
          else
          {
            v72 = 0;
            v73 = 16LL * ((unsigned int)v150[0] >> 1);
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)&v71[v72]);
              *(__m128 *)&v63[v72 / 8] = a4;
              v72 += 16LL;
            }
            while ( v73 != v72 );
            if ( (v67 & 1) != 0 )
              v63[v67 & 0xFFFFFFFE] = *(_QWORD *)&v71[8 * (v67 & 0xFFFFFFFE)];
          }
        }
        if ( v71 != v151 && v71 )
        {
          sub_186B220(v71);
          v67 = v150[0];
          v68 = src;
        }
        v149 = v63;
        v150[1] = v69;
      }
      v62 += 8;
      v63[v67] = v68;
      v150[0] = v67 + 1;
    }
    while ( v62 != &v140[v20] );
  }
  v144 = nullptr;
  v80 = *(_QWORD *)(a1 + 24);
  v145 = v80;
  v81 = sub_BDD3C0(a1, (unsigned int)v147, v146);
  v84 = (_DWORD *)v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  v85 = sub_15DC610(
          *(_QWORD *)(a1 + 24),
          v143[0],
          v150[0],
          (int)v149,
          v82,
          v83,
          v114,
          a1,
          (int)src,
          v124,
          (int)v128,
          v131,
          (int)v148,
          (int)v151,
          v139,
          v140);
  v86 = (_DWORD *)v85;
  if ( v85 )
    ++*(_DWORD *)(v85 + 8);
  v87 = v144;
  if ( v144 )
  {
    v88 = v145;
    v26 = v144[2]-- == 1;
    if ( v26 )
      sub_15D7BC0(v88, v87);
  }
  v89 = v118;
  v144 = v86;
  v90 = *(_QWORD *)(v118 + 16) + 7456LL;
  v119 = *(_QWORD *)(v118 + 16);
  sub_14B9B80(v90, &v144);
  sub_B6F780(
    *(_QWORD **)(v89 + 16),
    (__int64)v84,
    0,
    a4,
    a5,
    a6,
    v91,
    v92,
    v93,
    v115,
    v119,
    srca,
    v125,
    v129,
    v133,
    v135);
  sub_B6F780(
    *(_QWORD **)(v89 + 16),
    (__int64)v144,
    0,
    a4,
    a5,
    a6,
    v94,
    v95,
    v96,
    v116,
    v120,
    srcb,
    v126,
    v130,
    v134,
    v136);
  v97 = sub_BD4E90(v89, v84, v144);
  v98 = v144;
  v99 = v97;
  if ( v144 && (v100 = v145, v26 = v144[2] == 1, --v144[2], v26) )
  {
    sub_15D7BC0(v100, v98);
    if ( !v84 )
      goto LABEL_84;
  }
  else if ( !v84 )
  {
    goto LABEL_84;
  }
  v26 = v84[2]-- == 1;
  if ( v26 )
  {
    sub_15D7BC0(v80, v84);
    if ( v20 )
      goto LABEL_85;
    goto LABEL_89;
  }
LABEL_84:
  if ( v20 )
  {
LABEL_85:
    v101 = *(unsigned int *)(v20 - 4);
    v102 = (_QWORD *)v20;
    v103 = (_QWORD *)(v20 + 8 * v101);
    if ( (_DWORD)v101 )
    {
      do
      {
        while ( *v102 )
        {
          v104 = (void *)(*v102++ - 8LL);
          sub_186B220(v104);
          if ( v102 == v103 )
            goto LABEL_88;
        }
        ++v102;
      }
      while ( v103 != v102 );
    }
LABEL_88:
    sub_186B220((void *)(v20 - 8));
  }
LABEL_89:
  if ( v149 && v149 != v138 )
    sub_186B220(v149);
  if ( v146 && v146 != v137 )
    sub_186B220(v146);
  return v99;
}

