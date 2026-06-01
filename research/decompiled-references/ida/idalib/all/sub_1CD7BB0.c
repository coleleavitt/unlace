void *__fastcall sub_1CD7BB0(
        unsigned __int64 a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v8; // r12
  _QWORD *v9; // rbp
  void **v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  void *v20; // rsi
  bool v21; // zf
  void **v22; // rax
  void **v23; // rcx
  void *v24; // rdx
  __int64 *v25; // r15
  unsigned __int64 v26; // rbx
  __int64 v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  unsigned int *v30; // r12
  char *v31; // rbp
  char *v32; // r14
  __int64 v33; // r12
  __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 *v39; // rbx
  _QWORD *v40; // rcx
  __m128i *v41; // r13
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __int64 v44; // r12
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbp
  __int64 v58; // r8
  __int64 v59; // r9
  void *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  void *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // r8
  __int64 v68; // rcx
  char *v69; // r15
  char *v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  char *v74; // r13
  __int64 v75; // rdx
  char *v76; // rbp
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbp
  _QWORD *v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rsi
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbp
  __int64 v89; // r8
  __int64 v90; // r9
  void *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // r15
  char *v95; // r12
  __int64 v96; // rbx
  unsigned int *v97; // r15
  __int64 *v98; // [rsp+0h] [rbp-898h]
  char *v99; // [rsp+0h] [rbp-898h]
  char *v100; // [rsp+0h] [rbp-898h]
  char *v102; // [rsp+10h] [rbp-888h]
  unsigned __int64 v103; // [rsp+18h] [rbp-880h]
  void **v104; // [rsp+28h] [rbp-870h]
  int v105; // [rsp+34h] [rbp-864h]
  _QWORD *v106; // [rsp+38h] [rbp-860h] BYREF
  __int64 v107; // [rsp+40h] [rbp-858h]
  void **v108; // [rsp+48h] [rbp-850h]
  __int64 v109; // [rsp+50h] [rbp-848h]
  void **v110; // [rsp+58h] [rbp-840h]
  __int64 v111; // [rsp+60h] [rbp-838h] BYREF
  void *v112; // [rsp+68h] [rbp-830h] BYREF
  void *v113; // [rsp+70h] [rbp-828h] BYREF
  __int64 v114; // [rsp+78h] [rbp-820h]
  __int64 v115; // [rsp+80h] [rbp-818h] BYREF
  __m128i v116; // [rsp+A0h] [rbp-7F8h] BYREF
  __m128i v117; // [rsp+B0h] [rbp-7E8h] BYREF
  __m128i v118; // [rsp+C0h] [rbp-7D8h] BYREF
  void *v119[2]; // [rsp+D0h] [rbp-7C8h] BYREF
  __m128i v120; // [rsp+E0h] [rbp-7B8h] BYREF
  __m128i v121; // [rsp+F0h] [rbp-7A8h] BYREF
  void *v122; // [rsp+100h] [rbp-798h] BYREF
  __int64 v123; // [rsp+108h] [rbp-790h]
  _BYTE v124[64]; // [rsp+110h] [rbp-788h] BYREF
  void *v125; // [rsp+150h] [rbp-748h] BYREF
  __int64 v126; // [rsp+158h] [rbp-740h]
  __int64 v127; // [rsp+160h] [rbp-738h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-6D8h] BYREF
  __int64 v129; // [rsp+1C8h] [rbp-6D0h]
  _WORD v130[49]; // [rsp+1D0h] [rbp-6C8h] BYREF
  char v131; // [rsp+232h] [rbp-666h]
  __int128 v132; // [rsp+240h] [rbp-658h] BYREF
  unsigned int v133; // [rsp+250h] [rbp-648h] BYREF
  __int16 v134; // [rsp+254h] [rbp-644h]
  __int64 v135; // [rsp+258h] [rbp-640h]
  _QWORD *v136; // [rsp+260h] [rbp-638h]
  __int64 v137; // [rsp+268h] [rbp-630h]
  _QWORD v138[17]; // [rsp+270h] [rbp-628h] BYREF
  __int64 v139; // [rsp+2F8h] [rbp-5A0h]
  __int64 v140; // [rsp+300h] [rbp-598h]
  __int64 v141; // [rsp+310h] [rbp-588h]
  __int64 v142; // [rsp+318h] [rbp-580h]
  int v143; // [rsp+328h] [rbp-570h]
  char v144; // [rsp+32Ch] [rbp-56Ch]
  _QWORD *v145; // [rsp+330h] [rbp-568h]
  __int64 v146; // [rsp+338h] [rbp-560h]
  _QWORD v147[12]; // [rsp+340h] [rbp-558h] BYREF
  _WORD v148[52]; // [rsp+3A0h] [rbp-4F8h] BYREF
  __int64 *v149; // [rsp+408h] [rbp-490h]
  __int64 v150; // [rsp+410h] [rbp-488h]
  __int64 v151; // [rsp+418h] [rbp-480h] BYREF
  void *v152[2]; // [rsp+440h] [rbp-458h] BYREF
  _QWORD v153[2]; // [rsp+450h] [rbp-448h] BYREF
  unsigned __int8 *v154[11]; // [rsp+460h] [rbp-438h] BYREF
  char v155; // [rsp+4B8h] [rbp-3E0h]
  unsigned int v156; // [rsp+4C0h] [rbp-3D8h]
  char v157; // [rsp+4C4h] [rbp-3D4h]
  unsigned int v158; // [rsp+850h] [rbp-48h]
  char v159; // [rsp+854h] [rbp-44h]

  v8 = a7;
  v9 = a2;
  v10 = &v125;
  v130[48] = 0;
  v125 = &v127;
  v126 = 0x400000000LL;
  v129 = 0x400000000LL;
  ptr = v130;
  v131 = 0;
  *(_OWORD *)v152 = 0;
  v153[0] = 0;
  if ( (unsigned __int8)sub_1CCEE60(
                          a1,
                          (__int64)a2,
                          a6,
                          a7,
                          (__int64)v152,
                          0,
                          (__m128)0LL,
                          a4,
                          (__int64)&v125,
                          1,
                          nullptr) )
    goto LABEL_15;
  v11 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[2] & 4) != 0 )
    v11 = (_QWORD *)*v11;
  if ( !(unsigned __int8)sub_B8E180((unsigned __int64)v11) && !sub_F5E540(v8, (__int64)ptr, (unsigned int)v129) )
  {
    v111 = 0;
    v14 = sub_BC3BE0(a2, (__int64)ptr, (unsigned int)v129, (__int64)&v111);
    v106 = v14;
    v122 = v14;
    if ( v14 )
    {
      sub_1CB7B70(a1, a6, (__int64)v14);
      v15 = sub_F57E80(*(_QWORD *)(*((_QWORD *)v122 + 6) & 0xFFFFFFFFFFFFFFF0LL));
      v13 = v122;
      if ( !v15 || (*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v15 + 17) & 4) != 0 )
        goto LABEL_16;
      v16 = (__int64 *)(a1 + 8);
      if ( sub_A5F460(a1 + 3040, (__int64)v122) )
      {
        sub_168B9F0((__int64)v152, v16, a6, 0xCCAu, 0);
        LODWORD(v119[0]) = 3;
        v17 = sub_1CBD500((__int64)v152, (int *)v119);
      }
      else
      {
        sub_168B9F0((__int64)v152, v16, a6, 0x1536u, 0);
        v17 = (__int64)v152;
      }
      v18 = sub_1CBD7E0(v17, (__int64 *)&v122);
      *(_QWORD *)&v132 = *((_QWORD *)v122 + 6);
      sub_162B6D0(v18, (__int64 *)&v132);
      sub_15F7200(v152);
LABEL_15:
      v13 = nullptr;
      goto LABEL_16;
    }
    v35 = a2[6];
    v123 = 0x400000000LL;
    v107 = v35;
    v122 = v124;
    v159 = 0;
    v108 = &v113;
    v152[0] = v153;
    v152[1] = (void *)0x1000000000LL;
    v114 = 0x400000000LL;
    v158 = a6;
    v113 = &v115;
    sub_BC3EF0(a2, (__int64 *)&v113);
    v38 = (unsigned int)v114;
    v99 = (char *)v113 + 8 * (unsigned int)v114;
    if ( v113 != v99 )
    {
      v110 = &v125;
      v39 = (__int64 *)v113;
      v40 = v138;
      v109 = v8;
      do
      {
        v44 = *v39;
        v45 = (_QWORD *)sub_AEA770((__int64 *)(a2[9] + 64LL), a2[9], v38, (__int64)v40, v36, v37);
        if ( (*(_BYTE *)sub_BC3640(v45) & 4) == 0
          || (*(_BYTE *)(sub_705340(
                           (__int64 *)(*(_QWORD *)(v44 + 80) + 72LL),
                           *(_QWORD *)(v44 + 80),
                           v46,
                           v47,
                           v48,
                           v49)[10]
                       + 152LL)
            & 4) != 0 )
        {
          v148[48] = 0;
          v133 = v158;
          v134 = 0;
          v137 = 0x400000000LL;
          v136 = v138;
          v139 &= 0xFFFFFFFE00000000LL;
          v141 &= 0xFFFFFFFE00000000LL;
          v145 = v147;
          v146 = 0x800000000LL;
          v147[11] = 0x400000000LL;
          v150 = 0x400000000LL;
          v147[10] = v148;
          v132 = 0;
          v135 = 0;
          v138[16] = 0;
          v140 = 0;
          v142 = 0;
          v143 = 0;
          v144 = 0;
          v147[8] = 0;
          v147[9] = 0;
          v149 = &v151;
          v50 = sub_1D72540(a1, v44, v125, (unsigned int)v126, &v132);
          if ( v50 )
          {
            v105 = v50;
            sub_1CB6690((__int64)v152);
            v41 = (__m128i *)((char *)v152[0] + 64 * (unsigned __int64)LODWORD(v152[1]) - 64);
            sub_1BD97A0((__int64)&v116, *(_QWORD *)(a1 + 248), v105, (__int64 *)&v132);
            v42 = _mm_load_si128(&v117);
            v43 = _mm_load_si128(&v118);
            *(__m128i *)v119 = _mm_load_si128(&v116);
            v120 = v42;
            v121 = v43;
            v41->m128i_i64[0] = (__int64)a2;
            v41->m128i_i64[1] = v44;
            v41[1] = _mm_load_si128((const __m128i *)v119);
            v41[2] = _mm_load_si128(&v120);
            v41[3] = _mm_load_si128(&v121);
          }
          else
          {
            v51 = (unsigned int)v123;
            v52 = (unsigned int)v123 + 1LL;
            if ( v52 > HIDWORD(v123) )
            {
              sub_2237220(&v122, v124, v52, 16);
              v51 = (unsigned int)v123;
            }
            *((_OWORD *)v122 + v51) = 0;
            v53 = v132;
            LODWORD(v123) = v123 + 1;
            v54 = 16LL * (unsigned int)v123;
            *(_QWORD *)((char *)v122 + v54 - 16) = v44;
            *(_QWORD *)&v132 = 0;
            *(_QWORD *)((char *)v122 + v54 - 8) = v53;
          }
          sub_19A2E00((__int64)&v132);
        }
        ++v39;
      }
      while ( v99 != (char *)v39 );
      LODWORD(v8) = v109;
      v10 = v110;
    }
    v66 = (unsigned int)v123;
    if ( (_DWORD)v123 )
    {
      v67 = (char *)v122;
      v68 = *(_QWORD *)v122;
      v100 = (char *)v122;
      v107 = *(_QWORD *)v122;
      if ( (unsigned int)v123 != 1 )
      {
        v69 = (char *)v122 + 16;
        v70 = (char *)v122 + 16 * (unsigned int)v123;
        if ( (char *)v122 + 16 != v70 )
        {
          v71 = v68;
          while ( 1 )
          {
            while ( 1 )
            {
              v72 = sub_1D74970(a1, *(_QWORD *)v69, v71, a6);
              v71 = *(_QWORD *)v69;
              if ( v72 == *(_QWORD *)v69 )
                break;
              v69 += 16;
              v71 = *(_QWORD *)v100;
              if ( v70 == v69 )
              {
                v107 = *(_QWORD *)v100;
                v66 = (unsigned int)v123;
                v67 = (char *)v122;
                goto LABEL_80;
              }
            }
            if ( v69 + 16 == v70 )
              break;
            v100 = v69;
            v69 += 16;
          }
          v107 = *(_QWORD *)v69;
          v66 = (unsigned int)v123;
          v100 = v69;
          v67 = (char *)v122;
        }
LABEL_80:
        v73 = 16 * v66;
        v74 = &v67[v73];
        if ( v67 != &v67[v73] )
        {
          v75 = v107;
          v76 = v67;
          while ( 1 )
          {
            if ( v100 != v76 )
            {
              v77 = sub_1D74970(a1, *(_QWORD *)v76, v75, a6);
              v75 = *(_QWORD *)v100;
              if ( v77 != *(_QWORD *)v100 )
                break;
            }
            v76 += 16;
            if ( v76 == v74 )
            {
              v107 = v75;
              LODWORD(v9) = (_DWORD)a2;
              goto LABEL_86;
            }
          }
          v93 = sub_1E3B830(a1, (_DWORD)a2, v75, *((_QWORD *)v100 + 1), v8, (int)v10 + 112, a6);
          v112 = (void *)v93;
          if ( v93 )
          {
            sub_B88650(v93, 1);
            sub_168B9F0((__int64)&v132, (__int64 *)(a1 + 8), a6, 0x12C0u, 0);
            sub_1CBD7E0((__int64)&v132, (__int64 *)&v112);
            sub_15F7200(&v132);
            v94 = 16LL * (unsigned int)v123;
            v95 = (char *)v122;
            v102 = (char *)v122 + v94;
            if ( v122 != (char *)v122 + v94 )
            {
              v104 = v10;
              do
              {
                v96 = *(_QWORD *)v95;
                v97 = *((unsigned int **)v95 + 1);
                sub_168B9F0((__int64)&v132, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v95 + 24LL), 0x1878u, 0);
                sub_1CB5C00((__int64)v119, a1, *(_QWORD *)(v96 + 144), (__int64)(v97 + 2), *v97);
                sub_1682AF0((__int64)&v132, (__int64)v119);
                if ( v119[0] != &v120 )
                  operator delete(v119[0]);
                v95 += 16;
                sub_15F7200(&v132);
              }
              while ( v102 != v95 );
              v10 = v104;
            }
          }
          goto LABEL_113;
        }
      }
LABEL_86:
      v106 = *((_QWORD **)v100 + 1);
      v78 = sub_1E3B830(a1, (_DWORD)v9, v107, (_DWORD)v106, v8, (int)v10 + 112, a6);
    }
    else
    {
      v78 = sub_1E3B830(a1, (_DWORD)a2, v107, 0, v8, (int)v10 + 112, a6);
    }
    v112 = (void *)v78;
    v79 = v78;
    if ( v78 )
    {
      if ( (*(_BYTE *)(v107 + 28) & 0x7F) == 0x2A )
      {
        v80 = (_QWORD *)sub_B8C330(v78);
        v83 = v80[294];
        v80[304] += 16LL;
        v84 = (v83 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v80[295] >= v84 + 16 && v83 )
        {
          v80[294] = v84 + 16;
          v85 = (v83 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v85 = sub_986170((__int64)(v80 + 294), 16, 16, 3, v81, v82);
          v84 = v85 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(__m128 *)v85 = _mm_loadh_ps((const double *)&v106);
        *(_QWORD *)(v79 + 112) = v84 | 4;
        v79 = (__int64)v112;
      }
      sub_1CB7B70(a1, a6, v79);
      v13 = v112;
      goto LABEL_94;
    }
LABEL_113:
    v13 = nullptr;
LABEL_94:
    if ( v113 != v108 + 2 )
      free(v113);
    sub_1BD6E90((__int64 *)v152);
    if ( v152[0] != v153 )
      free(v152[0]);
    if ( v122 != v124 )
      free(v122);
    goto LABEL_16;
  }
  v12 = *(unsigned int *)(a1 + 3052);
  if ( *(_DWORD *)(a1 + 3056) == (_DWORD)v12 )
  {
    v13 = nullptr;
    goto LABEL_16;
  }
  v20 = (void *)a2[6];
  v21 = *(_BYTE *)(a1 + 3060) == 0;
  v103 = a1 + 3040;
  v122 = (void *)v9[6];
  if ( !v21 )
  {
    v22 = *(void ***)(a1 + 3040);
    v23 = &v22[v12];
    if ( v22 == v23 )
      goto LABEL_27;
    while ( 1 )
    {
      v24 = *v22;
      if ( v20 == *v22 )
        break;
      if ( v23 == ++v22 )
        goto LABEL_27;
    }
LABEL_26:
    if ( !(unsigned __int8)sub_1CB0DB0(*(_QWORD *)(a1 + 240), (__int64)v24) )
    {
      v62 = sub_BC1290((__int64 *)v9[7], *(_QWORD *)(a1 + 248));
      v152[1] = v63;
      v152[0] = v62;
      if ( (unsigned __int8)sub_1CAF800((__int64)&ptr, (__int64 *)v152, a1) )
      {
        sub_168B9F0((__int64)v152, (__int64 *)(a1 + 8), a6, 0xCCAu, 0);
        LODWORD(v119[0]) = 1;
        v64 = sub_1CBD500((__int64)v152, (int *)v119);
        v65 = sub_17B9080(v64, (__int64 *)&v122);
        *(_QWORD *)&v132 = *((_QWORD *)v122 + 6);
        sub_162B6D0(v65, (__int64 *)&v132);
        sub_15F7200(v152);
        goto LABEL_15;
      }
    }
    goto LABEL_27;
  }
  if ( sub_2236570(a1 + 3040, v20) )
  {
    v24 = v122;
    goto LABEL_26;
  }
LABEL_27:
  *(_QWORD *)&v132 = &v133;
  *((_QWORD *)&v132 + 1) = 0x400000000LL;
  sub_BC3EF0(v9, (__int64 *)&v132);
  v98 = (__int64 *)(v132 + 8LL * DWORD2(v132));
  if ( (__int64 *)v132 == v98 )
  {
LABEL_41:
    v13 = nullptr;
    goto LABEL_42;
  }
  v25 = (__int64 *)v132;
  v26 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v27 = *v25;
      if ( *(_BYTE *)(v26 + 3060) )
        break;
      if ( sub_2236570(v103, *v25) )
        goto LABEL_34;
      if ( v98 == ++v25 )
      {
LABEL_40:
        v10 = &v125;
        v98 = (__int64 *)v132;
        goto LABEL_41;
      }
    }
    v28 = *(_QWORD **)(v26 + 3040);
    v29 = &v28[*(unsigned int *)(v26 + 3052)];
    if ( v28 == v29 )
      goto LABEL_39;
    while ( v27 != *v28 )
    {
      if ( v29 == ++v28 )
        goto LABEL_39;
    }
LABEL_34:
    v30 = *(unsigned int **)(v27 + 128);
    if ( 3LL * *v30 == 3LL * (unsigned int)v129 )
      break;
LABEL_39:
    if ( v98 == ++v25 )
      goto LABEL_40;
  }
  v31 = (char *)ptr;
  v32 = (char *)ptr + 24 * *v30;
  if ( ptr != v32 )
  {
    v33 = (__int64)(v30 + 2);
    while ( sub_AB67C0(*(_QWORD **)(v26 + 248), (__int64)v31, v33) )
    {
      v31 += 24;
      v33 += 24;
      if ( v32 == v31 )
        goto LABEL_49;
    }
    goto LABEL_39;
  }
LABEL_49:
  v34 = (__int64 *)(v26 + 8);
  v10 = &v125;
  sub_168B9F0((__int64)v152, v34, a6, 0xCCAu, 0);
  if ( v155 )
  {
    sub_AE9DF0(v154, 2, 2u);
  }
  else
  {
    if ( !v157 )
      goto LABEL_51;
    v57 = sub_168B9E0(v152);
    v60 = (void *)v153[0];
    if ( v153[0] )
      v60 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v153[0] + 32LL))(v153[0]);
    v122 = v60;
    v61 = sub_1587BC0(v57, (__int64 *)&v122, v55, v56, v58, v59);
    sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v156 + 8), 2, 2u);
  }
  if ( v155 )
  {
    sub_AE9DF0(v154, v27, 0xAu);
  }
  else if ( v157 )
  {
    v88 = sub_168B9E0(v152);
    v91 = (void *)v153[0];
    if ( v153[0] )
      v91 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v153[0] + 32LL))(v153[0]);
    v122 = v91;
    v92 = sub_1587BC0(v88, (__int64 *)&v122, v86, v87, v89, v90);
    sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v156 + 8), v27, 0xAu);
  }
LABEL_51:
  v13 = nullptr;
  v122 = *(void **)(v27 + 48);
  sub_162B6D0((__int64)v152, (__int64 *)&v122);
  sub_15F7200(v152);
  v98 = (__int64 *)v132;
LABEL_42:
  if ( v98 != (__int64 *)&v133 )
    free(v98);
LABEL_16:
  if ( ptr != v10 + 16 )
    free(ptr);
  if ( v125 != v10 + 2 )
    free(v125);
  return v13;
}
