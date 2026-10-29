__int64 __fastcall sub_103CA0(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  unsigned int v8; // r15d
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int64 v14; // r15
  int v15; // ebp
  unsigned int v16; // r12d
  __int64 v17; // r13
  unsigned int i; // ebx
  int v19; // r15d
  __int64 v20; // rdx
  unsigned int v21; // r11d
  __int64 v22; // r13
  unsigned int *v23; // r10
  unsigned int v24; // ebp
  unsigned int v25; // r8d
  __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // esi
  unsigned int v29; // ecx
  int v30; // ecx
  __int64 v31; // rdi
  int v32; // r13d
  __int64 v33; // r15
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // r12d
  _DWORD *v39; // r11
  int v40; // r9d
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // esi
  _QWORD *v47; // rcx
  __int64 v48; // rsi
  unsigned int v51; // edx
  unsigned int v52; // edx
  __int64 v53; // rsi
  _DWORD *v54; // rdi
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // r9
  unsigned int v58; // r14d
  signed __int64 v61; // rax
  unsigned __int64 v62; // rsi
  _BYTE *v63; // rax
  __int64 v64; // rcx
  _DWORD *v65; // rcx
  unsigned __int64 v66; // rsi
  __int64 v67; // rdx
  unsigned int *v68; // rdi
  _QWORD *v69; // rcx
  _QWORD *v70; // r8
  _QWORD *v71; // rax
  __int64 *v72; // rax
  _QWORD *v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v76; // r12
  __int64 v77; // r8
  __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  __int64 *v82; // rdi
  char *v83; // rsi
  _QWORD *v84; // rdi
  unsigned int v85; // r9d
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // r15
  signed __int64 v90; // r10
  unsigned __int64 v91; // r10
  __int64 v92; // rsi
  unsigned int v93; // edx
  _DWORD *v94; // rdx
  unsigned __int64 v95; // r11
  _QWORD *v96; // rdi
  _QWORD *v97; // r8
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // r12
  _QWORD *v100; // r13
  _QWORD *v101; // r10
  _QWORD *v102; // rdi
  signed __int64 v105; // rax
  __int64 v106; // rax
  __int64 *v109; // r8
  _QWORD *v110; // rax
  __int64 v111; // r12
  __int64 v112; // rdx
  unsigned int v115; // eax
  unsigned int v116; // edx
  unsigned __int64 v117; // rcx
  _QWORD *v118; // r8
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 *v123; // rdx
  _QWORD *v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v129; // rdx
  __int64 v130; // rdi
  char *v135; // rdi
  __int64 *v136; // rdx
  unsigned int v139; // edx
  __int64 v140; // rdx
  __int64 v141; // rcx
  char *v144; // rdi
  __int64 v145; // rcx
  unsigned __int64 v148; // [rsp+8h] [rbp-140h]
  unsigned __int64 v149; // [rsp+8h] [rbp-140h]
  __int64 v150; // [rsp+10h] [rbp-138h]
  unsigned int v151; // [rsp+18h] [rbp-130h]
  _BYTE *v152; // [rsp+18h] [rbp-130h]
  unsigned int *v153; // [rsp+18h] [rbp-130h]
  unsigned int *v154; // [rsp+20h] [rbp-128h]
  unsigned int v155; // [rsp+20h] [rbp-128h]
  unsigned int *v156; // [rsp+28h] [rbp-120h]
  __int64 v157; // [rsp+28h] [rbp-120h]
  unsigned int v158; // [rsp+30h] [rbp-118h]
  __int64 v159; // [rsp+38h] [rbp-110h]
  int v160; // [rsp+44h] [rbp-104h]
  int v161; // [rsp+44h] [rbp-104h]
  unsigned int v162; // [rsp+48h] [rbp-100h]
  __int64 v163; // [rsp+48h] [rbp-100h]
  char *v165; // [rsp+58h] [rbp-F0h]
  unsigned int v166; // [rsp+60h] [rbp-E8h]
  _QWORD *v167; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v169; // [rsp+68h] [rbp-E0h]
  __int64 v170; // [rsp+68h] [rbp-E0h]
  unsigned int *v171; // [rsp+68h] [rbp-E0h]
  char *v172; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v174; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v175; // [rsp+70h] [rbp-D8h]
  unsigned int v176; // [rsp+78h] [rbp-D0h]
  __int64 v177; // [rsp+80h] [rbp-C8h]
  unsigned int v178; // [rsp+88h] [rbp-C0h]
  unsigned int v179; // [rsp+8Ch] [rbp-BCh]
  unsigned int v180; // [rsp+90h] [rbp-B8h]
  unsigned int v181; // [rsp+94h] [rbp-B4h]
  __int64 *v183; // [rsp+A0h] [rbp-A8h]
  unsigned int v184; // [rsp+A8h] [rbp-A0h]
  __int64 v185; // [rsp+B0h] [rbp-98h]
  unsigned int v186; // [rsp+B8h] [rbp-90h]
  int v187; // [rsp+BCh] [rbp-8Ch]
  __int64 v188; // [rsp+C0h] [rbp-88h]
  unsigned int v189; // [rsp+C8h] [rbp-80h]
  unsigned __int64 v190; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v191; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v192; // [rsp+E8h] [rbp-60h]
  __int64 *v193; // [rsp+F0h] [rbp-58h]
  __int64 v194; // [rsp+F0h] [rbp-58h]
  unsigned __int64 v195; // [rsp+F8h] [rbp-50h]
  _BYTE v196[4]; // [rsp+104h] [rbp-44h] BYREF
  unsigned __int64 v197; // [rsp+108h] [rbp-40h]

  v8 = 0;
  v10 = *(_QWORD *)(a2 + 8);
  v12 = *(unsigned int *)(a2 + 44);
  v197 = __readfsqword(0x28u);
  v150 = v10;
  if ( a4 < v10 + v12 )
    return v8;
  v14 = v10;
  v15 = a4 - v10;
  v16 = a4 - v10;
  if ( (unsigned int)v12 >= (int)a4 - (int)v10 )
  {
    v178 = a4 - v10;
  }
  else
  {
    v148 = a4;
    v17 = a2;
    for ( i = v12; ; v12 = i )
    {
      i += sub_FAFC0(v17, (_QWORD *)(v14 + v12), a5, v16, 3u, 0);
      if ( v16 <= i )
        break;
    }
    a4 = v148;
    v150 = *(_QWORD *)(a2 + 8);
    v178 = v148 - v150;
  }
  v19 = 4095;
  v20 = *(_QWORD *)(a2 + 112);
  v21 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 44) = v15;
  if ( *(_DWORD *)(a2 + 276) <= 0xFFFu )
    v19 = *(_DWORD *)(a2 + 276);
  v22 = *(_QWORD *)(a2 + 128);
  v151 = v19;
  v159 = v22;
  v23 = (unsigned int *)(v20 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(a2 + 264))));
  v24 = *v23;
  v25 = (1 << (*(_DWORD *)(a2 + 260) - 1)) - 1;
  v26 = *(unsigned int *)(a2 + 24);
  v183 = (__int64 *)(v150 + v26);
  v27 = 0;
  if ( v25 < v178 )
    v27 = v178 - v25;
  v160 = (1 << (*(_DWORD *)(a2 + 260) - 1)) - 1;
  v162 = v27;
  v28 = 1 << *(_DWORD *)(a2 + 256);
  v29 = v178 - v28;
  if ( v28 >= v178 - v21 )
    v29 = v21;
  if ( !*(_DWORD *)(a2 + 40) )
    v21 = v29;
  v30 = 1;
  if ( v21 )
    v30 = v21;
  v158 = v30;
  v156 = (unsigned int *)(v22 + 8LL * (v178 & v25) + 4);
  v166 = v178 + 9;
  v31 = *(_QWORD *)(a2 + 248);
  v154 = (unsigned int *)(v22 + 8LL * (v178 & v25));
  v32 = 1 << *(_DWORD *)(a2 + 268);
  v185 = v31;
  v165 = *(char **)v31;
  v33 = *(_QWORD *)v31 - *(_QWORD *)(v31 + 8);
  v177 = *(_QWORD *)(v31 + 8);
  v34 = v21 - v33;
  v189 = v33;
  v35 = *(_DWORD *)(v31 + 28);
  v186 = v21 - v33;
  v179 = v35;
  v187 = *(_DWORD *)(v31 + 264);
  LODWORD(v31) = (1 << (*(_DWORD *)(v31 + 260) - 1)) - 1;
  v36 = v33 - v31;
  v180 = v31;
  if ( (unsigned int)v31 >= (unsigned int)v33 - v35 )
    v36 = v35;
  v181 = v36;
  v149 = (unsigned int)(a8 - 1);
  if ( a7 <= 0xFFFFFFFC )
  {
    v37 = 0;
    v38 = v178 - v26;
    v184 = v21;
    v176 = v178 + v33 - v35 - v21;
    v39 = a6;
    v8 = 0;
    v40 = v26 - 1 - v178;
    v41 = v34;
    v42 = a4 + 3;
    v188 = v41;
    v190 = a5 - 7;
    v191 = a5 - 3;
    v192 = a5 - 1;
    while ( 1 )
    {
      v43 = a7 + v37;
      v44 = (_DWORD)v43 == 3 ? (unsigned int)(*v39 - 1) : (unsigned int)v39[v43];
      v45 = v178 - (unsigned int)v44;
      if ( (int)v44 - 1 < v38 )
        break;
      if ( (unsigned int)(v40 + v44) <= 2 || (int)v44 - 1 >= v176 )
        goto LABEL_109;
      v46 = v37 + 1;
      v80 = v177 + v45 - v188;
      if ( *(_DWORD *)v80 << 8 == *(_DWORD *)a4 << 8 )
      {
        v170 = v80 + 3;
        v81 = (unsigned __int64)&v165[a4 - v80];
        if ( a5 < v81 )
          v81 = a5;
        v195 = v81 - 7;
        if ( v42 >= v81 - 7 )
        {
          v82 = (__int64 *)(a4 + 3);
          v193 = (__int64 *)(v80 + 3);
          goto LABEL_94;
        }
        v129 = *(_QWORD *)(v80 + 3);
        v130 = *(_QWORD *)(a4 + 3);
        if ( v129 == v130 )
        {
          v82 = (__int64 *)(a4 + 11);
          v193 = (__int64 *)(v80 + 11);
          if ( v195 <= a4 + 11 )
            goto LABEL_94;
          v140 = *(_QWORD *)(v80 + 11);
          v141 = *(_QWORD *)(a4 + 11);
          if ( v140 == v141 )
          {
            while ( 1 )
            {
              ++v193;
              if ( v195 <= (unsigned __int64)++v82 )
                break;
              v141 = *v193;
              v140 = *v82;
              if ( *v193 != *v82 )
                goto LABEL_216;
            }
LABEL_94:
            if ( (unsigned __int64)v82 < v81 - 3 && *(_DWORD *)v193 == *(_DWORD *)v82 )
            {
              v193 = (__int64 *)((char *)v193 + 4);
              v82 = (__int64 *)((char *)v82 + 4);
            }
            if ( (unsigned __int64)v82 < v81 - 1 && *(_WORD *)v193 == *(_WORD *)v82 )
            {
              v193 = (__int64 *)((char *)v193 + 2);
              v82 = (__int64 *)((char *)v82 + 2);
            }
            if ( v81 > (unsigned __int64)v82 )
              v82 = (__int64 *)((char *)v82 + (*(_BYTE *)v193 == *(_BYTE *)v82));
            v83 = (char *)v82 - v42;
          }
          else
          {
LABEL_216:
            _RDX = v141 ^ v140;
            __asm { tzcnt   rdx, rdx }
            v83 = (char *)v82 + ((unsigned int)_RDX >> 3) - v42;
          }
        }
        else
        {
          _RDX = v130 ^ v129;
          __asm { tzcnt   rdx, rdx }
          v83 = (char *)((unsigned int)_RDX >> 3);
        }
        if ( v165 != &v83[v170] )
        {
LABEL_104:
          v52 = (_DWORD)v83 + 3;
LABEL_30:
          if ( v52 > v149 )
          {
            v53 = v8++;
            v54 = &a1[2 * v53];
            v46 = v37 + 1;
            *v54 = v37 + 1;
            v54[1] = v52;
            if ( a5 == a4 + v52 || v151 < v52 )
              return v8;
            v149 = v52;
            goto LABEL_34;
          }
LABEL_109:
          v46 = v37 + 1;
          goto LABEL_34;
        }
        v135 = &v83[v42];
        v136 = v183;
        v172 = &v83[v42];
        if ( (unsigned __int64)&v83[v42] >= v190 )
        {
          v144 = &v83[v42];
        }
        else
        {
          if ( *v183 != *(_QWORD *)v135 )
          {
            _RDX = *(_QWORD *)v135 ^ *v183;
            __asm { tzcnt   rdx, rdx }
            v139 = (unsigned int)_RDX >> 3;
LABEL_213:
            LODWORD(v83) = v139 + (_DWORD)v83;
            goto LABEL_104;
          }
          v144 = v172 + 8;
          v136 = v183 + 1;
          if ( v190 > (unsigned __int64)(v172 + 8) )
          {
            v194 = v183[1];
            v145 = *((_QWORD *)v172 + 1);
            if ( v145 != v194 )
            {
LABEL_233:
              _RCX = v194 ^ v145;
              __asm { tzcnt   rcx, rcx }
              v139 = (_DWORD)v144 + ((unsigned int)_RCX >> 3) - (_DWORD)v172;
              goto LABEL_213;
            }
            while ( 1 )
            {
              v144 += 8;
              ++v136;
              if ( v190 <= (unsigned __int64)v144 )
                break;
              v194 = *v136;
              v145 = *(_QWORD *)v144;
              if ( *v136 != *(_QWORD *)v144 )
                goto LABEL_233;
            }
          }
        }
        if ( (unsigned __int64)v144 < v191 && *(_DWORD *)v136 == *(_DWORD *)v144 )
        {
          v144 += 4;
          v136 = (__int64 *)((char *)v136 + 4);
        }
        if ( (unsigned __int64)v144 < v192 && *(_WORD *)v136 == *(_WORD *)v144 )
        {
          v144 += 2;
          v136 = (__int64 *)((char *)v136 + 2);
        }
        if ( a5 > (unsigned __int64)v144 )
          LODWORD(v144) = (*(_BYTE *)v136 == (unsigned __int8)*v144) + (_DWORD)v144;
        v139 = (_DWORD)v144 - (_DWORD)v172;
        goto LABEL_213;
      }
LABEL_34:
      v37 = v46;
      if ( v46 == 3 )
        goto LABEL_35;
    }
    v46 = v37 + 1;
    if ( *(_DWORD *)(a4 - v44) << 8 != *(_DWORD *)a4 << 8 || (unsigned int)v45 < v184 )
      goto LABEL_34;
    v47 = (_QWORD *)(a4 + 3 - v44);
    if ( v42 >= v190 )
    {
      v123 = (__int64 *)(a4 + 3);
    }
    else
    {
      v48 = *(_QWORD *)(a4 + 3);
      if ( *v47 != v48 )
      {
        _RDX = v48 ^ *v47;
        __asm { tzcnt   rdx, rdx }
        v51 = (unsigned int)_RDX >> 3;
LABEL_29:
        v52 = v51 + 3;
        goto LABEL_30;
      }
      v123 = (__int64 *)(a4 + 11);
      v124 = v47 + 1;
      if ( v190 > a4 + 11 )
      {
        v125 = v47[1];
        v126 = *(_QWORD *)(a4 + 11);
        if ( v125 != v126 )
        {
LABEL_198:
          _RCX = v126 ^ v125;
          __asm { tzcnt   rcx, rcx }
          v51 = ((unsigned int)_RCX >> 3) + (_DWORD)v123 - v42;
          goto LABEL_29;
        }
        while ( 1 )
        {
          ++v123;
          ++v124;
          if ( v190 <= (unsigned __int64)v123 )
            break;
          v125 = *v124;
          v126 = *v123;
          if ( *v124 != *v123 )
            goto LABEL_198;
        }
      }
      v47 = v124;
    }
    if ( (unsigned __int64)v123 < v191 && *(_DWORD *)v47 == *(_DWORD *)v123 )
    {
      v123 = (__int64 *)((char *)v123 + 4);
      v47 = (_QWORD *)((char *)v47 + 4);
    }
    if ( (unsigned __int64)v123 < v192 && *(_WORD *)v47 == *(_WORD *)v123 )
    {
      v123 = (__int64 *)((char *)v123 + 2);
      v47 = (_QWORD *)((char *)v47 + 2);
    }
    if ( a5 > (unsigned __int64)v123 )
      LODWORD(v123) = (*(_BYTE *)v47 == *(_BYTE *)v123) + (_DWORD)v123;
    v51 = (_DWORD)v123 - v42;
    goto LABEL_29;
  }
  v8 = 0;
LABEL_35:
  if ( v149 > 2 )
    goto LABEL_36;
  v171 = v23;
  v115 = sub_F80D0(a2, a3, (_DWORD *)a4);
  v23 = v171;
  v116 = v178 - v115;
  if ( v115 < v158 || v116 > 0x3FFFF )
    goto LABEL_36;
  v117 = a5 - 7;
  v73 = (_QWORD *)(v150 + v115);
  if ( a4 >= a5 - 7 )
  {
    v72 = (__int64 *)a4;
  }
  else
  {
    if ( *v73 != *(_QWORD *)a4 )
    {
      _RAX = *(_QWORD *)a4 ^ *v73;
      __asm { tzcnt   rax, rax }
      v74 = (unsigned int)_RAX >> 3;
      goto LABEL_74;
    }
    v72 = (__int64 *)(a4 + 8);
    v118 = v73 + 1;
    if ( v117 > a4 + 8 )
    {
      v119 = v73[1];
      v120 = *(_QWORD *)(a4 + 8);
      if ( v119 != v120 )
      {
LABEL_178:
        _RSI = v120 ^ v119;
        __asm { tzcnt   rcx, rsi }
        v74 = (unsigned __int64)v72 + ((unsigned int)_RCX >> 3) - a4;
        goto LABEL_74;
      }
      while ( 1 )
      {
        ++v72;
        ++v118;
        if ( v117 <= (unsigned __int64)v72 )
          break;
        v119 = *v118;
        v120 = *v72;
        if ( *v118 != *v72 )
          goto LABEL_178;
      }
    }
    v73 = v118;
  }
  if ( (unsigned __int64)v72 < a5 - 3 && *(_DWORD *)v73 == *(_DWORD *)v72 )
  {
    v72 = (__int64 *)((char *)v72 + 4);
    v73 = (_QWORD *)((char *)v73 + 4);
  }
  if ( (unsigned __int64)v72 < a5 - 1 && *(_WORD *)v73 == *(_WORD *)v72 )
  {
    v72 = (__int64 *)((char *)v72 + 2);
    v73 = (_QWORD *)((char *)v73 + 2);
  }
  if ( a5 > (unsigned __int64)v72 )
    v72 = (__int64 *)((char *)v72 + (*(_BYTE *)v73 == *(_BYTE *)v72));
  v74 = (unsigned __int64)v72 - a4;
LABEL_74:
  if ( v74 > 2 )
  {
    *a1 = v116 + 3;
    a1[1] = v74;
    if ( a5 == a4 + v74 || (v149 = v74, v8 = 1, v151 < v74) )
    {
      v8 = 1;
      *(_DWORD *)(a2 + 44) = v178 + 1;
      return v8;
    }
  }
LABEL_36:
  *v23 = v178;
  if ( !v32 || v24 < v158 )
  {
LABEL_82:
    *v156 = 0;
    *v154 = 0;
    if ( !v32 )
      goto LABEL_83;
    goto LABEL_113;
  }
  v55 = a5 - 7;
  v152 = (_BYTE *)a5;
  v169 = a5 - 3;
  v56 = 0;
  v57 = 0;
  v174 = a5 - 1;
  v58 = v178 + 9;
  while ( 1 )
  {
    v66 = v57;
    if ( v56 <= v57 )
      v66 = v56;
    v67 = v150 + v24;
    v68 = (unsigned int *)(v159 + 8LL * (v24 & v160));
    v69 = (_QWORD *)(a4 + v66);
    v70 = (_QWORD *)(v67 + v66);
    if ( a4 + v66 < v55 )
    {
      if ( *v70 != *v69 )
      {
        _RAX = *v69 ^ *v70;
        __asm { tzcnt   rax, rax }
        v61 = (unsigned int)_RAX >> 3;
        goto LABEL_41;
      }
      v71 = v69 + 1;
      v167 = v70 + 1;
      if ( (unsigned __int64)(v69 + 1) >= v55 )
      {
        ++v70;
      }
      else
      {
        v76 = v70[1];
        v77 = v69[1];
        if ( v77 != v76 )
        {
LABEL_86:
          _R8 = v76 ^ v77;
          __asm { tzcnt   r8, r8 }
          v61 = (char *)v71 + ((unsigned int)_R8 >> 3) - (char *)v69;
          goto LABEL_41;
        }
        v84 = v167;
        while ( 1 )
        {
          ++v71;
          ++v84;
          if ( (unsigned __int64)v71 >= v55 )
            break;
          v77 = *v84;
          v76 = *v71;
          if ( *v84 != *v71 )
          {
            v68 = (unsigned int *)(v159 + 8LL * (v24 & v160));
            goto LABEL_86;
          }
        }
        v70 = v84;
        v68 = (unsigned int *)(v159 + 8LL * (v24 & v160));
      }
    }
    else
    {
      v71 = (_QWORD *)(a4 + v66);
    }
    if ( (unsigned __int64)v71 < v169 && *(_DWORD *)v70 == *(_DWORD *)v71 )
    {
      v71 = (_QWORD *)((char *)v71 + 4);
      v70 = (_QWORD *)((char *)v70 + 4);
    }
    if ( (unsigned __int64)v71 < v174 && *(_WORD *)v70 == *(_WORD *)v71 )
    {
      v71 = (_QWORD *)((char *)v71 + 2);
      v70 = (_QWORD *)((char *)v70 + 2);
    }
    if ( v152 > (_BYTE *)v71 )
      v71 = (_QWORD *)((char *)v71 + (*(_BYTE *)v70 == *(_BYTE *)v71));
    v61 = (char *)v71 - (char *)v69;
LABEL_41:
    v62 = v61 + v66;
    v63 = (_BYTE *)(a4 + v62);
    if ( v62 <= v149 )
      goto LABEL_47;
    if ( v62 > v58 - v24 )
      v58 = v24 + v62;
    v64 = v8++;
    v65 = &a1[2 * v64];
    v65[1] = v62;
    *v65 = v178 + 3 - v24;
    if ( v62 > 0x1000 || v152 == v63 )
      break;
    v149 = v62;
LABEL_47:
    if ( *(_BYTE *)(v67 + v62) < *v63 )
    {
      *v154 = v24;
      if ( v162 < v24 )
      {
        v24 = v68[1];
        v57 = v62;
        v154 = v68 + 1;
        if ( !--v32 )
          goto LABEL_81;
        goto LABEL_50;
      }
      v166 = v58;
      a5 = (unsigned __int64)v152;
      v154 = (unsigned int *)v196;
      goto LABEL_112;
    }
    *v156 = v24;
    if ( v162 >= v24 )
    {
      v166 = v58;
      a5 = (unsigned __int64)v152;
      v156 = (unsigned int *)v196;
LABEL_112:
      *v156 = 0;
      *v154 = 0;
LABEL_113:
      v85 = *(_DWORD *)(*(_QWORD *)(v185 + 112) + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - v187)));
      v157 = *(_QWORD *)(v185 + 128);
      if ( v179 >= v85 )
        goto LABEL_83;
      v155 = v8;
      v86 = 0;
      v161 = v32;
      v87 = 0;
      v175 = a5 - 7;
      while ( 1 )
      {
        v95 = v86;
        if ( v87 <= v86 )
          v95 = v87;
        v153 = (unsigned int *)(v157 + 8LL * (v85 & v180));
        v96 = (_QWORD *)(a4 + v95);
        v92 = v177 + v85;
        v97 = (_QWORD *)(v92 + v95);
        v98 = (unsigned __int64)&v165[a4 - v92];
        if ( a5 < v98 )
          v98 = a5;
        v99 = v98 - 7;
        if ( (unsigned __int64)v96 < v98 - 7 )
        {
          if ( *v97 != *v96 )
          {
            _R10 = *v96 ^ *v97;
            __asm { tzcnt   r10, r10 }
            v90 = (unsigned int)_R10 >> 3;
            goto LABEL_117;
          }
          v101 = v96 + 1;
          v100 = v97 + 1;
          if ( v99 > (unsigned __int64)(v96 + 1) )
          {
            v163 = v97[1];
            v106 = v96[1];
            if ( v163 != v106 )
            {
              _RAX = v163 ^ v106;
LABEL_154:
              __asm { tzcnt   rax, rax }
              v90 = (char *)v101 + ((unsigned int)_RAX >> 3) - (char *)v96;
LABEL_117:
              if ( v165 != (char *)v97 + v90 )
                goto LABEL_118;
LABEL_146:
              v102 = (_QWORD *)((char *)v96 + v90);
              if ( (unsigned __int64)v102 >= v175 )
              {
                v109 = v183;
                v110 = v102;
              }
              else
              {
                if ( *v183 != *v102 )
                {
                  _RAX = *v102 ^ *v183;
                  __asm { tzcnt   rax, rax }
                  v105 = (unsigned int)_RAX >> 3;
LABEL_149:
                  v90 += v105;
                  goto LABEL_118;
                }
                v110 = v102 + 1;
                v109 = v183 + 1;
                if ( v175 > (unsigned __int64)(v102 + 1) )
                {
                  v111 = v102[1];
                  v112 = v183[1];
                  if ( v112 != v111 )
                  {
LABEL_171:
                    _RDX = v111 ^ v112;
                    __asm { tzcnt   rdx, rdx }
                    v105 = (char *)v110 + ((unsigned int)_RDX >> 3) - (char *)v102;
                    goto LABEL_149;
                  }
                  while ( 1 )
                  {
                    ++v110;
                    ++v109;
                    if ( v175 <= (unsigned __int64)v110 )
                      break;
                    v112 = *v109;
                    v111 = *v110;
                    if ( *v109 != *v110 )
                      goto LABEL_171;
                  }
                }
              }
              if ( (unsigned __int64)v110 < a5 - 3 && *(_DWORD *)v109 == *(_DWORD *)v110 )
              {
                v110 = (_QWORD *)((char *)v110 + 4);
                v109 = (__int64 *)((char *)v109 + 4);
              }
              if ( (unsigned __int64)v110 < a5 - 1 && *(_WORD *)v109 == *(_WORD *)v110 )
              {
                v110 = (_QWORD *)((char *)v110 + 2);
                v109 = (__int64 *)((char *)v109 + 2);
              }
              if ( a5 > (unsigned __int64)v110 )
                v110 = (_QWORD *)((char *)v110 + (*(_BYTE *)v109 == *(_BYTE *)v110));
              v105 = (char *)v110 - (char *)v102;
              goto LABEL_149;
            }
            while ( 1 )
            {
              ++v101;
              ++v100;
              if ( v99 <= (unsigned __int64)v101 )
                break;
              if ( *v100 != *v101 )
              {
                _RAX = *v101 ^ *v100;
                goto LABEL_154;
              }
            }
          }
        }
        else
        {
          v100 = (_QWORD *)(v177 + v85 + v95);
          v101 = (_QWORD *)(a4 + v95);
        }
        if ( (unsigned __int64)v101 < v98 - 3 && *(_DWORD *)v100 == *(_DWORD *)v101 )
        {
          v101 = (_QWORD *)((char *)v101 + 4);
          v100 = (_QWORD *)((char *)v100 + 4);
        }
        if ( (unsigned __int64)v101 < v98 - 1 && *(_WORD *)v100 == *(_WORD *)v101 )
        {
          v101 = (_QWORD *)((char *)v101 + 2);
          v100 = (_QWORD *)((char *)v100 + 2);
        }
        if ( v98 > (unsigned __int64)v101 )
          v101 = (_QWORD *)((char *)v101 + (*(_BYTE *)v100 == *(_BYTE *)v101));
        v90 = (char *)v101 - (char *)v96;
        if ( v165 == (char *)v97 + v90 )
          goto LABEL_146;
LABEL_118:
        v91 = v95 + v90;
        if ( v85 + v91 >= v189 )
          v92 = v150 + v186 + (unsigned __int64)v85;
        if ( v91 > v149 )
        {
          v93 = v85 + v186 + v91;
          if ( v91 <= v166 - (v85 + v186) )
            v93 = v166;
          v166 = v93;
          v94 = &a1[2 * v155];
          v94[1] = v91;
          ++v155;
          *v94 = v178 + 3 - (v85 + v186);
          if ( a5 == a4 + v91 || v91 > 0x1000 )
          {
LABEL_165:
            v8 = v155;
            goto LABEL_83;
          }
          v149 = v91;
        }
        if ( v181 < v85 )
        {
          if ( *(_BYTE *)(v92 + v91) >= *(_BYTE *)(a4 + v91) )
          {
            v85 = *v153;
            v86 = v91;
          }
          else
          {
            v85 = v153[1];
            v87 = v91;
          }
          if ( --v161 )
          {
            if ( v179 < v85 )
              continue;
          }
        }
        goto LABEL_165;
      }
    }
    v24 = *v68;
    v156 = v68;
    v56 = v62;
    if ( !--v32 )
    {
LABEL_81:
      v166 = v58;
      a5 = (unsigned __int64)v152;
      goto LABEL_82;
    }
LABEL_50:
    if ( v158 > v24 )
      goto LABEL_81;
  }
  v166 = v58;
  *v156 = 0;
  *v154 = 0;
LABEL_83:
  *(_DWORD *)(a2 + 44) = v166 - 8;
  return v8;
}

