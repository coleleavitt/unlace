__int64 __fastcall sub_95ED30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v13; // ebx
  unsigned int v14; // ebp
  __int64 v15; // r12
  unsigned int i; // ebx
  __int64 v17; // r10
  unsigned int *v18; // r11
  unsigned int v19; // edx
  unsigned int v20; // r9d
  unsigned __int64 v21; // rsi
  unsigned int v22; // ecx
  int v23; // ebx
  unsigned int v24; // edi
  unsigned int v25; // ecx
  int v26; // ecx
  unsigned __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // r12d
  unsigned int v30; // r10d
  unsigned __int64 v31; // r9
  _DWORD *v32; // rdx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  int v38; // edi
  char *v39; // rsi
  __int64 v40; // rdi
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  __int64 v45; // rdi
  _DWORD *v46; // r8
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r11
  _QWORD *v49; // r14
  _BYTE *v50; // r15
  bool v51; // zf
  unsigned __int64 v52; // rsi
  unsigned int *v53; // r9
  _QWORD *v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  signed __int64 v59; // r12
  unsigned __int64 v60; // rsi
  _BYTE *v61; // rax
  unsigned int v62; // ecx
  _DWORD *v63; // rcx
  _QWORD *v65; // r12
  _QWORD *v66; // rbp
  unsigned __int64 v67; // r10
  signed __int64 v70; // r12
  _QWORD *v71; // rdi
  __int64 v72; // r10
  __int64 v73; // rax
  _QWORD *v76; // r12
  _QWORD *v77; // rcx
  signed __int64 v80; // rax
  __int64 v81; // rsi
  char *v82; // rdi
  unsigned __int64 v83; // rcx
  _QWORD *v84; // rdi
  char *v85; // rdi
  __int64 v86; // r13
  __int64 v87; // rax
  _DWORD *v90; // rbp
  _DWORD *v91; // rax
  _QWORD *v92; // r10
  __int64 v93; // r13
  __int64 v94; // r10
  _DWORD *v97; // rcx
  char *v98; // rdi
  __int64 v99; // r14
  __int64 v100; // rsi
  __int64 v103; // r14
  __int64 v104; // rdi
  __int64 v107; // rsi
  unsigned int v110; // ecx
  __int64 v111; // r14
  __int64 v112; // rsi
  char *v115; // rsi
  __int64 v116; // r14
  _QWORD *v119; // rcx
  int v120; // [rsp+8h] [rbp-110h]
  unsigned __int64 v121; // [rsp+8h] [rbp-110h]
  int v122; // [rsp+8h] [rbp-110h]
  unsigned __int64 v123; // [rsp+10h] [rbp-108h]
  unsigned int v124; // [rsp+1Ch] [rbp-FCh]
  unsigned int v125; // [rsp+1Ch] [rbp-FCh]
  __int64 v126; // [rsp+20h] [rbp-F8h]
  int v128; // [rsp+28h] [rbp-F0h]
  __int64 v129; // [rsp+28h] [rbp-F0h]
  _DWORD *v130; // [rsp+28h] [rbp-F0h]
  unsigned int *v131; // [rsp+30h] [rbp-E8h]
  unsigned int *v132; // [rsp+38h] [rbp-E0h]
  int v133; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v134; // [rsp+40h] [rbp-D8h]
  unsigned int v135; // [rsp+48h] [rbp-D0h]
  unsigned int v136; // [rsp+4Ch] [rbp-CCh]
  __int64 v137; // [rsp+50h] [rbp-C8h]
  unsigned int v138; // [rsp+58h] [rbp-C0h]
  unsigned int v139; // [rsp+5Ch] [rbp-BCh]
  char *v140; // [rsp+60h] [rbp-B8h]
  unsigned int v142; // [rsp+70h] [rbp-A8h]
  _DWORD *v143; // [rsp+70h] [rbp-A8h]
  __int64 v144; // [rsp+78h] [rbp-A0h]
  unsigned int v145; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v146; // [rsp+80h] [rbp-98h]
  unsigned __int64 v147; // [rsp+80h] [rbp-98h]
  unsigned __int64 v148; // [rsp+88h] [rbp-90h]
  __int64 v149; // [rsp+90h] [rbp-88h]
  unsigned int v150; // [rsp+98h] [rbp-80h]
  unsigned __int64 v151; // [rsp+98h] [rbp-80h]
  _QWORD *v152; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v153; // [rsp+A8h] [rbp-70h]
  __int64 v154; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v155; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v156; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v157; // [rsp+B8h] [rbp-60h]
  char *v158; // [rsp+B8h] [rbp-60h]
  _QWORD *v159; // [rsp+C0h] [rbp-58h]
  __int64 v160; // [rsp+C0h] [rbp-58h]
  _BYTE v161[4]; // [rsp+D4h] [rbp-44h] BYREF
  unsigned __int64 v162; // [rsp+D8h] [rbp-40h]

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(unsigned int *)(a2 + 44);
  v162 = __readfsqword(0x28u);
  v126 = v9;
  v124 = 0;
  if ( (unsigned __int64)a4 < v9 + v10 )
    return v124;
  v13 = (_DWORD)a4 - v9;
  v14 = (_DWORD)a4 - v9;
  if ( (unsigned int)v10 < (int)a4 - (int)v9 )
  {
    v120 = (_DWORD)a4 - v9;
    v15 = v9;
    for ( i = v10; ; v10 = i )
    {
      i += sub_95C920(v8, (_QWORD *)(v15 + v10), a5, v14, 5u, 1);
      if ( v14 <= i )
        break;
    }
    v13 = v120;
    v126 = *(_QWORD *)(v8 + 8);
    v14 = (_DWORD)a4 - v126;
  }
  *(_DWORD *)(v8 + 44) = v13;
  v17 = *(_QWORD *)(v8 + 128);
  v137 = v17;
  v18 = (unsigned int *)(*(_QWORD *)(v8 + 112) + 4 * ((0xCF1BBCDCBB000000LL * *a4) >> (64 - *(_BYTE *)(v8 + 264))));
  v19 = *v18;
  v20 = (1 << (*(_DWORD *)(v8 + 260) - 1)) - 1;
  v21 = *(unsigned int *)(v8 + 24);
  v123 = v21;
  v149 = *(_QWORD *)(v8 + 16);
  v140 = (char *)(v21 + v149);
  v138 = v20;
  v22 = 0;
  if ( v20 < v14 )
    v22 = v14 - v20;
  v152 = (_QWORD *)(v21 + v126);
  v23 = *(_DWORD *)(v8 + 28);
  v139 = v22;
  v24 = 1 << *(_DWORD *)(v8 + 256);
  v25 = v14 - v24;
  if ( v24 >= v14 - v23 )
    v25 = *(_DWORD *)(v8 + 28);
  if ( !*(_DWORD *)(v8 + 40) )
    v23 = v25;
  v26 = 1;
  if ( v23 )
    v26 = v23;
  v136 = v26;
  v132 = (unsigned int *)(v17 + 8LL * (v14 & v20) + 4);
  v135 = v14 + 9;
  v131 = (unsigned int *)(v17 + 8LL * (v14 & v20));
  v133 = 1 << *(_DWORD *)(v8 + 268);
  v27 = (unsigned int)(a8 - 1);
  v121 = v27;
  if ( a7 > 0xFFFFFFFC )
  {
    v124 = 0;
    goto LABEL_34;
  }
  v28 = 4095;
  v144 = v8;
  if ( *(_DWORD *)(v8 + 276) <= 0xFFFu )
    v28 = *(_DWORD *)(v8 + 276);
  v29 = v14 - v21;
  v125 = v14 - v23;
  v150 = *v18;
  v30 = v28;
  v31 = (unsigned __int64)a4 + 4;
  v146 = a5 - 7;
  v32 = a6;
  v33 = 0;
  v153 = a5 - 3;
  v122 = v21 - 1 - v14;
  v155 = a5 - 1;
  v142 = v23;
  v34 = 0;
  do
  {
    v35 = a7 + v33;
    if ( (_DWORD)v35 == 3 )
      v36 = (unsigned int)(*v32 - 1);
    else
      v36 = (unsigned int)v32[v35];
    v37 = v14 - (unsigned int)v36;
    if ( (int)v36 - 1 >= v29 )
    {
      if ( (unsigned int)(v122 + v36) <= 2 || (int)v36 - 1 >= v125 )
      {
LABEL_120:
        v38 = v33 + 1;
        goto LABEL_32;
      }
      v81 = v149 + v37;
      v38 = v33 + 1;
      if ( *(_DWORD *)v81 != *(_DWORD *)a4 )
        goto LABEL_32;
      v129 = v81 + 4;
      v82 = &v140[(_QWORD)a4 - v81];
      if ( a5 < (unsigned __int64)v82 )
        v82 = (char *)a5;
      v83 = (unsigned __int64)(v82 - 7);
      v156 = (unsigned __int64)v82;
      if ( v31 < (unsigned __int64)(v82 - 7) )
      {
        v103 = *(_QWORD *)(v81 + 4);
        v104 = *(_QWORD *)((char *)a4 + 4);
        if ( v103 != v104 )
        {
          _RCX = v104 ^ v103;
          __asm { tzcnt   rcx, rcx }
          v85 = (char *)((unsigned int)_RCX >> 3);
          goto LABEL_111;
        }
        v84 = (_QWORD *)((char *)a4 + 12);
        v159 = (_QWORD *)(v81 + 12);
        if ( v83 > (unsigned __int64)a4 + 12 )
        {
          v111 = *(_QWORD *)(v81 + 12);
          v112 = *(_QWORD *)((char *)a4 + 12);
          if ( v111 != v112 )
          {
            _RCX = v112 ^ v111;
LABEL_174:
            __asm { tzcnt   rcx, rcx }
            v85 = (char *)v84 + ((unsigned int)_RCX >> 3) - v31;
LABEL_111:
            if ( v140 != &v85[v129] )
            {
LABEL_112:
              v44 = (_DWORD)v85 + 4;
              goto LABEL_28;
            }
            v158 = &v85[v31];
            if ( (unsigned __int64)&v85[v31] >= v146 )
            {
              v130 = v152;
              v115 = &v85[v31];
            }
            else
            {
              v107 = *(_QWORD *)&v85[v31];
              if ( *v152 != v107 )
              {
                _RCX = v107 ^ *v152;
                __asm { tzcnt   rcx, rcx }
                v110 = (unsigned int)_RCX >> 3;
LABEL_170:
                LODWORD(v85) = v110 + (_DWORD)v85;
                goto LABEL_112;
              }
              v115 = v158 + 8;
              v130 = v152 + 1;
              if ( v146 > (unsigned __int64)(v158 + 8) )
              {
                v116 = v152[1];
                v160 = *((_QWORD *)v158 + 1);
                if ( v116 != v160 )
                {
                  _RCX = v116 ^ v160;
LABEL_193:
                  __asm { tzcnt   rcx, rcx }
                  v110 = (_DWORD)v115 + ((unsigned int)_RCX >> 3) - (_DWORD)v158;
                  goto LABEL_170;
                }
                v119 = v152 + 1;
                while ( 1 )
                {
                  v115 += 8;
                  ++v119;
                  if ( v146 <= (unsigned __int64)v115 )
                    break;
                  if ( *v119 != *(_QWORD *)v115 )
                  {
                    _RCX = *(_QWORD *)v115 ^ *v119;
                    goto LABEL_193;
                  }
                }
                v130 = v119;
              }
            }
            if ( (unsigned __int64)v115 < v153 && *v130 == *(_DWORD *)v115 )
            {
              ++v130;
              v115 += 4;
            }
            if ( (unsigned __int64)v115 < v155 && *(_WORD *)v130 == *(_WORD *)v115 )
            {
              v130 = (_DWORD *)((char *)v130 + 2);
              v115 += 2;
            }
            if ( a5 > (unsigned __int64)v115 )
              LODWORD(v115) = (*(_BYTE *)v130 == (unsigned __int8)*v115) + (_DWORD)v115;
            v110 = (_DWORD)v115 - (_DWORD)v158;
            goto LABEL_170;
          }
          while ( 1 )
          {
            ++v159;
            if ( v83 <= (unsigned __int64)++v84 )
              break;
            if ( *v159 != *v84 )
            {
              _RCX = *v159 ^ *v84;
              goto LABEL_174;
            }
          }
        }
      }
      else
      {
        v84 = (_QWORD *)((char *)a4 + 4);
        v159 = (_QWORD *)(v81 + 4);
      }
      if ( (unsigned __int64)v84 < v156 - 3 && *(_DWORD *)v159 == *(_DWORD *)v84 )
      {
        v159 = (_QWORD *)((char *)v159 + 4);
        v84 = (_QWORD *)((char *)v84 + 4);
      }
      if ( (unsigned __int64)v84 < v156 - 1 && *(_WORD *)v159 == *(_WORD *)v84 )
      {
        v159 = (_QWORD *)((char *)v159 + 2);
        v84 = (_QWORD *)((char *)v84 + 2);
      }
      if ( v156 > (unsigned __int64)v84 )
        v84 = (_QWORD *)((char *)v84 + (*(_BYTE *)v159 == *(_BYTE *)v84));
      v85 = (char *)v84 - v31;
      goto LABEL_111;
    }
    v38 = v33 + 1;
    if ( *(_DWORD *)((char *)a4 - v36) != *(_DWORD *)a4 || (unsigned int)v37 < v142 )
      goto LABEL_32;
    v39 = (char *)a4 + 4 - v36;
    if ( v31 >= v146 )
    {
      v97 = (_DWORD *)a4 + 1;
LABEL_142:
      if ( (unsigned __int64)v97 < v153 && *(_DWORD *)v39 == *v97 )
      {
        ++v97;
        v39 += 4;
      }
      if ( (unsigned __int64)v97 < v155 && *(_WORD *)v39 == *(_WORD *)v97 )
      {
        v97 = (_DWORD *)((char *)v97 + 2);
        v39 += 2;
      }
      if ( a5 > (unsigned __int64)v97 )
        LODWORD(v97) = (*v39 == *(_BYTE *)v97) + (_DWORD)v97;
      v43 = (_DWORD)v97 - v31;
      goto LABEL_27;
    }
    v40 = *(_QWORD *)((char *)a4 + 4);
    if ( *(_QWORD *)v39 == v40 )
    {
      v97 = (_DWORD *)a4 + 3;
      v98 = v39 + 8;
      if ( v146 > (unsigned __int64)a4 + 12 )
      {
        v99 = *((_QWORD *)v39 + 1);
        v100 = *(_QWORD *)((char *)a4 + 12);
        if ( v100 != v99 )
        {
          _RSI = v99 ^ v100;
LABEL_157:
          __asm { tzcnt   rsi, rsi }
          v43 = ((unsigned int)_RSI >> 3) + (_DWORD)v97 - v31;
          goto LABEL_27;
        }
        while ( 1 )
        {
          v97 += 2;
          v98 += 8;
          if ( v146 <= (unsigned __int64)v97 )
            break;
          if ( *(_QWORD *)v98 != *(_QWORD *)v97 )
          {
            _RSI = *(_QWORD *)v97 ^ *(_QWORD *)v98;
            goto LABEL_157;
          }
        }
      }
      v39 = v98;
      goto LABEL_142;
    }
    _RCX = v40 ^ *(_QWORD *)v39;
    __asm { tzcnt   rcx, rcx }
    v43 = (unsigned int)_RCX >> 3;
LABEL_27:
    v44 = v43 + 4;
LABEL_28:
    if ( v44 <= v27 )
      goto LABEL_120;
    v45 = v34++;
    v46 = (_DWORD *)(a1 + 8 * v45);
    v38 = v33 + 1;
    *v46 = v33 + 1;
    v46[1] = v44;
    if ( (_QWORD *)a5 == (_QWORD *)((char *)a4 + v44) || v30 < v44 )
      return v34;
    v27 = v44;
LABEL_32:
    v33 = v38;
  }
  while ( v38 != 3 );
  v19 = v150;
  v8 = v144;
  v124 = v34;
  v121 = v27;
LABEL_34:
  *v18 = v14;
  if ( v133 && v19 >= v136 )
  {
    v47 = 0;
    v48 = 0;
    v128 = v133;
    v134 = a5 - 7;
    v147 = a5 - 3;
    v148 = a5 - 1;
    v154 = v8;
    v49 = a4;
    v50 = (_BYTE *)a5;
    v145 = v14 + 3;
    while ( 1 )
    {
      v52 = v47;
      if ( v48 <= v47 )
        v52 = v48;
      v53 = (unsigned int *)(v137 + 8LL * (v19 & v138));
      v54 = (_QWORD *)((char *)v49 + v52);
      if ( v123 <= v52 + v19 )
      {
        v55 = v126 + v19;
        v56 = (_QWORD *)(v55 + v52);
        if ( v134 <= (unsigned __int64)v54 )
        {
          v65 = (_QWORD *)((char *)v49 + v52);
        }
        else
        {
          if ( *v56 != *v54 )
          {
            _RDI = *v54 ^ *v56;
            __asm { tzcnt   r12, rdi }
            v59 = (unsigned int)_R12 >> 3;
LABEL_46:
            v60 = v59 + v52;
            goto LABEL_47;
          }
          v65 = v54 + 1;
          v71 = v56 + 1;
          if ( v134 > (unsigned __int64)(v54 + 1) )
          {
            v72 = v56[1];
            v73 = v54[1];
            if ( v73 != v72 )
            {
LABEL_80:
              _RAX = v72 ^ v73;
              __asm { tzcnt   rax, rax }
              v59 = (char *)v65 + ((unsigned int)_RAX >> 3) - (char *)v54;
              goto LABEL_46;
            }
            while ( 1 )
            {
              ++v65;
              ++v71;
              if ( v134 <= (unsigned __int64)v65 )
                break;
              v73 = *v71;
              v72 = *v65;
              if ( *v71 != *v65 )
                goto LABEL_80;
            }
          }
          v56 = v71;
        }
        if ( (unsigned __int64)v65 < v147 && *(_DWORD *)v56 == *(_DWORD *)v65 )
        {
          v65 = (_QWORD *)((char *)v65 + 4);
          v56 = (_QWORD *)((char *)v56 + 4);
        }
        if ( (unsigned __int64)v65 < v148 && *(_WORD *)v56 == *(_WORD *)v65 )
        {
          v65 = (_QWORD *)((char *)v65 + 2);
          v56 = (_QWORD *)((char *)v56 + 2);
        }
        if ( v50 > (_BYTE *)v65 )
          v65 = (_QWORD *)((char *)v65 + (*(_BYTE *)v56 == *(_BYTE *)v65));
        v59 = (char *)v65 - (char *)v54;
        goto LABEL_46;
      }
      v55 = v149 + v19;
      v66 = (_QWORD *)(v55 + v52);
      v67 = (unsigned __int64)&v140[(_QWORD)v49 - v55];
      if ( (unsigned __int64)v50 < v67 )
        v67 = (unsigned __int64)v50;
      v151 = v67 - 7;
      if ( v67 - 7 <= (unsigned __int64)v54 )
        break;
      if ( *v66 == *v54 )
      {
        v76 = v54 + 1;
        v143 = v66 + 1;
        if ( v151 <= (unsigned __int64)(v54 + 1) )
          goto LABEL_82;
        v86 = v66[1];
        v87 = v54[1];
        if ( v87 == v86 )
        {
          v157 = v67;
          v92 = v66 + 1;
          while ( 1 )
          {
            ++v76;
            ++v92;
            if ( v151 <= (unsigned __int64)v76 )
              break;
            if ( *v92 != *v76 )
            {
              _RAX = *v76 ^ *v92;
              goto LABEL_116;
            }
          }
          v143 = v92;
          v67 = v157;
LABEL_82:
          if ( (unsigned __int64)v76 < v67 - 3 && *v143 == *(_DWORD *)v76 )
          {
            ++v143;
            v76 = (_QWORD *)((char *)v76 + 4);
          }
          if ( (unsigned __int64)v76 < v67 - 1 && *(_WORD *)v143 == *(_WORD *)v76 )
          {
            v143 = (_DWORD *)((char *)v143 + 2);
            v76 = (_QWORD *)((char *)v76 + 2);
          }
          if ( v67 > (unsigned __int64)v76 )
            v76 = (_QWORD *)((char *)v76 + (*(_BYTE *)v143 == *(_BYTE *)v76));
          v70 = (char *)v76 - (char *)v54;
          if ( v140 != (char *)v66 + v70 )
            goto LABEL_75;
          goto LABEL_91;
        }
        _RAX = v86 ^ v87;
LABEL_116:
        __asm { tzcnt   rax, rax }
        v70 = (char *)v76 + ((unsigned int)_RAX >> 3) - (char *)v54;
      }
      else
      {
        _R12 = *v54 ^ *v66;
        __asm { tzcnt   r12, r12 }
        v70 = (unsigned int)_R12 >> 3;
      }
      if ( v140 != (char *)v66 + v70 )
        goto LABEL_75;
LABEL_91:
      v77 = (_QWORD *)((char *)v54 + v70);
      if ( (unsigned __int64)v77 >= v134 )
      {
        v90 = v152;
        v91 = v77;
LABEL_122:
        if ( (unsigned __int64)v91 < v147 && *v90 == *v91 )
        {
          ++v91;
          ++v90;
        }
        if ( (unsigned __int64)v91 < v148 && *(_WORD *)v90 == *(_WORD *)v91 )
        {
          v91 = (_DWORD *)((char *)v91 + 2);
          v90 = (_DWORD *)((char *)v90 + 2);
        }
        if ( v50 > (_BYTE *)v91 )
          v91 = (_DWORD *)((char *)v91 + (*(_BYTE *)v90 == *(_BYTE *)v91));
        v80 = (char *)v91 - (char *)v77;
        goto LABEL_94;
      }
      if ( *v152 == *v77 )
      {
        v91 = v77 + 1;
        v90 = v152 + 1;
        if ( v134 > (unsigned __int64)(v77 + 1) )
        {
          v93 = v152[1];
          v94 = v77[1];
          if ( v94 != v93 )
          {
            _R10 = v93 ^ v94;
LABEL_139:
            __asm { tzcnt   r10, r10 }
            v80 = (char *)v91 + ((unsigned int)_R10 >> 3) - (char *)v77;
            goto LABEL_94;
          }
          while ( 1 )
          {
            v91 += 2;
            v90 += 2;
            if ( v134 <= (unsigned __int64)v91 )
              break;
            if ( *(_QWORD *)v90 != *(_QWORD *)v91 )
            {
              _R10 = *(_QWORD *)v90 ^ *(_QWORD *)v91;
              goto LABEL_139;
            }
          }
        }
        goto LABEL_122;
      }
      _RAX = *v77 ^ *v152;
      __asm { tzcnt   rax, rax }
      v80 = (unsigned int)_RAX >> 3;
LABEL_94:
      v70 += v80;
LABEL_75:
      v60 = v70 + v52;
      if ( v123 <= v19 + v60 )
        v55 = v126 + v19;
LABEL_47:
      v61 = (char *)v49 + v60;
      if ( v60 > v121 )
      {
        v62 = v19 + v60;
        if ( v60 <= v135 - v19 )
          v62 = v135;
        v135 = v62;
        v63 = (_DWORD *)(a1 + 8LL * v124);
        v63[1] = v60;
        ++v124;
        *v63 = v145 - v19;
        if ( v60 > 0x1000 || v50 == v61 )
        {
LABEL_56:
          v8 = v154;
          goto LABEL_57;
        }
        v121 = v60;
      }
      if ( *(_BYTE *)(v55 + v60) < *v61 )
      {
        *v131 = v19;
        if ( v19 <= v139 )
        {
          v8 = v154;
          v131 = (unsigned int *)v161;
          goto LABEL_57;
        }
        v51 = v128-- == 1;
        v19 = v53[1];
        v48 = v60;
        v131 = v53 + 1;
        if ( v51 )
          goto LABEL_56;
      }
      else
      {
        *v132 = v19;
        if ( v19 <= v139 )
        {
          v8 = v154;
          v132 = (unsigned int *)v161;
          goto LABEL_57;
        }
        v51 = v128-- == 1;
        v19 = *v53;
        v47 = v60;
        v132 = v53;
        if ( v51 )
          goto LABEL_56;
      }
      if ( v136 > v19 )
        goto LABEL_56;
    }
    v143 = (_DWORD *)(v149 + v19 + v52);
    v76 = (_QWORD *)((char *)v49 + v52);
    goto LABEL_82;
  }
LABEL_57:
  *v132 = 0;
  *v131 = 0;
  *(_DWORD *)(v8 + 44) = v135 - 8;
  return v124;
}
