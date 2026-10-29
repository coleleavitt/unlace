__int64 __fastcall sub_93FA10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  unsigned int v9; // r15d
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // r15
  int v15; // r12d
  unsigned int v16; // r13d
  __int64 v17; // r14
  unsigned int i; // ebx
  int v19; // eax
  unsigned int v20; // r12d
  unsigned int v21; // r10d
  __int64 v22; // r13
  unsigned int *v23; // r11
  unsigned int v24; // edx
  unsigned int v25; // r9d
  __int64 v26; // rsi
  unsigned int v27; // ecx
  unsigned int v28; // edi
  unsigned int v29; // ecx
  int v30; // ecx
  int v31; // r14d
  unsigned int v32; // r9d
  unsigned int v33; // eax
  unsigned __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r13d
  unsigned int v37; // ecx
  _DWORD *v38; // r12
  unsigned __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // edi
  _QWORD *v44; // rsi
  __int64 v45; // rdi
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  __int64 v50; // rdi
  _DWORD *v51; // r8
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // r10
  unsigned int v55; // r13d
  signed __int64 v58; // rax
  unsigned __int64 v59; // rdi
  _BYTE *v60; // rax
  __int64 v61; // rsi
  _DWORD *v62; // rsi
  unsigned __int64 v63; // rdi
  unsigned int *v64; // r8
  __int64 v65; // rcx
  _QWORD *v66; // rsi
  _QWORD *v67; // r9
  _QWORD *v68; // rax
  unsigned int v70; // r9d
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // r15
  signed __int64 v75; // r10
  unsigned __int64 v76; // r10
  __int64 v77; // rsi
  unsigned int v78; // edx
  _DWORD *v79; // rdx
  unsigned __int64 v80; // r11
  _QWORD *v81; // rdi
  _QWORD *v82; // r8
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // r12
  _QWORD *v85; // r14
  _QWORD *v86; // r10
  _QWORD *v87; // rdi
  signed __int64 v90; // rax
  __int64 v91; // r9
  __int64 v92; // rbp
  __int64 v95; // rsi
  unsigned __int64 v96; // rdi
  unsigned __int64 v97; // rcx
  _QWORD *v98; // rdi
  char *v99; // rdi
  _QWORD *v100; // r8
  __int64 v101; // rax
  __int64 *v104; // r8
  _QWORD *v105; // rax
  __int64 v106; // r12
  __int64 v107; // rdx
  _DWORD *v110; // rcx
  _QWORD *v111; // rdi
  __int64 v112; // r11
  __int64 v113; // rsi
  __int64 v116; // r11
  __int64 v117; // rdi
  _QWORD *v120; // rcx
  __int64 v121; // rsi
  unsigned int v124; // ecx
  __int64 v125; // rsi
  __int64 v126; // r11
  char *v129; // rsi
  __int64 v130; // r11
  unsigned __int64 v133; // [rsp+0h] [rbp-138h]
  unsigned __int64 v134; // [rsp+0h] [rbp-138h]
  int v135; // [rsp+0h] [rbp-138h]
  __int64 v136; // [rsp+8h] [rbp-130h]
  _BYTE *v138; // [rsp+10h] [rbp-128h]
  unsigned int *v139; // [rsp+10h] [rbp-128h]
  __int64 v140; // [rsp+10h] [rbp-128h]
  char *v141; // [rsp+10h] [rbp-128h]
  unsigned int *v142; // [rsp+18h] [rbp-120h]
  unsigned int v143; // [rsp+18h] [rbp-120h]
  unsigned int *v144; // [rsp+20h] [rbp-118h]
  __int64 v145; // [rsp+20h] [rbp-118h]
  unsigned int v146; // [rsp+28h] [rbp-110h]
  __int64 v147; // [rsp+30h] [rbp-108h]
  unsigned int v148; // [rsp+38h] [rbp-100h]
  __int64 v149; // [rsp+38h] [rbp-100h]
  char *v151; // [rsp+48h] [rbp-F0h]
  unsigned int v152; // [rsp+50h] [rbp-E8h]
  _QWORD *v153; // [rsp+50h] [rbp-E8h]
  unsigned int v154; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v155; // [rsp+58h] [rbp-E0h]
  unsigned int v156; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v157; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v158; // [rsp+60h] [rbp-D8h]
  __int64 v159; // [rsp+68h] [rbp-D0h]
  __int64 v160; // [rsp+70h] [rbp-C8h]
  int v161; // [rsp+78h] [rbp-C0h]
  int v162; // [rsp+78h] [rbp-C0h]
  unsigned int v163; // [rsp+7Ch] [rbp-BCh]
  unsigned int v164; // [rsp+80h] [rbp-B8h]
  unsigned int v165; // [rsp+84h] [rbp-B4h]
  unsigned int v166; // [rsp+88h] [rbp-B0h]
  unsigned int v167; // [rsp+8Ch] [rbp-ACh]
  _QWORD *v169; // [rsp+98h] [rbp-A0h]
  __int64 v170; // [rsp+A8h] [rbp-90h]
  __int64 v171; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v172; // [rsp+B8h] [rbp-80h]
  int v173; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v174; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v175; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v176; // [rsp+D8h] [rbp-60h]
  __int64 v177; // [rsp+D8h] [rbp-60h]
  _QWORD *v178; // [rsp+E0h] [rbp-58h]
  _BYTE v179[4]; // [rsp+F4h] [rbp-44h] BYREF
  unsigned __int64 v180; // [rsp+F8h] [rbp-40h]

  v9 = 0;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(unsigned int *)(a2 + 44);
  v180 = __readfsqword(0x28u);
  v136 = v11;
  if ( a4 < v11 + v12 )
    return v9;
  v14 = v11;
  v15 = a4 - v11;
  v16 = a4 - v11;
  if ( (unsigned int)v12 >= (int)a4 - (int)v11 )
  {
    v163 = a4 - v11;
  }
  else
  {
    v133 = a4;
    v17 = a2;
    for ( i = v12; ; v12 = i )
    {
      i += sub_938BE0(v17, (_QWORD *)(v14 + v12), a5, v16, 4u, 0);
      if ( v16 <= i )
        break;
    }
    a4 = v133;
    v136 = *(_QWORD *)(a2 + 8);
    v163 = v133 - v136;
  }
  v19 = 4095;
  *(_DWORD *)(a2 + 44) = v15;
  if ( *(_DWORD *)(a2 + 276) <= 0xFFFu )
    v19 = *(_DWORD *)(a2 + 276);
  v20 = *(_DWORD *)(a2 + 28);
  v21 = v19;
  v22 = *(_QWORD *)(a2 + 128);
  v147 = v22;
  v23 = (unsigned int *)(*(_QWORD *)(a2 + 112)
                       + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(a2 + 264))));
  v24 = *v23;
  v25 = (1 << (*(_DWORD *)(a2 + 260) - 1)) - 1;
  v26 = *(unsigned int *)(a2 + 24);
  v169 = (_QWORD *)(v136 + v26);
  v27 = 0;
  if ( v25 < v163 )
    v27 = v163 - v25;
  v161 = (1 << (*(_DWORD *)(a2 + 260) - 1)) - 1;
  v148 = v27;
  v28 = 1 << *(_DWORD *)(a2 + 256);
  v29 = v163 - v28;
  if ( v28 >= v163 - v20 )
    v29 = *(_DWORD *)(a2 + 28);
  if ( !*(_DWORD *)(a2 + 40) )
    v20 = v29;
  v30 = 1;
  if ( v20 )
    v30 = v20;
  v146 = v30;
  v144 = (unsigned int *)(v22 + 8LL * (v163 & v25) + 4);
  v152 = v163 + 9;
  v142 = (unsigned int *)(v22 + 8LL * (v163 & v25));
  v31 = 1 << *(_DWORD *)(a2 + 268);
  v170 = *(_QWORD *)(a2 + 248);
  v151 = *(char **)v170;
  v160 = *(_QWORD *)(v170 + 8);
  v171 = *(_QWORD *)v170 - v160;
  v167 = v20 - v171;
  v164 = *(_DWORD *)(v170 + 28);
  v173 = *(_DWORD *)(v170 + 264);
  v32 = (1 << (*(_DWORD *)(v170 + 260) - 1)) - 1;
  v33 = v171 - v32;
  v165 = v32;
  if ( v32 >= (unsigned int)v171 - v164 )
    v33 = *(_DWORD *)(v170 + 28);
  v166 = v33;
  v34 = (unsigned int)(a8 - 1);
  v134 = v34;
  if ( a7 > 0xFFFFFFFC )
  {
    v9 = 0;
    goto LABEL_36;
  }
  v159 = *(_QWORD *)(a2 + 112) + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(a2 + 264)));
  v35 = 0;
  v36 = v163 - v26;
  v156 = v20;
  v37 = v163 + v171 - v164 - v20;
  v9 = 0;
  v135 = v26 - 1 - v163;
  v38 = a6;
  v39 = a4 + 4;
  v154 = v37;
  v172 = a5 - 7;
  v174 = a5 - 3;
  v175 = a5 - 1;
  do
  {
    v40 = a7 + v35;
    if ( (_DWORD)v40 == 3 )
      v41 = (unsigned int)(*v38 - 1);
    else
      v41 = (unsigned int)v38[v40];
    v42 = v163 - (unsigned int)v41;
    if ( (int)v41 - 1 >= v36 )
    {
      if ( (unsigned int)(v135 + v41) <= 2 || (int)v41 - 1 >= v154 )
      {
LABEL_133:
        v43 = v35 + 1;
        goto LABEL_34;
      }
      v95 = v160 + v42 - v167;
      v43 = v35 + 1;
      if ( *(_DWORD *)v95 != *(_DWORD *)a4 )
        goto LABEL_34;
      v140 = v95 + 4;
      v96 = (unsigned __int64)&v151[a4 - v95];
      if ( a5 < v96 )
        v96 = a5;
      v97 = v96 - 7;
      v176 = v96;
      if ( v39 < v96 - 7 )
      {
        v116 = *(_QWORD *)(v95 + 4);
        v117 = *(_QWORD *)(a4 + 4);
        if ( v116 != v117 )
        {
          _RCX = v117 ^ v116;
          __asm { tzcnt   rcx, rcx }
          v99 = (char *)((unsigned int)_RCX >> 3);
          goto LABEL_127;
        }
        v98 = (_QWORD *)(a4 + 12);
        v178 = (_QWORD *)(v95 + 12);
        if ( v97 > a4 + 12 )
        {
          v125 = *(_QWORD *)(v95 + 12);
          v126 = *(_QWORD *)(a4 + 12);
          if ( v126 != v125 )
          {
            _RCX = v125 ^ v126;
LABEL_193:
            __asm { tzcnt   rcx, rcx }
            v99 = (char *)v98 + ((unsigned int)_RCX >> 3) - v39;
LABEL_127:
            if ( v151 != &v99[v140] )
            {
LABEL_128:
              v49 = (_DWORD)v99 + 4;
              goto LABEL_30;
            }
            v120 = v169;
            v141 = &v99[v39];
            if ( (unsigned __int64)&v99[v39] >= v172 )
            {
              v129 = &v99[v39];
            }
            else
            {
              v121 = *(_QWORD *)&v99[v39];
              if ( *v169 != v121 )
              {
                _RCX = v121 ^ *v169;
                __asm { tzcnt   rcx, rcx }
                v124 = (unsigned int)_RCX >> 3;
LABEL_189:
                LODWORD(v99) = v124 + (_DWORD)v99;
                goto LABEL_128;
              }
              v129 = v141 + 8;
              v120 = v169 + 1;
              if ( v172 > (unsigned __int64)(v141 + 8) )
              {
                v177 = v169[1];
                v130 = *((_QWORD *)v141 + 1);
                if ( v130 != v177 )
                {
                  _RCX = v130 ^ v177;
LABEL_211:
                  __asm { tzcnt   rcx, rcx }
                  v124 = (_DWORD)v129 + ((unsigned int)_RCX >> 3) - (_DWORD)v141;
                  goto LABEL_189;
                }
                while ( 1 )
                {
                  v129 += 8;
                  ++v120;
                  if ( v172 <= (unsigned __int64)v129 )
                    break;
                  if ( *v120 != *(_QWORD *)v129 )
                  {
                    _RCX = *(_QWORD *)v129 ^ *v120;
                    goto LABEL_211;
                  }
                }
              }
            }
            if ( (unsigned __int64)v129 < v174 && *(_DWORD *)v120 == *(_DWORD *)v129 )
            {
              v129 += 4;
              v120 = (_QWORD *)((char *)v120 + 4);
            }
            if ( (unsigned __int64)v129 < v175 && *(_WORD *)v120 == *(_WORD *)v129 )
            {
              v129 += 2;
              v120 = (_QWORD *)((char *)v120 + 2);
            }
            if ( a5 > (unsigned __int64)v129 )
              LODWORD(v129) = (*(_BYTE *)v120 == (unsigned __int8)*v129) + (_DWORD)v129;
            v124 = (_DWORD)v129 - (_DWORD)v141;
            goto LABEL_189;
          }
          while ( 1 )
          {
            ++v178;
            if ( v97 <= (unsigned __int64)++v98 )
              break;
            if ( *v178 != *v98 )
            {
              _RCX = *v178 ^ *v98;
              goto LABEL_193;
            }
          }
        }
      }
      else
      {
        v98 = (_QWORD *)(a4 + 4);
        v178 = (_QWORD *)(v95 + 4);
      }
      if ( (unsigned __int64)v98 < v176 - 3 && *(_DWORD *)v178 == *(_DWORD *)v98 )
      {
        v178 = (_QWORD *)((char *)v178 + 4);
        v98 = (_QWORD *)((char *)v98 + 4);
      }
      if ( (unsigned __int64)v98 < v176 - 1 && *(_WORD *)v178 == *(_WORD *)v98 )
      {
        v178 = (_QWORD *)((char *)v178 + 2);
        v98 = (_QWORD *)((char *)v98 + 2);
      }
      if ( v176 > (unsigned __int64)v98 )
        v98 = (_QWORD *)((char *)v98 + (*(_BYTE *)v178 == *(_BYTE *)v98));
      v99 = (char *)v98 - v39;
      goto LABEL_127;
    }
    v43 = v35 + 1;
    if ( *(_DWORD *)(a4 - v41) != *(_DWORD *)a4 || (unsigned int)v42 < v156 )
      goto LABEL_34;
    v44 = (_QWORD *)(a4 + 4 - v41);
    if ( v39 >= v172 )
    {
      v110 = (_DWORD *)(a4 + 4);
LABEL_158:
      if ( (unsigned __int64)v110 < v174 && *(_DWORD *)v44 == *v110 )
      {
        ++v110;
        v44 = (_QWORD *)((char *)v44 + 4);
      }
      if ( (unsigned __int64)v110 < v175 && *(_WORD *)v44 == *(_WORD *)v110 )
      {
        v110 = (_DWORD *)((char *)v110 + 2);
        v44 = (_QWORD *)((char *)v44 + 2);
      }
      if ( a5 > (unsigned __int64)v110 )
        LODWORD(v110) = (*(_BYTE *)v44 == *(_BYTE *)v110) + (_DWORD)v110;
      v48 = (_DWORD)v110 - v39;
      goto LABEL_29;
    }
    v45 = *(_QWORD *)(a4 + 4);
    if ( *v44 == v45 )
    {
      v110 = (_DWORD *)(a4 + 12);
      v111 = v44 + 1;
      if ( v172 > a4 + 12 )
      {
        v112 = v44[1];
        v113 = *(_QWORD *)(a4 + 12);
        if ( v113 != v112 )
        {
          _RSI = v112 ^ v113;
LABEL_178:
          __asm { tzcnt   rsi, rsi }
          v48 = ((unsigned int)_RSI >> 3) + (_DWORD)v110 - v39;
          goto LABEL_29;
        }
        while ( 1 )
        {
          v110 += 2;
          ++v111;
          if ( v172 <= (unsigned __int64)v110 )
            break;
          if ( *v111 != *(_QWORD *)v110 )
          {
            _RSI = *(_QWORD *)v110 ^ *v111;
            goto LABEL_178;
          }
        }
      }
      v44 = v111;
      goto LABEL_158;
    }
    _RCX = v45 ^ *v44;
    __asm { tzcnt   rcx, rcx }
    v48 = (unsigned int)_RCX >> 3;
LABEL_29:
    v49 = v48 + 4;
LABEL_30:
    if ( v49 <= v34 )
      goto LABEL_133;
    v50 = v9++;
    v51 = (_DWORD *)(a1 + 8 * v50);
    v43 = v35 + 1;
    *v51 = v35 + 1;
    v51[1] = v49;
    if ( a5 == a4 + v49 || v21 < v49 )
      return v9;
    v34 = v49;
LABEL_34:
    v35 = v43;
  }
  while ( v43 != 3 );
  v23 = (unsigned int *)v159;
  v134 = v34;
LABEL_36:
  *v23 = v163;
  if ( v24 < v146 || !v31 )
    goto LABEL_70;
  v52 = a5 - 7;
  v53 = 0;
  v155 = a5 - 3;
  v54 = 0;
  v55 = v163 + 9;
  v157 = a5 - 1;
  v138 = (_BYTE *)a5;
  while ( 1 )
  {
    v63 = v53;
    if ( v54 <= v53 )
      v63 = v54;
    v64 = (unsigned int *)(v147 + 8LL * (v24 & v161));
    v65 = v136 + v24;
    v66 = (_QWORD *)(a4 + v63);
    v67 = (_QWORD *)(v65 + v63);
    if ( a4 + v63 < v52 )
    {
      if ( *v67 != *v66 )
      {
        _RAX = *v66 ^ *v67;
        __asm { tzcnt   rax, rax }
        v58 = (unsigned int)_RAX >> 3;
        goto LABEL_41;
      }
      v68 = v66 + 1;
      v153 = v67 + 1;
      if ( (unsigned __int64)(v66 + 1) >= v52 )
      {
        ++v67;
      }
      else
      {
        v91 = v67[1];
        v92 = v66[1];
        if ( v91 != v92 )
        {
LABEL_110:
          _R9 = v92 ^ v91;
          __asm { tzcnt   r9, r9 }
          v58 = (char *)v68 + ((unsigned int)_R9 >> 3) - (char *)v66;
          goto LABEL_41;
        }
        v100 = v153;
        while ( 1 )
        {
          ++v68;
          ++v100;
          if ( (unsigned __int64)v68 >= v52 )
            break;
          v91 = *v100;
          v92 = *v68;
          if ( *v100 != *v68 )
          {
            v64 = (unsigned int *)(v147 + 8LL * (v24 & v161));
            goto LABEL_110;
          }
        }
        v67 = v100;
        v64 = (unsigned int *)(v147 + 8LL * (v24 & v161));
      }
    }
    else
    {
      v68 = (_QWORD *)(a4 + v63);
    }
    if ( (unsigned __int64)v68 < v155 && *(_DWORD *)v67 == *(_DWORD *)v68 )
    {
      v68 = (_QWORD *)((char *)v68 + 4);
      v67 = (_QWORD *)((char *)v67 + 4);
    }
    if ( (unsigned __int64)v68 < v157 && *(_WORD *)v67 == *(_WORD *)v68 )
    {
      v68 = (_QWORD *)((char *)v68 + 2);
      v67 = (_QWORD *)((char *)v67 + 2);
    }
    if ( v138 > (_BYTE *)v68 )
      v68 = (_QWORD *)((char *)v68 + (*(_BYTE *)v67 == *(_BYTE *)v68));
    v58 = (char *)v68 - (char *)v66;
LABEL_41:
    v59 = v58 + v63;
    v60 = (_BYTE *)(a4 + v59);
    if ( v59 <= v134 )
      goto LABEL_47;
    if ( v59 > v55 - v24 )
      v55 = v24 + v59;
    v61 = v9++;
    v62 = (_DWORD *)(a1 + 8 * v61);
    v62[1] = v59;
    *v62 = v163 + 3 - v24;
    if ( v59 > 0x1000 || v138 == v60 )
      break;
    v134 = v59;
LABEL_47:
    if ( *(_BYTE *)(v65 + v59) < *v60 )
    {
      *v142 = v24;
      if ( v148 < v24 )
      {
        v24 = v64[1];
        v54 = v59;
        v142 = v64 + 1;
        if ( !--v31 )
          goto LABEL_69;
        goto LABEL_50;
      }
      v152 = v55;
      a5 = (unsigned __int64)v138;
      v142 = (unsigned int *)v179;
      goto LABEL_173;
    }
    *v144 = v24;
    if ( v148 >= v24 )
    {
      v152 = v55;
      a5 = (unsigned __int64)v138;
      v144 = (unsigned int *)v179;
LABEL_173:
      *v144 = 0;
      *v142 = 0;
LABEL_71:
      v70 = *(_DWORD *)(*(_QWORD *)(v170 + 112) + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - v173)));
      v145 = *(_QWORD *)(v170 + 128);
      if ( v164 >= v70 )
        goto LABEL_65;
      v143 = v9;
      v71 = 0;
      v162 = v31;
      v72 = 0;
      v158 = a5 - 7;
      while ( 1 )
      {
        v80 = v72;
        if ( v71 <= v72 )
          v80 = v71;
        v139 = (unsigned int *)(v145 + 8LL * (v70 & v165));
        v81 = (_QWORD *)(a4 + v80);
        v77 = v160 + v70;
        v82 = (_QWORD *)(v77 + v80);
        v83 = (unsigned __int64)&v151[a4 - v77];
        if ( a5 < v83 )
          v83 = a5;
        v84 = v83 - 7;
        if ( (unsigned __int64)v81 < v83 - 7 )
        {
          if ( *v82 != *v81 )
          {
            _R10 = *v81 ^ *v82;
            __asm { tzcnt   r10, r10 }
            v75 = (unsigned int)_R10 >> 3;
            goto LABEL_75;
          }
          v86 = v81 + 1;
          v85 = v82 + 1;
          if ( v84 > (unsigned __int64)(v81 + 1) )
          {
            v149 = v82[1];
            v101 = v81[1];
            if ( v149 != v101 )
            {
              _RAX = v149 ^ v101;
LABEL_139:
              __asm { tzcnt   rax, rax }
              v75 = (char *)v86 + ((unsigned int)_RAX >> 3) - (char *)v81;
LABEL_75:
              if ( v151 != (char *)v82 + v75 )
                goto LABEL_76;
LABEL_104:
              v87 = (_QWORD *)((char *)v81 + v75);
              if ( (unsigned __int64)v87 >= v158 )
              {
                v104 = v169;
                v105 = v87;
              }
              else
              {
                if ( *v169 != *v87 )
                {
                  _RAX = *v87 ^ *v169;
                  __asm { tzcnt   rax, rax }
                  v90 = (unsigned int)_RAX >> 3;
LABEL_107:
                  v75 += v90;
                  goto LABEL_76;
                }
                v105 = v87 + 1;
                v104 = v169 + 1;
                if ( v158 > (unsigned __int64)(v87 + 1) )
                {
                  v106 = v87[1];
                  v107 = v169[1];
                  if ( v107 != v106 )
                  {
LABEL_155:
                    _RDX = v106 ^ v107;
                    __asm { tzcnt   rdx, rdx }
                    v90 = (char *)v105 + ((unsigned int)_RDX >> 3) - (char *)v87;
                    goto LABEL_107;
                  }
                  while ( 1 )
                  {
                    ++v105;
                    ++v104;
                    if ( v158 <= (unsigned __int64)v105 )
                      break;
                    v107 = *v104;
                    v106 = *v105;
                    if ( *v104 != *v105 )
                      goto LABEL_155;
                  }
                }
              }
              if ( (unsigned __int64)v105 < a5 - 3 && *(_DWORD *)v104 == *(_DWORD *)v105 )
              {
                v105 = (_QWORD *)((char *)v105 + 4);
                v104 = (__int64 *)((char *)v104 + 4);
              }
              if ( (unsigned __int64)v105 < a5 - 1 && *(_WORD *)v104 == *(_WORD *)v105 )
              {
                v105 = (_QWORD *)((char *)v105 + 2);
                v104 = (__int64 *)((char *)v104 + 2);
              }
              if ( a5 > (unsigned __int64)v105 )
                v105 = (_QWORD *)((char *)v105 + (*(_BYTE *)v104 == *(_BYTE *)v105));
              v90 = (char *)v105 - (char *)v87;
              goto LABEL_107;
            }
            while ( 1 )
            {
              ++v86;
              ++v85;
              if ( v84 <= (unsigned __int64)v86 )
                break;
              if ( *v85 != *v86 )
              {
                _RAX = *v86 ^ *v85;
                goto LABEL_139;
              }
            }
          }
        }
        else
        {
          v85 = (_QWORD *)(v77 + v80);
          v86 = (_QWORD *)(a4 + v80);
        }
        if ( (unsigned __int64)v86 < v83 - 3 && *(_DWORD *)v85 == *(_DWORD *)v86 )
        {
          v86 = (_QWORD *)((char *)v86 + 4);
          v85 = (_QWORD *)((char *)v85 + 4);
        }
        if ( (unsigned __int64)v86 < v83 - 1 && *(_WORD *)v85 == *(_WORD *)v86 )
        {
          v86 = (_QWORD *)((char *)v86 + 2);
          v85 = (_QWORD *)((char *)v85 + 2);
        }
        if ( v83 > (unsigned __int64)v86 )
          v86 = (_QWORD *)((char *)v86 + (*(_BYTE *)v85 == *(_BYTE *)v86));
        v75 = (char *)v86 - (char *)v81;
        if ( v151 == (char *)v82 + v75 )
          goto LABEL_104;
LABEL_76:
        v76 = v80 + v75;
        if ( v70 + v76 >= (unsigned int)v171 )
          v77 = v136 + v167 + (unsigned __int64)v70;
        if ( v76 > v134 )
        {
          v78 = v70 + v167 + v76;
          if ( v76 <= v152 - (v70 + v167) )
            v78 = v152;
          v152 = v78;
          v79 = (_DWORD *)(a1 + 8LL * v143);
          v79[1] = v76;
          ++v143;
          *v79 = v163 + 3 - (v70 + v167);
          if ( a5 == a4 + v76 || v76 > 0x1000 )
          {
LABEL_64:
            v9 = v143;
            goto LABEL_65;
          }
          v134 = v76;
        }
        if ( v166 < v70 )
        {
          if ( *(_BYTE *)(v77 + v76) >= *(_BYTE *)(a4 + v76) )
          {
            v70 = *v139;
            v72 = v76;
          }
          else
          {
            v70 = v139[1];
            v71 = v76;
          }
          if ( --v162 )
          {
            if ( v164 < v70 )
              continue;
          }
        }
        goto LABEL_64;
      }
    }
    v24 = *v64;
    v144 = v64;
    v53 = v59;
    if ( !--v31 )
    {
LABEL_69:
      v152 = v55;
      a5 = (unsigned __int64)v138;
LABEL_70:
      *v144 = 0;
      *v142 = 0;
      if ( !v31 )
        goto LABEL_65;
      goto LABEL_71;
    }
LABEL_50:
    if ( v146 > v24 )
      goto LABEL_69;
  }
  v152 = v55;
  *v144 = 0;
  *v142 = 0;
LABEL_65:
  *(_DWORD *)(a2 + 44) = v152 - 8;
  return v9;
}

