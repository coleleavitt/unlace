void *__fastcall sub_1CD6960(unsigned __int64 a1, char *a2, unsigned int a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v6; // r15
  char *v8; // rbp
  void **v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  void *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  void *v19; // rsi
  bool v20; // zf
  void **v21; // rax
  void **v22; // rcx
  void *v23; // rdx
  __int64 *v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  unsigned int *v29; // r12
  char *v30; // rbp
  char *v31; // r14
  __int64 v32; // r12
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 *v38; // rbx
  _QWORD *v39; // rcx
  __m128i *v40; // r15
  __m128i v41; // xmm2
  __m128i v42; // xmm3
  __int64 v43; // r13
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbp
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  void *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // r8
  __int64 v66; // rcx
  char *v67; // r12
  char *v68; // r13
  void **v69; // r12
  __int64 v70; // rdx
  char *i; // rbx
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
  char *v98; // r9
  __int64 *v99; // [rsp+0h] [rbp-898h]
  char *v100; // [rsp+0h] [rbp-898h]
  int v101; // [rsp+0h] [rbp-898h]
  char *v103; // [rsp+10h] [rbp-888h]
  unsigned __int64 v104; // [rsp+18h] [rbp-880h]
  void **v105; // [rsp+20h] [rbp-878h]
  int v106; // [rsp+34h] [rbp-864h]
  _QWORD *v107; // [rsp+38h] [rbp-860h] BYREF
  __int64 v108; // [rsp+40h] [rbp-858h]
  void **v109; // [rsp+48h] [rbp-850h]
  __int64 v110; // [rsp+50h] [rbp-848h]
  void **v111; // [rsp+58h] [rbp-840h]
  __int64 v112; // [rsp+60h] [rbp-838h] BYREF
  void *v113; // [rsp+68h] [rbp-830h] BYREF
  void *v114; // [rsp+70h] [rbp-828h] BYREF
  __int64 v115; // [rsp+78h] [rbp-820h]
  __int64 v116; // [rsp+80h] [rbp-818h] BYREF
  void *v117[2]; // [rsp+A0h] [rbp-7F8h] BYREF
  __m128i v118; // [rsp+B0h] [rbp-7E8h] BYREF
  __m128i v119; // [rsp+C0h] [rbp-7D8h] BYREF
  __m128i v120; // [rsp+D0h] [rbp-7C8h] BYREF
  __m128i v121; // [rsp+E0h] [rbp-7B8h] BYREF
  __m128i v122; // [rsp+F0h] [rbp-7A8h] BYREF
  void *v123; // [rsp+100h] [rbp-798h] BYREF
  __int64 v124; // [rsp+108h] [rbp-790h]
  _BYTE v125[64]; // [rsp+110h] [rbp-788h] BYREF
  void *v126; // [rsp+150h] [rbp-748h] BYREF
  __int64 v127; // [rsp+158h] [rbp-740h]
  __int64 v128; // [rsp+160h] [rbp-738h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-6D8h] BYREF
  __int64 v130; // [rsp+1C8h] [rbp-6D0h]
  _WORD v131[49]; // [rsp+1D0h] [rbp-6C8h] BYREF
  char v132; // [rsp+232h] [rbp-666h]
  __int128 v133; // [rsp+240h] [rbp-658h] BYREF
  unsigned int v134; // [rsp+250h] [rbp-648h] BYREF
  __int16 v135; // [rsp+254h] [rbp-644h]
  __int64 v136; // [rsp+258h] [rbp-640h]
  _QWORD *v137; // [rsp+260h] [rbp-638h]
  __int64 v138; // [rsp+268h] [rbp-630h]
  _QWORD v139[17]; // [rsp+270h] [rbp-628h] BYREF
  __int64 v140; // [rsp+2F8h] [rbp-5A0h]
  __int64 v141; // [rsp+300h] [rbp-598h]
  __int64 v142; // [rsp+310h] [rbp-588h]
  __int64 v143; // [rsp+318h] [rbp-580h]
  int v144; // [rsp+328h] [rbp-570h]
  char v145; // [rsp+32Ch] [rbp-56Ch]
  _QWORD *v146; // [rsp+330h] [rbp-568h]
  __int64 v147; // [rsp+338h] [rbp-560h]
  _QWORD v148[12]; // [rsp+340h] [rbp-558h] BYREF
  _WORD v149[52]; // [rsp+3A0h] [rbp-4F8h] BYREF
  __int64 *v150; // [rsp+408h] [rbp-490h]
  __int64 v151; // [rsp+410h] [rbp-488h]
  __int64 v152; // [rsp+418h] [rbp-480h] BYREF
  void *v153[2]; // [rsp+440h] [rbp-458h] BYREF
  _QWORD v154[2]; // [rsp+450h] [rbp-448h] BYREF
  unsigned __int8 *v155[11]; // [rsp+460h] [rbp-438h] BYREF
  char v156; // [rsp+4B8h] [rbp-3E0h]
  unsigned int v157; // [rsp+4C0h] [rbp-3D8h]
  char v158; // [rsp+4C4h] [rbp-3D4h]
  unsigned int v159; // [rsp+850h] [rbp-48h]
  char v160; // [rsp+854h] [rbp-44h]

  v6 = a4;
  v8 = a2;
  v9 = &v126;
  v131[48] = 0;
  v126 = &v128;
  v127 = 0x400000000LL;
  v130 = 0x400000000LL;
  ptr = v131;
  v132 = 0;
  *(_OWORD *)v153 = 0;
  v154[0] = 0;
  if ( (unsigned __int8)sub_1CCEE60(
                          a1,
                          (__int64)a2,
                          a3,
                          a4,
                          (__int64)v153,
                          0,
                          (__m128)0LL,
                          a6,
                          (__int64)&v126,
                          1,
                          nullptr) )
    goto LABEL_16;
  v10 = (_QWORD *)(*((_QWORD *)a2 + 2) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*((_QWORD *)a2 + 2) & 4) != 0 )
    v10 = (_QWORD *)*v10;
  if ( !(unsigned __int8)sub_B8E180((unsigned __int64)v10) && !sub_F5E540(v6, (__int64)ptr, (unsigned int)v130) )
  {
    v112 = 0;
    v13 = sub_BC3BE0(a2, (__int64)ptr, (unsigned int)v130, (__int64)&v112);
    v107 = v13;
    v123 = v13;
    if ( v13 )
    {
      sub_1CB7B70(a1, a3, (__int64)v13);
      v14 = sub_F57E80(*(_QWORD *)(*((_QWORD *)v123 + 6) & 0xFFFFFFFFFFFFFFF0LL));
      v12 = v123;
      if ( !v14 || (*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v14 + 17) & 4) != 0 )
        goto LABEL_17;
      v15 = (__int64 *)(a1 + 8);
      if ( sub_A5F460(a1 + 3040, (__int64)v123) )
      {
        sub_168B9F0((__int64)v153, v15, a3, 0xCCAu, 0);
        v120.m128i_i32[0] = 3;
        v16 = sub_1CBD500((__int64)v153, v120.m128i_i32);
      }
      else
      {
        sub_168B9F0((__int64)v153, v15, a3, 0x1536u, 0);
        v16 = (__int64)v153;
      }
      v17 = sub_1CBD7E0(v16, (__int64 *)&v123);
      goto LABEL_15;
    }
    v34 = *((_QWORD *)a2 + 6);
    v124 = 0x400000000LL;
    v108 = v34;
    v123 = v125;
    v160 = 0;
    v109 = &v114;
    v153[0] = v154;
    v153[1] = (void *)0x1000000000LL;
    v115 = 0x400000000LL;
    v159 = a3;
    v114 = &v116;
    sub_BC3EF0(a2, (__int64 *)&v114);
    v37 = (unsigned int)v115;
    v100 = (char *)v114 + 8 * (unsigned int)v115;
    if ( v114 != v100 )
    {
      v111 = &v126;
      v38 = (__int64 *)v114;
      v39 = v139;
      v110 = v6;
      do
      {
        v43 = *v38;
        v44 = (_QWORD *)sub_AEA770(
                          (__int64 *)(*((_QWORD *)a2 + 9) + 64LL),
                          *((_QWORD *)a2 + 9),
                          v37,
                          (__int64)v39,
                          v35,
                          v36);
        if ( (*(_BYTE *)sub_BC3640(v44) & 4) == 0
          || (*(_BYTE *)(sub_705340(
                           (__int64 *)(*(_QWORD *)(v43 + 80) + 72LL),
                           *(_QWORD *)(v43 + 80),
                           v45,
                           v46,
                           v47,
                           v48)[10]
                       + 152LL)
            & 4) != 0 )
        {
          v149[48] = 0;
          v134 = v159;
          v135 = 0;
          v138 = 0x400000000LL;
          v137 = v139;
          v140 &= 0xFFFFFFFE00000000LL;
          v142 &= 0xFFFFFFFE00000000LL;
          v146 = v148;
          v147 = 0x800000000LL;
          v148[11] = 0x400000000LL;
          v151 = 0x400000000LL;
          v148[10] = v149;
          v133 = 0;
          v136 = 0;
          v139[16] = 0;
          v141 = 0;
          v143 = 0;
          v144 = 0;
          v145 = 0;
          v148[8] = 0;
          v148[9] = 0;
          v150 = &v152;
          v49 = sub_1D72540(a1, v43, v126, (unsigned int)v127, &v133);
          if ( v49 )
          {
            v106 = v49;
            sub_1CB6690((__int64)v153);
            v40 = (__m128i *)((char *)v153[0] + 64 * (unsigned __int64)LODWORD(v153[1]) - 64);
            sub_1BD97A0((__int64)&v120, *(_QWORD *)(a1 + 248), v106, (__int64 *)&v133);
            v41 = _mm_load_si128(&v121);
            v42 = _mm_load_si128(&v122);
            *(__m128i *)v117 = _mm_load_si128(&v120);
            v118 = v41;
            v119 = v42;
            v40->m128i_i64[0] = (__int64)a2;
            v40->m128i_i64[1] = v43;
            v40[1] = _mm_load_si128((const __m128i *)v117);
            v40[2] = _mm_load_si128(&v118);
            v40[3] = _mm_load_si128(&v119);
          }
          else
          {
            v50 = (unsigned int)v124;
            v51 = (unsigned int)v124 + 1LL;
            if ( v51 > HIDWORD(v124) )
            {
              sub_2237220(&v123, v125, v51, 16);
              v50 = (unsigned int)v124;
            }
            *((_OWORD *)v123 + v50) = 0;
            v52 = v133;
            LODWORD(v124) = v124 + 1;
            v53 = 16LL * (unsigned int)v124;
            *(_QWORD *)((char *)v123 + v53 - 16) = v43;
            *(_QWORD *)&v133 = 0;
            *(_QWORD *)((char *)v123 + v53 - 8) = v52;
          }
          sub_19A2E00((__int64)&v133);
        }
        ++v38;
      }
      while ( v100 != (char *)v38 );
      LODWORD(v6) = v110;
      v9 = v111;
    }
    v64 = (unsigned int)v124;
    if ( (_DWORD)v124 )
    {
      v65 = (char *)v123;
      v66 = *(_QWORD *)v123;
      v67 = (char *)v123;
      v108 = *(_QWORD *)v123;
      if ( (unsigned int)v124 != 1 )
      {
        v68 = (char *)v123 + 16 * (unsigned int)v124;
        if ( (char *)v123 + 16 != v68 )
        {
          v69 = v9;
          v70 = v66;
          v8 = (char *)v123;
          for ( i = (char *)v123 + 16; ; i += 16 )
          {
            while ( 1 )
            {
              v72 = sub_1D74970(a1, *(_QWORD *)i, v70, a3);
              v70 = *(_QWORD *)i;
              if ( v72 == *(_QWORD *)i )
                break;
              i += 16;
              v70 = *(_QWORD *)v8;
              if ( v68 == i )
              {
                v108 = *(_QWORD *)v8;
                v9 = v69;
                v64 = (unsigned int)v124;
                v67 = v8;
                v65 = (char *)v123;
                LODWORD(v8) = (_DWORD)a2;
                goto LABEL_81;
              }
            }
            if ( v68 == i + 16 )
              break;
            v8 = i;
          }
          v98 = i;
          v108 = *(_QWORD *)i;
          v9 = v69;
          LODWORD(v8) = (_DWORD)a2;
          v67 = v98;
          v64 = (unsigned int)v124;
          v65 = (char *)v123;
        }
LABEL_81:
        v73 = 16 * v64;
        v74 = &v65[v73];
        if ( v65 != &v65[v73] )
        {
          v105 = v9;
          v75 = v108;
          v101 = (int)v8;
          v76 = v65;
          while ( 1 )
          {
            if ( v67 != v76 )
            {
              v77 = sub_1D74970(a1, *(_QWORD *)v76, v75, a3);
              v75 = *(_QWORD *)v67;
              if ( v77 != *(_QWORD *)v67 )
                break;
            }
            v76 += 16;
            if ( v74 == v76 )
            {
              LODWORD(v8) = v101;
              v108 = v75;
              goto LABEL_87;
            }
          }
          v93 = sub_1E3B830(a1, v101, v75, *((_QWORD *)v67 + 1), v6, (int)v9 + 112, a3);
          v113 = (void *)v93;
          if ( v93 )
          {
            sub_B88650(v93, 1);
            sub_168B9F0((__int64)&v133, (__int64 *)(a1 + 8), a3, 0x12C0u, 0);
            sub_1CBD7E0((__int64)&v133, (__int64 *)&v113);
            sub_15F7200(&v133);
            v94 = 16LL * (unsigned int)v124;
            v95 = (char *)v123;
            v103 = (char *)v123 + v94;
            if ( v123 != (char *)v123 + v94 )
            {
              do
              {
                v96 = *(_QWORD *)v95;
                v97 = *((unsigned int **)v95 + 1);
                sub_168B9F0((__int64)&v133, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v95 + 24LL), 0x1878u, 0);
                sub_1CB5C00((__int64)v117, a1, *(_QWORD *)(v96 + 144), (__int64)(v97 + 2), *v97);
                sub_1682AF0((__int64)&v133, (__int64)v117);
                if ( v117[0] != &v118 )
                  operator delete(v117[0]);
                v95 += 16;
                sub_15F7200(&v133);
              }
              while ( v103 != v95 );
              v9 = v105;
            }
          }
          goto LABEL_113;
        }
      }
LABEL_87:
      v107 = *((_QWORD **)v67 + 1);
      v78 = sub_1E3B830(a1, (_DWORD)v8, v108, (_DWORD)v107, v6, (int)v9 + 112, a3);
    }
    else
    {
      v78 = sub_1E3B830(a1, (_DWORD)a2, v108, 0, v6, (int)v9 + 112, a3);
    }
    v113 = (void *)v78;
    v79 = v78;
    if ( v78 )
    {
      if ( (*(_BYTE *)(v108 + 28) & 0x7F) == 0x2A )
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
        *(__m128 *)v85 = _mm_loadh_ps((const double *)&v107);
        *(_QWORD *)(v79 + 112) = v84 | 4;
        v79 = (__int64)v113;
      }
      sub_1CB7B70(a1, a3, v79);
      v12 = v113;
      goto LABEL_95;
    }
LABEL_113:
    v12 = nullptr;
LABEL_95:
    if ( v114 != v109 + 2 )
      free(v114);
    sub_1BD6E90((__int64 *)v153);
    if ( v153[0] != v154 )
      free(v153[0]);
    if ( v123 != v125 )
      free(v123);
    goto LABEL_17;
  }
  v11 = *(unsigned int *)(a1 + 3052);
  if ( (_DWORD)v11 == *(_DWORD *)(a1 + 3056) )
  {
    v12 = nullptr;
    goto LABEL_17;
  }
  v19 = *((void **)a2 + 6);
  v20 = *(_BYTE *)(a1 + 3060) == 0;
  v104 = a1 + 3040;
  v123 = *((void **)v8 + 6);
  if ( !v20 )
  {
    v21 = *(void ***)(a1 + 3040);
    v22 = &v21[v11];
    if ( v21 == v22 )
      goto LABEL_28;
    while ( 1 )
    {
      v23 = *v21;
      if ( v19 == *v21 )
        break;
      if ( v22 == ++v21 )
        goto LABEL_28;
    }
LABEL_27:
    if ( !(unsigned __int8)sub_1CB0DB0(*(_QWORD *)(a1 + 240), (__int64)v23) )
    {
      v61 = sub_BC1290(*((__int64 **)v8 + 7), *(_QWORD *)(a1 + 248));
      v153[1] = v62;
      v153[0] = v61;
      if ( (unsigned __int8)sub_1CAF800((__int64)&ptr, (__int64 *)v153, a1) )
      {
        sub_168B9F0((__int64)v153, (__int64 *)(a1 + 8), a3, 0xCCAu, 0);
        v120.m128i_i32[0] = 1;
        v63 = sub_1CBD500((__int64)v153, v120.m128i_i32);
        v17 = sub_17B9080(v63, (__int64 *)&v123);
LABEL_15:
        *(_QWORD *)&v133 = *((_QWORD *)v123 + 6);
        sub_162B6D0(v17, (__int64 *)&v133);
        sub_15F7200(v153);
LABEL_16:
        v12 = nullptr;
        goto LABEL_17;
      }
    }
    goto LABEL_28;
  }
  if ( sub_2236570(a1 + 3040, v19) )
  {
    v23 = v123;
    goto LABEL_27;
  }
LABEL_28:
  *(_QWORD *)&v133 = &v134;
  *((_QWORD *)&v133 + 1) = 0x400000000LL;
  sub_BC3EF0(v8, (__int64 *)&v133);
  v99 = (__int64 *)(v133 + 8LL * DWORD2(v133));
  if ( (__int64 *)v133 == v99 )
  {
LABEL_42:
    v12 = nullptr;
    goto LABEL_43;
  }
  v24 = (__int64 *)v133;
  v25 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v26 = *v24;
      if ( *(_BYTE *)(v25 + 3060) )
        break;
      if ( sub_2236570(v104, *v24) )
        goto LABEL_35;
      if ( v99 == ++v24 )
      {
LABEL_41:
        v9 = &v126;
        v99 = (__int64 *)v133;
        goto LABEL_42;
      }
    }
    v27 = *(_QWORD **)(v25 + 3040);
    v28 = &v27[*(unsigned int *)(v25 + 3052)];
    if ( v27 == v28 )
      goto LABEL_40;
    while ( v26 != *v27 )
    {
      if ( v28 == ++v27 )
        goto LABEL_40;
    }
LABEL_35:
    v29 = *(unsigned int **)(v26 + 128);
    if ( 3LL * *v29 == 3LL * (unsigned int)v130 )
      break;
LABEL_40:
    if ( v99 == ++v24 )
      goto LABEL_41;
  }
  v30 = (char *)ptr;
  v31 = (char *)ptr + 24 * *v29;
  if ( ptr != v31 )
  {
    v32 = (__int64)(v29 + 2);
    while ( sub_AB67C0(*(_QWORD **)(v25 + 248), (__int64)v30, v32) )
    {
      v30 += 24;
      v32 += 24;
      if ( v31 == v30 )
        goto LABEL_50;
    }
    goto LABEL_40;
  }
LABEL_50:
  v33 = (__int64 *)(v25 + 8);
  v9 = &v126;
  sub_168B9F0((__int64)v153, v33, a3, 0xCCAu, 0);
  if ( v156 )
  {
    sub_AE9DF0(v155, 2, 2u);
  }
  else
  {
    if ( !v158 )
      goto LABEL_52;
    v56 = sub_168B9E0(v153);
    v59 = (void *)v154[0];
    if ( v154[0] )
      v59 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v154[0] + 32LL))(v154[0]);
    v123 = v59;
    v60 = sub_1587BC0(v56, (__int64 *)&v123, v54, v55, v57, v58);
    sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v157 + 8), 2, 2u);
  }
  if ( v156 )
  {
    sub_AE9DF0(v155, v26, 0xAu);
  }
  else if ( v158 )
  {
    v88 = sub_168B9E0(v153);
    v91 = (void *)v154[0];
    if ( v154[0] )
      v91 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v154[0] + 32LL))(v154[0]);
    v123 = v91;
    v92 = sub_1587BC0(v88, (__int64 *)&v123, v86, v87, v89, v90);
    sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v157 + 8), v26, 0xAu);
  }
LABEL_52:
  v12 = nullptr;
  v123 = *(void **)(v26 + 48);
  sub_162B6D0((__int64)v153, (__int64 *)&v123);
  sub_15F7200(v153);
  v99 = (__int64 *)v133;
LABEL_43:
  if ( v99 != (__int64 *)&v134 )
    free(v99);
LABEL_17:
  if ( ptr != v9 + 16 )
    free(ptr);
  if ( v126 != v9 + 2 )
    free(v126);
  return v12;
}
