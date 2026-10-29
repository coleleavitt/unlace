__int64 __fastcall sub_740AE0(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r13
  int v18; // edx
  __int64 *v19; // r12
  __int64 v20; // rax
  int v21; // esi
  __int64 *v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // r10d
  _QWORD *v25; // r13
  unsigned int v26; // r8d
  __int64 v27; // r9
  char *v28; // r15
  int v29; // edi
  __int64 v30; // r8
  _QWORD *v31; // r10
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // rdx
  int v35; // r13d
  _QWORD *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  unsigned __int8 v42; // dl
  __int64 v43; // rax
  int v44; // r12d
  int v45; // r14d
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r12d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  unsigned __int8 v55; // dl
  __int64 v56; // rax
  unsigned int v57; // r15d
  size_t v58; // rsi
  char **exception; // rbx
  unsigned int *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rsi
  __int64 v66; // r13
  __int64 v67; // rdi
  bool v68; // zf
  int v69; // eax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // r12
  __int64 v77; // rax
  int v78; // edx
  _QWORD *v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  unsigned int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 *v88; // rcx
  __int64 v89; // rax
  int v90; // edx
  __int64 *v91; // rax
  unsigned int v92; // ecx
  _QWORD *v93; // r12
  int v94; // eax
  size_t v95; // r13
  __int64 *v96; // r14
  int v97; // ecx
  __int64 v98; // rax
  _QWORD *v99; // rdi
  __int64 *v100; // rax
  __int64 *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // r15
  _QWORD *v106; // rax
  unsigned int v107; // r10d
  char *v108; // rax
  char *v109; // r11
  __int64 v110; // rdx
  _QWORD *v111; // rsi
  _QWORD *v112; // rdx
  int v113; // eax
  _QWORD *v114; // rax
  __int64 v115; // rax
  unsigned int v116; // ebx
  unsigned int v117; // ecx
  unsigned int *v118; // rax
  __int64 v119; // rcx
  unsigned int v120; // r12d
  unsigned int v121; // ecx
  unsigned int *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r14
  _QWORD *v125; // rax
  int v126; // ecx
  void *v127; // rdi
  char *v128; // r8
  char *v129; // r15
  __int64 v130; // rdx
  _QWORD *v131; // rsi
  _QWORD *v132; // rdx
  _QWORD *v133; // rdx
  _QWORD *v134; // rdx
  unsigned int v135; // [rsp+8h] [rbp-2B0h]
  int v136; // [rsp+8h] [rbp-2B0h]
  int v137; // [rsp+8h] [rbp-2B0h]
  size_t v138; // [rsp+10h] [rbp-2A8h]
  __int64 *v139; // [rsp+10h] [rbp-2A8h]
  int v140; // [rsp+10h] [rbp-2A8h]
  unsigned int v141; // [rsp+18h] [rbp-2A0h]
  __int64 *v142; // [rsp+20h] [rbp-298h]
  __int64 v143; // [rsp+20h] [rbp-298h]
  unsigned int v144; // [rsp+38h] [rbp-280h]
  __int64 v145; // [rsp+50h] [rbp-268h] BYREF
  __int64 v146; // [rsp+58h] [rbp-260h]
  __int64 v147[12]; // [rsp+60h] [rbp-258h] BYREF
  void *ptr; // [rsp+C0h] [rbp-1F8h]
  unsigned int v149; // [rsp+C8h] [rbp-1F0h]
  int v150; // [rsp+CCh] [rbp-1ECh]
  int v151; // [rsp+D0h] [rbp-1E8h]
  __int64 v152; // [rsp+F0h] [rbp-1C8h]
  int v153; // [rsp+F8h] [rbp-1C0h]
  __int64 v154; // [rsp+100h] [rbp-1B8h]
  _QWORD v155[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v156; // [rsp+1A0h] [rbp-118h]
  _QWORD v157[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v158; // [rsp+238h] [rbp-80h]
  __int64 v159; // [rsp+240h] [rbp-78h]
  __int64 v160; // [rsp+248h] [rbp-70h]
  __int64 v161; // [rsp+250h] [rbp-68h]
  __int64 v162; // [rsp+258h] [rbp-60h]
  __int64 v163; // [rsp+260h] [rbp-58h]
  __int64 v164; // [rsp+268h] [rbp-50h]
  __int64 v165; // [rsp+270h] [rbp-48h]

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v37 = *(_QWORD **)(a1 + 56);
    if ( v37 )
    {
      v38 = *((_DWORD *)v37 - 1);
      if ( v38 == *((_DWORD *)v37 - 2) )
      {
        v49 = (3 * v38 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v50 || v38 >= v49 )
          goto LABEL_67;
        v51 = (unsigned int *)sub_186B300(v37 - 1, v50);
        v52 = v51[1];
        v37 = v51 + 2;
        *v51 = v49;
        *(_QWORD *)(a1 + 56) = v51 + 2;
        LODWORD(v51) = v52;
        v41 = &v37[v52];
        v40 = (_DWORD)v51 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v37[v39];
      }
    }
    else
    {
      v104 = (_QWORD *)sub_186B270(0x18u);
      v37 = v104 + 1;
      *v104 = 2;
      v40 = 1;
      *(_QWORD *)(a1 + 56) = v37;
      v41 = v37;
    }
    *v41 = a2;
    *((_DWORD *)v37 - 1) = v40;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v35 = 0;
    goto LABEL_31;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_34:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_52;
    }
    goto LABEL_56;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_56:
    v53 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v54 = v53;
    if ( v53 )
    {
      v84 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v53 + 8);
      if ( v84 )
      {
        v85 = *((_DWORD *)v84 - 1);
        if ( v85 == *((_DWORD *)v84 - 2) )
        {
          v120 = (3 * v85 + 1) >> 1;
          v121 = 8 * v120 + 8;
          if ( 8 * v85 + 8 >= v121 || v85 >= v120 )
            goto LABEL_67;
          v122 = (unsigned int *)sub_186B300(v84 - 1, v121);
          v123 = v122[1];
          v84 = v122 + 2;
          *v122 = v120;
          *(_QWORD *)(a1 + 56) = v122 + 2;
          LODWORD(v122) = v123;
          v88 = &v84[v123];
          v87 = (_DWORD)v122 + 1;
        }
        else
        {
          v86 = v85;
          v87 = v85 + 1;
          v88 = &v84[v86];
        }
      }
      else
      {
        v133 = (_QWORD *)sub_186B270(0x18u);
        *v133 = 2;
        v87 = 1;
        v84 = v133 + 1;
        *(_QWORD *)(a1 + 56) = v84;
        v88 = v84;
      }
      *v88 = v54;
      *((_DWORD *)v84 - 1) = v87;
      if ( a2 != v54 )
      {
        v89 = *(_QWORD *)(a1 + 40);
        if ( v89 )
        {
          v90 = *(_DWORD *)(v89 - 4);
          if ( v90 )
            *(_BYTE *)(v89 + 16LL * (unsigned int)(v90 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v35 = 1;
LABEL_31:
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        v42 = 3;
        if ( a3 != 3 )
          v42 = (a3 - 1) & 3;
        v43 = *(_QWORD *)(a1 + 56);
        v44 = v42;
        if ( v43 )
          v45 = *(_DWORD *)(v43 - 4);
        else
          v45 = 0;
        v46 = *(_QWORD **)(a1 + 40);
        if ( v46 )
        {
          v47 = *((unsigned int *)v46 - 1);
          if ( (_DWORD)v47 == *((_DWORD *)v46 - 2) )
          {
            v57 = (unsigned int)(3 * v47 + 1) >> 1;
            v58 = 16 * v57 + 8;
            if ( 16 * (int)v47 + 8 >= (unsigned int)v58 || (unsigned int)v47 >= v57 )
              goto LABEL_67;
LABEL_70:
            v60 = (unsigned int *)sub_186B300(v46 - 1, v58);
            v46 = v60 + 2;
            *(_QWORD *)(a1 + 40) = v60 + 2;
            *v60 = v57;
            v48 = (__int64)&v60[4 * v60[1] + 2];
            goto LABEL_49;
          }
LABEL_48:
          v48 = (__int64)&v46[2 * v47];
LABEL_49:
          *(_QWORD *)v48 = a2;
          *(_DWORD *)(v48 + 12) = v45;
          *(_DWORD *)(v48 + 8) = v35 | (16 * v44);
          ++*((_DWORD *)v46 - 1);
          return 0;
        }
      }
      else
      {
        if ( v5 )
          goto LABEL_34;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
        v55 = 3;
        if ( a3 != 3 )
          v55 = (a3 - 1) & 3;
        v56 = *(_QWORD *)(a1 + 56);
        v44 = v55;
        if ( v56 )
          v45 = *(_DWORD *)(v56 - 4);
        else
          v45 = 0;
        v46 = *(_QWORD **)(a1 + 40);
        if ( v46 )
        {
          v47 = *((unsigned int *)v46 - 1);
          if ( (_DWORD)v47 == *((_DWORD *)v46 - 2) )
          {
            v57 = (unsigned int)(3 * v47 + 1) >> 1;
            v58 = 16 * v57 + 8;
            if ( 16 * (int)v47 + 8 >= (unsigned int)v58 || (unsigned int)v47 >= v57 )
            {
LABEL_67:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_737700(v147, "Overflow encountered when expanding vector");
              goto LABEL_224;
            }
            goto LABEL_70;
          }
          goto LABEL_48;
        }
      }
      v114 = (_QWORD *)sub_186B270(0x28u);
      v46 = v114 + 1;
      *v114 = 2;
      *(_QWORD *)(a1 + 40) = v114 + 1;
      v48 = (__int64)(v114 + 1);
      goto LABEL_49;
    }
LABEL_52:
    sub_73AA70((_QWORD *)a1, a2);
    return 1;
  }
LABEL_6:
  if ( (unsigned __int8)sub_73A030((_QWORD *)a1, a2) )
    return 1;
  v7 = *(unsigned int *)(a1 + 104);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *(__int64 **)(a1 + 96);
  v10 = v7 - 1;
  v7 *= 8;
  v11 = (__int64 *)((char *)v9 + v7);
  v12 = 8LL * (v8 & v10);
  v13 = &v9[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && a2 == v15 )
          goto LABEL_101;
      }
      else if ( !v15 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v13 != v9; ++v9 )
  {
    v115 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v115 + 12) == v8 && a2 == v115 )
        goto LABEL_101;
    }
    else if ( !v115 )
    {
      break;
    }
  }
LABEL_14:
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v147, v16, 0);
  v147[0] = (__int64)&off_1C53EF0;
  v152 = v17;
  v153 = 0;
  v154 = 0;
  sub_1584DD0(v155, v16, 0);
  v155[18] = 0;
  v156 = 0;
  v155[0] = &off_1C61DB8;
  sub_1584DD0(v157, v16, 0);
  v160 = v16;
  v162 = v16;
  v18 = v150;
  v164 = v16;
  v19 = *(__int64 **)(a1 + 96);
  v157[0] = &off_1C61DE0;
  v20 = *(unsigned int *)(a1 + 104);
  v158 = 0;
  v21 = v151;
  v159 = 0;
  v22 = &v19[v20];
  v161 = 0;
  v163 = 0;
  v165 = 0;
  v135 = v149;
  if ( v19 != v22 )
  {
    while ( (unsigned __int64)*v19 <= 1 )
    {
      if ( v22 == ++v19 )
        goto LABEL_124;
    }
    if ( v22 != v19 )
    {
      v23 = *v19;
      while ( 1 )
      {
        v24 = 2 * v135;
        if ( 3 * v135 < 4 * (v21 + v18) )
        {
          v105 = v24;
          v142 = v22;
          v135 *= 2;
          v138 = 8LL * v24;
          v106 = (_QWORD *)sub_186B270(v138);
          v107 = v135;
          v27 = v138;
          v25 = v106;
          v22 = v142;
          if ( v135 )
          {
            memset(v106, 0, 8 * v105);
            v22 = v142;
            v27 = v138;
            v107 = v135;
          }
          v26 = v107 - 1;
          v28 = (char *)v25 + v27;
          v108 = (char *)ptr;
          v109 = (char *)ptr + 8 * v149;
          if ( ptr != v109 )
          {
            do
            {
              if ( *(_QWORD *)v108 > 1u )
              {
                v110 = 8LL * (*(_DWORD *)(*(_QWORD *)v108 + 12LL) & v26);
                v111 = &v25[(unsigned __int64)v110 / 8];
                if ( v27 == v110 )
                {
LABEL_154:
                  if ( v25 == v111 )
                  {
LABEL_176:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v112 = v25;
                  while ( *v112 )
                  {
                    if ( v111 == ++v112 )
                      goto LABEL_176;
                  }
                }
                else
                {
                  v112 = &v25[(unsigned __int64)v110 / 8];
                  while ( *v112 )
                  {
                    if ( v28 == (char *)++v112 )
                      goto LABEL_154;
                  }
                }
                *v112 = *(_QWORD *)v108;
              }
              v108 += 8;
            }
            while ( v109 != v108 );
            v109 = (char *)ptr;
          }
          if ( v109 )
          {
            v144 = v107;
            v143 = v27;
            v141 = v107 - 1;
            v139 = v22;
            sub_186B220(v109);
            v107 = v144;
            v27 = v143;
            v26 = v141;
            v22 = v139;
          }
          ptr = v25;
          v21 = 0;
          v149 = v107;
          v151 = 0;
        }
        else
        {
          v25 = ptr;
          v26 = v135 - 1;
          v27 = 8LL * v135;
          v28 = (char *)ptr + v27;
        }
        v29 = *(_DWORD *)(v23 + 12);
        v30 = 8LL * (v29 & v26);
        v31 = &v25[(unsigned __int64)v30 / 8];
        if ( v30 != v27 )
        {
          v32 = &v25[(unsigned __int64)v30 / 8];
          v33 = nullptr;
          while ( 1 )
          {
            v34 = *v32;
            if ( *v32 > 1u )
            {
              if ( *(_DWORD *)(v34 + 12) == v29 && v34 == v23 )
              {
                *v32 = v23;
                v18 = v150;
                goto LABEL_119;
              }
            }
            else
            {
              if ( !v34 )
              {
                if ( v33 )
                  goto LABEL_164;
                v33 = v32;
                goto LABEL_165;
              }
              v33 = v32;
            }
            if ( ++v32 == (_QWORD *)v28 )
              goto LABEL_74;
          }
        }
        v33 = nullptr;
        while ( 1 )
        {
LABEL_74:
          if ( v31 == v25 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v61 = *v25;
          if ( *v25 <= 1u )
            break;
          if ( *(_DWORD *)(v61 + 12) == v29 && v61 == v23 )
          {
            *v25 = v23;
            v18 = v150;
            goto LABEL_119;
          }
LABEL_73:
          ++v25;
        }
        if ( v61 )
          break;
        if ( v33 )
LABEL_164:
          v151 = --v21;
        else
          v33 = v25;
LABEL_165:
        v113 = v150;
        *v33 = v23;
        v18 = v113 + 1;
        v150 = v113 + 1;
LABEL_119:
        v91 = v19 + 1;
        if ( v22 != v19 + 1 )
        {
          while ( 1 )
          {
            v23 = *v91;
            v19 = v91;
            if ( (unsigned __int64)*v91 > 1 )
              break;
            if ( v22 == ++v91 )
              goto LABEL_124;
          }
          if ( v22 != v91 )
            continue;
        }
        goto LABEL_124;
      }
      v33 = v25;
      goto LABEL_73;
    }
  }
LABEL_124:
  v92 = 2 * v135;
  if ( 3 * v135 < 4 * (v18 + v21) )
  {
    v124 = v92;
    v136 = 2 * v135;
    v95 = 8LL * v92;
    v125 = (_QWORD *)sub_186B270(v95);
    v126 = v136;
    v93 = v125;
    if ( v136 )
    {
      memset(v125, 0, 8 * v124);
      v126 = v136;
    }
    v127 = ptr;
    v94 = v126 - 1;
    v96 = &v93[v95 / 8];
    v128 = (char *)ptr + 8 * v149;
    v129 = (char *)ptr;
    if ( ptr != v128 )
    {
      do
      {
        if ( *(_QWORD *)v129 > 1u )
        {
          v130 = 8LL * (*(_DWORD *)(*(_QWORD *)v129 + 12LL) & (unsigned int)v94);
          v131 = &v93[(unsigned __int64)v130 / 8];
          if ( v95 == v130 )
          {
LABEL_201:
            if ( v93 == v131 )
            {
LABEL_216:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v132 = v93;
            while ( *v132 )
            {
              if ( v131 == ++v132 )
                goto LABEL_216;
            }
          }
          else
          {
            v132 = &v93[(unsigned __int64)v130 / 8];
            while ( *v132 )
            {
              if ( v96 == ++v132 )
                goto LABEL_201;
            }
          }
          *v132 = *(_QWORD *)v129;
        }
        v129 += 8;
      }
      while ( v128 != v129 );
      v127 = ptr;
    }
    if ( v127 )
    {
      v140 = v126;
      v137 = v126 - 1;
      sub_186B220(v127);
      v126 = v140;
      v94 = v137;
    }
    ptr = v93;
    v149 = v126;
    v151 = 0;
  }
  else
  {
    v93 = ptr;
    v94 = v135 - 1;
    v95 = 8LL * v135;
    v96 = (__int64 *)((char *)ptr + v95);
  }
  v97 = *(_DWORD *)(a2 + 12);
  v98 = 8LL * (v97 & (unsigned int)v94);
  v99 = &v93[(unsigned __int64)v98 / 8];
  if ( v98 != v95 )
  {
    v100 = &v93[(unsigned __int64)v98 / 8];
    v101 = nullptr;
    while ( 1 )
    {
      v102 = *v100;
      if ( (unsigned __int64)*v100 > 1 )
      {
        if ( *(_DWORD *)(v102 + 12) == v97 && a2 == v102 )
        {
          *v100 = a2;
          goto LABEL_79;
        }
      }
      else
      {
        if ( !v102 )
        {
          if ( v101 )
            goto LABEL_211;
          v101 = v100;
          goto LABEL_212;
        }
        v101 = v100;
      }
      if ( ++v100 == v96 )
        goto LABEL_137;
    }
  }
  v101 = nullptr;
  while ( 1 )
  {
LABEL_137:
    if ( v99 == v93 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v103 = *v93;
    if ( *v93 <= 1u )
      break;
    if ( *(_DWORD *)(v103 + 12) == v97 && a2 == v103 )
    {
      *v93 = a2;
      goto LABEL_79;
    }
LABEL_136:
    ++v93;
  }
  if ( v103 )
  {
    v101 = v93;
    goto LABEL_136;
  }
  if ( v101 )
LABEL_211:
    --v151;
  else
    v101 = v93;
LABEL_212:
  *v101 = a2;
  ++v150;
LABEL_79:
  v62 = *(_QWORD *)(a1 + 8);
  v63 = *(_QWORD *)(a1 + 480);
  v145 = 0;
  v146 = v62;
  sub_73C020((__int64)v147, v63, &v145, (__int64 *)(a1 + 496));
  v64 = v145;
  v65 = *(_QWORD *)(a1 + 480);
  v66 = v146;
  if ( v65 == v145 )
  {
    if ( v145 )
    {
      v69 = *(_DWORD *)(v145 + 8) - 1;
      goto LABEL_85;
    }
  }
  else
  {
    if ( v65 )
    {
      v67 = *(_QWORD *)(a1 + 488);
      v68 = (*(_DWORD *)(v65 + 8))-- == 1;
      if ( v68 )
        sub_15D7BC0(v67, v65);
    }
    *(_QWORD *)(a1 + 480) = v64;
    if ( v64 )
    {
      v69 = *(_DWORD *)(v64 + 8);
LABEL_85:
      *(_DWORD *)(v64 + 8) = v69;
      if ( !v69 )
        sub_15D7BC0(v66, v64);
    }
  }
  v147[0] = (__int64)&off_1C53EF0;
  if ( v165 )
    sub_186B220((void *)(v165 - 8));
  v70 = v163;
  if ( v163 )
  {
    v71 = v164;
    v68 = (*(_DWORD *)(v163 + 8))-- == 1;
    if ( v68 )
      sub_15D7BC0(v71, v70);
  }
  v72 = v161;
  if ( v161 )
  {
    v73 = v162;
    v68 = (*(_DWORD *)(v161 + 8))-- == 1;
    if ( v68 )
      sub_15D7BC0(v73, v72);
  }
  v74 = v159;
  if ( v159 )
  {
    v75 = v160;
    v68 = (*(_DWORD *)(v159 + 8))-- == 1;
    if ( v68 )
      sub_15D7BC0(v75, v74);
  }
  v157[0] = &qword_1C637E8;
  sub_15841B0(v157);
  v155[0] = &qword_1C637E8;
  sub_15841B0(v155);
  if ( v154 )
    sub_186B220((void *)(v154 - 8));
  sub_15841B0(v147);
LABEL_101:
  v76 = *(_QWORD *)(a1 + 480);
  if ( a2 == v76 )
    goto LABEL_106;
  v77 = *(_QWORD *)(a1 + 40);
  if ( v77 )
  {
    v78 = *(_DWORD *)(v77 - 4);
    if ( v78 )
      *(_BYTE *)(v77 + 16LL * (unsigned int)(v78 - 1) + 8) |= 2u;
  }
  if ( v76 )
LABEL_106:
    ++*(_DWORD *)(v76 + 8);
  v79 = *(_QWORD **)(a1 + 56);
  if ( v79 )
  {
    v80 = *((_DWORD *)v79 - 1);
    if ( v80 != *((_DWORD *)v79 - 2) )
    {
      v81 = v80;
      v82 = v80 + 1;
      v83 = &v79[v81];
      goto LABEL_110;
    }
    v116 = (3 * v80 + 1) >> 1;
    v117 = 8 * v116 + 8;
    if ( 8 * v80 + 8 < v117 && v80 < v116 )
    {
      v118 = (unsigned int *)sub_186B300(v79 - 1, v117);
      v119 = v118[1];
      v79 = v118 + 2;
      *v118 = v116;
      *(_QWORD *)(a1 + 56) = v118 + 2;
      LODWORD(v118) = v119;
      v83 = &v79[v119];
      v82 = (_DWORD)v118 + 1;
      goto LABEL_110;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_737700(v147, "Overflow encountered when expanding vector");
LABEL_224:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v147);
    sub_233E40((__int64)v147);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v134 = (_QWORD *)sub_186B270(0x18u);
  *v134 = 2;
  v82 = 1;
  v79 = v134 + 1;
  *(_QWORD *)(a1 + 56) = v79;
  v83 = v79;
LABEL_110:
  *v83 = v76;
  *((_DWORD *)v79 - 1) = v82;
  return 1;
}

