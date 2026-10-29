__int64 __fastcall sub_773C40(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // ax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int16 v17; // ax
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  int v20; // r12d
  int v21; // r14d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  unsigned int v31; // r12d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // dl
  __int64 v36; // rax
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // edi
  __int64 *v42; // rcx
  unsigned int v43; // edx
  __int64 *v44; // rsi
  __int64 v45; // rdx
  __int64 *v46; // r8
  __int64 *i; // rax
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r13
  int v51; // edx
  __int64 *v52; // r12
  __int64 v53; // rax
  int v54; // esi
  __int64 *v55; // rcx
  __int64 v56; // r14
  unsigned int v57; // r10d
  _QWORD *v58; // r13
  unsigned int v59; // r8d
  __int64 v60; // r9
  char *v61; // r15
  int v62; // edi
  __int64 v63; // r8
  _QWORD *v64; // r10
  _QWORD *v65; // rax
  _QWORD *v66; // r8
  __int64 v67; // rdx
  _QWORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rdi
  bool v76; // zf
  int v77; // eax
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 v85; // rax
  int v86; // edx
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  _QWORD *v91; // rcx
  __int64 *v92; // rax
  unsigned int v93; // ecx
  _QWORD *v94; // r12
  int v95; // eax
  size_t v96; // r13
  __int64 *v97; // r14
  int v98; // ecx
  __int64 v99; // rax
  _QWORD *v100; // rdi
  __int64 *v101; // rax
  __int64 *v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // r15
  _QWORD *v107; // rax
  unsigned int v108; // r10d
  char *v109; // rax
  char *v110; // r11
  __int64 v111; // rdx
  _QWORD *v112; // rsi
  _QWORD *v113; // rdx
  int v114; // eax
  _QWORD *v115; // rax
  __int64 v116; // rax
  unsigned int v117; // ebx
  unsigned int v118; // ecx
  unsigned int *v119; // rax
  __int64 v120; // rcx
  unsigned int v121; // r12d
  unsigned int v122; // ecx
  unsigned int *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r14
  _QWORD *v126; // rax
  int v127; // ecx
  void *v128; // rdi
  char *v129; // r8
  char *v130; // r15
  __int64 v131; // rdx
  _QWORD *v132; // rsi
  _QWORD *v133; // rdx
  _QWORD *v134; // rdx
  char **exception; // rbx
  unsigned int v136; // [rsp+8h] [rbp-2B0h]
  int v137; // [rsp+8h] [rbp-2B0h]
  int v138; // [rsp+8h] [rbp-2B0h]
  size_t v139; // [rsp+10h] [rbp-2A8h]
  __int64 *v140; // [rsp+10h] [rbp-2A8h]
  int v141; // [rsp+10h] [rbp-2A8h]
  unsigned int v142; // [rsp+18h] [rbp-2A0h]
  __int64 *v143; // [rsp+20h] [rbp-298h]
  __int64 v144; // [rsp+20h] [rbp-298h]
  unsigned int v145; // [rsp+38h] [rbp-280h]
  __int64 v146; // [rsp+50h] [rbp-268h] BYREF
  __int64 v147; // [rsp+58h] [rbp-260h]
  __int64 v148[12]; // [rsp+60h] [rbp-258h] BYREF
  void *ptr; // [rsp+C0h] [rbp-1F8h]
  unsigned int v150; // [rsp+C8h] [rbp-1F0h]
  int v151; // [rsp+CCh] [rbp-1ECh]
  int v152; // [rsp+D0h] [rbp-1E8h]
  __int64 v153; // [rsp+F0h] [rbp-1C8h]
  int v154; // [rsp+F8h] [rbp-1C0h]
  __int64 v155; // [rsp+100h] [rbp-1B8h]
  _QWORD v156[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v157; // [rsp+1A0h] [rbp-118h]
  _QWORD v158[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v159; // [rsp+238h] [rbp-80h]
  __int64 v160; // [rsp+240h] [rbp-78h]
  __int64 v161; // [rsp+248h] [rbp-70h]
  __int64 v162; // [rsp+250h] [rbp-68h]
  __int64 v163; // [rsp+258h] [rbp-60h]
  __int64 v164; // [rsp+260h] [rbp-58h]
  __int64 v165; // [rsp+268h] [rbp-50h]
  __int64 v166; // [rsp+270h] [rbp-48h]

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v26 = *(_QWORD **)(a1 + 56);
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v31 = (3 * v27 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v32 || v27 >= v31 )
          goto LABEL_221;
        v33 = (unsigned int *)sub_186B300(v26 - 1, v32);
        v34 = v33[1];
        v26 = v33 + 2;
        *v33 = v31;
        *(_QWORD *)(a1 + 56) = v33 + 2;
        LODWORD(v33) = v34;
        v30 = &v26[v34];
        v29 = (_DWORD)v33 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v26[v28];
      }
    }
    else
    {
      v105 = (_QWORD *)sub_186B270(0x18u);
      v26 = v105 + 1;
      *v105 = 2;
      v29 = 1;
      *(_QWORD *)(a1 + 56) = v26;
      v30 = v26;
    }
    *v30 = a2;
    *((_DWORD *)v26 - 1) = v29;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) > 1u && a2 != *(_QWORD *)(a1 + 120) )
  {
    v6 = *(_WORD *)(a2 + 4);
    if ( v6 )
    {
      if ( v6 == 2 )
        goto LABEL_6;
    }
    else if ( *(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = 1;
      v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(__int64 **)(a1 + 56);
        ++*(_DWORD *)(v8 + 8);
        if ( !v10 )
        {
          v68 = (_QWORD *)sub_186B270(0x18u);
          *v68 = 2;
          v13 = 1;
          v10 = v68 + 1;
          *(_QWORD *)(a1 + 56) = v10;
          v14 = v10;
          goto LABEL_10;
        }
        v11 = *((_DWORD *)v10 - 1);
        if ( v11 != *((_DWORD *)v10 - 2) )
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = &v10[v12];
LABEL_10:
          *v14 = v9;
          *((_DWORD *)v10 - 1) = v13;
          if ( a2 != v9 )
          {
            v15 = *(_QWORD *)(a1 + 40);
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 - 4);
              if ( v16 )
                *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
            }
          }
          return 1;
        }
        v121 = (3 * v11 + 1) >> 1;
        v122 = 8 * v121 + 8;
        if ( 8 * v11 + 8 < v122 && v11 < v121 )
        {
          v123 = (unsigned int *)sub_186B300(v10 - 1, v122);
          v124 = v123[1];
          v10 = (__int64 *)(v123 + 2);
          *v123 = v121;
          *(_QWORD *)(a1 + 56) = v123 + 2;
          LODWORD(v123) = v124;
          v14 = &v10[v124];
          v13 = (_DWORD)v123 + 1;
          goto LABEL_10;
        }
LABEL_221:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(v148, "Overflow encountered when expanding vector");
        goto LABEL_222;
      }
      goto LABEL_16;
    }
  }
  v7 = 0;
LABEL_16:
  sub_76B0A0(*(__int64 **)(a1 + 144), a2);
  v17 = *(_WORD *)(a2 + 4);
  if ( v17 == 1 )
  {
    sub_76E930((_QWORD *)a1, a2);
    return 1;
  }
  if ( v17 == 2 )
  {
    v35 = 3;
    if ( a3 != 3 )
      v35 = (a3 - 1) & 3;
    v36 = *(_QWORD *)(a1 + 56);
    v20 = v35;
    if ( v36 )
      v21 = *(_DWORD *)(v36 - 4);
    else
      v21 = 0;
    v22 = *(_QWORD **)(a1 + 40);
    if ( v22 )
    {
      v23 = *((unsigned int *)v22 - 1);
      if ( (_DWORD)v23 != *((_DWORD *)v22 - 2) )
        goto LABEL_26;
      v37 = (unsigned int)(3 * v23 + 1) >> 1;
      v38 = 16 * v37 + 8;
      if ( 16 * (int)v23 + 8 >= (unsigned int)v38 || (unsigned int)v23 >= v37 )
        goto LABEL_221;
      goto LABEL_48;
    }
LABEL_165:
    v115 = (_QWORD *)sub_186B270(0x28u);
    v22 = v115 + 1;
    *v115 = 2;
    *(_QWORD *)(a1 + 40) = v115 + 1;
    v24 = (__int64)(v115 + 1);
    goto LABEL_27;
  }
  if ( v17 )
  {
    sub_1872CE0("");
    sub_1873130(114, 226);
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    v18 = 3;
    if ( a3 != 3 )
      v18 = (a3 - 1) & 3;
    v19 = *(_QWORD *)(a1 + 56);
    v20 = v18;
    if ( v19 )
      v21 = *(_DWORD *)(v19 - 4);
    else
      v21 = 0;
    v22 = *(_QWORD **)(a1 + 40);
    if ( v22 )
    {
      v23 = *((unsigned int *)v22 - 1);
      if ( (_DWORD)v23 != *((_DWORD *)v22 - 2) )
      {
LABEL_26:
        v24 = (__int64)&v22[2 * v23];
LABEL_27:
        *(_QWORD *)v24 = a2;
        *(_DWORD *)(v24 + 12) = v21;
        *(_DWORD *)(v24 + 8) = v7 | (16 * v20);
        ++*((_DWORD *)v22 - 1);
        return 0;
      }
      v37 = (unsigned int)(3 * v23 + 1) >> 1;
      v38 = 16 * v37 + 8;
      if ( 16 * (int)v23 + 8 >= (unsigned int)v38 || (unsigned int)v23 >= v37 )
        goto LABEL_221;
LABEL_48:
      v39 = (unsigned int *)sub_186B300(v22 - 1, v38);
      v22 = v39 + 2;
      *(_QWORD *)(a1 + 40) = v39 + 2;
      *v39 = v37;
      v24 = (__int64)&v39[4 * v39[1] + 2];
      goto LABEL_27;
    }
    goto LABEL_165;
  }
  if ( (unsigned __int8)sub_76E570(a1, a2) )
    return 1;
  v40 = *(unsigned int *)(a1 + 104);
  v41 = *(_DWORD *)(a2 + 12);
  v42 = *(__int64 **)(a1 + 96);
  v43 = v40 - 1;
  v40 *= 8;
  v44 = (__int64 *)((char *)v42 + v40);
  v45 = 8LL * (v41 & v43);
  v46 = &v42[(unsigned __int64)v45 / 8];
  if ( v45 != v40 )
  {
    for ( i = &v42[(unsigned __int64)v45 / 8]; v44 != i; ++i )
    {
      v48 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v48 + 12) == v41 && a2 == v48 )
          goto LABEL_107;
      }
      else if ( !v48 )
      {
        goto LABEL_57;
      }
    }
  }
  for ( ; v46 != v42; ++v42 )
  {
    v116 = *v42;
    if ( (unsigned __int64)*v42 > 1 )
    {
      if ( *(_DWORD *)(v116 + 12) == v41 && a2 == v116 )
        goto LABEL_107;
    }
    else if ( !v116 )
    {
      break;
    }
  }
LABEL_57:
  v49 = *(_QWORD *)(a1 + 8);
  v50 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v148, v49, 0);
  v148[0] = (__int64)&off_1C53CD8;
  v153 = v50;
  v154 = 0;
  v155 = 0;
  sub_1584DD0(v156, v49, 0);
  v156[18] = 0;
  v157 = 0;
  v156[0] = &off_1C61DB8;
  sub_1584DD0(v158, v49, 0);
  v161 = v49;
  v163 = v49;
  v51 = v151;
  v165 = v49;
  v52 = *(__int64 **)(a1 + 96);
  v158[0] = &off_1C61DE0;
  v53 = *(unsigned int *)(a1 + 104);
  v159 = 0;
  v54 = v152;
  v160 = 0;
  v55 = &v52[v53];
  v162 = 0;
  v164 = 0;
  v166 = 0;
  v136 = v150;
  if ( v52 != v55 )
  {
    while ( (unsigned __int64)*v52 <= 1 )
    {
      if ( v55 == ++v52 )
        goto LABEL_123;
    }
    if ( v55 != v52 )
    {
      v56 = *v52;
      while ( 1 )
      {
        v57 = 2 * v136;
        if ( 3 * v136 < 4 * (v54 + v51) )
        {
          v106 = v57;
          v143 = v55;
          v136 *= 2;
          v139 = 8LL * v57;
          v107 = (_QWORD *)sub_186B270(v139);
          v108 = v136;
          v60 = v139;
          v58 = v107;
          v55 = v143;
          if ( v136 )
          {
            memset(v107, 0, 8 * v106);
            v55 = v143;
            v60 = v139;
            v108 = v136;
          }
          v59 = v108 - 1;
          v61 = (char *)v58 + v60;
          v109 = (char *)ptr;
          v110 = (char *)ptr + 8 * v150;
          if ( ptr != v110 )
          {
            do
            {
              if ( *(_QWORD *)v109 > 1u )
              {
                v111 = 8LL * (*(_DWORD *)(*(_QWORD *)v109 + 12LL) & v59);
                v112 = &v58[(unsigned __int64)v111 / 8];
                if ( v60 == v111 )
                {
LABEL_153:
                  if ( v58 == v112 )
                  {
LABEL_175:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v113 = v58;
                  while ( *v113 )
                  {
                    if ( v112 == ++v113 )
                      goto LABEL_175;
                  }
                }
                else
                {
                  v113 = &v58[(unsigned __int64)v111 / 8];
                  while ( *v113 )
                  {
                    if ( v61 == (char *)++v113 )
                      goto LABEL_153;
                  }
                }
                *v113 = *(_QWORD *)v109;
              }
              v109 += 8;
            }
            while ( v110 != v109 );
            v110 = (char *)ptr;
          }
          if ( v110 )
          {
            v145 = v108;
            v144 = v60;
            v142 = v108 - 1;
            v140 = v55;
            sub_186B220(v110);
            v108 = v145;
            v60 = v144;
            v59 = v142;
            v55 = v140;
          }
          ptr = v58;
          v54 = 0;
          v150 = v108;
          v152 = 0;
        }
        else
        {
          v58 = ptr;
          v59 = v136 - 1;
          v60 = 8LL * v136;
          v61 = (char *)ptr + v60;
        }
        v62 = *(_DWORD *)(v56 + 12);
        v63 = 8LL * (v62 & v59);
        v64 = &v58[(unsigned __int64)v63 / 8];
        if ( v63 != v60 )
        {
          v65 = &v58[(unsigned __int64)v63 / 8];
          v66 = nullptr;
          while ( 1 )
          {
            v67 = *v65;
            if ( *v65 > 1u )
            {
              if ( *(_DWORD *)(v67 + 12) == v62 && v67 == v56 )
              {
                *v65 = v56;
                v51 = v151;
                goto LABEL_118;
              }
            }
            else
            {
              if ( !v67 )
              {
                if ( v66 )
                  goto LABEL_163;
                v66 = v65;
                goto LABEL_164;
              }
              v66 = v65;
            }
            if ( ++v65 == (_QWORD *)v61 )
              goto LABEL_77;
          }
        }
        v66 = nullptr;
        while ( 1 )
        {
LABEL_77:
          if ( v64 == v58 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v69 = *v58;
          if ( *v58 <= 1u )
            break;
          if ( *(_DWORD *)(v69 + 12) == v62 && v69 == v56 )
          {
            *v58 = v56;
            v51 = v151;
            goto LABEL_118;
          }
LABEL_76:
          ++v58;
        }
        if ( v69 )
          break;
        if ( v66 )
LABEL_163:
          v152 = --v54;
        else
          v66 = v58;
LABEL_164:
        v114 = v151;
        *v66 = v56;
        v51 = v114 + 1;
        v151 = v114 + 1;
LABEL_118:
        v92 = v52 + 1;
        if ( v55 != v52 + 1 )
        {
          while ( 1 )
          {
            v56 = *v92;
            v52 = v92;
            if ( (unsigned __int64)*v92 > 1 )
              break;
            if ( v55 == ++v92 )
              goto LABEL_123;
          }
          if ( v55 != v92 )
            continue;
        }
        goto LABEL_123;
      }
      v66 = v58;
      goto LABEL_76;
    }
  }
LABEL_123:
  v93 = 2 * v136;
  if ( 3 * v136 < 4 * (v51 + v54) )
  {
    v125 = v93;
    v137 = 2 * v136;
    v96 = 8LL * v93;
    v126 = (_QWORD *)sub_186B270(v96);
    v127 = v137;
    v94 = v126;
    if ( v137 )
    {
      memset(v126, 0, 8 * v125);
      v127 = v137;
    }
    v128 = ptr;
    v95 = v127 - 1;
    v97 = &v94[v96 / 8];
    v129 = (char *)ptr + 8 * v150;
    v130 = (char *)ptr;
    if ( ptr != v129 )
    {
      do
      {
        if ( *(_QWORD *)v130 > 1u )
        {
          v131 = 8LL * (*(_DWORD *)(*(_QWORD *)v130 + 12LL) & (unsigned int)v95);
          v132 = &v94[(unsigned __int64)v131 / 8];
          if ( v96 == v131 )
          {
LABEL_200:
            if ( v94 == v132 )
            {
LABEL_214:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v133 = v94;
            while ( *v133 )
            {
              if ( v132 == ++v133 )
                goto LABEL_214;
            }
          }
          else
          {
            v133 = &v94[(unsigned __int64)v131 / 8];
            while ( *v133 )
            {
              if ( v97 == ++v133 )
                goto LABEL_200;
            }
          }
          *v133 = *(_QWORD *)v130;
        }
        v130 += 8;
      }
      while ( v129 != v130 );
      v128 = ptr;
    }
    if ( v128 )
    {
      v141 = v127;
      v138 = v127 - 1;
      sub_186B220(v128);
      v127 = v141;
      v95 = v138;
    }
    ptr = v94;
    v150 = v127;
    v152 = 0;
  }
  else
  {
    v94 = ptr;
    v95 = v136 - 1;
    v96 = 8LL * v136;
    v97 = (__int64 *)((char *)ptr + v96);
  }
  v98 = *(_DWORD *)(a2 + 12);
  v99 = 8LL * (v98 & (unsigned int)v95);
  v100 = &v94[(unsigned __int64)v99 / 8];
  if ( v99 != v96 )
  {
    v101 = &v94[(unsigned __int64)v99 / 8];
    v102 = nullptr;
    while ( 1 )
    {
      v103 = *v101;
      if ( (unsigned __int64)*v101 > 1 )
      {
        if ( *(_DWORD *)(v103 + 12) == v98 && a2 == v103 )
        {
          *v101 = a2;
          goto LABEL_85;
        }
      }
      else
      {
        if ( !v103 )
        {
          if ( v102 )
            goto LABEL_210;
          v102 = v101;
          goto LABEL_211;
        }
        v102 = v101;
      }
      if ( ++v101 == v97 )
        goto LABEL_136;
    }
  }
  v102 = nullptr;
  while ( 1 )
  {
LABEL_136:
    if ( v100 == v94 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v104 = *v94;
    if ( *v94 <= 1u )
      break;
    if ( *(_DWORD *)(v104 + 12) == v98 && a2 == v104 )
    {
      *v94 = a2;
      goto LABEL_85;
    }
LABEL_135:
    ++v94;
  }
  if ( v104 )
  {
    v102 = v94;
    goto LABEL_135;
  }
  if ( v102 )
LABEL_210:
    --v152;
  else
    v102 = v94;
LABEL_211:
  *v102 = a2;
  ++v151;
LABEL_85:
  v70 = *(_QWORD *)(a1 + 8);
  v71 = *(_QWORD *)(a1 + 480);
  v146 = 0;
  v147 = v70;
  sub_773AA0((__int64)v148, v71, &v146, (__int64 *)(a1 + 496));
  v72 = v146;
  v73 = *(_QWORD *)(a1 + 480);
  v74 = v147;
  if ( v73 == v146 )
  {
    if ( v146 )
    {
      v77 = *(_DWORD *)(v146 + 8) - 1;
      goto LABEL_91;
    }
  }
  else
  {
    if ( v73 )
    {
      v75 = *(_QWORD *)(a1 + 488);
      v76 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v76 )
        sub_15D7BC0(v75, v73);
    }
    *(_QWORD *)(a1 + 480) = v72;
    if ( v72 )
    {
      v77 = *(_DWORD *)(v72 + 8);
LABEL_91:
      *(_DWORD *)(v72 + 8) = v77;
      if ( !v77 )
        sub_15D7BC0(v74, v72);
    }
  }
  v148[0] = (__int64)&off_1C53CD8;
  if ( v166 )
    sub_186B220((void *)(v166 - 8));
  v78 = v164;
  if ( v164 )
  {
    v79 = v165;
    v76 = (*(_DWORD *)(v164 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v79, v78);
  }
  v80 = v162;
  if ( v162 )
  {
    v81 = v163;
    v76 = (*(_DWORD *)(v162 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v81, v80);
  }
  v82 = v160;
  if ( v160 )
  {
    v83 = v161;
    v76 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v83, v82);
  }
  v158[0] = &qword_1C637E8;
  sub_15841B0(v158);
  v156[0] = &qword_1C637E8;
  sub_15841B0(v156);
  if ( v155 )
    sub_186B220((void *)(v155 - 8));
  sub_15841B0(v148);
LABEL_107:
  v84 = *(_QWORD *)(a1 + 480);
  if ( a2 == v84 )
    goto LABEL_112;
  v85 = *(_QWORD *)(a1 + 40);
  if ( v85 )
  {
    v86 = *(_DWORD *)(v85 - 4);
    if ( v86 )
      *(_BYTE *)(v85 + 16LL * (unsigned int)(v86 - 1) + 8) |= 2u;
  }
  if ( v84 )
LABEL_112:
    ++*(_DWORD *)(v84 + 8);
  v87 = *(_QWORD **)(a1 + 56);
  if ( v87 )
  {
    v88 = *((_DWORD *)v87 - 1);
    if ( v88 != *((_DWORD *)v87 - 2) )
    {
      v89 = v88;
      v90 = v88 + 1;
      v91 = &v87[v89];
      goto LABEL_116;
    }
    v117 = (3 * v88 + 1) >> 1;
    v118 = 8 * v117 + 8;
    if ( 8 * v88 + 8 < v118 && v88 < v117 )
    {
      v119 = (unsigned int *)sub_186B300(v87 - 1, v118);
      v120 = v119[1];
      v87 = v119 + 2;
      *v119 = v117;
      *(_QWORD *)(a1 + 56) = v119 + 2;
      LODWORD(v119) = v120;
      v91 = &v87[v120];
      v90 = (_DWORD)v119 + 1;
      goto LABEL_116;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v148, "Overflow encountered when expanding vector");
LABEL_222:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v148);
    sub_233E40((__int64)v148);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v134 = (_QWORD *)sub_186B270(0x18u);
  *v134 = 2;
  v90 = 1;
  v87 = v134 + 1;
  *(_QWORD *)(a1 + 56) = v87;
  v91 = v87;
LABEL_116:
  *v91 = v84;
  *((_DWORD *)v87 - 1) = v90;
  return 1;
}

