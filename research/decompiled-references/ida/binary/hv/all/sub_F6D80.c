__int64 __fastcall sub_F6D80(__int64 a1, _QWORD *a2, _DWORD *a3, char *a4, unsigned __int64 a5)
{
  int v7; // ecx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rbx
  char *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rsi
  bool v22; // r9
  char v23; // cl
  __int64 v24; // r12
  char *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // rax
  unsigned int v33; // ebp
  int v34; // ecx
  _BYTE *v35; // rsi
  char v36; // al
  _DWORD *v37; // rdx
  __int64 v38; // rax
  char *v39; // rdx
  int v40; // r11d
  unsigned int *v41; // r9
  unsigned int v42; // eax
  char *v43; // r13
  char *v44; // r10
  _QWORD *v45; // rcx
  char *v46; // r8
  unsigned __int64 v47; // r14
  unsigned __int64 v50; // rsi
  char *v51; // rdi
  _QWORD *v52; // r8
  char *v53; // rax
  signed __int64 v54; // rcx
  char *v55; // rdi
  char *v56; // rcx
  char *v57; // rcx
  __int64 v58; // rax
  _DWORD *v59; // rdi
  int v60; // ecx
  _BYTE *v61; // rdi
  char v62; // si
  _DWORD *v63; // rax
  char *v64; // r13
  char *v65; // rbp
  int v66; // ecx
  __int64 *v68; // rdi
  char *v69; // rsi
  char *v70; // r13
  signed __int64 v73; // rax
  char *v74; // rcx
  char *v77; // rdi
  _QWORD *v78; // r8
  __int64 v79; // r15
  __int64 v80; // rax
  char *v83; // rsi
  __int64 *i; // rdi
  __int64 v85; // rax
  __int64 v86; // r8
  char *v89; // rax
  __int64 *j; // r8
  __int64 v91; // r14
  __int64 v92; // rdi
  int v95; // r8d
  int v96; // eax
  int v97; // esi
  int v98; // r10d
  int v99; // r11d
  int v100; // eax
  unsigned int v101; // ecx
  unsigned int v102; // r9d
  int v103; // edi
  int v104; // edi
  unsigned int *v105; // rsi
  int v106; // eax
  __int64 v107; // r9
  unsigned int v108; // edi
  char *v109; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v110; // [rsp+10h] [rbp-198h]
  char *v112; // [rsp+20h] [rbp-188h]
  __int64 v113; // [rsp+28h] [rbp-180h]
  unsigned __int64 v114; // [rsp+30h] [rbp-178h]
  unsigned int v115; // [rsp+3Ch] [rbp-16Ch]
  unsigned int *v116; // [rsp+40h] [rbp-168h]
  __int64 v117; // [rsp+48h] [rbp-160h]
  char *v118; // [rsp+50h] [rbp-158h]
  unsigned int v119; // [rsp+58h] [rbp-150h]
  unsigned int v120; // [rsp+5Ch] [rbp-14Ch]
  unsigned __int64 v121; // [rsp+60h] [rbp-148h]
  char *v122; // [rsp+68h] [rbp-140h]
  unsigned __int64 v123; // [rsp+70h] [rbp-138h]
  int v124; // [rsp+78h] [rbp-130h]
  char *v125; // [rsp+80h] [rbp-128h]
  char *v126; // [rsp+88h] [rbp-120h]
  char *v127; // [rsp+90h] [rbp-118h]
  char *v128; // [rsp+98h] [rbp-110h]
  __int64 v129; // [rsp+A0h] [rbp-108h]
  unsigned __int64 v130; // [rsp+A8h] [rbp-100h]
  unsigned int *v131; // [rsp+B0h] [rbp-F8h]
  _QWORD *v132; // [rsp+C0h] [rbp-E8h]
  __int64 v133; // [rsp+C8h] [rbp-E0h]
  unsigned int v134; // [rsp+D4h] [rbp-D4h]
  unsigned __int64 v135; // [rsp+D8h] [rbp-D0h]
  char *v136; // [rsp+E0h] [rbp-C8h]
  __int64 v137; // [rsp+E8h] [rbp-C0h]
  unsigned __int64 v138; // [rsp+F0h] [rbp-B8h]
  unsigned __int64 v139; // [rsp+F8h] [rbp-B0h]
  int v140; // [rsp+100h] [rbp-A8h]
  int v141; // [rsp+104h] [rbp-A4h]
  __int64 v142; // [rsp+108h] [rbp-A0h]
  int v143; // [rsp+110h] [rbp-98h]
  __int64 v144; // [rsp+118h] [rbp-90h]
  __int64 v145; // [rsp+130h] [rbp-78h]
  int v146; // [rsp+138h] [rbp-70h]
  unsigned int v147; // [rsp+14Ch] [rbp-5Ch] BYREF
  __int64 v148; // [rsp+150h] [rbp-58h] BYREF
  __int64 v149; // [rsp+158h] [rbp-50h]
  unsigned __int64 v150; // [rsp+168h] [rbp-40h]

  v7 = a3[5];
  v135 = a5;
  v150 = __readfsqword(0x28u);
  v141 = 1 << v7;
  v146 = (_DWORD)a4 + a5;
  v8 = (a5 >> 20) + ((a5 & 0xFFFFF) != 0);
  if ( !v8 )
    return 0;
  v139 = a2[3];
  if ( v139 >= a2[4] )
    return 0;
  v122 = a4;
  v9 = a2;
  v142 = a1 + 48;
  v145 = (__int64)&a4[0x100000 * v8 - 0x100000];
  v143 = 0;
  v144 = a1 + 64;
  v129 = a1 + 576;
  v10 = a1;
  while ( 2 )
  {
    if ( v135 > 0xFFFFF )
    {
      v130 = (unsigned __int64)&loc_100000;
      v11 = (char *)&loc_100000 + (_QWORD)v122;
      v109 = (char *)&loc_100000 + (_QWORD)v122;
    }
    else
    {
      v130 = v135;
      LODWORD(v11) = v146;
      v109 = &v122[v135];
    }
    v119 = *(_DWORD *)(v10 + 28);
    v113 = *(_QWORD *)(v10 + 8);
    v12 = (_DWORD)v11 - v113;
    v120 = *(_DWORD *)(v10 + 24);
    if ( (unsigned int)((_DWORD)v11 - v113) > 0xE0000000 )
    {
      v95 = 2;
      v96 = 1;
      v97 = (_DWORD)v122 - v113;
      v98 = 1 << a3[1];
      v99 = (_DWORD)v122 - v113;
      if ( v141 )
        v96 = v141;
      v100 = v96 + 2;
      v101 = v97 - v100;
      v102 = v97 - v100 + 2;
      *(_QWORD *)(v10 + 16) += (unsigned int)(v97 - v100);
      v113 += (unsigned int)(v97 - v100);
      *(_QWORD *)(v10 + 8) = v113;
      v103 = v100 + v119 - v97;
      if ( v102 > v119 )
        v103 = 2;
      v119 = v103;
      *(_DWORD *)(v10 + 28) = v103;
      v104 = v100 + v120 - v97;
      v105 = *(unsigned int **)(v10 + 40);
      if ( v102 <= v120 )
        v95 = v104;
      ++*(_DWORD *)(v10 + 32);
      v120 = v95;
      *(_DWORD *)(v10 + 24) = v95;
      if ( v98 )
      {
        v106 = v100 - v99;
        v107 = (__int64)&v105[2 * (v98 - 1) + 2];
        do
        {
          v108 = v106 + *v105;
          if ( *v105 < v101 )
            v108 = 0;
          v105 += 2;
          *(v105 - 2) = v108;
        }
        while ( (unsigned int *)v107 != v105 );
        v113 = *(_QWORD *)(v10 + 8);
        v119 = *(_DWORD *)(v10 + 28);
        v120 = *(_DWORD *)(v10 + 24);
      }
      *(_DWORD *)(v10 + 48) = 0;
      v12 = (_DWORD)v11 - v113;
    }
    v13 = v141;
    if ( v142 )
      v13 = *(_DWORD *)(v10 + 48) + v141;
    if ( v12 <= v13 )
      goto LABEL_15;
    v14 = v12 - v141;
    if ( v14 > v119 )
    {
      *(_DWORD *)(v10 + 28) = v14;
      v119 = v14;
    }
    if ( v119 > v120 )
    {
      *(_DWORD *)(v10 + 24) = v119;
      v120 = v119;
      if ( !v142 )
      {
        v15 = v119;
        v112 = nullptr;
        v133 = 0;
        v16 = a3[3];
        v120 = v119;
        v134 = v119;
        v118 = nullptr;
        goto LABEL_17;
      }
      goto LABEL_14;
    }
    if ( v142 )
LABEL_14:
      *(_DWORD *)(v10 + 48) = 0;
LABEL_15:
    v15 = v120;
    v16 = a3[3];
    if ( v119 >= v120 )
    {
      v134 = v120;
      v112 = nullptr;
      v133 = 0;
      v118 = nullptr;
    }
    else
    {
      v17 = *(_QWORD *)(v10 + 16);
      v133 = v17;
      v112 = (char *)(v17 + v119);
      v118 = (char *)(v17 + v120);
      v134 = v119;
    }
LABEL_17:
    v114 = v16;
    if ( v16 > v130 )
      goto LABEL_150;
    if ( v16 > 0x40 )
      v16 = 64;
    v18 = a3[2];
    v19 = a3[1];
    v148 = 0xFFFFFFFFLL;
    v20 = a3[4];
    v21 = (1LL << v20) - 1;
    if ( v20 )
    {
      v22 = v20 <= v16;
      v23 = v16 - v20;
      if ( v22 )
        v21 <<= v23;
    }
    v149 = v21;
    v110 = (unsigned __int64)&v122[v114];
    v127 = v109 - 8;
    if ( v109 - 8 <= &v122[v114] )
    {
LABEL_150:
      LODWORD(v65) = v130;
      goto LABEL_75;
    }
    v132 = v9;
    v136 = (char *)(v113 + v15);
    v24 = v10;
    v25 = v122;
    v140 = ~(-1 << (v19 - v18));
    v137 = 2LL * (unsigned int)(1 << v18);
    v138 = (unsigned __int64)(v109 - 7);
    v128 = v109 - 3;
    while ( 1 )
    {
      v147 = 0;
      v26 = v144;
      v121 = sub_F6940(&v148, v21, v110, (unsigned __int64)&v127[-v110], v144, (int *)&v147);
      if ( v147 )
        break;
LABEL_73:
      v110 += v121;
      if ( (unsigned __int64)v127 <= v110 )
        goto LABEL_74;
LABEL_71:
      v21 = v149;
    }
    v27 = v129;
    v28 = v24 + 8LL * (v147 - 1) + 72;
    do
    {
      v26 += 8;
      v27 += 24;
      v29 = *(_QWORD *)(v26 - 8) + v110 - v114;
      v30 = sub_117B50(v29, v114, 0);
      *(_QWORD *)(v27 - 24) = v29;
      v31 = (unsigned int)v30 & v140;
      *(_DWORD *)(v27 - 12) = HIDWORD(v30);
      *(_DWORD *)(v27 - 16) = v31;
      v32 = (const char *)(*(_QWORD *)(v24 + 40) + 8 * (v31 << a3[2]));
      *(_QWORD *)(v27 - 8) = v32;
      _mm_prefetch(v32, 1);
    }
    while ( v28 != v26 );
    v33 = 0;
    v126 = v109 - 1;
    while ( 2 )
    {
      v38 = v129 + 24LL * v33;
      v39 = *(char **)v38;
      v40 = *(_DWORD *)(v38 + 12);
      v115 = *(_DWORD *)(v38 + 8);
      v117 = *(_QWORD *)v38 - v113;
      if ( *(_QWORD *)v38 < (unsigned __int64)v25 )
        goto LABEL_29;
      v41 = *(unsigned int **)(v38 + 16);
      v131 = &v41[v137];
      if ( &v41[v137] <= v41 )
        goto LABEL_29;
      v116 = nullptr;
      v124 = 0;
      v123 = 0;
      v125 = nullptr;
      do
      {
        if ( v40 != v41[1] )
          goto LABEL_66;
        v42 = *v41;
        if ( *v41 <= v134 )
          goto LABEL_66;
        if ( v119 >= v120 )
        {
          v74 = (char *)(v113 + v42);
          if ( (unsigned __int64)v39 >= v138 )
          {
            i = (__int64 *)(v113 + v42);
            v83 = v39;
          }
          else
          {
            if ( *(_QWORD *)v74 != *(_QWORD *)v39 )
            {
              _RSI = *(_QWORD *)v39 ^ *(_QWORD *)v74;
              __asm { tzcnt   rsi, rsi }
              v50 = (unsigned int)_RSI >> 3;
              goto LABEL_98;
            }
            v83 = v39 + 8;
            i = (__int64 *)(v74 + 8);
            if ( v138 > (unsigned __int64)(v39 + 8) )
            {
              v85 = *((_QWORD *)v74 + 1);
              v86 = *((_QWORD *)v39 + 1);
              if ( v85 != v86 )
              {
LABEL_116:
                _RAX = v86 ^ v85;
                __asm { tzcnt   rax, rax }
                v50 = &v83[(unsigned int)_RAX >> 3] - v39;
                goto LABEL_98;
              }
              v83 = v39 + 16;
              for ( i = (__int64 *)(v74 + 16); v138 > (unsigned __int64)v83; ++i )
              {
                v85 = *i;
                v86 = *(_QWORD *)v83;
                if ( *i != *(_QWORD *)v83 )
                  goto LABEL_116;
                v83 += 8;
              }
            }
          }
          if ( v83 < v128 && *(_DWORD *)i == *(_DWORD *)v83 )
          {
            v83 += 4;
            i = (__int64 *)((char *)i + 4);
          }
          if ( v83 < v126 && *(_WORD *)i == *(_WORD *)v83 )
          {
            v83 += 2;
            i = (__int64 *)((char *)i + 2);
          }
          if ( v83 < v109 )
            v83 += *(_BYTE *)i == (unsigned __int8)*v83;
          v50 = v83 - v39;
LABEL_98:
          if ( v114 > v50 )
            goto LABEL_66;
          if ( v136 < v74 && v39 > v25 && *(v39 - 1) == *(v74 - 1) )
          {
            v77 = v74;
            v78 = v39;
            do
            {
              --v77;
              v78 = (_QWORD *)((char *)v78 - 1);
              v53 = (char *)(v74 - v77);
            }
            while ( v78 > (_QWORD *)v25 && v136 < v77 && *((_BYTE *)v78 - 1) == *(v77 - 1) );
LABEL_63:
            v57 = &v53[v50];
            goto LABEL_64;
          }
          goto LABEL_72;
        }
        if ( v120 <= v42 )
        {
          v45 = (_QWORD *)(v113 + v42);
          v43 = v109;
          v44 = v136;
        }
        else
        {
          v43 = v118;
          v44 = v112;
          v45 = (_QWORD *)(v133 + v42);
        }
        v46 = &v39[v43 - (char *)v45];
        if ( v109 < v46 )
          v46 = v109;
        v47 = (unsigned __int64)(v46 - 7);
        if ( v39 >= v46 - 7 )
        {
          v68 = v45;
          v69 = v39;
          goto LABEL_82;
        }
        if ( *v45 == *(_QWORD *)v39 )
        {
          v69 = v39 + 8;
          v68 = v45 + 1;
          if ( v47 <= (unsigned __int64)(v39 + 8) )
            goto LABEL_82;
          v79 = v45[1];
          v80 = *((_QWORD *)v39 + 1);
          if ( v80 == v79 )
          {
            while ( 1 )
            {
              v69 += 8;
              ++v68;
              if ( v47 <= (unsigned __int64)v69 )
                break;
              v80 = *v68;
              v79 = *(_QWORD *)v69;
              if ( *v68 != *(_QWORD *)v69 )
                goto LABEL_110;
            }
LABEL_82:
            if ( v69 < v46 - 3 && *(_DWORD *)v68 == *(_DWORD *)v69 )
            {
              v69 += 4;
              v68 = (__int64 *)((char *)v68 + 4);
            }
            if ( v69 < v46 - 1 && *(_WORD *)v68 == *(_WORD *)v69 )
            {
              v69 += 2;
              v68 = (__int64 *)((char *)v68 + 2);
            }
            if ( v46 > v69 )
              v69 += *(_BYTE *)v68 == (unsigned __int8)*v69;
            v50 = v69 - v39;
            if ( v43 != (char *)v45 + v50 )
              goto LABEL_45;
LABEL_91:
            v70 = &v39[v50];
            if ( (unsigned __int64)&v39[v50] >= v138 )
            {
              j = (__int64 *)v136;
              v89 = &v39[v50];
            }
            else
            {
              if ( *(_QWORD *)v136 != *(_QWORD *)v70 )
              {
                _RAX = *(_QWORD *)v70 ^ *(_QWORD *)v136;
                __asm { tzcnt   rax, rax }
                v73 = (unsigned int)_RAX >> 3;
LABEL_94:
                v50 += v73;
                goto LABEL_45;
              }
              v89 = v70 + 8;
              j = (__int64 *)(v136 + 8);
              if ( v138 > (unsigned __int64)(v70 + 8) )
              {
                v91 = *((_QWORD *)v136 + 1);
                v92 = *((_QWORD *)v70 + 1);
                if ( v92 != v91 )
                {
LABEL_132:
                  _RDI = v91 ^ v92;
                  __asm { tzcnt   rdi, rdi }
                  v73 = &v89[(unsigned int)_RDI >> 3] - v70;
                  goto LABEL_94;
                }
                v89 = v70 + 16;
                for ( j = (__int64 *)(v136 + 16); v138 > (unsigned __int64)v89; ++j )
                {
                  v92 = *j;
                  v91 = *(_QWORD *)v89;
                  if ( *j != *(_QWORD *)v89 )
                    goto LABEL_132;
                  v89 += 8;
                }
              }
            }
            if ( v89 < v128 && *(_DWORD *)j == *(_DWORD *)v89 )
            {
              v89 += 4;
              j = (__int64 *)((char *)j + 4);
            }
            if ( v89 < v126 && *(_WORD *)j == *(_WORD *)v89 )
            {
              v89 += 2;
              j = (__int64 *)((char *)j + 2);
            }
            if ( v89 < v109 )
              v89 += *(_BYTE *)j == (unsigned __int8)*v89;
            v73 = v89 - v70;
            goto LABEL_94;
          }
LABEL_110:
          _RAX = v79 ^ v80;
          __asm { tzcnt   rax, rax }
          v50 = &v69[(unsigned int)_RAX >> 3] - v39;
        }
        else
        {
          _RSI = *(_QWORD *)v39 ^ *v45;
          __asm { tzcnt   rsi, rsi }
          v50 = (unsigned int)_RSI >> 3;
        }
        if ( v43 == (char *)v45 + v50 )
          goto LABEL_91;
LABEL_45:
        if ( v114 > v50 )
          goto LABEL_66;
        if ( v44 >= (char *)v45 || v39 <= v25 )
        {
          v51 = (char *)v45;
          v53 = nullptr;
          v54 = 0;
          goto LABEL_54;
        }
        if ( *((_BYTE *)v45 - 1) == *(v39 - 1) )
        {
          v51 = (char *)v45;
          v52 = v39;
          do
          {
            --v51;
            v52 = (_QWORD *)((char *)v52 - 1);
            v53 = (char *)((char *)v45 - v51);
          }
          while ( v52 > (_QWORD *)v25 && v44 < v51 && *((_BYTE *)v52 - 1) == *(v51 - 1) );
          v54 = v51 - (char *)v45;
LABEL_54:
          if ( v44 != v112 && v44 == v51 )
          {
            v55 = v118;
            v56 = &v39[v54];
            if ( v118 > v112 && v56 > v25 && *(v118 - 1) == *(v56 - 1) )
            {
              do
              {
                --v55;
                --v56;
              }
              while ( v56 > v25 && v55 > v112 && *(v56 - 1) == *(v55 - 1) );
              v53 += v118 - v55;
            }
          }
          goto LABEL_63;
        }
LABEL_72:
        v57 = (char *)v50;
        LODWORD(v53) = 0;
LABEL_64:
        if ( v125 < v57 )
        {
          v116 = v41;
          v125 = v57;
          v124 = (int)v53;
          v123 = v50;
        }
LABEL_66:
        v41 += 2;
      }
      while ( v131 > v41 );
      if ( !v116 )
      {
LABEL_29:
        v34 = a3[2];
        v35 = (_BYTE *)(v115 + *(_QWORD *)(v24 + 56));
        v36 = *v35 + 1;
        v37 = (_DWORD *)(*(_QWORD *)(v24 + 40) + 8 * ((unsigned __int8)*v35 + ((unsigned __int64)v115 << v34)));
        v37[1] = v40;
        *v37 = v117;
        *v35 = ((1 << v34) - 1) & v36;
LABEL_30:
        if ( ++v33 >= v147 )
          goto LABEL_73;
        continue;
      }
      break;
    }
    v58 = v132[3];
    v59 = (_DWORD *)(*v132 + 12 * v58);
    if ( v58 == v132[4] )
      return -70;
    *v59 = v117 - *v116;
    v59[2] = v124 + v123;
    v59[1] = (_DWORD)v39 - v124 - (_DWORD)v25;
    ++v132[3];
    v60 = a3[2];
    v61 = (_BYTE *)(v115 + *(_QWORD *)(v24 + 56));
    v25 = &v39[v123];
    v62 = *v61 + 1;
    v63 = (_DWORD *)(*(_QWORD *)(v24 + 40) + 8 * ((unsigned __int8)*v61 + ((unsigned __int64)v115 << v60)));
    *v63 = v117;
    v63[1] = v40;
    *v61 = ((1 << v60) - 1) & v62;
    if ( (unsigned __int64)&v39[v123] <= v121 + v110 )
      goto LABEL_30;
    v110 = (unsigned __int64)&v39[v123];
    if ( v127 > v25 )
      goto LABEL_71;
LABEL_74:
    v64 = v25;
    v10 = v24;
    v9 = v132;
    v65 = (char *)(v109 - v64);
    if ( (unsigned __int64)(v109 - v64) <= 0xFFFFFFFFFFFFFF88LL )
    {
LABEL_75:
      if ( v9[3] <= v139 )
      {
        v143 += v130;
      }
      else
      {
        v66 = v143;
        v143 = (int)v65;
        *(_DWORD *)(*v9 + 12 * v139 + 4) += v66;
      }
      if ( (char *)v145 == v122 )
        return 0;
      v135 -= (unsigned __int64)&loc_100000;
      v122 += 0x100000;
      v139 = v9[3];
      if ( v139 >= v9[4] )
        return 0;
      continue;
    }
    return (__int64)v65;
  }
}

