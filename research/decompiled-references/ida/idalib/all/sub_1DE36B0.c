__int64 __fastcall sub_1DE36B0(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _DWORD *a12)
{
  __int64 v14; // rbp
  _QWORD *v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r10
  int v24; // ecx
  __int64 v25; // r14
  int v26; // r12d
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  char v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // rbx
  char v44; // r8
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  void *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // r8
  char v59; // r10
  unsigned __int64 v60; // rax
  void *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rbp
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // rcx
  char v69; // r8
  unsigned __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r14
  int v76; // r12d
  __int64 v77; // rbp
  int v78; // eax
  __int64 v79; // r8
  unsigned __int64 v80; // rbx
  char v81; // r11
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rbx
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // rbp
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  void *v95; // rdi
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // [rsp-8h] [rbp-140h]
  __int64 v101; // [rsp+0h] [rbp-138h]
  char *v103; // [rsp+10h] [rbp-128h]
  __int64 v104; // [rsp+10h] [rbp-128h]
  int v105; // [rsp+10h] [rbp-128h]
  int v106; // [rsp+10h] [rbp-128h]
  char v107; // [rsp+10h] [rbp-128h]
  int v108; // [rsp+10h] [rbp-128h]
  char v109; // [rsp+10h] [rbp-128h]
  __int64 v110; // [rsp+10h] [rbp-128h]
  int v111; // [rsp+10h] [rbp-128h]
  char v112; // [rsp+10h] [rbp-128h]
  __int64 v113; // [rsp+10h] [rbp-128h]
  char v114; // [rsp+10h] [rbp-128h]
  char v115; // [rsp+10h] [rbp-128h]
  char v116; // [rsp+10h] [rbp-128h]
  _QWORD *v117; // [rsp+18h] [rbp-120h]
  __int64 v118; // [rsp+18h] [rbp-120h]
  __int64 *v119; // [rsp+18h] [rbp-120h]
  unsigned __int64 v120; // [rsp+18h] [rbp-120h]
  unsigned __int64 v121; // [rsp+18h] [rbp-120h]
  unsigned __int64 v122; // [rsp+18h] [rbp-120h]
  __int64 v123; // [rsp+18h] [rbp-120h]
  __int64 v124; // [rsp+18h] [rbp-120h]
  __int64 v125; // [rsp+18h] [rbp-120h]
  __int64 v126; // [rsp+18h] [rbp-120h]
  __int64 v127; // [rsp+18h] [rbp-120h]
  __int64 v128; // [rsp+18h] [rbp-120h]
  __int64 v129; // [rsp+18h] [rbp-120h]
  __int64 v130; // [rsp+18h] [rbp-120h]
  unsigned __int64 v131; // [rsp+18h] [rbp-120h]
  __int64 v132; // [rsp+18h] [rbp-120h]
  __int64 v133; // [rsp+18h] [rbp-120h]
  __int64 v134; // [rsp+18h] [rbp-120h]
  __int64 v135; // [rsp+18h] [rbp-120h]
  int v137; // [rsp+30h] [rbp-108h]
  __int64 v138; // [rsp+30h] [rbp-108h]
  int v139; // [rsp+30h] [rbp-108h]
  unsigned __int8 v140; // [rsp+30h] [rbp-108h]
  char v141; // [rsp+30h] [rbp-108h]
  __int64 v142; // [rsp+30h] [rbp-108h]
  __int64 v143; // [rsp+30h] [rbp-108h]
  unsigned __int8 v144; // [rsp+30h] [rbp-108h]
  unsigned __int8 v145; // [rsp+30h] [rbp-108h]
  __int64 v146; // [rsp+38h] [rbp-100h]
  __int64 v147; // [rsp+40h] [rbp-F8h]
  char v148; // [rsp+40h] [rbp-F8h]
  __int64 v149; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v150; // [rsp+40h] [rbp-F8h]
  char v151; // [rsp+40h] [rbp-F8h]
  int v153; // [rsp+58h] [rbp-E0h]
  void *v155; // [rsp+60h] [rbp-D8h]
  char v156; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v157; // [rsp+60h] [rbp-D8h]
  __int64 *v158; // [rsp+60h] [rbp-D8h]
  __int64 v159; // [rsp+60h] [rbp-D8h]
  char v160; // [rsp+60h] [rbp-D8h]
  __int64 v161; // [rsp+60h] [rbp-D8h]
  __int64 v162; // [rsp+60h] [rbp-D8h]
  char v163; // [rsp+60h] [rbp-D8h]
  __int64 v164; // [rsp+60h] [rbp-D8h]
  __int64 v165; // [rsp+60h] [rbp-D8h]
  __int64 v166; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v167; // [rsp+68h] [rbp-D0h]
  __int64 v168; // [rsp+68h] [rbp-D0h]
  __int64 v169; // [rsp+68h] [rbp-D0h]
  char v170; // [rsp+68h] [rbp-D0h]
  __int64 v171; // [rsp+68h] [rbp-D0h]
  char v172; // [rsp+68h] [rbp-D0h]
  char v173; // [rsp+68h] [rbp-D0h]
  __int64 v174; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v175; // [rsp+70h] [rbp-C8h]
  __int64 v176; // [rsp+78h] [rbp-C0h]
  char v177; // [rsp+8Ah] [rbp-AEh] BYREF
  char v178; // [rsp+8Bh] [rbp-ADh] BYREF
  int v179; // [rsp+8Ch] [rbp-ACh] BYREF
  __int64 v180; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v181; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v183; // [rsp+A8h] [rbp-90h]
  _BYTE v184[40]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v185; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v186; // [rsp+E8h] [rbp-50h]

  if ( !a4 )
    return 0;
  v146 = (unsigned int)(a4 - 1);
  v101 = 0;
  v153 = 0;
  while ( 1 )
  {
    if ( a12 )
      *a12 = v101;
    v14 = *(_QWORD *)(a3 + 8 * v101);
    if ( !v14 )
      break;
    v179 = 0;
    if ( sub_B799A0(v14) )
    {
      ptr = v184;
      v183 = 0x200000000LL;
      v15 = (_QWORD *)(*(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
        v15 = (_QWORD *)v15[4];
      v16 = *v15;
      v117 = v15;
      v103 = (char *)v15 + 12;
      v17 = sub_F6C520(*(_QWORD *)(*v15 + 32LL));
      v180 = *(_QWORD *)(v16 + 32);
      v18 = *(_QWORD *)a1;
      v181 = v17 * ((unsigned __int64)&v103[-(v103 != nullptr)] / v17 + (v103 != nullptr));
      sub_1E4C9B0(v18, v180, v181, &ptr);
      v177 = 0;
      v178 = 0;
      v104 = (unsigned int)v183;
      if ( (_DWORD)v183 )
      {
        v155 = ptr;
        v137 = *(_DWORD *)(v16 + 20);
        v179 = v137;
        v19 = (unsigned __int64)(unsigned int)sub_F6CE20(&v180) << 32;
        v20 = sub_F6CCB0(&v180, a7);
        if ( sub_1DDBB60(
               (__int64 *)a1,
               *((_DWORD *)v117 + 2),
               v19 | v20,
               (__int64)v155,
               v104,
               (__int64)&v177,
               a7,
               a8,
               (__int64)&v178,
               (__int64)&v179) )
        {
          goto LABEL_38;
        }
        v22 = *(_QWORD *)a1;
        if ( v177 )
        {
          sub_1DC29F0(*(_QWORD *)(v22 + 11280), v14, v100, v21);
          if ( v179 != 1 )
          {
            v23 = a1;
            v24 = v153;
            v25 = a10;
            v176 = a11 + 24;
            v26 = 0;
            v147 = v14;
            do
            {
              v35 = *(_QWORD *)v23;
              ++v26;
              v36 = *(_QWORD *)(v23 + 32);
              v37 = *(_DWORD *)(*(_QWORD *)v23 + 12632LL);
              *(_DWORD *)(v35 + 12632) = v26;
              v105 = v37;
              v153 = v24 + 1;
              v119 = (__int64 *)v23;
              v38 = sub_1DD7820(v35, v147, v36, v24, v137, 0, a7, a8, *(unsigned __int8 *)(v23 + 56));
              v74 = v38;
              if ( !v38 )
              {
                *(_DWORD *)(v35 + 12632) = v105;
                goto LABEL_38;
              }
              v23 = (__int64)v119;
              v27 = *v119;
              if ( (*(_BYTE *)(*(_QWORD *)(*v119 + 232) + 47LL) & 0x20) != 0 )
              {
                v158 = v119;
                v123 = v38;
                sub_17A40B0(v27, v38);
                v74 = v123;
                v23 = (__int64)v158;
              }
              v28 = *(unsigned int *)(a9 + 8);
              if ( a6 )
              {
                v29 = *(_BYTE *)(a6 + v101);
                v30 = *(_QWORD *)(a11 + 8);
                v31 = *(_QWORD *)(a11 + 16);
                if ( v30 != v28 )
                {
                  if ( v30 <= v28 )
                  {
                    if ( v28 > v31 )
                    {
                      v169 = v23;
                      v160 = *(_BYTE *)(a6 + v101);
                      v125 = v74;
                      sub_2236E10(a11, v176, *(unsigned int *)(a9 + 8), 1);
                      v30 = *(_QWORD *)(a11 + 8);
                      v31 = *(_QWORD *)(a11 + 16);
                      v23 = v169;
                      v29 = v160;
                      v74 = v125;
                    }
                    v32 = (void *)(*(_QWORD *)a11 + v30);
                    if ( v32 != (void *)(v28 + *(_QWORD *)a11) )
                    {
                      v174 = v23;
                      v167 = v31;
                      v156 = v29;
                      v118 = v74;
                      memset(v32, 0, v28 - v30);
                      v74 = v118;
                      v29 = v156;
                      v31 = v167;
                      v23 = v174;
                    }
                  }
                  *(_QWORD *)(a11 + 8) = v28;
                }
                if ( v28 + 1 > v31 )
                {
                  v171 = v23;
                  v163 = v29;
                  v128 = v74;
                  sub_2236E10(a11, v176, v28 + 1, 1);
                  v28 = *(_QWORD *)(a11 + 8);
                  v23 = v171;
                  v29 = v163;
                  v74 = v128;
                }
                *(_BYTE *)(*(_QWORD *)a11 + v28) = v29;
                ++*(_QWORD *)(a11 + 8);
                if ( !*(_BYTE *)(a11 + 40) )
                  *(_BYTE *)(a11 + 40) = v29 != 0;
                v28 = *(unsigned int *)(a9 + 8);
              }
              v33 = *(_QWORD *)(v74 + 48);
              if ( v28 + 1 > *(unsigned int *)(a9 + 12) )
              {
                v168 = v23;
                v159 = *(_QWORD *)(v74 + 48);
                v124 = v74;
                sub_2237220(a9, a9 + 16, v28 + 1, 8);
                v28 = *(unsigned int *)(a9 + 8);
                v23 = v168;
                v33 = v159;
                v74 = v124;
              }
              *(_QWORD *)(*(_QWORD *)a9 + 8 * v28) = v33;
              ++*(_DWORD *)(a9 + 8);
              if ( v25 )
              {
                v34 = *(unsigned int *)(v25 + 8);
                if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(v25 + 12) )
                {
                  v162 = v23;
                  v127 = v74;
                  sub_2237220(v25, v25 + 16, v34 + 1, 8);
                  v34 = *(unsigned int *)(v25 + 8);
                  v23 = v162;
                  v74 = v127;
                }
                *(_QWORD *)(*(_QWORD *)v25 + 8 * v34) = v74;
                ++*(_DWORD *)(v25 + 8);
              }
              v24 = v153;
              *(_DWORD *)(v35 + 12632) = v105;
            }
            while ( v26 != v179 - 1 );
            v14 = v147;
            a10 = v25;
            a1 = v23;
          }
          if ( v178 )
          {
            v86 = *(_QWORD *)a1;
            v87 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
            *(_DWORD *)(*(_QWORD *)a1 + 12632LL) = 0;
            v111 = v87;
            sub_1DB8420((__m128i *)&v185, (__int64 *)a1);
            v90 = sub_1DD80B0(a1, v14, v153, v137, 0, a7, a8);
            if ( !v90 )
            {
              sub_1DB8040(a1, (__int64 *)(a1 + 32), v88, v89, 0, v91, v185, v186);
              *(_DWORD *)(v86 + 12632) = v111;
              goto LABEL_38;
            }
            v92 = *(unsigned int *)(a9 + 8);
            if ( a6 )
            {
              v93 = *(_QWORD *)(a11 + 16);
              v91 = *(unsigned __int8 *)(a6 + v101);
              v94 = *(_QWORD *)(a11 + 8);
              if ( v94 != v92 )
              {
                if ( v94 <= v92 )
                {
                  if ( v92 > v93 )
                  {
                    v144 = *(_BYTE *)(a6 + v101);
                    v133 = v90;
                    sub_2236E10(a11, a11 + 24, *(unsigned int *)(a9 + 8), 1);
                    v94 = *(_QWORD *)(a11 + 8);
                    v93 = *(_QWORD *)(a11 + 16);
                    v91 = v144;
                    v90 = v133;
                  }
                  v95 = (void *)(*(_QWORD *)a11 + v94);
                  if ( v95 != (void *)(v92 + *(_QWORD *)a11) )
                  {
                    v150 = v93;
                    v140 = v91;
                    v126 = v90;
                    memset(v95, 0, v92 - v94);
                    v90 = v126;
                    v91 = v140;
                    v93 = v150;
                  }
                }
                *(_QWORD *)(a11 + 8) = v92;
              }
              if ( v92 + 1 > v93 )
              {
                v145 = v91;
                v135 = v90;
                sub_2236E10(a11, a11 + 24, v92 + 1, 1);
                v92 = *(_QWORD *)(a11 + 8);
                v91 = v145;
                v90 = v135;
              }
              *(_BYTE *)(*(_QWORD *)a11 + v92) = v91;
              ++*(_QWORD *)(a11 + 8);
              if ( !*(_BYTE *)(a11 + 40) )
                *(_BYTE *)(a11 + 40) = (_BYTE)v91 != 0;
              v92 = *(unsigned int *)(a9 + 8);
            }
            v96 = *(unsigned int *)(a9 + 12);
            v97 = *(_QWORD *)(v90 + 48);
            if ( v92 + 1 > v96 )
            {
              v143 = *(_QWORD *)(v90 + 48);
              v132 = v90;
              sub_2237220(a9, a9 + 16, v92 + 1, 8);
              v92 = *(unsigned int *)(a9 + 8);
              v97 = v143;
              v90 = v132;
            }
            v98 = *(_QWORD *)a9;
            *(_QWORD *)(*(_QWORD *)a9 + 8 * v92) = v97;
            ++*(_DWORD *)(a9 + 8);
            if ( a10 )
            {
              v99 = *(unsigned int *)(a10 + 8);
              v96 = *(unsigned int *)(a10 + 12);
              if ( v99 + 1 > v96 )
              {
                v134 = v90;
                sub_2237220(a10, a10 + 16, v99 + 1, 8);
                v99 = *(unsigned int *)(a10 + 8);
                v90 = v134;
              }
              v98 = *(_QWORD *)a10;
              *(_QWORD *)(*(_QWORD *)a10 + 8 * v99) = v90;
              ++*(_DWORD *)(a10 + 8);
            }
            sub_1DB8040(a1, (__int64 *)(a1 + 32), v98, v96, v90, v91, v185, v186);
            *(_DWORD *)(v86 + 12632) = v111;
          }
          else
          {
            --v153;
          }
          goto LABEL_147;
        }
      }
      else
      {
        v22 = *(_QWORD *)a1;
      }
      v40 = *(_DWORD *)(v22 + 12632);
      *(_DWORD *)(v22 + 12632) = 0;
      v106 = v40;
      v41 = sub_1DD7820(v22, v14, *(_QWORD *)(a1 + 32), v153, v179, 1, a7, a8, *(unsigned __int8 *)(a1 + 56));
      v42 = v41;
      if ( v41 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 47LL) & 0x20) != 0 )
        sub_17A40B0(*(_QWORD *)a1, v41);
      *(_DWORD *)(v22 + 12632) = v106;
      if ( ptr != v184 )
        free(ptr);
    }
    else
    {
      v73 = sub_1DD7820(*(_QWORD *)a1, v14, *(_QWORD *)(a1 + 32), v153, 0, 0, a7, a8, *(unsigned __int8 *)(a1 + 56));
      v42 = v73;
      if ( !v73 )
        return 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 47LL) & 0x20) != 0 )
        sub_17A40B0(*(_QWORD *)a1, v73);
    }
    if ( !v42 )
      return 1;
    v43 = *(unsigned int *)(a9 + 8);
    if ( a6 )
    {
      v44 = *(_BYTE *)(a6 + v101);
      v45 = *(_QWORD *)(a11 + 8);
      v46 = *(_QWORD *)(a11 + 16);
      if ( v45 != v43 )
      {
        if ( v45 <= v43 )
        {
          if ( v43 > v46 )
          {
            v114 = *(_BYTE *)(a6 + v101);
            sub_2236E10(a11, a11 + 24, *(unsigned int *)(a9 + 8), 1);
            v45 = *(_QWORD *)(a11 + 8);
            v46 = *(_QWORD *)(a11 + 16);
            v44 = v114;
          }
          v47 = (void *)(*(_QWORD *)a11 + v45);
          if ( v47 != (void *)(v43 + *(_QWORD *)a11) )
          {
            v120 = v46;
            v107 = v44;
            memset(v47, 0, v43 - v45);
            v44 = v107;
            v46 = v120;
          }
        }
        *(_QWORD *)(a11 + 8) = v43;
      }
      if ( v43 + 1 > v46 )
      {
        v116 = v44;
        sub_2236E10(a11, a11 + 24, v43 + 1, 1);
        v43 = *(_QWORD *)(a11 + 8);
        v44 = v116;
      }
      *(_BYTE *)(*(_QWORD *)a11 + v43) = v44;
      ++*(_QWORD *)(a11 + 8);
      if ( !*(_BYTE *)(a11 + 40) )
        *(_BYTE *)(a11 + 40) = v44 != 0;
      v43 = *(unsigned int *)(a9 + 8);
    }
    v48 = *(_QWORD *)(v42 + 48);
    if ( v43 + 1 > *(unsigned int *)(a9 + 12) )
    {
      v113 = *(_QWORD *)(v42 + 48);
      sub_2237220(a9, a9 + 16, v43 + 1, 8);
      v43 = *(unsigned int *)(a9 + 8);
      v48 = v113;
    }
    *(_QWORD *)(*(_QWORD *)a9 + 8 * v43) = v48;
    ++*(_DWORD *)(a9 + 8);
    if ( a10 )
    {
      v49 = *(unsigned int *)(a10 + 8);
      if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a10 + 12) )
      {
        sub_2237220(a10, a10 + 16, v49 + 1, 8);
        v49 = *(unsigned int *)(a10 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a10 + 8 * v49) = v42;
      ++*(_DWORD *)(a10 + 8);
    }
LABEL_67:
    if ( v146 == v101 )
      return 0;
    ++v101;
  }
  LODWORD(v180) = 0;
  v50 = *(_QWORD *)(*(_QWORD *)(a5 + 8 * v101) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v50 + 16) != 38 )
  {
    v66 = (unsigned __int64)sub_1DD1AB0(a1, *(_QWORD *)(a5 + 8 * v101), a7, a8);
    if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
LABEL_98:
    v67 = *(unsigned int *)(a9 + 8);
    if ( a6 )
    {
      v68 = *(_QWORD *)(a11 + 16);
      v69 = *(_BYTE *)(a6 + v101);
      v70 = *(_QWORD *)(a11 + 8);
      if ( v70 != v67 )
      {
        if ( v70 <= v67 )
        {
          if ( v67 > v68 )
          {
            v112 = *(_BYTE *)(a6 + v101);
            sub_2236E10(a11, a11 + 24, *(unsigned int *)(a9 + 8), 1);
            v70 = *(_QWORD *)(a11 + 8);
            v68 = *(_QWORD *)(a11 + 16);
            v69 = v112;
          }
          v71 = (void *)(*(_QWORD *)a11 + v70);
          if ( v71 != (void *)(v67 + *(_QWORD *)a11) )
          {
            v122 = v68;
            v109 = v69;
            memset(v71, 0, v67 - v70);
            v69 = v109;
            v68 = v122;
          }
        }
        *(_QWORD *)(a11 + 8) = v67;
      }
      if ( v67 + 1 > v68 )
      {
        v115 = v69;
        sub_2236E10(a11, a11 + 24, v67 + 1, 1);
        v67 = *(_QWORD *)(a11 + 8);
        v69 = v115;
      }
      *(_BYTE *)(*(_QWORD *)a11 + v67) = v69;
      ++*(_QWORD *)(a11 + 8);
      if ( !*(_BYTE *)(a11 + 40) )
        *(_BYTE *)(a11 + 40) = v69 != 0;
      v67 = *(unsigned int *)(a9 + 8);
    }
    if ( v67 + 1 > *(unsigned int *)(a9 + 12) )
    {
      sub_2237220(a9, a9 + 16, v67 + 1, 8);
      v67 = *(unsigned int *)(a9 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a9 + 8 * v67) = v66;
    ++*(_DWORD *)(a9 + 8);
    if ( a10 )
    {
      v72 = *(unsigned int *)(a10 + 8);
      if ( v72 + 1 > (unsigned __int64)*(unsigned int *)(a10 + 12) )
      {
        sub_2237220(a10, a10 + 16, v72 + 1, 8);
        v72 = *(unsigned int *)(a10 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a10 + 8 * v72) = 0;
      ++*(_DWORD *)(a10 + 8);
    }
    goto LABEL_67;
  }
  v51 = *(_QWORD *)(v50 + 32);
  v52 = *(_QWORD *)a1;
  ptr = v184;
  v183 = 0x200000000LL;
  sub_1E4C960(v52, v51);
  v178 = 0;
  LOBYTE(v179) = 0;
  if ( sub_1DDBB60(
         (__int64 *)a1,
         a2,
         0,
         (__int64)ptr,
         (unsigned int)v183,
         (__int64)&v178,
         a7,
         a8,
         (__int64)&v179,
         (__int64)&v180) )
  {
    goto LABEL_38;
  }
  if ( !v178 )
  {
    v53 = *(_QWORD *)a1;
    v108 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
    if ( (_BYTE)v179 )
    {
      *(_DWORD *)(v53 + 12632) = 0;
      sub_1DB8420((__m128i *)&v185, (__int64 *)a1);
      v57 = (__int64)sub_1DD1AB0(a1, v51, a7, a8);
      if ( (v57 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        sub_1DB8040(a1, (__int64 *)(a1 + 32), v54, v55, v56, v57, v185, v186);
        *(_DWORD *)(v53 + 12632) = v108;
        goto LABEL_38;
      }
      v58 = *(unsigned int *)(a9 + 8);
      if ( a6 )
      {
        v59 = *(_BYTE *)(a6 + v101);
        v60 = *(_QWORD *)(a11 + 8);
        v55 = *(_QWORD *)(a11 + 16);
        if ( v60 != v58 )
        {
          if ( v60 <= v58 )
          {
            if ( v58 > v55 )
            {
              v151 = *(_BYTE *)(a6 + v101);
              v142 = v57;
              v131 = *(unsigned int *)(a9 + 8);
              sub_2236E10(a11, a11 + 24, v131, 1);
              v60 = *(_QWORD *)(a11 + 8);
              v55 = *(_QWORD *)(a11 + 16);
              v59 = v151;
              v57 = v142;
              v58 = v131;
            }
            v61 = (void *)(*(_QWORD *)a11 + v60);
            if ( v61 != (void *)(v58 + *(_QWORD *)a11) )
            {
              v157 = v55;
              v148 = v59;
              v138 = v57;
              v121 = v58;
              memset(v61, 0, v58 - v60);
              v58 = v121;
              v57 = v138;
              v59 = v148;
              v55 = v157;
            }
          }
          *(_QWORD *)(a11 + 8) = v58;
        }
        if ( v58 + 1 > v55 )
        {
          v141 = v59;
          v129 = v57;
          sub_2236E10(a11, a11 + 24, v58 + 1, 1);
          v58 = *(_QWORD *)(a11 + 8);
          v59 = v141;
          v57 = v129;
        }
        *(_BYTE *)(*(_QWORD *)a11 + v58) = v59;
        ++*(_QWORD *)(a11 + 8);
        if ( !*(_BYTE *)(a11 + 40) )
          *(_BYTE *)(a11 + 40) = v59 != 0;
        v58 = *(unsigned int *)(a9 + 8);
      }
      v62 = v58 + 1;
      if ( v58 + 1 > *(unsigned int *)(a9 + 12) )
      {
        v130 = v57;
        sub_2237220(a9, a9 + 16, v62, 8);
        v58 = *(unsigned int *)(a9 + 8);
        v57 = v130;
      }
      *(_QWORD *)(*(_QWORD *)a9 + 8 * v58) = v57;
      ++*(_DWORD *)(a9 + 8);
      if ( a10 )
      {
        v63 = *(unsigned int *)(a10 + 8);
        v55 = *(unsigned int *)(a10 + 12);
        if ( v63 + 1 > v55 )
        {
          sub_2237220(a10, a10 + 16, v63 + 1, 8);
          v63 = *(unsigned int *)(a10 + 8);
        }
        v62 = *(_QWORD *)a10;
        *(_QWORD *)(*(_QWORD *)a10 + 8 * v63) = 0;
        ++*(_DWORD *)(a10 + 8);
      }
      sub_1DB8040(a1, (__int64 *)(a1 + 32), v62, v55, v58, v57, v185, v186);
      *(_DWORD *)(v53 + 12632) = v108;
      v53 = *(_QWORD *)a1;
      v108 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
    }
    v64 = *(_QWORD *)(v50 + 32);
    *(_DWORD *)(v53 + 12632) = 0;
    v65 = (__int64)sub_1DD1AB0(a1, v64, a7, a8);
    *(_DWORD *)(v53 + 12632) = v108;
    if ( ptr != v184 )
      free(ptr);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
    v66 = sub_A781D0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v65, v180);
    goto LABEL_98;
  }
  if ( (_DWORD)v180 == 1 )
  {
LABEL_147:
    if ( ptr != v184 )
      free(ptr);
    goto LABEL_67;
  }
  v110 = a1;
  v75 = a10;
  v149 = a11 + 24;
  v76 = 0;
  while ( 1 )
  {
    ++v76;
    v77 = *(_QWORD *)v110;
    v78 = *(_DWORD *)(*(_QWORD *)v110 + 12632LL);
    *(_DWORD *)(*(_QWORD *)v110 + 12632LL) = v76;
    v139 = v78;
    v79 = (__int64)sub_1DD1AB0(v110, v51, a7, a8);
    if ( (v79 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
    {
      v79 = sub_A781D0(*(_QWORD *)(*(_QWORD *)v110 + 248LL), v79, 0);
      if ( (v79 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        break;
    }
    v80 = *(unsigned int *)(a9 + 8);
    if ( a6 )
    {
      v81 = *(_BYTE *)(a6 + v101);
      v82 = *(_QWORD *)(a11 + 8);
      v83 = *(_QWORD *)(a11 + 16);
      if ( v82 != v80 )
      {
        if ( v82 <= v80 )
        {
          if ( v80 > v83 )
          {
            v172 = *(_BYTE *)(a6 + v101);
            v165 = v79;
            sub_2236E10(a11, v149, *(unsigned int *)(a9 + 8), 1);
            v82 = *(_QWORD *)(a11 + 8);
            v83 = *(_QWORD *)(a11 + 16);
            v81 = v172;
            v79 = v165;
          }
          v84 = (void *)(*(_QWORD *)a11 + v82);
          if ( v84 != (void *)(v80 + *(_QWORD *)a11) )
          {
            v175 = v83;
            v170 = v81;
            v161 = v79;
            memset(v84, 0, v80 - v82);
            v79 = v161;
            v81 = v170;
            v83 = v175;
          }
        }
        *(_QWORD *)(a11 + 8) = v80;
      }
      if ( v80 + 1 > v83 )
      {
        v173 = v81;
        v166 = v79;
        sub_2236E10(a11, v149, v80 + 1, 1);
        v80 = *(_QWORD *)(a11 + 8);
        v81 = v173;
        v79 = v166;
      }
      *(_BYTE *)(*(_QWORD *)a11 + v80) = v81;
      ++*(_QWORD *)(a11 + 8);
      if ( !*(_BYTE *)(a11 + 40) )
        *(_BYTE *)(a11 + 40) = v81 != 0;
      v80 = *(unsigned int *)(a9 + 8);
    }
    if ( v80 + 1 > *(unsigned int *)(a9 + 12) )
    {
      v164 = v79;
      sub_2237220(a9, a9 + 16, v80 + 1, 8);
      v80 = *(unsigned int *)(a9 + 8);
      v79 = v164;
    }
    *(_QWORD *)(*(_QWORD *)a9 + 8 * v80) = v79;
    ++*(_DWORD *)(a9 + 8);
    if ( v75 )
    {
      v85 = *(unsigned int *)(v75 + 8);
      if ( v85 + 1 > (unsigned __int64)*(unsigned int *)(v75 + 12) )
      {
        sub_2237220(v75, v75 + 16, v85 + 1, 8);
        v85 = *(unsigned int *)(v75 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v75 + 8 * v85) = 0;
      ++*(_DWORD *)(v75 + 8);
    }
    *(_DWORD *)(v77 + 12632) = v139;
    if ( (_DWORD)v180 - 1 == v76 )
    {
      a10 = v75;
      a1 = v110;
      goto LABEL_147;
    }
  }
  *(_DWORD *)(v77 + 12632) = v139;
LABEL_38:
  if ( ptr != v184 )
    free(ptr);
  return 1;
}
