__int64 __fastcall sub_88A8B0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  _BYTE *v5; // r12
  __int64 (__fastcall *v6)(__int64, __int64); // r13
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // r15
  void *v12; // rbx
  void *v13; // rbx
  void *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  char v21; // al
  __int64 v23; // rax
  int v24; // edx
  int *v25; // rax
  unsigned int *v26; // rcx
  unsigned int *v27; // r15
  __int64 v28; // r15
  __int64 v29; // rsi
  _QWORD *v30; // rdi
  __int64 v31; // r15
  __int64 v32; // r15
  int v33; // edx
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rdx
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  _DWORD *v53; // rax
  _DWORD *v54; // rax
  int v55; // eax
  char v56; // al
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // r15
  __int64 v60; // r15
  __int64 v61; // r15
  __int64 v62; // rdi
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // ebp
  int v75; // eax
  __int64 v76; // rdx
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // r15
  __int64 v81; // r15
  __int64 v82; // r15
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // r8d
  int v91; // r9d
  void *v92; // rdi
  __int64 v93; // rdx
  int v94; // ecx
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // ecx
  int v100; // r8d
  int v101; // r9d
  __int64 v102; // rdx
  int v103; // ecx
  int v104; // r8d
  int v105; // r9d
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rbx
  __int64 v110; // rbx
  __int64 v111; // rdi
  __int64 v112; // rdx
  int v113; // ecx
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rbx
  __int64 v120; // rbx
  __int64 v121; // rdi
  __int64 v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rbx
  __int64 v127; // rax
  unsigned __int8 v128; // [rsp+8h] [rbp-1C0h]
  unsigned int v129; // [rsp+8h] [rbp-1C0h]
  unsigned int v130; // [rsp+8h] [rbp-1C0h]
  __int64 v131; // [rsp+8h] [rbp-1C0h]
  __int64 v132; // [rsp+8h] [rbp-1C0h]
  __int64 v133; // [rsp+8h] [rbp-1C0h]
  __int64 v134; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 v135; // [rsp+18h] [rbp-1B0h]
  unsigned int v136; // [rsp+18h] [rbp-1B0h]
  __int64 v137; // [rsp+20h] [rbp-1A8h]
  unsigned int v138; // [rsp+28h] [rbp-1A0h]
  __int64 v139; // [rsp+28h] [rbp-1A0h]
  unsigned int v140; // [rsp+28h] [rbp-1A0h]
  unsigned int v141; // [rsp+28h] [rbp-1A0h]
  unsigned int i; // [rsp+30h] [rbp-198h]
  __int64 v143; // [rsp+40h] [rbp-188h]
  __int64 v144; // [rsp+48h] [rbp-180h]
  __int64 v145; // [rsp+50h] [rbp-178h]
  __int64 v146; // [rsp+58h] [rbp-170h]
  unsigned int v147; // [rsp+60h] [rbp-168h]
  unsigned int v148; // [rsp+60h] [rbp-168h]
  unsigned __int8 v149; // [rsp+60h] [rbp-168h]
  unsigned int v150; // [rsp+60h] [rbp-168h]
  unsigned __int8 v151; // [rsp+67h] [rbp-161h]
  unsigned __int8 v152; // [rsp+67h] [rbp-161h]
  unsigned __int8 v153; // [rsp+68h] [rbp-160h]
  unsigned int v154; // [rsp+68h] [rbp-160h]
  unsigned __int8 v155; // [rsp+87h] [rbp-141h] BYREF
  _QWORD *v156; // [rsp+88h] [rbp-140h] BYREF
  __int64 v157; // [rsp+90h] [rbp-138h] BYREF
  __int64 v158; // [rsp+98h] [rbp-130h]
  __int64 v159; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v160; // [rsp+A8h] [rbp-120h]
  __int64 v161; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v162; // [rsp+B8h] [rbp-110h]
  _QWORD v163[2]; // [rsp+C0h] [rbp-108h] BYREF
  _QWORD v164[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v165; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v166; // [rsp+E8h] [rbp-E0h]
  __int64 v167; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v168; // [rsp+F8h] [rbp-D0h]
  __int64 v169; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v170; // [rsp+108h] [rbp-C0h]
  __int64 v171; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v172; // [rsp+118h] [rbp-B0h]
  char v173[32]; // [rsp+120h] [rbp-A8h] BYREF
  int v174; // [rsp+140h] [rbp-88h] BYREF
  char v175; // [rsp+144h] [rbp-84h]
  int v176; // [rsp+150h] [rbp-78h] BYREF
  char v177; // [rsp+154h] [rbp-74h]
  int v178; // [rsp+160h] [rbp-68h] BYREF
  char v179; // [rsp+164h] [rbp-64h]
  __int64 v180; // [rsp+168h] [rbp-60h]
  int v181; // [rsp+170h] [rbp-58h] BYREF
  char v182; // [rsp+174h] [rbp-54h]
  __int64 v183; // [rsp+178h] [rbp-50h]

  v3 = a2;
  v5 = (_BYTE *)a1[10];
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 488LL);
  v7 = sub_7E4F00((__int64)a1, (unsigned int *)a2);
  if ( v6 == sub_795570 )
  {
    if ( !v5[168] )
      goto LABEL_3;
    v21 = *(_BYTE *)(v7 + 16);
  }
  else
  {
    v21 = v6((__int64)v5, v7);
  }
  if ( !v21 )
    return 1;
LABEL_3:
  v8 = a1[9];
  v9 = *(_WORD *)(a2 + 4) == 0;
  v157 = 0;
  v159 = 0;
  v158 = v8;
  v160 = v8;
  v161 = 0;
  v162 = v8;
  v163[0] = 0;
  v163[1] = 0;
  v164[0] = 1;
  v164[1] = 0;
  v165 = 0;
  v166 = 0;
  v167 = 1;
  v168 = 0;
  v169 = 0;
  v170 = 0;
  v171 = 1;
  v172 = 0;
  if ( !v9 )
    goto LABEL_4;
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v23 || *(_DWORD *)v23 != 5 )
    goto LABEL_4;
  v24 = *(_DWORD *)(v23 + 4);
  switch ( v24 )
  {
    case '$':
      v25 = *(int **)(v23 + 8);
      v26 = *(unsigned int **)(a2 + 32);
      v27 = *(unsigned int **)(a2 + 40);
      if ( *((_BYTE *)v25 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      break;
    case '%':
      v25 = *(int **)(v23 + 8);
      v26 = *(unsigned int **)(a2 + 32);
      v27 = *(unsigned int **)(a2 + 40);
      if ( *((_BYTE *)v25 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      break;
    case '&':
      v25 = *(int **)(v23 + 8);
      v26 = *(unsigned int **)(a2 + 32);
      v27 = *(unsigned int **)(a2 + 40);
      if ( *((_BYTE *)v25 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      break;
    case '\'':
      v25 = *(int **)(v23 + 8);
      v26 = *(unsigned int **)(a2 + 32);
      v27 = *(unsigned int **)(a2 + 40);
      if ( *((_BYTE *)v25 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      break;
    default:
LABEL_4:
      sub_1872CE0("");
      sub_1873130(114, 241);
  }
  v147 = *v25;
  v138 = *v25;
  v10 = sub_7E4F00((__int64)a1, v26);
  if ( !(unsigned __int8)sub_833B60((__int64)a1, v10, &v157)
    || (v10 = sub_7E4F00((__int64)a1, v27), !(unsigned __int8)sub_833B60((__int64)a1, v10, &v159))
    || (v10 = sub_7E4F00((__int64)a1, (unsigned int *)v3), !(unsigned __int8)sub_833B60((__int64)a1, v10, &v161)) )
  {
    if ( (unsigned int)sub_180B130(a1) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v11 = sub_180B150(a1, v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v178, v3, a1[9], 0, 0, 0);
        sub_160E8B0(v11, &v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(&v181);
        sub_186A500(&v181, "\n");
      }
      else
      {
        v28 = sub_180B150(a1, v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v178, v3, a1[9], 0, 0, 0);
        sub_160E8B0(v28, &v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(&v181);
      }
    }
    goto LABEL_10;
  }
  v29 = v161;
  v30 = a1 + 104;
  v137 = (__int64)(a1 + 104);
  if ( !(unsigned __int8)sub_1666AE0(a1 + 104, v161, v163, &v155)
    || !v155
    || (v29 = v157, v30 = a1 + 104, !(unsigned __int8)sub_1666AE0(v137, v157, &v165, &v155))
    || !v155
    || (v29 = v159, v30 = a1 + 104, !(unsigned __int8)sub_1666AE0(v137, v159, &v169, &v155))
    || (v128 = v155) == 0 )
  {
    if ( (unsigned int)sub_180B130(v30) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v31 = sub_180B150(v30, v29);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v178, v3, a1[9], 0, 0, 0);
        sub_160E8B0(v31, &v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(&v181);
        sub_186A500(&v181, "\n");
      }
      else
      {
        v32 = sub_180B150(v30, v29);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(&v178, v3, a1[9], 0, 0, 0);
        sub_160E8B0(v32, &v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(&v181);
      }
    }
LABEL_10:
    sub_854080((__int64)a1, v3);
    v128 = 1;
    goto LABEL_11;
  }
  sub_17F6290(v173, v138);
  sub_88EA00(&v178, &v165, v173);
  v33 = v178;
  v178 = v165;
  LODWORD(v165) = v33;
  v34 = v180;
  v180 = v166;
  v166 = v34;
  v35 = v179 & 1;
  LOBYTE(v34) = BYTE4(v165) & 0xFC | v179 & 2;
  v179 = BYTE4(v165) & 1 | v179 & 0xFC | BYTE4(v165) & 2;
  BYTE4(v165) = v35 | v34;
  LODWORD(v34) = v181;
  v181 = v167;
  LODWORD(v167) = v34;
  v36 = v183;
  v183 = v168;
  v168 = v36;
  LOBYTE(v36) = v182 & 1 | BYTE4(v167) & 0xFC | v182 & 2;
  v182 = BYTE4(v167) & 1 | v182 & 0xFC | BYTE4(v167) & 2;
  BYTE4(v167) = v36;
  sub_25A130((char *)&v178);
  sub_88EA00(&v178, &v169, v173);
  v37 = v178;
  v178 = v169;
  LODWORD(v169) = v37;
  v38 = v180;
  v180 = v170;
  v170 = v38;
  v39 = v179 & 1;
  LOBYTE(v38) = BYTE4(v169) & 0xFC | v179 & 2;
  v179 = BYTE4(v169) & 1 | v179 & 0xFC | BYTE4(v169) & 2;
  BYTE4(v169) = v39 | v38;
  LODWORD(v38) = v181;
  v181 = v171;
  LODWORD(v171) = v38;
  v40 = v183;
  v183 = v172;
  v172 = v40;
  LOBYTE(v40) = v182 & 1 | BYTE4(v171) & 0xFC | v182 & 2;
  v182 = BYTE4(v171) & 1 | v182 & 0xFC | BYTE4(v171) & 2;
  BYTE4(v171) = v40;
  sub_25A130((char *)&v178);
  v145 = a1[9];
  sub_883540(v137, (int)v173, v41, v42, v43, v44);
  v45 = sub_15E1B70(a1[104]);
  v143 = v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v146 = a1[9];
  sub_883540(v137, (int)v173, v46, v47, v48, v49);
  v50 = a1[104];
  v51 = sub_15E1B70(v50);
  v144 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v9 = *(_WORD *)(v3 + 4) == 0;
  v156 = a1;
  if ( v9 )
  {
    v52 = *(_QWORD *)(v3 + 16);
    v53 = *(_DWORD **)(v52 + 24);
    if ( v53 )
    {
      if ( *v53 == 5 && v53[1] == 36 )
      {
        if ( (unsigned int)sub_180B130(v50) > 1 )
        {
          if ( (unsigned __int8)sub_186A530(a3) )
          {
            sub_186A4C0(a3);
            v59 = sub_180B150(v50, 5);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v59, a1[9], v3, 3);
            std::__ostream_insert<char,std::char_traits<char>>();
            v60 = sub_2FCE40(v59, (__int64)v163);
            std::__ostream_insert<char,std::char_traits<char>>();
            v61 = sub_2FCE40(v60, (__int64)&v165);
            std::__ostream_insert<char,std::char_traits<char>>();
            v62 = sub_2FCE40(v61, (__int64)&v169);
            sub_8835B0(v62, "\n");
            sub_186A500(v62, "\n");
          }
          else
          {
            v80 = sub_180B150(v50, 5);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v80, a1[9], v3, 3);
            std::__ostream_insert<char,std::char_traits<char>>();
            v81 = sub_2FCE40(v80, (__int64)v163);
            std::__ostream_insert<char,std::char_traits<char>>();
            v82 = sub_2FCE40(v81, (__int64)&v165);
            std::__ostream_insert<char,std::char_traits<char>>();
            v83 = sub_2FCE40(v82, (__int64)&v169);
            sub_8835B0(v83, "\n");
          }
        }
        for ( i = 0; i != v138; ++i )
        {
          v152 = sub_182E3A0(qword_1C7F2C0, &v165, i);
          v153 = sub_182E3A0(qword_1C7F2C0, &v169, i);
          v56 = sub_182E3A0(qword_1C7F2C0, v163, i);
          if ( (v153 & v152) == 1 && !v56 )
          {
            v74 = sub_883600((__int64 *)&v156, v3, i);
            v130 = sub_883600((__int64 *)&v156, v144, i) ^ 1;
            v75 = sub_883600((__int64 *)&v156, v143, i);
            sub_7E5420((__int64)a1, v75 ^ 1, v130, v74, nullptr);
            goto LABEL_79;
          }
          if ( v152 != 1 && v56 )
          {
            v57 = sub_883600((__int64 *)&v156, v143, i);
            goto LABEL_78;
          }
          if ( v153 != 1 && v56 )
          {
            v57 = sub_883600((__int64 *)&v156, v144, i);
LABEL_78:
            v129 = v57;
            v58 = sub_883600((__int64 *)&v156, v3, i);
            sub_7E5400((__int64)a1, v58 ^ 1, v129, nullptr);
LABEL_79:
            v128 = 0;
            goto LABEL_58;
          }
        }
        if ( *(_WORD *)(v3 + 4) )
          goto LABEL_58;
        v54 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
        if ( !v54 )
          goto LABEL_58;
      }
      else
      {
        v54 = *(_DWORD **)(v52 + 24);
      }
      if ( *v54 == 5 )
      {
        v55 = v54[1];
        switch ( v55 )
        {
          case '%':
            if ( (unsigned __int8)sub_88EA80(&v169, v147)
              || (v149 = sub_753DF0((__int64)&v169, 0)) != 0
              || (v140 = sub_182D020(qword_1C7F2C0, &v169),
                  sub_883540(v137, (int)v173, v98, v99, v100, v101),
                  sub_17F6290(&v178, v140),
                  sub_883540(v137, (int)&v178, v102, v103, v104, v105),
                  sub_15E1B70(a1[104]),
                  v106 = sub_15E1B70(a1[104]),
                  v136 = sub_7E58D0((__int64)a1, v3, v106),
                  sub_25A130((char *)&v178),
                  *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v136) == 1) )
            {
              v149 = v128;
            }
            else
            {
              v107 = sub_88EF10(v137, v140);
              v108 = (unsigned int)sub_7E58D0((__int64)a1, v144, v107) ^ 1;
              sub_7E5400((__int64)a1, v108, v136, nullptr);
              if ( (unsigned int)sub_180B130(a1) > 1 )
              {
                if ( (unsigned __int8)sub_186A530(a3) )
                {
                  sub_186A4C0(a3);
                  v131 = sub_180B150(a1, v108);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(v131, a1[9], v3, 3);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v109 = sub_2FCE40(v131, (__int64)v163);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v110 = sub_2FCE40(v109, (__int64)&v165);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v111 = sub_2FCE40(v110, (__int64)&v169);
                  sub_8835B0(v111, "\n");
                  sub_186A500(v111, "\n");
                }
                else
                {
                  v133 = sub_180B150(a1, v108);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(v133, a1[9], v3, 3);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v122 = sub_2FCE40(v133, (__int64)v163);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v123 = sub_2FCE40(v122, (__int64)&v165);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v124 = sub_2FCE40(v123, (__int64)&v169);
                  sub_8835B0(v124, "\n");
                }
              }
            }
            v128 = v149;
            break;
          case '\'':
            if ( (unsigned __int8)sub_88EA80(&v169, v147)
              || (v135 = sub_753DF0((__int64)&v169, 0)) != 0
              || (v150 = sub_182D020(qword_1C7F2C0, &v169),
                  sub_17F6290(&v178, v150),
                  sub_883540(v137, (int)&v178, v112, v113, v114, v115),
                  v116 = sub_15E1B70(a1[104]),
                  v141 = sub_7E58D0((__int64)a1, v3, v116),
                  sub_25A130((char *)&v178),
                  *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v141) == 1) )
            {
              v135 = v128;
            }
            else
            {
              v117 = sub_88EF10(v137, v150);
              v118 = (unsigned int)sub_7E58D0((__int64)a1, v144, v117) ^ 1;
              sub_7E5400((__int64)a1, v118, v141, nullptr);
              if ( (unsigned int)sub_180B130(a1) > 1 )
              {
                if ( (unsigned __int8)sub_186A530(a3) )
                {
                  sub_186A4C0(a3);
                  v132 = sub_180B150(a1, v118);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(v132, a1[9], v3, 3);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v119 = sub_2FCE40(v132, (__int64)v163);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v120 = sub_2FCE40(v119, (__int64)&v165);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v121 = sub_2FCE40(v120, (__int64)&v169);
                  sub_8835B0(v121, "\n");
                  sub_186A500(v121, "\n");
                }
                else
                {
                  v134 = sub_180B150(a1, v118);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1648CA0(v134, a1[9], v3, 3);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v125 = sub_2FCE40(v134, (__int64)v163);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v126 = sub_2FCE40(v125, (__int64)&v165);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v127 = sub_2FCE40(v126, (__int64)&v169);
                  sub_8835B0(v127, "\n");
                }
              }
            }
            v128 = v135;
            break;
          case '&':
            if ( !(unsigned __int8)sub_88EA80(&v169, v147) )
            {
              v151 = sub_753DF0((__int64)&v169, 0);
              if ( !v151 )
              {
                v154 = sub_182D020(qword_1C7F2C0, &v169);
                sub_88EB80((unsigned int)&v178, (unsigned int)v173, 2, v63, v64, v65);
                sub_883540(v137, (int)&v178, v66, v67, v68, v69);
                v70 = sub_15E1B70(a1[104]);
                v148 = sub_7E58C0((__int64)a1, v70);
                sub_25A130((char *)&v178);
                v71 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v148);
                switch ( v71 )
                {
                  case 0:
                    sub_7F15F0(a1[10] + 160LL, v148);
                    goto LABEL_66;
                  case 1:
                    sub_17F6290(&v178, v154);
                    sub_883540(v137, (int)&v178, v84, v85, v86, v87);
                    sub_15E1B70(a1[104]);
                    sub_25A130((char *)&v178);
                    sub_883540(v137, (int)v173, v88, v89, v90, v91);
                    sub_17F6290(&v174, v138 - v154);
                    v179 &= 0xFCu;
                    v182 &= 0xFCu;
                    v92 = qword_1C7F2C0;
                    v178 = 0;
                    v180 = 0;
                    v181 = 1;
                    v183 = 0;
                    if ( (v175 & 1) != 0 )
                      sub_182C690(qword_1C7F2C0, &v178, &v174);
                    else
                      v178 = v174;
                    if ( (v177 & 1) != 0 )
                    {
                      sub_182C690(v92, &v181, &v176);
                    }
                    else
                    {
                      v182 &= ~1u;
                      v181 = v176;
                    }
                    sub_1831620(qword_1C7F2C0, &v178);
                    sub_883540(v137, (int)&v178, v93, v94, v95, v96);
                    sub_15E1B70(a1[104]);
                    v97 = sub_15E1B70(a1[104]);
                    LODWORD(v3) = sub_7E58D0((__int64)a1, v3, v97);
                    sub_25A130((char *)&v178);
                    sub_25A130((char *)&v174);
                    if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)v3) != 1 )
                      goto LABEL_92;
                    break;
                  case -1:
                    sub_17F6290(&v178, v154);
                    sub_883540(v137, (int)&v178, v76, v77, v78, v79);
                    v139 = sub_15E1B70(a1[104]);
                    sub_25A130((char *)&v178);
                    v3 = (unsigned int)sub_7E58D0((__int64)a1, v3, v139);
                    if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v3) != 1 )
                      goto LABEL_92;
                    break;
                  default:
                    LODWORD(v3) = -2;
LABEL_92:
                    v72 = sub_88EF10(v137, v154);
                    v73 = sub_7E58D0((__int64)a1, v144, v72);
                    sub_7E5420((__int64)a1, v73 ^ 1, v148 ^ 1, v3, nullptr);
                    goto LABEL_66;
                }
              }
            }
            v151 = v128;
LABEL_66:
            v128 = v151;
            break;
        }
      }
    }
  }
LABEL_58:
  sub_883590(v144, v146);
  sub_883590(v143, v145);
  sub_25A130(v173);
LABEL_11:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v169);
  sub_182CBA0(v12, &v171);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v165);
  sub_182CBA0(v13, &v167);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v163);
  sub_182CBA0(v14, v164);
  v15 = v161;
  if ( v161 )
  {
    v16 = v162;
    v9 = (*(_DWORD *)(v161 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v16, v15);
  }
  v17 = v159;
  if ( v159 )
  {
    v18 = v160;
    v9 = (*(_DWORD *)(v159 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v18, v17);
  }
  v19 = v157;
  if ( v157 )
  {
    v20 = v158;
    v9 = (*(_DWORD *)(v157 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v20, v19);
  }
  return v128;
}

