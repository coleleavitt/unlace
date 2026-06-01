__int64 __fastcall sub_961760(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v13; // ebx
  unsigned int v14; // ebp
  unsigned int i; // ebx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r11d
  unsigned int *v19; // r10
  unsigned int v20; // ebx
  unsigned int v21; // edi
  unsigned __int64 v22; // r12
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  _DWORD *v28; // r10
  int v29; // eax
  unsigned __int64 v30; // r8
  unsigned int v31; // r11d
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rsi
  _DWORD *v43; // rdi
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r10
  bool v46; // zf
  unsigned __int64 v47; // rcx
  unsigned int *v48; // r8
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  _QWORD *v51; // rax
  signed __int64 v54; // r12
  unsigned __int64 v55; // rcx
  _BYTE *v56; // rax
  unsigned int v57; // edx
  _DWORD *v58; // rdx
  _QWORD *v60; // r12
  _QWORD *v61; // rbp
  unsigned __int64 v62; // r9
  signed __int64 v65; // r12
  _QWORD *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // r9
  _QWORD *v71; // r12
  _QWORD *v72; // rdx
  signed __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  __int64 *v78; // rdi
  char *v79; // rsi
  __int64 v80; // r14
  _DWORD *v83; // rbp
  _DWORD *v84; // rax
  _QWORD *v85; // r9
  __int64 v86; // r9
  __int64 v87; // r14
  unsigned int v90; // eax
  unsigned int v91; // edi
  unsigned __int64 v92; // rdx
  _QWORD *v93; // rsi
  __int64 *v94; // rcx
  unsigned __int64 v95; // rcx
  __int64 *v96; // rdx
  _QWORD *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v102; // rdx
  __int64 v103; // rdi
  _QWORD *v108; // r11
  unsigned __int64 v109; // rsi
  unsigned __int64 v110; // r9
  _QWORD *v113; // r11
  unsigned __int64 v114; // r9
  signed __int64 v117; // rsi
  char *v118; // rdi
  __int64 *v119; // rdx
  unsigned int v122; // edx
  __int64 v123; // rcx
  __int64 v124; // rdx
  _QWORD *v127; // r8
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 *v132; // r8
  __int64 *v133; // rcx
  char *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v139; // rcx
  __int64 *v142; // r8
  _QWORD *v143; // rsi
  __int64 v144; // rdx
  __int64 v145; // rax
  int v148; // [rsp+8h] [rbp-110h]
  unsigned __int64 v149; // [rsp+8h] [rbp-110h]
  unsigned __int64 v150; // [rsp+10h] [rbp-108h]
  __int64 v151; // [rsp+18h] [rbp-100h]
  unsigned int v152; // [rsp+20h] [rbp-F8h]
  unsigned int v153; // [rsp+24h] [rbp-F4h]
  int v154; // [rsp+24h] [rbp-F4h]
  _DWORD *v155; // [rsp+28h] [rbp-F0h]
  unsigned int *v156; // [rsp+30h] [rbp-E8h]
  unsigned int v157; // [rsp+38h] [rbp-E0h]
  unsigned int v158; // [rsp+3Ch] [rbp-DCh]
  unsigned __int64 v160; // [rsp+40h] [rbp-D8h]
  __int64 v161; // [rsp+40h] [rbp-D8h]
  unsigned int *v162; // [rsp+40h] [rbp-D8h]
  char *v163; // [rsp+40h] [rbp-D8h]
  __int64 v164; // [rsp+48h] [rbp-D0h]
  unsigned int v165; // [rsp+50h] [rbp-C8h]
  unsigned int v166; // [rsp+54h] [rbp-C4h]
  char *v167; // [rsp+58h] [rbp-C0h]
  int v169; // [rsp+68h] [rbp-B0h]
  _DWORD *v170; // [rsp+68h] [rbp-B0h]
  unsigned int v172; // [rsp+70h] [rbp-A8h]
  unsigned int v173; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v174; // [rsp+78h] [rbp-A0h]
  unsigned int v175; // [rsp+80h] [rbp-98h]
  unsigned __int64 v176; // [rsp+80h] [rbp-98h]
  __int64 v177; // [rsp+88h] [rbp-90h]
  unsigned __int64 v178; // [rsp+90h] [rbp-88h]
  unsigned __int64 v179; // [rsp+90h] [rbp-88h]
  _QWORD *v180; // [rsp+98h] [rbp-80h]
  unsigned int *v181; // [rsp+A0h] [rbp-78h]
  __int64 v182; // [rsp+A0h] [rbp-78h]
  __int64 v183; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v184; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v185; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v186; // [rsp+B8h] [rbp-60h]
  __int64 *v187; // [rsp+C0h] [rbp-58h]
  __int64 v188; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v189; // [rsp+C8h] [rbp-50h]
  _BYTE v190[4]; // [rsp+D4h] [rbp-44h] BYREF
  unsigned __int64 v191; // [rsp+D8h] [rbp-40h]

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(unsigned int *)(a2 + 44);
  v191 = __readfsqword(0x28u);
  v151 = v9;
  v152 = 0;
  if ( a4 < v9 + v10 )
    return v152;
  v13 = a4 - v9;
  v14 = a4 - v9;
  if ( (unsigned int)v10 < (int)a4 - (int)v9 )
  {
    v148 = a4 - v9;
    for ( i = v10; ; v10 = i )
    {
      i += sub_95C920(v8, (_QWORD *)(v9 + v10), a5, v14, 3u, 1);
      if ( v14 <= i )
        break;
    }
    v13 = v148;
    v151 = *(_QWORD *)(v8 + 8);
    v14 = a4 - v151;
  }
  v16 = 4095;
  *(_DWORD *)(v8 + 44) = v13;
  v17 = *(_QWORD *)(v8 + 112);
  v18 = *(_DWORD *)(v8 + 28);
  if ( *(_DWORD *)(v8 + 276) <= 0xFFFu )
    v16 = *(_DWORD *)(v8 + 276);
  v153 = v16;
  v164 = *(_QWORD *)(v8 + 128);
  v19 = (unsigned int *)(v17 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(v8 + 264))));
  v20 = *v19;
  v21 = (1 << (*(_DWORD *)(v8 + 260) - 1)) - 1;
  v22 = *(unsigned int *)(v8 + 24);
  v150 = v22;
  v177 = *(_QWORD *)(v8 + 16);
  v167 = (char *)(v22 + v177);
  v165 = v21;
  v180 = (_QWORD *)(v22 + v151);
  v23 = 0;
  if ( v21 < v14 )
    v23 = v14 - v21;
  v166 = v23;
  v24 = 1 << *(_DWORD *)(v8 + 256);
  v25 = v14 - v24;
  if ( v24 >= v14 - v18 )
    v25 = *(_DWORD *)(v8 + 28);
  if ( !*(_DWORD *)(v8 + 40) )
    v18 = v25;
  v26 = 1;
  if ( v18 )
    v26 = v18;
  v169 = 1 << *(_DWORD *)(v8 + 268);
  v158 = v26;
  v27 = *(_QWORD *)(v8 + 128) + 8LL * (v14 & v21);
  v156 = (unsigned int *)(v27 + 4);
  v157 = v14 + 9;
  v155 = (_DWORD *)v27;
  v149 = (unsigned int)(a8 - 1);
  if ( a7 > 0xFFFFFFFC )
  {
    v152 = 0;
    goto LABEL_34;
  }
  v181 = (unsigned int *)(v17 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a4) >> (32 - *(_BYTE *)(v8 + 264))));
  v173 = v14 - v18;
  v28 = a6;
  v29 = 0;
  v178 = a5 - 7;
  v30 = a4 + 3;
  v184 = a5 - 3;
  v186 = a5 - 1;
  v175 = v18;
  v31 = 0;
  do
  {
    v32 = a7 + v29;
    if ( (_DWORD)v32 == 3 )
      v33 = (unsigned int)(*v28 - 1);
    else
      v33 = (unsigned int)v28[v32];
    v34 = v14 - (unsigned int)v33;
    if ( (int)v33 - 1 >= v14 - (unsigned int)v22 )
    {
      if ( (_DWORD)v22 - 1 - v14 + (unsigned int)v33 <= 2 || (int)v33 - 1 >= v173 )
      {
LABEL_118:
        v35 = v29 + 1;
        goto LABEL_32;
      }
      v76 = v177 + v34;
      v35 = v29 + 1;
      if ( *(_DWORD *)v76 << 8 != *(_DWORD *)a4 << 8 )
        goto LABEL_32;
      v161 = v76 + 3;
      v77 = (unsigned __int64)&v167[a4 - v76];
      if ( a5 < v77 )
        v77 = a5;
      v189 = v77 - 7;
      if ( v30 < v77 - 7 )
      {
        v102 = *(_QWORD *)(v76 + 3);
        v103 = *(_QWORD *)(a4 + 3);
        if ( v102 != v103 )
        {
          _RDX = v103 ^ v102;
          __asm { tzcnt   rdx, rdx }
          v79 = (char *)((unsigned int)_RDX >> 3);
          goto LABEL_112;
        }
        v78 = (__int64 *)(a4 + 11);
        v187 = (__int64 *)(v76 + 11);
        if ( v189 > a4 + 11 )
        {
          v123 = *(_QWORD *)(v76 + 11);
          v124 = *(_QWORD *)(a4 + 11);
          if ( v124 != v123 )
          {
LABEL_203:
            _RDX = v123 ^ v124;
            __asm { tzcnt   rdx, rdx }
            v79 = (char *)v78 + ((unsigned int)_RDX >> 3) - v30;
            goto LABEL_112;
          }
          while ( 1 )
          {
            ++v187;
            if ( v189 <= (unsigned __int64)++v78 )
              break;
            v123 = *v187;
            v124 = *v78;
            if ( *v187 != *v78 )
              goto LABEL_203;
          }
        }
      }
      else
      {
        v187 = (__int64 *)(v76 + 3);
        v78 = (__int64 *)(a4 + 3);
      }
      if ( (unsigned __int64)v78 < v77 - 3 && *(_DWORD *)v187 == *(_DWORD *)v78 )
      {
        v187 = (__int64 *)((char *)v187 + 4);
        v78 = (__int64 *)((char *)v78 + 4);
      }
      if ( (unsigned __int64)v78 < v77 - 1 && *(_WORD *)v187 == *(_WORD *)v78 )
      {
        v187 = (__int64 *)((char *)v187 + 2);
        v78 = (__int64 *)((char *)v78 + 2);
      }
      if ( v77 > (unsigned __int64)v78 )
        v78 = (__int64 *)((char *)v78 + (*(_BYTE *)v187 == *(_BYTE *)v78));
      v79 = (char *)v78 - v30;
LABEL_112:
      if ( v167 != &v79[v161] )
      {
LABEL_113:
        v41 = (_DWORD)v79 + 3;
        goto LABEL_28;
      }
      v118 = &v79[v30];
      v119 = (__int64 *)(v22 + v151);
      v163 = &v79[v30];
      if ( (unsigned __int64)&v79[v30] >= v178 )
      {
        v134 = &v79[v30];
      }
      else
      {
        if ( *v180 != *(_QWORD *)v118 )
        {
          _RDX = *(_QWORD *)v118 ^ *v180;
          __asm { tzcnt   rdx, rdx }
          v122 = (unsigned int)_RDX >> 3;
LABEL_200:
          LODWORD(v79) = v122 + (_DWORD)v79;
          goto LABEL_113;
        }
        v134 = v163 + 8;
        v119 = v180 + 1;
        if ( v178 > (unsigned __int64)(v163 + 8) )
        {
          v188 = v180[1];
          v139 = *((_QWORD *)v163 + 1);
          if ( v139 != v188 )
          {
LABEL_242:
            _RCX = v188 ^ v139;
            __asm { tzcnt   rcx, rcx }
            v122 = (_DWORD)v134 + ((unsigned int)_RCX >> 3) - (_DWORD)v163;
            goto LABEL_200;
          }
          while ( 1 )
          {
            v134 += 8;
            ++v119;
            if ( v178 <= (unsigned __int64)v134 )
              break;
            v188 = *v119;
            v139 = *(_QWORD *)v134;
            if ( *v119 != *(_QWORD *)v134 )
              goto LABEL_242;
          }
        }
      }
      if ( (unsigned __int64)v134 < v184 && *(_DWORD *)v119 == *(_DWORD *)v134 )
      {
        v134 += 4;
        v119 = (__int64 *)((char *)v119 + 4);
      }
      if ( (unsigned __int64)v134 < v186 && *(_WORD *)v119 == *(_WORD *)v134 )
      {
        v134 += 2;
        v119 = (__int64 *)((char *)v119 + 2);
      }
      if ( a5 > (unsigned __int64)v134 )
        LODWORD(v134) = (*(_BYTE *)v119 == (unsigned __int8)*v134) + (_DWORD)v134;
      v122 = (_DWORD)v134 - (_DWORD)v163;
      goto LABEL_200;
    }
    v35 = v29 + 1;
    if ( *(_DWORD *)(a4 - v33) << 8 != *(_DWORD *)a4 << 8 || (unsigned int)v34 < v175 )
      goto LABEL_32;
    v36 = (_QWORD *)(a4 + 3 - v33);
    if ( v30 >= v178 )
    {
      v96 = (__int64 *)(a4 + 3);
      goto LABEL_157;
    }
    v37 = *(_QWORD *)(a4 + 3);
    if ( *v36 == v37 )
    {
      v96 = (__int64 *)(a4 + 11);
      v97 = v36 + 1;
      if ( v178 <= a4 + 11 )
        goto LABEL_246;
      v98 = v36[1];
      v99 = *(_QWORD *)(a4 + 11);
      if ( v98 == v99 )
      {
        while ( 1 )
        {
          ++v96;
          ++v97;
          if ( v178 <= (unsigned __int64)v96 )
            break;
          v98 = *v97;
          v99 = *v96;
          if ( *v97 != *v96 )
            goto LABEL_171;
        }
LABEL_246:
        v36 = v97;
LABEL_157:
        if ( (unsigned __int64)v96 < v184 && *(_DWORD *)v36 == *(_DWORD *)v96 )
        {
          v96 = (__int64 *)((char *)v96 + 4);
          v36 = (_QWORD *)((char *)v36 + 4);
        }
        if ( (unsigned __int64)v96 < v186 && *(_WORD *)v36 == *(_WORD *)v96 )
        {
          v96 = (__int64 *)((char *)v96 + 2);
          v36 = (_QWORD *)((char *)v36 + 2);
        }
        if ( a5 > (unsigned __int64)v96 )
          LODWORD(v96) = (*(_BYTE *)v36 == *(_BYTE *)v96) + (_DWORD)v96;
        v40 = (_DWORD)v96 - v30;
        goto LABEL_27;
      }
LABEL_171:
      _RCX = v99 ^ v98;
      __asm { tzcnt   rcx, rcx }
      v40 = ((unsigned int)_RCX >> 3) + (_DWORD)v96 - v30;
    }
    else
    {
      _RDX = v37 ^ *v36;
      __asm { tzcnt   rdx, rdx }
      v40 = (unsigned int)_RDX >> 3;
    }
LABEL_27:
    v41 = v40 + 3;
LABEL_28:
    if ( v41 <= v149 )
      goto LABEL_118;
    v42 = v31++;
    v43 = &a1[2 * v42];
    v35 = v29 + 1;
    *v43 = v29 + 1;
    v43[1] = v41;
    if ( a5 == a4 + v41 || v153 < v41 )
      return v31;
    v149 = v41;
LABEL_32:
    v29 = v35;
  }
  while ( v35 != 3 );
  v152 = v31;
  v19 = v181;
LABEL_34:
  if ( v149 > 2 )
    goto LABEL_35;
  v162 = v19;
  v90 = sub_959A30(v8, a3, (_DWORD *)a4);
  v19 = v162;
  v91 = v14 - v90;
  if ( v90 < v158 || v91 > 0x3FFFF )
    goto LABEL_35;
  if ( (unsigned int)v22 > v90 )
  {
    v108 = (_QWORD *)(v177 + v90);
    v109 = a4 + v22 - v90;
    if ( a5 < v109 )
      v109 = a5;
    v110 = v109 - 7;
    if ( a4 >= v109 - 7 )
    {
      v132 = (__int64 *)(v177 + v90);
      v133 = (__int64 *)a4;
    }
    else
    {
      if ( *v108 != *(_QWORD *)a4 )
      {
        _RAX = *(_QWORD *)a4 ^ *v108;
        __asm { tzcnt   rcx, rax }
        v95 = (unsigned int)_RCX >> 3;
        goto LABEL_192;
      }
      v133 = (__int64 *)(a4 + 8);
      v132 = v108 + 1;
      if ( v110 > a4 + 8 )
      {
        v135 = v108[1];
        v136 = *(_QWORD *)(a4 + 8);
        if ( v135 != v136 )
        {
LABEL_236:
          _RAX = v136 ^ v135;
          __asm { tzcnt   rax, rax }
          v95 = (unsigned __int64)v133 + ((unsigned int)_RAX >> 3) - a4;
          goto LABEL_192;
        }
        while ( 1 )
        {
          ++v133;
          ++v132;
          if ( v110 <= (unsigned __int64)v133 )
            break;
          v135 = *v132;
          v136 = *v133;
          if ( *v132 != *v133 )
            goto LABEL_236;
        }
      }
    }
    if ( (unsigned __int64)v133 < v109 - 3 && *(_DWORD *)v132 == *(_DWORD *)v133 )
    {
      v133 = (__int64 *)((char *)v133 + 4);
      v132 = (__int64 *)((char *)v132 + 4);
    }
    if ( (unsigned __int64)v133 < v109 - 1 && *(_WORD *)v132 == *(_WORD *)v133 )
    {
      v133 = (__int64 *)((char *)v133 + 2);
      v132 = (__int64 *)((char *)v132 + 2);
    }
    if ( v109 > (unsigned __int64)v133 )
      v133 = (__int64 *)((char *)v133 + (*(_BYTE *)v132 == *(_BYTE *)v133));
    v95 = (unsigned __int64)v133 - a4;
LABEL_192:
    if ( v167 != (char *)v108 + v95 )
      goto LABEL_180;
    v113 = (_QWORD *)(a4 + v95);
    v114 = a5 - 7;
    if ( a4 + v95 >= a5 - 7 )
    {
      v142 = (__int64 *)(v22 + v151);
      v143 = (_QWORD *)(a4 + v95);
    }
    else
    {
      if ( *v180 != *v113 )
      {
        _RAX = *v113 ^ *v180;
        __asm { tzcnt   rsi, rax }
        v117 = (unsigned int)_RSI >> 3;
LABEL_196:
        v95 += v117;
        goto LABEL_180;
      }
      v143 = v113 + 1;
      v142 = v180 + 1;
      if ( v114 > (unsigned __int64)(v113 + 1) )
      {
        v144 = v113[1];
        v145 = v180[1];
        if ( v145 != v144 )
        {
LABEL_260:
          _RAX = v144 ^ v145;
          __asm { tzcnt   rax, rax }
          v117 = (char *)v143 + ((unsigned int)_RAX >> 3) - (char *)v113;
          goto LABEL_196;
        }
        while ( 1 )
        {
          ++v143;
          ++v142;
          if ( v114 <= (unsigned __int64)v143 )
            break;
          v145 = *v142;
          v144 = *v143;
          if ( *v142 != *v143 )
            goto LABEL_260;
        }
      }
    }
    if ( (unsigned __int64)v143 < a5 - 3 && *(_DWORD *)v142 == *(_DWORD *)v143 )
    {
      v143 = (_QWORD *)((char *)v143 + 4);
      v142 = (__int64 *)((char *)v142 + 4);
    }
    if ( (unsigned __int64)v143 < a5 - 1 && *(_WORD *)v142 == *(_WORD *)v143 )
    {
      v143 = (_QWORD *)((char *)v143 + 2);
      v142 = (__int64 *)((char *)v142 + 2);
    }
    if ( a5 > (unsigned __int64)v143 )
      v143 = (_QWORD *)((char *)v143 + (*(_BYTE *)v142 == *(_BYTE *)v143));
    v117 = (char *)v143 - (char *)v113;
    goto LABEL_196;
  }
  v92 = a5 - 7;
  v93 = (_QWORD *)(v151 + v90);
  if ( a4 < a5 - 7 )
  {
    if ( *v93 != *(_QWORD *)a4 )
    {
      _RCX = *v93 ^ *(_QWORD *)a4;
      __asm { tzcnt   rcx, rcx }
      v95 = (unsigned int)_RCX >> 3;
      goto LABEL_180;
    }
    v94 = (__int64 *)(a4 + 8);
    v127 = v93 + 1;
    if ( v92 > a4 + 8 )
    {
      v128 = v93[1];
      v129 = *(_QWORD *)(a4 + 8);
      if ( v129 != v128 )
      {
LABEL_210:
        _RAX = v128 ^ v129;
        __asm { tzcnt   rax, rax }
        v95 = (unsigned __int64)v94 + ((unsigned int)_RAX >> 3) - a4;
        goto LABEL_180;
      }
      while ( 1 )
      {
        ++v94;
        ++v127;
        if ( v92 <= (unsigned __int64)v94 )
          break;
        v129 = *v127;
        v128 = *v94;
        if ( *v127 != *v94 )
          goto LABEL_210;
      }
    }
    v93 = v127;
    goto LABEL_146;
  }
  v94 = (__int64 *)a4;
LABEL_146:
  if ( (unsigned __int64)v94 < a5 - 3 && *(_DWORD *)v93 == *(_DWORD *)v94 )
  {
    v94 = (__int64 *)((char *)v94 + 4);
    v93 = (_QWORD *)((char *)v93 + 4);
  }
  if ( (unsigned __int64)v94 < a5 - 1 && *(_WORD *)v93 == *(_WORD *)v94 )
  {
    v94 = (__int64 *)((char *)v94 + 2);
    v93 = (_QWORD *)((char *)v93 + 2);
  }
  if ( a5 > (unsigned __int64)v94 )
    v94 = (__int64 *)((char *)v94 + (*(_BYTE *)v93 == *(_BYTE *)v94));
  v95 = (unsigned __int64)v94 - a4;
LABEL_180:
  if ( v95 > 2 )
  {
    *a1 = v91 + 3;
    a1[1] = v95;
    if ( a5 == a4 + v95 || (v149 = v95, v152 = 1, v95 > v153) )
    {
      v152 = 1;
      *(_DWORD *)(v8 + 44) = v14 + 1;
      return v152;
    }
  }
LABEL_35:
  *v19 = v14;
  if ( v20 >= v158 && v169 )
  {
    v44 = 0;
    v45 = 0;
    v154 = v169;
    v160 = a5 - 7;
    v174 = a5 - 3;
    v176 = a5 - 1;
    v172 = v14 + 3;
    v183 = v8;
    while ( 1 )
    {
      v47 = v44;
      if ( v45 <= v44 )
        v47 = v45;
      v48 = (unsigned int *)(v164 + 8LL * (v20 & v165));
      v49 = (_QWORD *)(a4 + v47);
      if ( v150 <= v47 + v20 )
      {
        v50 = v151 + v20;
        v51 = (_QWORD *)(v50 + v47);
        if ( v160 <= (unsigned __int64)v49 )
        {
          v60 = (_QWORD *)(a4 + v47);
        }
        else
        {
          if ( *v51 != *v49 )
          {
            _RSI = *v49 ^ *v51;
            __asm { tzcnt   r12, rsi }
            v54 = (unsigned int)_R12 >> 3;
LABEL_47:
            v55 = v54 + v47;
            goto LABEL_48;
          }
          v60 = v49 + 1;
          v66 = v51 + 1;
          if ( v160 > (unsigned __int64)(v49 + 1) )
          {
            v67 = v51[1];
            v68 = v49[1];
            if ( v67 != v68 )
            {
LABEL_81:
              _RAX = v68 ^ v67;
              __asm { tzcnt   rax, rax }
              v54 = (char *)v60 + ((unsigned int)_RAX >> 3) - (char *)v49;
              goto LABEL_47;
            }
            while ( 1 )
            {
              ++v60;
              ++v66;
              if ( v160 <= (unsigned __int64)v60 )
                break;
              v67 = *v66;
              v68 = *v60;
              if ( *v66 != *v60 )
                goto LABEL_81;
            }
          }
          v51 = v66;
        }
        if ( (unsigned __int64)v60 < v174 && *(_DWORD *)v51 == *(_DWORD *)v60 )
        {
          v60 = (_QWORD *)((char *)v60 + 4);
          v51 = (_QWORD *)((char *)v51 + 4);
        }
        if ( (unsigned __int64)v60 < v176 && *(_WORD *)v51 == *(_WORD *)v60 )
        {
          v60 = (_QWORD *)((char *)v60 + 2);
          v51 = (_QWORD *)((char *)v51 + 2);
        }
        if ( a5 > (unsigned __int64)v60 )
          v60 = (_QWORD *)((char *)v60 + (*(_BYTE *)v51 == *(_BYTE *)v60));
        v54 = (char *)v60 - (char *)v49;
        goto LABEL_47;
      }
      v50 = v177 + v20;
      v61 = (_QWORD *)(v50 + v47);
      v62 = (unsigned __int64)&v167[a4 - v50];
      if ( a5 < v62 )
        v62 = a5;
      v179 = v62 - 7;
      if ( v62 - 7 <= (unsigned __int64)v49 )
        break;
      if ( *v61 == *v49 )
      {
        v71 = v49 + 1;
        v170 = v61 + 1;
        if ( v179 <= (unsigned __int64)(v49 + 1) )
          goto LABEL_83;
        v182 = v61[1];
        v80 = v49[1];
        if ( v182 == v80 )
        {
          v185 = v62;
          v85 = v61 + 1;
          while ( 1 )
          {
            ++v71;
            ++v85;
            if ( v179 <= (unsigned __int64)v71 )
              break;
            if ( *v85 != *v71 )
            {
              v49 = (_QWORD *)(a4 + v47);
              _RAX = *v71 ^ *v85;
              goto LABEL_117;
            }
          }
          v170 = v85;
          v49 = (_QWORD *)(a4 + v47);
          v62 = v185;
LABEL_83:
          if ( (unsigned __int64)v71 < v62 - 3 && *v170 == *(_DWORD *)v71 )
          {
            ++v170;
            v71 = (_QWORD *)((char *)v71 + 4);
          }
          if ( (unsigned __int64)v71 < v62 - 1 && *(_WORD *)v170 == *(_WORD *)v71 )
          {
            v170 = (_DWORD *)((char *)v170 + 2);
            v71 = (_QWORD *)((char *)v71 + 2);
          }
          if ( v62 > (unsigned __int64)v71 )
            v71 = (_QWORD *)((char *)v71 + (*(_BYTE *)v170 == *(_BYTE *)v71));
          v65 = (char *)v71 - (char *)v49;
          if ( v167 != (char *)v61 + v65 )
            goto LABEL_76;
          goto LABEL_92;
        }
        _RAX = v80 ^ v182;
LABEL_117:
        __asm { tzcnt   rax, rax }
        v65 = (char *)v71 + ((unsigned int)_RAX >> 3) - (char *)v49;
      }
      else
      {
        _R12 = *v49 ^ *v61;
        __asm { tzcnt   r12, r12 }
        v65 = (unsigned int)_R12 >> 3;
      }
      if ( v167 != (char *)v61 + v65 )
        goto LABEL_76;
LABEL_92:
      v72 = (_QWORD *)((char *)v49 + v65);
      if ( (unsigned __int64)v72 >= v160 )
      {
        v83 = v180;
        v84 = v72;
LABEL_124:
        if ( (unsigned __int64)v84 < v174 && *v83 == *v84 )
        {
          ++v84;
          ++v83;
        }
        if ( (unsigned __int64)v84 < v176 && *(_WORD *)v83 == *(_WORD *)v84 )
        {
          v84 = (_DWORD *)((char *)v84 + 2);
          v83 = (_DWORD *)((char *)v83 + 2);
        }
        if ( a5 > (unsigned __int64)v84 )
          v84 = (_DWORD *)((char *)v84 + (*(_BYTE *)v83 == *(_BYTE *)v84));
        v75 = (char *)v84 - (char *)v72;
        goto LABEL_95;
      }
      if ( *v180 == *v72 )
      {
        v84 = v72 + 1;
        v83 = v180 + 1;
        if ( v160 > (unsigned __int64)(v72 + 1) )
        {
          v86 = v180[1];
          v87 = v72[1];
          if ( v86 != v87 )
          {
            _R9 = v87 ^ v86;
LABEL_140:
            __asm { tzcnt   r9, r9 }
            v75 = (char *)v84 + ((unsigned int)_R9 >> 3) - (char *)v72;
            goto LABEL_95;
          }
          while ( 1 )
          {
            v84 += 2;
            v83 += 2;
            if ( v160 <= (unsigned __int64)v84 )
              break;
            if ( *(_QWORD *)v83 != *(_QWORD *)v84 )
            {
              _R9 = *(_QWORD *)v83 ^ *(_QWORD *)v84;
              goto LABEL_140;
            }
          }
        }
        goto LABEL_124;
      }
      _RAX = *v72 ^ *v180;
      __asm { tzcnt   rax, rax }
      v75 = (unsigned int)_RAX >> 3;
LABEL_95:
      v65 += v75;
LABEL_76:
      v55 = v65 + v47;
      if ( v150 <= v20 + v55 )
        v50 = v151 + v20;
LABEL_48:
      v56 = (_BYTE *)(a4 + v55);
      if ( v55 > v149 )
      {
        v57 = v20 + v55;
        if ( v55 <= v157 - v20 )
          v57 = v157;
        v157 = v57;
        v58 = &a1[2 * v152];
        v58[1] = v55;
        ++v152;
        *v58 = v172 - v20;
        if ( v55 > 0x1000 || (_BYTE *)a5 == v56 )
        {
LABEL_57:
          v8 = v183;
          goto LABEL_58;
        }
        v149 = v55;
      }
      if ( *(_BYTE *)(v50 + v55) < *v56 )
      {
        *v155 = v20;
        if ( v166 >= v20 )
        {
          v8 = v183;
          v155 = v190;
          goto LABEL_58;
        }
        v46 = v154-- == 1;
        v20 = v48[1];
        v45 = v55;
        v155 = v48 + 1;
        if ( v46 )
          goto LABEL_57;
      }
      else
      {
        *v156 = v20;
        if ( v166 >= v20 )
        {
          v8 = v183;
          v156 = (unsigned int *)v190;
          goto LABEL_58;
        }
        v46 = v154-- == 1;
        v20 = *v48;
        v44 = v55;
        v156 = v48;
        if ( v46 )
          goto LABEL_57;
      }
      if ( v158 > v20 )
        goto LABEL_57;
    }
    v170 = (_DWORD *)(v177 + v20 + v47);
    v71 = (_QWORD *)(a4 + v47);
    goto LABEL_83;
  }
LABEL_58:
  *v156 = 0;
  *v155 = 0;
  *(_DWORD *)(v8 + 44) = v157 - 8;
  return v152;
}
