void __fastcall sub_70F0A0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, char a5, __int64 a6)
{
  char v8; // bp
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 *v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 *v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 *v32; // r13
  unsigned __int64 v33; // rbp
  __int64 *v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 *v39; // rax
  unsigned __int64 v40; // r12
  __int64 *v41; // rbp
  __int64 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rbx
  __int64 v52; // r14
  _DWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r13
  int v57; // esi
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  int v61; // r10d
  unsigned int v62; // r8d
  _QWORD *v63; // rsi
  _QWORD *v64; // rax
  __int64 v65; // r9
  __int64 v66; // rbp
  unsigned __int64 v67; // rbp
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rbp
  unsigned __int64 v73; // r12
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // r13
  __int64 *v78; // rax
  __int64 *v79; // rcx
  __int64 *v80; // rdx
  __int64 v81; // r13
  _QWORD *v82; // rax
  unsigned __int64 v83; // r9
  unsigned __int64 v84; // rdx
  _QWORD *v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rdx
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // rcx
  _QWORD *v90; // rdx
  __int64 v91; // rdi
  int v92; // edx
  unsigned __int64 v93; // rdx
  __int64 *v94; // rdx
  __int64 *v95; // rax
  int v96; // r10d
  unsigned __int64 v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 *v101; // rcx
  _QWORD *v102; // rdi
  int v103; // eax
  __int64 v104; // r8
  _QWORD *v105; // rsi
  __int64 *i; // r11
  __int64 v107; // r10
  int v108; // edx
  int v109; // ecx
  __int64 v110; // rax
  int v111; // r9d
  __int64 *v112; // rdi
  __int64 v113; // rsi
  __int64 *v114; // rdx
  __int64 v115; // r8
  int v116; // r11d
  __int64 v117; // rdx
  __int64 v118; // rdi
  int v119; // r9d
  _QWORD *v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rsi
  _QWORD *v124; // rdi
  unsigned int v125; // r11d
  int v126; // eax
  __int64 v127; // r8
  _QWORD *v128; // rsi
  __int64 *v129; // r9
  __int64 *v130; // rsi
  unsigned __int64 v131; // r14
  __int64 v132; // r10
  int v133; // edx
  int v134; // r11d
  __int64 v135; // rcx
  int v136; // eax
  __int64 *v137; // r8
  __int64 v138; // rdi
  __int64 *v139; // rdx
  __int64 v140; // r12
  int v141; // r8d
  int v142; // r9d
  __int64 v143; // rdx
  __int64 v144; // rdi
  __int64 v145; // [rsp+8h] [rbp-110h]
  __int64 v146; // [rsp+8h] [rbp-110h]
  char v147; // [rsp+10h] [rbp-108h]
  __int64 v148; // [rsp+10h] [rbp-108h]
  unsigned __int64 v149; // [rsp+10h] [rbp-108h]
  __int64 v150; // [rsp+18h] [rbp-100h]
  char v151; // [rsp+18h] [rbp-100h]
  __int64 v153; // [rsp+28h] [rbp-F0h]
  __int64 *v157; // [rsp+48h] [rbp-D0h]
  __int64 *v158; // [rsp+48h] [rbp-D0h]
  __int64 *v159; // [rsp+48h] [rbp-D0h]
  unsigned int v160; // [rsp+50h] [rbp-C8h]
  unsigned int v161; // [rsp+50h] [rbp-C8h]
  __int64 v162; // [rsp+50h] [rbp-C8h]
  __int64 v163; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v164; // [rsp+78h] [rbp-A0h]
  void *v165; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v166; // [rsp+98h] [rbp-80h]
  __int64 v167; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v168; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v169; // [rsp+B8h] [rbp-60h] BYREF
  __int64 *v170; // [rsp+C0h] [rbp-58h]
  __int64 *v171; // [rsp+C8h] [rbp-50h]
  __int64 *v172; // [rsp+D0h] [rbp-48h]
  __int64 v173; // [rsp+D8h] [rbp-40h]

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 57 > 2 )
  {
    v9 = 0;
    LODWORD(v169) = 0;
    v170 = nullptr;
    v171 = &v169;
    v172 = &v169;
    v173 = 0;
    v145 = sub_AB4240(a1, a2);
    v153 = 0;
    v26 = sub_7868A0(a2);
    if ( !v26 )
      goto LABEL_69;
  }
  else
  {
    v8 = a5;
    v9 = a5;
    LODWORD(v169) = 0;
    v170 = nullptr;
    v171 = &v169;
    v172 = &v169;
    v173 = 0;
    v10 = sub_AB4240(a1, a2);
    v11 = *(_QWORD *)(a2 + 104);
    v145 = v10;
    sub_6E77B0((unsigned __int64 *)(v11 + 96), v11);
    v12 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
      v13 = sub_7A2E20(v12, v11);
    else
      v13 = *(_QWORD *)(v12 + 24);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
    v14 = *(__int64 **)(a2 + 104);
    v15 = v13 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    sub_6E77B0((unsigned __int64 *)v14 + 12, (__int64)v14);
    v16 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
      v17 = sub_7A2E20(v16, v14);
    else
      v17 = *(_QWORD *)(v16 + 24);
    v18 = v17;
    if ( v15 != v17 )
    {
      v147 = v8;
      do
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v18 + 12) & 1) == 0 )
          {
            v19 = *(_QWORD *)(**(_QWORD **)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            v20 = *(_QWORD *)(v19 + 8);
            if ( (v20 & 7) != 0 || (v20 & 8) != 0 )
              v19 = sub_B0CF30(**(_QWORD **)(v18 + 16), v14);
            v21 = sub_B0E910(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
            v14 = *(__int64 **)(v21 + 104);
            v22 = v21;
            sub_6E77B0((unsigned __int64 *)v14 + 12, (__int64)v14);
            if ( (*(_BYTE *)(*(_QWORD *)(v22 + 128) + 1LL) & 2) == 0 )
              break;
          }
          v18 += 24;
          if ( v15 == v18 )
            goto LABEL_20;
        }
        v150 = sub_6E8100(v145, v22);
        v23 = sub_6F7120(a1);
        v14 = v170;
        v166 = v22;
        v24 = v150 * v23;
        v165 = (void *)v24;
        if ( v170 )
        {
          v25 = &v169;
          do
          {
            while ( v24 < v14[4] )
            {
              if ( !v14[2] )
                goto LABEL_19;
              v25 = v14;
              v14 = (__int64 *)v14[2];
            }
            v14 = (__int64 *)v14[3];
          }
          while ( v14 );
          v14 = v25;
        }
        else
        {
          v14 = &v169;
        }
LABEL_19:
        v18 += 24;
        sub_6F23C0(&v168, v14, (unsigned __int64 *)&v165);
      }
      while ( v15 != v18 );
LABEL_20:
      v8 = v147;
    }
    v153 = a2;
    v26 = sub_7868A0(a2);
    if ( !v26 )
    {
      if ( !v8 )
        goto LABEL_30;
LABEL_90:
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v153 + 104) + 96LL), *(_QWORD *)(v153 + 104));
      v46 = *(_QWORD *)(v153 + 128);
      if ( (*(_BYTE *)(v46 + 32) & 1) != 0 )
        v47 = sub_7A2E60();
      else
        v47 = *(_QWORD *)(v46 + 32);
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v153 + 104) + 96LL), *(_QWORD *)(v153 + 104));
      v48 = *(__int64 **)(v153 + 104);
      v148 = v47 + 24LL * *(unsigned int *)(*(_QWORD *)(v153 + 128) + 20LL);
      sub_6E77B0((unsigned __int64 *)v48 + 12, (__int64)v48);
      v49 = *(_QWORD *)(v153 + 128);
      if ( (*(_BYTE *)(v49 + 32) & 1) != 0 )
        v50 = sub_7A2E60();
      else
        v50 = *(_QWORD *)(v49 + 32);
      if ( v148 == v50 )
      {
LABEL_124:
        v28 = v171;
        v29 = *(_QWORD *)v145;
LABEL_31:
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v153 + 104) + 96LL), *(_QWORD *)(v153 + 104));
        if ( (*(_BYTE *)(*(_QWORD *)(v153 + 128) + 1LL) & 4) != 0
          || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v153 + 104) + 96LL), *(_QWORD *)(v153 + 104)),
              *(_DWORD *)(*(_QWORD *)(v153 + 128) + 20LL)) )
        {
          if ( v28 == &v169 || v28[4] )
          {
            if ( a4 )
            {
              sub_6A7840((__int64)a3, "\"_vptr$");
              sub_791DD0(&v163, v153 + 40);
              v93 = v164;
              if ( !v164 )
              {
                std::string::_M_replace();
                v93 = v164;
              }
              if ( 0x3FFFFFFFFFFFFFFFLL - a3[1] < v93 )
LABEL_264:
                std::__throw_length_error("basic_string::append");
              std::string::_M_append();
              std::string::push_back();
              std::string::_M_dispose();
            }
            sub_6A7840((__int64)a3, "^^?");
          }
        }
        if ( *(char *)(a2 + 74) < 0 )
          goto LABEL_35;
        goto LABEL_70;
      }
      v51 = v50;
      v52 = v145;
LABEL_105:
      v69 = *(_QWORD *)(**(_QWORD **)(v51 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v70 = *(_QWORD *)(v69 + 8);
      if ( (v70 & 7) != 0 || (v70 & 8) != 0 )
        v69 = sub_B0CF30(**(_QWORD **)(v51 + 16), v48);
      v71 = sub_B0E910(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL));
      v72 = *(_QWORD *)(v71 + 104);
      v73 = v71;
      v74 = *(_QWORD *)(v72 + 96);
      v75 = v74 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v74 & 1) != 0 )
      {
        if ( v75 )
          goto LABEL_97;
      }
      else if ( v75 > 3 && (v74 & 2) != 0 )
      {
        v76 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
        v77 = v76[2275];
        if ( v77 )
        {
          v48 = (__int64 *)v76[274];
          v76[284] += 24LL;
          v75 = ((unsigned __int64)v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v76[275] >= v75 + 24 && v48 )
          {
            v76[274] = v75 + 24;
          }
          else
          {
            v48 = &qword_18;
            v75 = sub_6A76A0((__int64)(v76 + 274), 24, 3);
          }
          *(_QWORD *)v75 = v77;
          *(_DWORD *)(v75 + 8) = 0;
          v74 = v75 | 5;
          *(_QWORD *)(v75 + 16) = v72;
          *(_QWORD *)(v72 + 96) = v75 | 5;
          LOBYTE(v75) = v75 & 0xFA | 4;
LABEL_97:
          if ( (v75 & 4) != 0 )
          {
            v53 = (_DWORD *)(v74 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v53 )
            {
              v91 = *(_QWORD *)v53;
              v92 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
              if ( v53[2] != v92 )
              {
                v53[2] = v92;
                v48 = (__int64 *)v72;
                (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v91 + 144LL))(v91, v72);
              }
            }
          }
          goto LABEL_99;
        }
        *(_QWORD *)(v72 + 96) = v72 & 0xFFFFFFFFFFFFFFFALL | 1;
      }
LABEL_99:
      v54 = *(_QWORD *)(v73 + 128);
      if ( (*(_BYTE *)(v54 + 1) & 2) != 0 )
        goto LABEL_104;
      v55 = *(_QWORD *)(v52 + 72);
      v56 = *(_QWORD *)(v54 + 88);
      v57 = 0;
      v58 = *(_DWORD *)(v55 + 104);
      v59 = *(_QWORD *)(v55 + 88);
      if ( v58 )
      {
        v60 = v58 - 1;
        v61 = 1;
        v62 = v60 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
        v63 = (_QWORD *)(v59 + 24LL * v62);
        v64 = nullptr;
        v65 = *v63;
        if ( *v63 == v56 )
        {
LABEL_102:
          v66 = v63[1];
LABEL_103:
          v67 = sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 18488) & 0xFFFFFFFFFFFFFFF0LL)) * v66;
          v68 = **(_QWORD **)(v52 + 72);
          v48 = *(__int64 **)(*(_QWORD *)(a1 + 18488) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v67 < sub_6F6DE0(a1, (__int64)v48) * v68 )
            goto LABEL_104;
          v78 = v170;
          if ( !v170 )
            goto LABEL_141;
          v79 = &v169;
          while ( 1 )
          {
            if ( v78[4] < v67 )
            {
              v80 = (__int64 *)v78[3];
              if ( !v80 )
              {
                v78 = v79;
LABEL_139:
                if ( v78 == &v169 || v67 < v78[4] )
                {
LABEL_141:
                  v48 = &v169;
                  v165 = (void *)v67;
                  v166 = v73;
                  sub_6F23C0(&v168, &v169, (unsigned __int64 *)&v165);
                }
LABEL_104:
                v51 += 24;
                if ( v51 == v148 )
                  goto LABEL_124;
                goto LABEL_105;
              }
            }
            else
            {
              v80 = (__int64 *)v78[2];
              if ( !v80 )
                goto LABEL_139;
              v79 = v78;
            }
            v78 = v80;
          }
        }
        while ( v65 != -4096 )
        {
          if ( v65 == -8192 && !v64 )
            v64 = v63;
          v62 = v60 & (v61 + v62);
          v63 = (_QWORD *)(v59 + 24LL * v62);
          v65 = *v63;
          if ( v56 == *v63 )
            goto LABEL_102;
          ++v61;
        }
        if ( !v64 )
          v64 = v63;
        v96 = *(_DWORD *)(v55 + 96) + 1;
        v57 = 2 * v58;
        if ( 4 * v96 < 3 * v58 )
        {
          if ( v58 >> 3 < v58 - *(_DWORD *)(v55 + 100) - v96 )
            goto LABEL_176;
          v161 = *(_DWORD *)(v55 + 104);
          v159 = *(__int64 **)(v55 + 88);
          v121 = (((((((((v60 | (v60 >> 1)) >> 2) | v60 | (v60 >> 1)) >> 4)
                    | ((v60 | (v60 >> 1)) >> 2)
                    | v60
                    | (v60 >> 1)) >> 8)
                  | ((((v60 | (v60 >> 1)) >> 2) | v60 | (v60 >> 1)) >> 4)
                  | ((v60 | (v60 >> 1)) >> 2)
                  | v60
                  | (v60 >> 1)) >> 16)
                | ((((((v60 | (v60 >> 1)) >> 2) | v60 | (v60 >> 1)) >> 4) | ((v60 | (v60 >> 1)) >> 2) | v60 | (v60 >> 1)) >> 8)
                | ((((v60 | (v60 >> 1)) >> 2) | v60 | (v60 >> 1)) >> 4)
                | ((v60 | (v60 >> 1)) >> 2)
                | v60
                | (v60 >> 1))
               + 1;
          if ( (unsigned int)v121 < 0x40 )
            LODWORD(v121) = 64;
          *(_DWORD *)(v55 + 104) = v121;
          v122 = sub_25CC9C0(24LL * (unsigned int)v121, 8);
          v123 = *(unsigned int *)(v55 + 104);
          v124 = (_QWORD *)v122;
          v125 = ((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4);
          *(_QWORD *)(v55 + 88) = v122;
          v126 = v123;
          v127 = 24 * v123;
          v128 = &v124[3 * v123];
          if ( v159 )
          {
            *(_QWORD *)(v55 + 96) = 0;
            v129 = &v159[3 * v161];
            if ( v127 )
            {
              if ( (((_BYTE)v128 - (_BYTE)v124) & 8) == 0 || (*v124 = -4096, v124 += 3, v124 != v128) )
              {
                do
                {
                  *v124 = -4096;
                  v124 += 6;
                  *(v124 - 3) = -4096;
                }
                while ( v124 != v128 );
              }
            }
            v130 = v159;
            v162 = v52;
            v131 = v73;
            do
            {
              v132 = *v130;
              if ( *v130 != -4096 && v132 != -8192 )
              {
                v133 = *(_DWORD *)(v55 + 104);
                if ( !v133 )
                {
                  *(_QWORD *)&dword_0 = *v130;
                  BUG();
                }
                v134 = v133 - 1;
                v135 = *(_QWORD *)(v55 + 88);
                v136 = 1;
                v137 = nullptr;
                LODWORD(v138) = (v133 - 1) & (((unsigned int)v132 >> 9) ^ ((unsigned int)v132 >> 4));
                v139 = (__int64 *)(v135 + 24LL * (unsigned int)v138);
                v140 = *v139;
                if ( v132 != *v139 )
                {
                  while ( v140 != -4096 )
                  {
                    if ( v140 == -8192 && !v137 )
                      v137 = v139;
                    v138 = v134 & (unsigned int)(v138 + v136);
                    v139 = (__int64 *)(v135 + 24 * v138);
                    v140 = *v139;
                    if ( v132 == *v139 )
                      goto LABEL_215;
                    ++v136;
                  }
                  if ( v137 )
                    v139 = v137;
                }
LABEL_215:
                *v139 = v132;
                *(__m128i *)(v139 + 1) = _mm_loadu_si128((const __m128i *)(v130 + 1));
                ++*(_DWORD *)(v55 + 96);
              }
              v130 += 3;
            }
            while ( v129 != v130 );
            v73 = v131;
            v52 = v162;
            operator delete();
            v128 = *(_QWORD **)(v55 + 88);
            v126 = *(_DWORD *)(v55 + 104);
            v125 = ((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4);
            v96 = *(_DWORD *)(v55 + 96) + 1;
          }
          else
          {
            *(_QWORD *)(v55 + 96) = 0;
            if ( v124 == v128 )
            {
              v96 = 1;
            }
            else
            {
              if ( (((_BYTE)v128 - (_BYTE)v124) & 8) == 0 || (*v124 = -4096, v124 += 3, v124 != v128) )
              {
                do
                {
                  *v124 = -4096;
                  v124 += 6;
                  *(v124 - 3) = -4096;
                }
                while ( v124 != v128 );
              }
              v128 = *(_QWORD **)(v55 + 88);
              v126 = *(_DWORD *)(v55 + 104);
              v96 = *(_DWORD *)(v55 + 96) + 1;
            }
          }
          if ( !v126 )
          {
LABEL_267:
            *(_DWORD *)(v55 + 96) = v96;
            BUG();
          }
          v141 = v126 - 1;
          v142 = 1;
          v120 = nullptr;
          LODWORD(v143) = (v126 - 1) & v125;
          v64 = &v128[3 * (unsigned int)v143];
          v144 = *v64;
          if ( v56 == *v64 )
            goto LABEL_176;
          while ( v144 != -4096 )
          {
            if ( !v120 && v144 == -8192 )
              v120 = v64;
            v143 = v141 & (unsigned int)(v143 + v142);
            v64 = &v128[3 * v143];
            v144 = *v64;
            if ( v56 == *v64 )
              goto LABEL_176;
            ++v142;
          }
          goto LABEL_199;
        }
      }
      v160 = *(_DWORD *)(v55 + 104);
      v157 = *(__int64 **)(v55 + 88);
      v97 = (((((((((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
                | (unsigned int)(v57 - 1)
                | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 4)
              | (((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
              | (unsigned int)(v57 - 1)
              | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
              | (unsigned int)(v57 - 1)
              | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 4)
            | (((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
            | (unsigned int)(v57 - 1)
            | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 16)
          | (((((((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
              | (unsigned int)(v57 - 1)
              | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 4)
            | (((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
            | (unsigned int)(v57 - 1)
            | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
            | (unsigned int)(v57 - 1)
            | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 4)
          | (((unsigned int)(v57 - 1) | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1)) >> 2)
          | (unsigned int)(v57 - 1)
          | ((unsigned __int64)(unsigned int)(v57 - 1) >> 1);
      v98 = v97 + 1;
      if ( v98 < 0x40 )
        v98 = 64;
      *(_DWORD *)(v55 + 104) = v98;
      v99 = sub_25CC9C0(24LL * v98, 8);
      v100 = *(unsigned int *)(v55 + 104);
      v101 = v157;
      v102 = (_QWORD *)v99;
      *(_QWORD *)(v55 + 88) = v99;
      v103 = v100;
      v104 = 24 * v100;
      v105 = &v102[3 * v100];
      if ( v157 )
      {
        *(_QWORD *)(v55 + 96) = 0;
        v158 = &v157[3 * v160];
        if ( v104 )
        {
          if ( (((_BYTE)v105 - (_BYTE)v102) & 8) == 0 || (*v102 = -4096, v102 += 3, v102 != v105) )
          {
            do
            {
              *v102 = -4096;
              v102 += 6;
              *(v102 - 3) = -4096;
            }
            while ( v102 != v105 );
          }
        }
        for ( i = v101; v158 != i; i += 3 )
        {
          v107 = *i;
          if ( *i != -4096 && v107 != -8192 )
          {
            v108 = *(_DWORD *)(v55 + 104);
            if ( !v108 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v109 = v108 - 1;
            v110 = *(_QWORD *)(v55 + 88);
            v111 = 1;
            v112 = nullptr;
            LODWORD(v113) = (v108 - 1) & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
            v114 = (__int64 *)(v110 + 24LL * (unsigned int)v113);
            v115 = *v114;
            if ( v107 != *v114 )
            {
              while ( v115 != -4096 )
              {
                if ( v115 == -8192 && !v112 )
                  v112 = v114;
                v113 = v109 & (unsigned int)(v113 + v111);
                v114 = (__int64 *)(v110 + 24 * v113);
                v115 = *v114;
                if ( v107 == *v114 )
                  goto LABEL_191;
                ++v111;
              }
              if ( v112 )
                v114 = v112;
            }
LABEL_191:
            *v114 = v107;
            *(__m128i *)(v114 + 1) = _mm_loadu_si128((const __m128i *)(i + 1));
            ++*(_DWORD *)(v55 + 96);
          }
        }
        operator delete();
      }
      else
      {
        *(_QWORD *)(v55 + 96) = 0;
        if ( v102 == v105 )
        {
          v96 = 1;
          goto LABEL_195;
        }
        if ( (((_BYTE)v105 - (_BYTE)v102) & 8) == 0 || (*v102 = -4096, v102 += 3, v102 != v105) )
        {
          do
          {
            *v102 = -4096;
            v102 += 6;
            *(v102 - 3) = -4096;
          }
          while ( v102 != v105 );
        }
      }
      v105 = *(_QWORD **)(v55 + 88);
      v103 = *(_DWORD *)(v55 + 104);
      v96 = *(_DWORD *)(v55 + 96) + 1;
LABEL_195:
      if ( !v103 )
        goto LABEL_267;
      v116 = v103 - 1;
      LODWORD(v117) = (v103 - 1) & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
      v64 = &v105[3 * (unsigned int)v117];
      v118 = *v64;
      if ( v56 == *v64 )
        goto LABEL_176;
      v119 = 1;
      v120 = nullptr;
      while ( v118 != -4096 )
      {
        if ( v118 == -8192 && !v120 )
          v120 = v64;
        v117 = v116 & (unsigned int)(v117 + v119);
        v64 = &v105[3 * v117];
        v118 = *v64;
        if ( v56 == *v64 )
          goto LABEL_176;
        ++v119;
      }
LABEL_199:
      if ( v120 )
        v64 = v120;
LABEL_176:
      *(_DWORD *)(v55 + 96) = v96;
      if ( *v64 != -4096 )
        --*(_DWORD *)(v55 + 100);
      *v64 = v56;
      v66 = 0;
      v64[1] = 0;
      *((_BYTE *)v64 + 16) = 0;
      goto LABEL_103;
    }
  }
  v151 = v9;
LABEL_23:
  if ( (unsigned __int8)sub_7818A0(v26) || !(unsigned __int8)sub_78B7C0(v26, a1) )
  {
    v31 = v26;
    if ( *(char *)(v26 + 29) < 0 )
      v31 = sub_77A0C0(v26);
    if ( *(_DWORD *)(v31 + 68) <= 0xFu )
      sub_78B660(v31);
    v32 = v170;
    v33 = *(_QWORD *)(*(_QWORD *)(v145 + 48) + 8LL * (unsigned int)((*(_DWORD *)(v31 + 68) >> 4) - 1));
    if ( v170 )
    {
      v34 = &v169;
      while ( 1 )
      {
        if ( v33 >= v32[4] )
        {
          v35 = (__int64 *)v32[3];
          if ( !v35 )
          {
            v32 = v34;
LABEL_58:
            v36 = operator new(0x30u);
            *(_QWORD *)(v36 + 32) = v33;
            *(_QWORD *)(v36 + 40) = v26;
            sub_6A7540(&v168, v32, v33);
            if ( v37 || (v38 = v170) == nullptr )
            {
LABEL_59:
              std::_Rb_tree_insert_and_rebalance();
              ++v173;
              goto LABEL_27;
            }
            while ( 1 )
            {
              if ( v38[4] < v33 )
              {
                v39 = (__int64 *)v38[3];
                if ( !v39 )
                  goto LABEL_59;
              }
              else
              {
                v39 = (__int64 *)v38[2];
                if ( !v39 )
                  goto LABEL_59;
              }
              v38 = v39;
            }
          }
        }
        else
        {
          v35 = (__int64 *)v32[2];
          if ( !v35 )
            goto LABEL_58;
          v34 = v32;
        }
        v32 = v35;
      }
    }
    v32 = &v169;
    goto LABEL_58;
  }
LABEL_27:
  while ( 1 )
  {
    v27 = *(_QWORD *)(v26 + 8);
    v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v27 <= 7 )
      break;
    if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 47 <= 2 )
      goto LABEL_23;
  }
  if ( v151 )
    goto LABEL_90;
  if ( v153 )
  {
LABEL_30:
    v28 = v171;
    v29 = **(_QWORD **)(v145 + 72);
    goto LABEL_31;
  }
LABEL_69:
  v28 = v171;
  v29 = *(_QWORD *)v145;
  if ( *(char *)(a2 + 74) < 0 )
    goto LABEL_35;
LABEL_70:
  v40 = sub_6F7120(a1) * v29;
  v41 = v170;
  if ( v170 )
  {
    v42 = &v169;
    do
    {
      while ( v40 < v41[4] )
      {
        if ( !v41[2] )
          goto LABEL_75;
        v42 = v41;
        v41 = (__int64 *)v41[2];
      }
      v41 = (__int64 *)v41[3];
    }
    while ( v41 );
    v41 = v42;
  }
  else
  {
    v41 = &v169;
  }
LABEL_75:
  v43 = operator new(0x30u);
  *(_QWORD *)(v43 + 32) = v40;
  *(_QWORD *)(v43 + 40) = 0;
  sub_6A7540(&v168, v41, v40);
  if ( !v44 )
  {
    v94 = v170;
    if ( v170 )
    {
      while ( 1 )
      {
        if ( v94[4] < v40 )
        {
          v95 = (__int64 *)v94[3];
          if ( !v95 )
            break;
        }
        else
        {
          v95 = (__int64 *)v94[2];
          if ( !v95 )
            break;
        }
        v94 = v95;
      }
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++v173;
LABEL_35:
  if ( v28 != &v169 )
  {
    if ( a4 )
    {
      do
      {
        v30 = v28[5];
        if ( !v30 )
          break;
        if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 57 > 2 )
        {
          v81 = a3[1];
          v82 = (_QWORD *)*a3;
          v83 = v81 + 1;
          if ( (_QWORD *)*a3 == a3 + 2 )
            v84 = 15;
          else
            v84 = a3[2];
          if ( v84 < v83 )
          {
            std::string::_M_mutate();
            v82 = (_QWORD *)*a3;
            v83 = v81 + 1;
          }
          *((_BYTE *)v82 + v81) = 34;
          v85 = (_QWORD *)*a3;
          a3[1] = v83;
          *((_BYTE *)v85 + v81 + 1) = 0;
          sub_791DD0(&v165, v30 + 40);
          if ( 0x3FFFFFFFFFFFFFFFLL - a3[1] < v166 )
            goto LABEL_264;
          std::string::_M_append();
          if ( v165 != &v167 )
            operator delete(v165, v167 + 1);
          v86 = a3[1];
          v87 = (_QWORD *)*a3;
          v88 = v86 + 1;
          if ( (_QWORD *)*a3 == a3 + 2 )
            v89 = 15;
          else
            v89 = a3[2];
          if ( v89 < v88 )
          {
            v149 = v86 + 1;
            v146 = a3[1];
            std::string::_M_mutate();
            v87 = (_QWORD *)*a3;
            v88 = v149;
            v86 = v146;
          }
          *((_BYTE *)v87 + v86) = 34;
          v90 = (_QWORD *)*a3;
          a3[1] = v88;
          *((_BYTE *)v90 + v86 + 1) = 0;
          if ( (*(_BYTE *)(v30 + 68) & 1) != 0 )
          {
            sub_6B2040(a1, a3, *(_QWORD *)(v30 + 48), v30);
          }
          else
          {
            v165 = *(void **)(v30 + 48);
            sub_70B370(a1, (__int64 *)&v165);
            sub_710580(a1, v165, a3, 18, a4, a6);
          }
        }
        else if ( sub_78B3D0(v28[5]) && *(char *)(sub_78B3D0(v30) + 28) >= 0 )
        {
          sub_70F0A0(a1, v30, a3, a4, 0, a6);
        }
        v28 = (__int64 *)std::_Rb_tree_increment();
      }
      while ( v28 != &v169 );
    }
    else
    {
      do
      {
        v45 = v28[5];
        if ( !v45 )
          break;
        if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 57 > 2 )
        {
          if ( (*(_BYTE *)(v45 + 68) & 1) != 0 )
          {
            sub_6B2040(a1, a3, *(_QWORD *)(v45 + 48), v28[5]);
          }
          else
          {
            v165 = *(void **)(v45 + 48);
            sub_70B370(a1, (__int64 *)&v165);
            sub_710580(a1, v165, a3, 18, 0, a6);
          }
        }
        else if ( sub_78B3D0(v28[5]) && *(char *)(sub_78B3D0(v45) + 28) >= 0 )
        {
          sub_70F0A0(a1, v45, a3, 0, 0, a6);
        }
        v28 = (__int64 *)std::_Rb_tree_increment();
      }
      while ( v28 != &v169 );
    }
  }
  sub_6A90C0(v170);
}

