__int64 __fastcall sub_D38BA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int16 v7; // ax
  __int64 v8; // rax
  int v9; // edi
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r13
  int v19; // edx
  __int64 *v20; // r12
  __int64 v21; // rax
  int v22; // esi
  __int64 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 *v26; // r13
  unsigned int v27; // r10d
  __int64 v28; // r9
  char *v29; // r15
  int v30; // edi
  __int64 v31; // rax
  __int64 *v32; // r10
  __int64 *v33; // rax
  __int64 *v34; // r9
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 *v40; // rdx
  int v42; // r13d
  __int64 v43; // r13
  __int64 *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  __int64 v49; // rax
  int v50; // edx
  unsigned __int8 v51; // dl
  __int64 v52; // rax
  int v53; // r12d
  int v54; // r14d
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r12d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r12d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rdx
  unsigned __int8 v67; // dl
  __int64 v68; // rax
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  char **exception; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // r13
  __int64 v81; // rdi
  bool v82; // zf
  int v83; // eax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // r12
  __int64 v91; // rax
  int v92; // edx
  _QWORD *v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  _QWORD *v97; // rcx
  unsigned int v98; // ecx
  __int64 *v99; // rax
  unsigned int v100; // ecx
  _QWORD *v101; // r12
  size_t v102; // r13
  unsigned int v103; // eax
  __int64 *v104; // r14
  int v105; // ecx
  __int64 v106; // rax
  _QWORD *v107; // rdi
  __int64 *v108; // rax
  __int64 *v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rax
  char *v112; // rax
  char *v113; // r11
  __int64 v114; // rdx
  __int64 *v115; // rsi
  __int64 *v116; // rdx
  int v117; // eax
  _QWORD *v118; // rax
  __int64 v119; // rax
  unsigned int v120; // ebx
  unsigned int v121; // ecx
  unsigned int *v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r14
  _QWORD *v125; // rax
  unsigned int v126; // ecx
  void *v127; // rdi
  char *v128; // r8
  char *v129; // r15
  __int64 v130; // rdx
  _QWORD *v131; // rsi
  _QWORD *v132; // rdx
  _QWORD *v133; // rdx
  _QWORD *v134; // rdx
  unsigned int v135; // [rsp+8h] [rbp-2C0h]
  unsigned int v136; // [rsp+8h] [rbp-2C0h]
  unsigned int v137; // [rsp+8h] [rbp-2C0h]
  __int64 *v138; // [rsp+10h] [rbp-2B8h]
  unsigned int v139; // [rsp+10h] [rbp-2B8h]
  __int64 *v140; // [rsp+20h] [rbp-2A8h]
  __int64 v141; // [rsp+20h] [rbp-2A8h]
  unsigned int v142; // [rsp+38h] [rbp-290h]
  __int64 v143; // [rsp+60h] [rbp-268h] BYREF
  __int64 v144; // [rsp+68h] [rbp-260h]
  __int64 v145[12]; // [rsp+70h] [rbp-258h] BYREF
  void *ptr; // [rsp+D0h] [rbp-1F8h]
  unsigned int v147; // [rsp+D8h] [rbp-1F0h]
  int v148; // [rsp+DCh] [rbp-1ECh]
  int v149; // [rsp+E0h] [rbp-1E8h]
  __int64 v150; // [rsp+100h] [rbp-1C8h]
  int v151; // [rsp+108h] [rbp-1C0h]
  __int64 v152; // [rsp+110h] [rbp-1B8h]
  _QWORD v153[19]; // [rsp+118h] [rbp-1B0h] BYREF
  int v154; // [rsp+1B0h] [rbp-118h]
  _QWORD v155[18]; // [rsp+1B8h] [rbp-110h] BYREF
  int v156; // [rsp+248h] [rbp-80h]
  __int64 v157; // [rsp+250h] [rbp-78h]
  __int64 v158; // [rsp+258h] [rbp-70h]
  __int64 v159; // [rsp+260h] [rbp-68h]
  __int64 v160; // [rsp+268h] [rbp-60h]
  __int64 v161; // [rsp+270h] [rbp-58h]
  __int64 v162; // [rsp+278h] [rbp-50h]
  __int64 v163; // [rsp+280h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 144);
  if ( a2 == *(_QWORD *)(v5 + 32) )
  {
    v43 = *(_QWORD *)(*(_QWORD *)v5 + 864LL);
    if ( !*(_BYTE *)(v5 + 40) )
      v43 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
    if ( !v43 )
    {
LABEL_46:
      v44 = *(__int64 **)(a1 + 56);
      if ( !v44 )
      {
        v75 = (_QWORD *)sub_186B270(0x18u);
        v44 = v75 + 1;
        *v75 = 2;
        v47 = 1;
        *(_QWORD *)(a1 + 56) = v44;
        v48 = v44;
        goto LABEL_49;
      }
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 != *((_DWORD *)v44 - 2) )
        goto LABEL_48;
      v58 = (3 * v45 + 1) >> 1;
      v59 = 8 * v58 + 8;
      if ( 8 * v45 + 8 < (unsigned int)v59 && v45 < v58 )
      {
LABEL_63:
        v60 = (unsigned int *)sub_186B300(v44 - 1, v59);
        v61 = v60[1];
        v44 = (__int64 *)(v60 + 2);
        *(_QWORD *)(a1 + 56) = v60 + 2;
        *v60 = v58;
        LODWORD(v60) = v61;
        v48 = &v44[v61];
        v47 = (_DWORD)v60 + 1;
        goto LABEL_49;
      }
      goto LABEL_96;
    }
LABEL_45:
    ++*(_DWORD *)(v43 + 8);
    goto LABEL_46;
  }
  if ( a2 == *(_QWORD *)(v5 + 48) )
  {
    v43 = *(_QWORD *)(v5 + 56);
    if ( v43 )
      goto LABEL_45;
  }
  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v36 = *(_QWORD **)(a1 + 56);
    if ( v36 )
    {
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v63 = (3 * v37 + 1) >> 1;
        v64 = 8 * v63 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v64 || v37 >= v63 )
          goto LABEL_96;
        v65 = (unsigned int *)sub_186B300(v36 - 1, v64);
        v66 = v65[1];
        v36 = v65 + 2;
        *v65 = v63;
        *(_QWORD *)(a1 + 56) = v65 + 2;
        LODWORD(v65) = v66;
        v40 = &v36[v66];
        v39 = (_DWORD)v65 + 1;
      }
      else
      {
        v38 = v37;
        v39 = v37 + 1;
        v40 = &v36[v38];
      }
    }
    else
    {
      v72 = (_QWORD *)sub_186B270(0x18u);
      v36 = v72 + 1;
      *v72 = 2;
      v39 = 1;
      *(_QWORD *)(a1 + 56) = v36;
      v40 = v36;
    }
    *v40 = a2;
    *((_DWORD *)v36 - 1) = v39;
    return 1;
  }
  v7 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v42 = 0;
    goto LABEL_40;
  }
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      if ( v7 != 1 )
      {
LABEL_43:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_72;
    }
    goto LABEL_65;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_65:
    v62 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v43 = v62;
    if ( v62 )
    {
      v44 = *(__int64 **)(a1 + 56);
      ++*(_DWORD *)(v62 + 8);
      if ( !v44 )
      {
        v134 = (_QWORD *)sub_186B270(0x18u);
        *v134 = 2;
        v47 = 1;
        v44 = v134 + 1;
        *(_QWORD *)(a1 + 56) = v44;
        v48 = v44;
        goto LABEL_49;
      }
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 != *((_DWORD *)v44 - 2) )
      {
LABEL_48:
        v46 = v45;
        v47 = v45 + 1;
        v48 = &v44[v46];
LABEL_49:
        *v48 = v43;
        *((_DWORD *)v44 - 1) = v47;
        if ( a2 != v43 )
        {
          v49 = *(_QWORD *)(a1 + 40);
          if ( v49 )
          {
            v50 = *(_DWORD *)(v49 - 4);
            if ( v50 )
              *(_BYTE *)(v49 + 16LL * (unsigned int)(v50 - 1) + 8) |= 2u;
          }
        }
        return 1;
      }
      v58 = (3 * v45 + 1) >> 1;
      v98 = 8 * v58 + 8;
      if ( 8 * v45 + 8 < v98 && v45 < v58 )
      {
        v59 = v98;
        goto LABEL_63;
      }
LABEL_96:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v145, "Overflow encountered when expanding vector");
      goto LABEL_239;
    }
    v7 = *(_WORD *)(a2 + 4);
    v42 = 1;
LABEL_40:
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v51 = 3;
        if ( a3 != 3 )
          v51 = (a3 - 1) & 3;
        v52 = *(_QWORD *)(a1 + 56);
        v53 = v51;
        if ( v52 )
          v54 = *(_DWORD *)(v52 - 4);
        else
          v54 = 0;
        v55 = *(_QWORD **)(a1 + 40);
        if ( v55 )
        {
          v56 = *((unsigned int *)v55 - 1);
          if ( (_DWORD)v56 == *((_DWORD *)v55 - 2) )
          {
            v69 = (unsigned int)(3 * v56 + 1) >> 1;
            v70 = 16 * v69 + 8;
            if ( 16 * (int)v56 + 8 >= (unsigned int)v70 || (unsigned int)v56 >= v69 )
              goto LABEL_96;
LABEL_85:
            v71 = (unsigned int *)sub_186B300(v55 - 1, v70);
            v55 = v71 + 2;
            *(_QWORD *)(a1 + 40) = v71 + 2;
            *v71 = v69;
            v57 = (__int64)&v71[4 * v71[1] + 2];
            goto LABEL_60;
          }
LABEL_59:
          v57 = (__int64)&v55[2 * v56];
LABEL_60:
          *(_QWORD *)v57 = a2;
          *(_DWORD *)(v57 + 12) = v54;
          *(_DWORD *)(v57 + 8) = v42 | (16 * v53);
          ++*((_DWORD *)v55 - 1);
          return 0;
        }
      }
      else
      {
        if ( v7 )
          goto LABEL_43;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_8;
        v67 = 3;
        if ( a3 != 3 )
          v67 = (a3 - 1) & 3;
        v68 = *(_QWORD *)(a1 + 56);
        v53 = v67;
        if ( v68 )
          v54 = *(_DWORD *)(v68 - 4);
        else
          v54 = 0;
        v55 = *(_QWORD **)(a1 + 40);
        if ( v55 )
        {
          v56 = *((unsigned int *)v55 - 1);
          if ( (_DWORD)v56 == *((_DWORD *)v55 - 2) )
          {
            v69 = (unsigned int)(3 * v56 + 1) >> 1;
            v70 = 16 * v69 + 8;
            if ( 16 * (int)v56 + 8 >= (unsigned int)v70 || (unsigned int)v56 >= v69 )
              goto LABEL_96;
            goto LABEL_85;
          }
          goto LABEL_59;
        }
      }
      v118 = (_QWORD *)sub_186B270(0x28u);
      v55 = v118 + 1;
      *v118 = 2;
      *(_QWORD *)(a1 + 40) = v118 + 1;
      v57 = (__int64)(v118 + 1);
      goto LABEL_60;
    }
LABEL_72:
    sub_D32FD0((_QWORD *)a1, a2);
    return 1;
  }
LABEL_8:
  if ( (unsigned __int8)sub_D32BC0((_QWORD *)a1, a2) )
    return 1;
  v8 = *(unsigned int *)(a1 + 104);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__int64 **)(a1 + 96);
  v11 = v8 - 1;
  v8 *= 8;
  v12 = (__int64 *)((char *)v10 + v8);
  v13 = 8LL * (v9 & v11);
  v14 = &v10[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( i = &v10[(unsigned __int64)v13 / 8]; v12 != i; ++i )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && a2 == v16 )
          goto LABEL_121;
      }
      else if ( !v16 )
      {
        goto LABEL_16;
      }
    }
  }
  for ( ; v14 != v10; ++v10 )
  {
    v119 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v119 + 12) == v9 && a2 == v119 )
        goto LABEL_121;
    }
    else if ( !v119 )
    {
      break;
    }
  }
LABEL_16:
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v145, v17, 0);
  v145[0] = (__int64)&off_1C5A530;
  v150 = v18;
  v151 = 0;
  v152 = 0;
  sub_1584DD0(v153, v17, 0);
  v153[18] = 0;
  v154 = 0;
  v153[0] = &off_1C61DB8;
  sub_1584DD0(v155, v17, 0);
  v158 = v17;
  v160 = v17;
  v19 = v148;
  v162 = v17;
  v20 = *(__int64 **)(a1 + 96);
  v155[0] = &off_1C61DE0;
  v21 = *(unsigned int *)(a1 + 104);
  v156 = 0;
  v22 = v149;
  v23 = &v20[v21];
  v157 = 0;
  v24 = v147;
  v159 = 0;
  v161 = 0;
  v163 = 0;
  if ( v20 != v23 )
  {
    while ( (unsigned __int64)*v20 <= 1 )
    {
      if ( v23 == ++v20 )
        goto LABEL_142;
    }
    if ( v23 != v20 )
    {
      v25 = *v20;
      while ( 1 )
      {
        v135 = 2 * v24;
        if ( 3 * (int)v24 < (unsigned int)(4 * (v22 + v19)) )
        {
          v140 = v23;
          v26 = (__int64 *)sub_186B270(8LL * v135);
          v28 = 8LL * v135;
          v24 = v135;
          v23 = v140;
          if ( v135 )
          {
            memset(v26, 0, 8LL * v135);
            v23 = v140;
            v28 = 8LL * v135;
            v24 = v135;
          }
          v29 = (char *)v26 + v28;
          v112 = (char *)ptr;
          v27 = v135 - 1;
          v113 = (char *)ptr + 8 * v147;
          if ( ptr != v113 )
          {
            do
            {
              if ( *(_QWORD *)v112 > 1u )
              {
                v114 = 8LL * (*(_DWORD *)(*(_QWORD *)v112 + 12LL) & v27);
                v115 = &v26[(unsigned __int64)v114 / 8];
                if ( v28 == v114 )
                {
LABEL_171:
                  if ( v26 == v115 )
                  {
LABEL_193:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v116 = v26;
                  while ( *v116 )
                  {
                    if ( v115 == ++v116 )
                      goto LABEL_193;
                  }
                }
                else
                {
                  v116 = &v26[(unsigned __int64)v114 / 8];
                  while ( *v116 )
                  {
                    if ( v29 == (char *)++v116 )
                      goto LABEL_171;
                  }
                }
                *v116 = *(_QWORD *)v112;
              }
              v112 += 8;
            }
            while ( v113 != v112 );
            v113 = (char *)ptr;
          }
          if ( v113 )
          {
            v142 = v24;
            v141 = v28;
            v138 = v23;
            sub_186B220(v113);
            v24 = v142;
            v28 = v141;
            v27 = v135 - 1;
            v23 = v138;
          }
          ptr = v26;
          v22 = 0;
          v149 = 0;
          v147 = v135;
        }
        else
        {
          v26 = (__int64 *)ptr;
          v27 = v24 - 1;
          v28 = 8LL * (unsigned int)v24;
          v29 = (char *)ptr + v28;
        }
        v30 = *(_DWORD *)(v25 + 12);
        v31 = 8LL * (v30 & v27);
        v32 = &v26[(unsigned __int64)v31 / 8];
        if ( v31 != v28 )
        {
          v33 = &v26[(unsigned __int64)v31 / 8];
          v34 = nullptr;
          while ( 1 )
          {
            v35 = *v33;
            if ( (unsigned __int64)*v33 > 1 )
            {
              if ( *(_DWORD *)(v35 + 12) == v30 && v35 == v25 )
              {
                *v33 = v25;
                v19 = v148;
                goto LABEL_137;
              }
            }
            else
            {
              if ( !v35 )
              {
                if ( v34 )
                  goto LABEL_181;
                v34 = v33;
                goto LABEL_182;
              }
              v34 = v33;
            }
            if ( ++v33 == (__int64 *)v29 )
              goto LABEL_90;
          }
        }
        v34 = nullptr;
        while ( 1 )
        {
LABEL_90:
          if ( v32 == v26 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v73 = *v26;
          if ( (unsigned __int64)*v26 <= 1 )
            break;
          if ( *(_DWORD *)(v73 + 12) == v30 && v73 == v25 )
          {
            *v26 = v25;
            v19 = v148;
            goto LABEL_137;
          }
LABEL_89:
          ++v26;
        }
        if ( v73 )
          break;
        if ( v34 )
LABEL_181:
          v149 = --v22;
        else
          v34 = v26;
LABEL_182:
        v117 = v148;
        *v34 = v25;
        v19 = v117 + 1;
        v148 = v117 + 1;
LABEL_137:
        v99 = v20 + 1;
        if ( v23 != v20 + 1 )
        {
          while ( 1 )
          {
            v25 = *v99;
            v20 = v99;
            if ( (unsigned __int64)*v99 > 1 )
              break;
            if ( v23 == ++v99 )
              goto LABEL_142;
          }
          if ( v23 != v99 )
            continue;
        }
        goto LABEL_142;
      }
      v34 = v26;
      goto LABEL_89;
    }
  }
LABEL_142:
  v100 = 2 * v24;
  if ( 3 * (int)v24 < (unsigned int)(4 * (v19 + v22)) )
  {
    v124 = v100;
    v136 = 2 * v24;
    v102 = 8LL * v100;
    v125 = (_QWORD *)sub_186B270(v102);
    v126 = v136;
    v101 = v125;
    if ( v136 )
    {
      memset(v125, 0, 8 * v124);
      v126 = v136;
    }
    v127 = ptr;
    v103 = v126 - 1;
    v104 = &v101[v102 / 8];
    v128 = (char *)ptr + 8 * v147;
    v129 = (char *)ptr;
    if ( ptr != v128 )
    {
      do
      {
        if ( *(_QWORD *)v129 > 1u )
        {
          v130 = 8LL * (*(_DWORD *)(*(_QWORD *)v129 + 12LL) & v103);
          v131 = &v101[(unsigned __int64)v130 / 8];
          if ( v102 == v130 )
          {
LABEL_215:
            if ( v101 == v131 )
            {
LABEL_230:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v132 = v101;
            while ( *v132 )
            {
              if ( v131 == ++v132 )
                goto LABEL_230;
            }
          }
          else
          {
            v132 = &v101[(unsigned __int64)v130 / 8];
            while ( *v132 )
            {
              if ( v104 == ++v132 )
                goto LABEL_215;
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
      v139 = v126;
      v137 = v126 - 1;
      sub_186B220(v127);
      v126 = v139;
      v103 = v137;
    }
    ptr = v101;
    v147 = v126;
    v149 = 0;
  }
  else
  {
    v101 = ptr;
    v102 = 8 * v24;
    v103 = v24 - 1;
    v104 = (__int64 *)((char *)ptr + 8 * v24);
  }
  v105 = *(_DWORD *)(a2 + 12);
  v106 = 8LL * (v105 & v103);
  v107 = &v101[(unsigned __int64)v106 / 8];
  if ( v106 != v102 )
  {
    v108 = &v101[(unsigned __int64)v106 / 8];
    v109 = nullptr;
    while ( 1 )
    {
      v110 = *v108;
      if ( (unsigned __int64)*v108 > 1 )
      {
        if ( *(_DWORD *)(v110 + 12) == v105 && a2 == v110 )
        {
          *v108 = a2;
          goto LABEL_99;
        }
      }
      else
      {
        if ( !v110 )
        {
          if ( v109 )
            --v149;
          else
            v109 = v108;
          *v109 = a2;
          ++v148;
          goto LABEL_99;
        }
        v109 = v108;
      }
      if ( ++v108 == v104 )
        goto LABEL_155;
    }
  }
  v109 = nullptr;
  while ( 1 )
  {
LABEL_155:
    if ( v107 == v101 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v111 = *v101;
    if ( *v101 <= 1u )
      break;
    if ( *(_DWORD *)(v111 + 12) == v105 && a2 == v111 )
    {
      *v101 = a2;
      goto LABEL_99;
    }
LABEL_154:
    ++v101;
  }
  if ( v111 )
  {
    v109 = v101;
    goto LABEL_154;
  }
  if ( v109 )
  {
    --v149;
    v101 = v109;
  }
  *v101 = a2;
  ++v148;
LABEL_99:
  v76 = *(_QWORD *)(a1 + 8);
  v77 = *(_QWORD *)(a1 + 480);
  v143 = 0;
  v144 = v76;
  sub_D345E0((__int64)v145, v77, (__int64)&v143, a1 + 496);
  v78 = v143;
  v79 = *(_QWORD *)(a1 + 480);
  v80 = v144;
  if ( v79 == v143 )
  {
    if ( v143 )
    {
      v83 = *(_DWORD *)(v143 + 8) - 1;
      goto LABEL_105;
    }
  }
  else
  {
    if ( v79 )
    {
      v81 = *(_QWORD *)(a1 + 488);
      v82 = (*(_DWORD *)(v79 + 8))-- == 1;
      if ( v82 )
        sub_15D7BC0(v81, v79);
    }
    *(_QWORD *)(a1 + 480) = v78;
    if ( v78 )
    {
      v83 = *(_DWORD *)(v78 + 8);
LABEL_105:
      *(_DWORD *)(v78 + 8) = v83;
      if ( !v83 )
        sub_15D7BC0(v80, v78);
    }
  }
  v145[0] = (__int64)&off_1C5A530;
  if ( v163 )
    sub_186B220((void *)(v163 - 8));
  v84 = v161;
  if ( v161 )
  {
    v85 = v162;
    v82 = (*(_DWORD *)(v161 + 8))-- == 1;
    if ( v82 )
      sub_15D7BC0(v85, v84);
  }
  v86 = v159;
  if ( v159 )
  {
    v87 = v160;
    v82 = (*(_DWORD *)(v159 + 8))-- == 1;
    if ( v82 )
      sub_15D7BC0(v87, v86);
  }
  v88 = v157;
  if ( v157 )
  {
    v89 = v158;
    v82 = (*(_DWORD *)(v157 + 8))-- == 1;
    if ( v82 )
      sub_15D7BC0(v89, v88);
  }
  v155[0] = &qword_1C637E8;
  sub_15841B0(v155);
  v153[0] = &qword_1C637E8;
  sub_15841B0(v153);
  if ( v152 )
    sub_186B220((void *)(v152 - 8));
  sub_15841B0(v145);
LABEL_121:
  v90 = *(_QWORD *)(a1 + 480);
  if ( a2 == v90 )
    goto LABEL_126;
  v91 = *(_QWORD *)(a1 + 40);
  if ( v91 )
  {
    v92 = *(_DWORD *)(v91 - 4);
    if ( v92 )
      *(_BYTE *)(v91 + 16LL * (unsigned int)(v92 - 1) + 8) |= 2u;
  }
  if ( v90 )
LABEL_126:
    ++*(_DWORD *)(v90 + 8);
  v93 = *(_QWORD **)(a1 + 56);
  if ( v93 )
  {
    v94 = *((_DWORD *)v93 - 1);
    if ( v94 != *((_DWORD *)v93 - 2) )
    {
      v95 = v94;
      v96 = v94 + 1;
      v97 = &v93[v95];
      goto LABEL_130;
    }
    v120 = (3 * v94 + 1) >> 1;
    v121 = 8 * v120 + 8;
    if ( 8 * v94 + 8 < v121 && v94 < v120 )
    {
      v122 = (unsigned int *)sub_186B300(v93 - 1, v121);
      v123 = v122[1];
      v93 = v122 + 2;
      *v122 = v120;
      *(_QWORD *)(a1 + 56) = v122 + 2;
      LODWORD(v122) = v123;
      v97 = &v93[v123];
      v96 = (_DWORD)v122 + 1;
      goto LABEL_130;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v145, "Overflow encountered when expanding vector");
LABEL_239:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v145);
    sub_233E40((__int64)v145);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v133 = (_QWORD *)sub_186B270(0x18u);
  *v133 = 2;
  v96 = 1;
  v93 = v133 + 1;
  *(_QWORD *)(a1 + 56) = v93;
  v97 = v93;
LABEL_130:
  *v97 = v90;
  *((_DWORD *)v93 - 1) = v96;
  return 1;
}

