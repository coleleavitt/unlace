__int64 __fastcall sub_A81320(__int64 *a1, unsigned int *a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // r15d
  __int64 v10; // rax
  bool v11; // zf
  unsigned int *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rsi
  char v17; // al
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rdi
  int v27; // edx
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdx
  int v31; // edx
  __int64 v32; // rdx
  char v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  int v49; // eax
  unsigned __int8 v50; // r15
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  unsigned int *v55; // rax
  __int64 v56; // r9
  __int64 v57; // r10
  char v58; // al
  _DWORD *v59; // rax
  int v60; // eax
  unsigned int i; // r15d
  char v62; // al
  unsigned int v63; // eax
  int v64; // eax
  __int64 v65; // r15
  __int64 v66; // r15
  __int64 v67; // r15
  __int64 v68; // rdi
  int v69; // eax
  __int64 v70; // r15
  __int64 v71; // r15
  __int64 v72; // r15
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // r8d
  int v76; // r9d
  unsigned int v77; // eax
  __int64 v78; // rdx
  int v79; // ecx
  int v80; // r8d
  int v81; // r9d
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rdx
  int v86; // ecx
  int v87; // r8d
  int v88; // r9d
  _DWORD *v89; // rax
  __int64 v90; // rdx
  int v91; // ecx
  int v92; // r8d
  int v93; // r9d
  _DWORD *v94; // rax
  _DWORD *v95; // rax
  int v96; // eax
  _QWORD *v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // rdi
  __int64 v102; // rdx
  int v103; // ecx
  int v104; // r8d
  int v105; // r9d
  __int64 v106; // rdx
  int v107; // ecx
  int v108; // r8d
  int v109; // r9d
  _DWORD *v110; // rax
  _DWORD *v111; // rax
  int v112; // eax
  __int64 v113; // rbx
  __int64 v114; // rbx
  __int64 v115; // [rsp+10h] [rbp-1F0h]
  __int64 v116; // [rsp+18h] [rbp-1E8h]
  __int64 v117; // [rsp+20h] [rbp-1E0h]
  unsigned int v118; // [rsp+28h] [rbp-1D8h]
  unsigned __int8 v119; // [rsp+28h] [rbp-1D8h]
  int v120; // [rsp+30h] [rbp-1D0h]
  unsigned __int8 v121; // [rsp+30h] [rbp-1D0h]
  __int64 v122; // [rsp+30h] [rbp-1D0h]
  __int64 v123; // [rsp+30h] [rbp-1D0h]
  __int64 v124; // [rsp+30h] [rbp-1D0h]
  unsigned int v125; // [rsp+38h] [rbp-1C8h]
  __int64 v126; // [rsp+38h] [rbp-1C8h]
  unsigned int v127; // [rsp+38h] [rbp-1C8h]
  unsigned int v128; // [rsp+38h] [rbp-1C8h]
  __int64 v129; // [rsp+40h] [rbp-1C0h]
  unsigned __int8 v130; // [rsp+48h] [rbp-1B8h]
  int v131; // [rsp+48h] [rbp-1B8h]
  __int64 v132; // [rsp+58h] [rbp-1A8h]
  _DWORD *v133; // [rsp+60h] [rbp-1A0h]
  unsigned int *v134; // [rsp+68h] [rbp-198h]
  void *v135; // [rsp+68h] [rbp-198h]
  void *v136; // [rsp+68h] [rbp-198h]
  unsigned int v137; // [rsp+68h] [rbp-198h]
  void *v138; // [rsp+68h] [rbp-198h]
  unsigned int v139; // [rsp+68h] [rbp-198h]
  int v140; // [rsp+68h] [rbp-198h]
  _DWORD *v141; // [rsp+68h] [rbp-198h]
  unsigned int v142; // [rsp+68h] [rbp-198h]
  unsigned int v143; // [rsp+68h] [rbp-198h]
  __int64 v144; // [rsp+70h] [rbp-190h]
  __int64 v145; // [rsp+78h] [rbp-188h]
  __int64 v146; // [rsp+80h] [rbp-180h]
  __int64 v147; // [rsp+88h] [rbp-178h]
  __int64 v148; // [rsp+90h] [rbp-170h]
  void *v149; // [rsp+98h] [rbp-168h]
  void *v150; // [rsp+98h] [rbp-168h]
  _QWORD *v151; // [rsp+98h] [rbp-168h]
  void *v152; // [rsp+98h] [rbp-168h]
  _QWORD *v153; // [rsp+98h] [rbp-168h]
  void *v154; // [rsp+98h] [rbp-168h]
  __int64 v155; // [rsp+A0h] [rbp-160h]
  unsigned int v157; // [rsp+A8h] [rbp-158h]
  int v158; // [rsp+A8h] [rbp-158h]
  unsigned __int8 v159; // [rsp+B3h] [rbp-14Dh] BYREF
  unsigned int v160; // [rsp+B4h] [rbp-14Ch] BYREF
  unsigned int *v161; // [rsp+B8h] [rbp-148h] BYREF
  unsigned int *v162; // [rsp+C0h] [rbp-140h] BYREF
  __int64 *v163; // [rsp+C8h] [rbp-138h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-130h] BYREF
  __int64 v165; // [rsp+D8h] [rbp-128h]
  __int64 v166; // [rsp+E0h] [rbp-120h] BYREF
  __int64 v167; // [rsp+E8h] [rbp-118h]
  __int64 v168; // [rsp+F0h] [rbp-110h] BYREF
  __int64 v169; // [rsp+F8h] [rbp-108h]
  _QWORD v170[4]; // [rsp+100h] [rbp-100h] BYREF
  __int64 v171; // [rsp+120h] [rbp-E0h] BYREF
  __int64 v172; // [rsp+128h] [rbp-D8h]
  __int64 v173; // [rsp+130h] [rbp-D0h]
  __int64 v174; // [rsp+138h] [rbp-C8h]
  __int64 v175; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v176; // [rsp+148h] [rbp-B8h]
  __int64 v177; // [rsp+150h] [rbp-B0h]
  __int64 v178; // [rsp+158h] [rbp-A8h]
  char v179[32]; // [rsp+160h] [rbp-A0h] BYREF
  char v180[32]; // [rsp+180h] [rbp-80h] BYREF
  int v181; // [rsp+1A0h] [rbp-60h] BYREF
  char v182; // [rsp+1A4h] [rbp-5Ch]
  __int64 v183; // [rsp+1A8h] [rbp-58h]
  int v184; // [rsp+1B0h] [rbp-50h] BYREF
  char v185; // [rsp+1B4h] [rbp-4Ch]
  __int64 v186; // [rsp+1B8h] [rbp-48h]

  v4 = *a1;
  v5 = *a2;
  v160 = 0;
  v161 = nullptr;
  v6 = *(_QWORD *)(v4 + 16);
  v162 = nullptr;
  v7 = **(_QWORD **)(*(_QWORD *)(v6 + 8656) + 8 * v5);
  if ( !(unsigned int)sub_8E7030(v6)
    || (v8 = 1,
        (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 7488) + 56LL))(
          *(_QWORD *)(v6 + 7488),
          v7)) )
  {
    v170[0] = 0;
    v10 = a1[1];
    v170[1] = 0;
    v155 = v10;
    v170[2] = 1;
    v170[3] = 0;
    v11 = *((_WORD *)a2 + 2) == 0;
    v171 = 0;
    v172 = 0;
    v173 = 1;
    v174 = 0;
    v175 = 0;
    v176 = 0;
    v177 = 1;
    v178 = 0;
    if ( v11
      && (v21 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL)) != 0
      && *(_DWORD *)v21 == 5
      && *(_DWORD *)(v21 + 4) == 36 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v11 = *(_BYTE *)(v22 + 8) == 0;
      v134 = *((unsigned int **)a2 + 4);
      v161 = v134;
      v162 = *((unsigned int **)a2 + 5);
      if ( !v11 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v12 = v134;
      v160 = *(_DWORD *)v22;
    }
    else
    {
      if ( !(unsigned __int8)sub_A733D0((__int64)a2, 37, &v160, &v161, &v162)
        && !(unsigned __int8)sub_A733D0((__int64)a2, 38, &v160, &v161, &v162)
        && !(unsigned __int8)sub_A733D0((__int64)a2, 39, &v160, &v161, &v162) )
      {
        sub_1872CE0("");
        sub_1873130(114, 2499);
      }
      v12 = v161;
    }
    v13 = *a1;
    v14 = *v12;
    v164 = 0;
    v15 = *(_QWORD *)(v13 + 16);
    v165 = v155;
    v16 = *(__int64 **)(*(_QWORD *)(v15 + 8656) + 8 * v14);
    v17 = sub_A7AFE0(a1, v16, &v164);
    v147 = v164;
    v144 = v165;
    if ( v17 )
    {
      v18 = *a1;
      v166 = 0;
      v167 = v155;
      v16 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 8656LL) + 8LL * *v162);
      v19 = sub_A7AFE0(a1, v16, &v166);
      v148 = 0;
      v146 = v166;
      v145 = v167;
      if ( v19 )
      {
        v24 = *a1;
        v168 = 0;
        v16 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 8656LL) + 8LL * *a2);
        v169 = v155;
        v8 = sub_A7AFE0(a1, v16, &v168);
        v148 = v168;
        v155 = v169;
        if ( (_BYTE)v8 )
        {
          v25 = v168;
          v26 = a1 + 2;
          v132 = (__int64)(a1 + 2);
          if ( !(unsigned __int8)sub_1666AE0(a1 + 2, v168, v170, &v159)
            || !v159
            || (v25 = v147, v26 = a1 + 2, !(unsigned __int8)sub_1666AE0(v132, v147, &v171, &v159))
            || !v159
            || (v25 = v146, v26 = a1 + 2, !(unsigned __int8)sub_1666AE0(v132, v146, &v175, &v159))
            || (v130 = v159) == 0 )
          {
            if ( (unsigned int)sub_180B130(v26) > 1 )
            {
              if ( (unsigned __int8)sub_186A530(a3) )
              {
                sub_186A4C0(a3);
                v135 = (void *)sub_180B150(v26, v25);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(&v181, a2, a1[1], 0, 0, 0);
                sub_160E8B0(v135, &v181);
                std::operator<<<std::char_traits<char>>();
                sub_18572D0(&v184);
                sub_186A500(&v184, "\n");
              }
              else
              {
                v136 = (void *)sub_180B150(v26, v25);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(&v181, a2, a1[1], 0, 0, 0);
                sub_160E8B0(v136, &v181);
                std::operator<<<std::char_traits<char>>();
                sub_18572D0(&v184);
              }
            }
            sub_A810F0(a1, (__int64)a2);
            goto LABEL_13;
          }
          v125 = v160;
          sub_17F6290(v179, v160);
          sub_88EA00((__int64)&v181, (__int64)&v171, (__int64)v179);
          v27 = v181;
          v181 = v171;
          LODWORD(v171) = v27;
          v28 = v183;
          v183 = v172;
          v172 = v28;
          v29 = v182 & 1;
          LOBYTE(v28) = BYTE4(v171) & 0xFC | v182 & 2;
          v182 = BYTE4(v171) & 1 | v182 & 0xFC | BYTE4(v171) & 2;
          BYTE4(v171) = v29 | v28;
          LODWORD(v28) = v184;
          v184 = v173;
          LODWORD(v173) = v28;
          v30 = v186;
          v186 = v174;
          v174 = v30;
          LOBYTE(v30) = v185 & 1 | BYTE4(v173) & 0xFC | v185 & 2;
          v185 = BYTE4(v173) & 1 | v185 & 0xFC | BYTE4(v173) & 2;
          BYTE4(v173) = v30;
          sub_25A130((char *)&v181);
          sub_88EA00((__int64)&v181, (__int64)&v175, (__int64)v179);
          v31 = v181;
          v181 = v175;
          LODWORD(v175) = v31;
          v32 = v183;
          v183 = v176;
          v176 = v32;
          v33 = v182 & 1;
          LOBYTE(v32) = BYTE4(v175) & 0xFC | v182 & 2;
          v182 = BYTE4(v175) & 1 | v182 & 0xFC | BYTE4(v175) & 2;
          BYTE4(v175) = v33 | v32;
          LODWORD(v32) = v184;
          v184 = v177;
          LODWORD(v177) = v32;
          v34 = v186;
          v186 = v178;
          v178 = v34;
          LOBYTE(v34) = v185 & 1 | BYTE4(v177) & 0xFC | v185 & 2;
          v185 = BYTE4(v177) & 1 | v185 & 0xFC | BYTE4(v177) & 2;
          BYTE4(v177) = v34;
          sub_25A130((char *)&v181);
          v117 = a1[1];
          sub_A72970(v132, (int)v179, v35, v36, v37, v38);
          v39 = sub_15E1B70(a1[2]);
          v129 = v39;
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
          v116 = a1[1];
          sub_A72970(v132, (int)v179, v40, v41, v42, v43);
          v44 = a1[2];
          v45 = sub_15E1B70(v44);
          v133 = (_DWORD *)v45;
          if ( v45 )
            ++*(_DWORD *)(v45 + 8);
          v163 = a1;
          if ( *((_WORD *)a2 + 2) )
            goto LABEL_45;
          v46 = *((_QWORD *)a2 + 2);
          v47 = *(_DWORD **)(v46 + 24);
          if ( !v47 )
            goto LABEL_45;
          if ( *v47 == 5 && v47[1] == 36 )
          {
            if ( (unsigned int)sub_180B130(v44) > 1 )
            {
              if ( (unsigned __int8)sub_186A530(a3) )
              {
                sub_186A4C0(a3);
                v65 = sub_180B150(v44, 5);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1648CA0(v65, a1[1], a2, 3);
                std::__ostream_insert<char,std::char_traits<char>>();
                v66 = sub_2FCE40(v65, (__int64)v170);
                std::__ostream_insert<char,std::char_traits<char>>();
                v67 = sub_2FCE40(v66, (__int64)&v171);
                std::__ostream_insert<char,std::char_traits<char>>();
                v68 = sub_2FCE40(v67, (__int64)&v175);
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v68, "\n");
              }
              else
              {
                v70 = sub_180B150(v44, 5);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1648CA0(v70, a1[1], a2, 3);
                std::__ostream_insert<char,std::char_traits<char>>();
                v71 = sub_2FCE40(v70, (__int64)v170);
                std::__ostream_insert<char,std::char_traits<char>>();
                v72 = sub_2FCE40(v71, (__int64)&v171);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_2FCE40(v72, (__int64)&v175);
                std::operator<<<std::char_traits<char>>();
              }
            }
            for ( i = 0; v125 != i; ++i )
            {
              v121 = sub_182E3A0(qword_1C7F2C0, &v171, i);
              v119 = sub_182E3A0(qword_1C7F2C0, &v175, i);
              v62 = sub_182E3A0(qword_1C7F2C0, v170, i);
              if ( (v119 & v121) == 1 && !v62 )
              {
                v150 = *(void **)(*a1 + 16);
                v158 = sub_A7AB70(&v163, (__int64)a2, i);
                v140 = sub_A7AB70(&v163, (__int64)v133, i) ^ 1;
                v69 = sub_A7AB70(&v163, v129, i);
                sub_B6A4A0((_DWORD)v150, *(_DWORD *)(*a1 + 8), v69 ^ 1, v140, v158, 0, 0);
                goto LABEL_69;
              }
              if ( v121 != 1 && v62 )
              {
                v149 = *(void **)(*a1 + 16);
                v63 = sub_A7AB70(&v163, v129, i);
                goto LABEL_68;
              }
              if ( v119 != 1 && v62 )
              {
                v149 = *(void **)(*a1 + 16);
                v63 = sub_A7AB70(&v163, (__int64)v133, i);
LABEL_68:
                v139 = v63;
                v64 = sub_A7AB70(&v163, (__int64)a2, i);
                sub_B6A470(v149, *(unsigned int *)(*a1 + 8), v64 ^ 1u, v139, 0, 0);
LABEL_69:
                v130 = 0;
                goto LABEL_45;
              }
            }
            if ( *((_WORD *)a2 + 2) )
              goto LABEL_45;
            v48 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
            if ( !v48 )
              goto LABEL_45;
          }
          else
          {
            v48 = *(_DWORD **)(v46 + 24);
          }
          if ( *v48 != 5 )
          {
LABEL_45:
            sub_A72BE0((__int64)v133, v116);
            sub_A72BE0(v129, v117);
            sub_25A130(v179);
            v8 = v130;
LABEL_13:
            sub_25A130((char *)&v175);
            sub_25A130((char *)&v171);
            sub_25A130((char *)v170);
            sub_A72BE0(v148, v155);
            sub_A72BE0(v146, v145);
            sub_A72BE0(v147, v144);
            return v8;
          }
          v49 = v48[1];
          switch ( v49 )
          {
            case '%':
              if ( (unsigned __int8)sub_88EA80((__int64)&v175, v125) )
                goto LABEL_80;
              v50 = sub_753DF0((__int64)&v175, 0);
              if ( v50 )
                goto LABEL_80;
              v128 = sub_182D020(qword_1C7F2C0, &v175);
              v123 = *a1;
              sub_A72970(v132, (int)v179, v102, v103, v104, v105);
              sub_17F6290(&v181, v128);
              sub_A72970(v132, (int)&v181, v106, v107, v108, v109);
              sub_15E1B70(a1[2]);
              v110 = (_DWORD *)sub_15E1B70(a1[2]);
              v143 = sub_966380(v123, a2, v110);
              sub_25A130((char *)&v181);
              v124 = *a1;
              v153 = *(_QWORD **)(*a1 + 16);
              if ( *(_BYTE *)(v153[1106] + v143) == 1 )
                goto LABEL_80;
              v111 = (_DWORD *)sub_88EF10(v132, v128);
              v112 = sub_966380(v124, v133, v111);
              v97 = v153;
              v98 = *(unsigned int *)(*a1 + 8);
              sub_B6A470(v153, v98, v112 ^ 1u, v143, 0, 0);
              if ( (unsigned int)sub_180B130(v153) <= 1 )
                goto LABEL_56;
              if ( (unsigned __int8)sub_186A530(a3) )
                goto LABEL_89;
              break;
            case '\'':
              if ( (unsigned __int8)sub_88EA80((__int64)&v175, v125) )
                goto LABEL_80;
              v50 = sub_753DF0((__int64)&v175, 0);
              if ( v50 )
                goto LABEL_80;
              v142 = sub_182D020(qword_1C7F2C0, &v175);
              v126 = *a1;
              sub_17F6290(&v181, v142);
              sub_A72970(v132, (int)&v181, v90, v91, v92, v93);
              v94 = (_DWORD *)sub_15E1B70(a1[2]);
              v127 = sub_966380(v126, a2, v94);
              sub_25A130((char *)&v181);
              v122 = *a1;
              v151 = *(_QWORD **)(*a1 + 16);
              if ( *(_BYTE *)(v151[1106] + v127) == 1 )
                goto LABEL_80;
              v95 = (_DWORD *)sub_88EF10(v132, v142);
              v96 = sub_966380(v122, v133, v95);
              v97 = v151;
              v98 = *(unsigned int *)(*a1 + 8);
              sub_B6A470(v151, v98, v96 ^ 1u, v127, 0, 0);
              if ( (unsigned int)sub_180B130(v151) <= 1 )
                goto LABEL_56;
              if ( (unsigned __int8)sub_186A530(a3) )
              {
LABEL_89:
                sub_186A4C0(a3);
                v152 = (void *)sub_180B150(v97, v98);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1648CA0(v152, a1[1], a2, 3);
                std::__ostream_insert<char,std::char_traits<char>>();
                v99 = sub_2FCE40((__int64)v152, (__int64)v170);
                std::__ostream_insert<char,std::char_traits<char>>();
                v100 = sub_2FCE40(v99, (__int64)&v171);
                std::__ostream_insert<char,std::char_traits<char>>();
                v101 = sub_2FCE40(v100, (__int64)&v175);
                std::operator<<<std::char_traits<char>>();
                sub_186A500(v101, "\n");
                goto LABEL_56;
              }
              break;
            case '&':
              if ( !(unsigned __int8)sub_88EA80((__int64)&v175, v125) )
              {
                v50 = sub_753DF0((__int64)&v175, 0);
                if ( !v50 )
                {
                  v137 = sub_182D020(qword_1C7F2C0, &v175);
                  v120 = v137;
                  sub_88EB80((__int64)&v181, (__int64)v179, 2u);
                  sub_A72970(v132, (int)&v181, v51, v52, v53, v54);
                  v55 = (unsigned int *)sub_15E1B70(a1[2]);
                  v118 = sub_A7A500(a1, v55);
                  sub_25A130((char *)&v181);
                  v56 = *a1;
                  v57 = *(_QWORD *)(*a1 + 16);
                  v58 = *(_BYTE *)(*(_QWORD *)(v57 + 8848) + v118);
                  switch ( v58 )
                  {
                    case 0:
                      sub_9936C0(*(_QWORD *)(*a1 + 16), v118 >> 1);
                      goto LABEL_56;
                    case 1:
                      sub_17F6290(&v181, v137);
                      sub_A72970(v132, (int)&v181, v78, v79, v80, v81);
                      sub_15E1B70(a1[2]);
                      sub_25A130((char *)&v181);
                      v115 = *a1;
                      sub_A72970(v132, (int)v179, *a1, v82, v83, v84);
                      sub_17F6290(v180, v125 - v137);
                      sub_3EBD70((__int64)&v181, (__int64)v180);
                      sub_A72970(v132, (int)&v181, v85, v86, v87, v88);
                      sub_15E1B70(a1[2]);
                      v89 = (_DWORD *)sub_15E1B70(a1[2]);
                      v157 = sub_966380(v115, a2, v89);
                      sub_25A130((char *)&v181);
                      sub_25A130(v180);
                      v56 = *a1;
                      v57 = *(_QWORD *)(*a1 + 16);
                      if ( *(_BYTE *)(*(_QWORD *)(v57 + 8848) + v157) != 1 )
                        goto LABEL_55;
                      break;
                    case -1:
                      sub_17F6290(&v181, v137);
                      sub_A72970(v132, (int)&v181, v73, v74, v75, v76);
                      v141 = (_DWORD *)sub_15E1B70(a1[2]);
                      sub_25A130((char *)&v181);
                      v77 = sub_966380(*a1, a2, v141);
                      v56 = *a1;
                      v157 = v77;
                      v57 = *(_QWORD *)(*a1 + 16);
                      if ( *(_BYTE *)(*(_QWORD *)(v57 + 8848) + v77) != 1 )
                        goto LABEL_55;
                      break;
                    default:
                      v157 = -2;
LABEL_55:
                      v131 = v57;
                      v138 = (void *)v56;
                      v59 = (_DWORD *)sub_88EF10(v132, v120);
                      v60 = sub_966380((__int64)v138, v133, v59);
                      sub_B6A4A0(v131, *(_DWORD *)(*a1 + 8), v60 ^ 1, v118 ^ 1, v157, 0, 0);
LABEL_56:
                      v130 = v50;
                      goto LABEL_45;
                  }
                }
              }
LABEL_80:
              v50 = v130;
              goto LABEL_56;
            default:
              goto LABEL_45;
          }
          v154 = (void *)sub_180B150(v97, v98);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(v154, a1[1], a2, 3);
          std::__ostream_insert<char,std::char_traits<char>>();
          v113 = sub_2FCE40((__int64)v154, (__int64)v170);
          std::__ostream_insert<char,std::char_traits<char>>();
          v114 = sub_2FCE40(v113, (__int64)&v171);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_2FCE40(v114, (__int64)&v175);
          std::operator<<<std::char_traits<char>>();
          goto LABEL_56;
        }
      }
    }
    else
    {
      v148 = 0;
      v146 = 0;
      v145 = v155;
    }
    if ( (unsigned int)sub_180B130(a1) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v20 = sub_180B150(a1, v16);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v181, a2, a1[1], 0, 0, 0);
        sub_160E8B0(v20, &v181);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(&v184);
        sub_186A500(&v184, "\n");
      }
      else
      {
        v23 = sub_180B150(a1, v16);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v181, a2, a1[1], 0, 0, 0);
        sub_160E8B0(v23, &v181);
        std::operator<<<std::char_traits<char>>();
        sub_18572D0(&v184);
      }
    }
    sub_A810F0(a1, (__int64)a2);
    v8 = 1;
    goto LABEL_13;
  }
  return v8;
}

