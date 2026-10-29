__int64 __fastcall sub_8464C0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  char v14; // cl
  char v15; // si
  char v16; // di
  int v17; // eax
  __int64 *v18; // rsi
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 *v29; // rax
  char v30; // al
  __int64 v31; // rcx
  __int64 *v32; // rax
  int v33; // eax
  __int64 *v34; // rdx
  __int64 *v35; // rdx
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *v67; // rdi
  __int64 *v68; // rbx
  __int64 *v69; // rbp
  __int64 v70; // rsi
  __int64 *v71; // rdi
  __int64 *v72; // rbx
  __int64 *v73; // rbp
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 *v79; // rdi
  __int64 *v80; // rbx
  __int64 *v81; // rbp
  __int64 v82; // rsi
  __int64 *v83; // rdi
  __int64 *v84; // rbx
  __int64 *v85; // rbp
  __int64 v86; // rsi
  unsigned int v87; // ecx
  __int64 v88; // rdx
  __int64 *v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  _QWORD *v95; // rbx
  _QWORD *v96; // r15
  __int64 *v97; // r12
  __int64 *v98; // rbp
  __int64 v99; // rsi
  __int64 v100; // rsi
  _QWORD *v101; // rax
  _QWORD *v102; // rbx
  _QWORD *v103; // r15
  __int64 *v104; // r12
  __int64 *v105; // rbp
  __int64 v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rbx
  _QWORD *v113; // r15
  __int64 *v114; // r12
  __int64 *v115; // rbp
  __int64 v116; // rsi
  __int64 v117; // rsi
  _QWORD *v118; // rax
  _QWORD *v119; // rbx
  _QWORD *v120; // r15
  __int64 *v121; // r12
  __int64 *v122; // rbp
  __int64 v123; // rsi
  __int64 *v124; // rdx
  __int64 v125; // rsi
  __int64 v126; // rsi
  __int64 *v127; // rax
  __int64 *v128; // rax
  bool v129; // r13
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rdx
  bool v133; // r13
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 *v137; // rax
  __int64 *v138; // rdx
  __int64 v139; // rsi
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rsi
  __int64 *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rdx
  __int64 v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rdx
  __int64 v160; // rdx
  __int64 v163; // [rsp+30h] [rbp-1C8h]
  __int64 v164; // [rsp+30h] [rbp-1C8h]
  __int64 v165; // [rsp+30h] [rbp-1C8h]
  __int64 v166; // [rsp+30h] [rbp-1C8h]
  unsigned int v168; // [rsp+40h] [rbp-1B8h]
  __int64 v169; // [rsp+40h] [rbp-1B8h]
  __int64 v170; // [rsp+40h] [rbp-1B8h]
  __int64 v174; // [rsp+68h] [rbp-190h]
  __int64 v175; // [rsp+68h] [rbp-190h]
  __int64 v176; // [rsp+68h] [rbp-190h]
  __int64 v177; // [rsp+68h] [rbp-190h]
  __int64 *v178; // [rsp+70h] [rbp-188h]
  __int64 v179; // [rsp+80h] [rbp-178h] BYREF
  __int64 v180; // [rsp+88h] [rbp-170h]
  char v181; // [rsp+94h] [rbp-164h]
  __int64 v182[4]; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v183[4]; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v184[4]; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v185[4]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v186[4]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v187[2]; // [rsp+140h] [rbp-B8h] BYREF
  char v188; // [rsp+154h] [rbp-A4h]
  __int64 v189[4]; // [rsp+160h] [rbp-98h] BYREF
  __int64 v190; // [rsp+180h] [rbp-78h] BYREF
  __int64 v191; // [rsp+188h] [rbp-70h]
  char v192; // [rsp+194h] [rbp-64h]
  __int64 v193; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v194; // [rsp+1A8h] [rbp-50h]
  char v195; // [rsp+1B4h] [rbp-44h]

  v7 = *a4;
  v8 = sub_2575D20(a1, a2, a3);
  if ( v7 == v8 )
    sub_257CF50(&v190, a4);
  else
    sub_25768A0(&v190, a4);
  if ( v190 == v8 )
  {
    if ( (*(_BYTE *)(v191 + 20) & 8) == 0 )
      goto LABEL_100;
    sub_257D180(&v190);
  }
  else
  {
    if ( (v192 & 8) == 0 )
    {
LABEL_5:
      sub_2576960(&v193, &v190);
      goto LABEL_6;
    }
    sub_2577530(&v190);
  }
  if ( v190 != v8 )
    goto LABEL_5;
LABEL_100:
  sub_257D000(&v193, &v190, v9, v10);
LABEL_6:
  v178 = a3;
  if ( *a3 == v8 )
    sub_257CF50(v187, a3);
  else
    sub_25768A0(v187, a3);
  if ( v187[0] == v8 )
  {
    if ( (*(_BYTE *)(v187[1] + 20) & 8) == 0 )
      goto LABEL_102;
    sub_257D180(v187);
  }
  else
  {
    if ( (v188 & 8) == 0 )
    {
LABEL_10:
      sub_2576960(v189, v187);
      goto LABEL_11;
    }
    sub_2577530(v187);
  }
  if ( v187[0] != v8 )
    goto LABEL_10;
LABEL_102:
  sub_257D000(v189, v187, v11, v12);
LABEL_11:
  v13 = v189;
  if ( v189[0] == v8 )
    v13 = (__int64 *)v189[1];
  v14 = *((_BYTE *)v13 + 20);
  if ( (v14 & 7) == 1 )
  {
    v18 = &v193;
    if ( v8 == v193 )
      goto LABEL_81;
    goto LABEL_23;
  }
  if ( v8 == v193 )
  {
    v15 = *(_BYTE *)(v194 + 20);
    v16 = v15 & 7;
    if ( (v15 & 7) != 1 )
      goto LABEL_16;
    goto LABEL_80;
  }
  v15 = v195;
  v16 = v195 & 7;
  if ( (v195 & 7) == 1 )
  {
LABEL_80:
    v18 = v189;
    if ( v189[0] == v8 )
      goto LABEL_81;
LABEL_23:
    sub_25768A0(&v179, v18);
    goto LABEL_24;
  }
LABEL_16:
  if ( (v14 & 7) != 3 || v16 != 3 || (v87 = v14 & 8, v88 = v87, (unsigned __int8)v87 >> 3 == ((v15 & 8) != 0)) )
  {
    if ( v189[0] == v8 )
      v17 = sub_257E370(v189, &v193);
    else
      v17 = sub_2577560(v189, &v193);
    v18 = &v193;
    if ( v17 )
      v18 = v189;
    if ( v8 != *v18 )
      goto LABEL_23;
LABEL_81:
    sub_257CF50(&v179, v18);
    goto LABEL_24;
  }
  v89 = &v193;
  if ( !(_BYTE)v87 )
    v89 = v189;
  LOBYTE(v88) = (unsigned __int8)v87 >> 3;
  sub_835150((__int64)&v179, v89, v88);
LABEL_24:
  sub_5FF3B0(v189);
  sub_5FF3B0(v187);
  sub_5FF3B0(&v193);
  sub_5FF3B0(&v190);
  if ( v179 != v8 )
  {
    if ( (v181 & 7u) <= 1 )
    {
      v168 = 0;
      goto LABEL_27;
    }
LABEL_89:
    v168 = -(int)sub_257C460();
    if ( v8 == *a3 )
      sub_257CF50(v186, a3);
    else
      sub_25768A0(v186, a3);
    v25 = v186[0];
    if ( v8 == v186[0] )
    {
      sub_257E810(&v190, v186, v168, 1);
      sub_257D000(&v193, &v190, v107, v108);
      sub_257D000(v187, &v193, v109, v110);
      v111 = (_QWORD *)v194;
      if ( v194 )
      {
        if ( v194 == v194 + 24LL * *(_QWORD *)(v194 - 8) )
        {
          v117 = 0;
        }
        else
        {
          v165 = v8;
          v112 = (_QWORD *)(v194 + 24LL * *(_QWORD *)(v194 - 8));
          v113 = (_QWORD *)v194;
          do
          {
            v112 -= 3;
            if ( v25 == *v112 )
            {
              v114 = (__int64 *)v112[1];
              if ( v114 )
              {
                v115 = &v114[3 * *(v114 - 1)];
                if ( v114 == v115 )
                {
                  v116 = 0;
                }
                else
                {
                  do
                  {
                    v115 -= 3;
                    sub_5FF3B0(v115);
                  }
                  while ( v114 != v115 );
                  v116 = 24 * *(v114 - 1);
                }
                operator delete[](v114 - 1, v116 + 8);
              }
              v112[1] = 0;
            }
            else
            {
              sub_25769A0(v112);
            }
          }
          while ( v113 != v112 );
          v8 = v165;
          v111 = v113;
          v117 = 24LL * *(v113 - 1);
        }
        operator delete[](v111 - 1, v117 + 8);
      }
      v118 = (_QWORD *)v191;
      if ( v191 )
      {
        if ( v191 == v191 + 24LL * *(_QWORD *)(v191 - 8) )
        {
          v125 = 0;
        }
        else
        {
          v166 = v8;
          v119 = (_QWORD *)(v191 + 24LL * *(_QWORD *)(v191 - 8));
          v120 = (_QWORD *)v191;
          do
          {
            v119 -= 3;
            if ( v25 == *v119 )
            {
              v121 = (__int64 *)v119[1];
              if ( v121 )
              {
                v122 = &v121[3 * *(v121 - 1)];
                if ( v121 == v122 )
                {
                  v123 = 0;
                }
                else
                {
                  do
                  {
                    v122 -= 3;
                    sub_5FF3B0(v122);
                  }
                  while ( v121 != v122 );
                  v123 = 24 * *(v121 - 1);
                }
                operator delete[](v121 - 1, v123 + 8);
              }
              v119[1] = 0;
            }
            else
            {
              sub_25769A0(v119);
            }
          }
          while ( v120 != v119 );
          v8 = v166;
          v118 = v120;
          v125 = 24LL * *(v120 - 1);
        }
        operator delete[](v118 - 1, v125 + 8);
      }
    }
    else
    {
      sub_25768A0(v189, v186);
      sub_257C530(&v190, v189, v168, 1);
      sub_2576960(&v193, &v190);
      sub_257EDC0(v187, &v193, v25);
      sub_25769A0(&v193);
      sub_25769A0(&v190);
      sub_25769A0(v189);
    }
    sub_834250(a3, v187, v26);
    sub_5FF3B0(v187);
    sub_5FF3B0(v186);
    if ( v8 == *a4 )
      sub_257CF50(v186, a4);
    else
      sub_25768A0(v186, a4);
    v27 = v186[0];
    if ( v8 == v186[0] )
    {
      sub_257E810(&v190, v186, v168, 1);
      sub_257D000(&v193, &v190, v90, v91);
      sub_257D000(v187, &v193, v92, v93);
      v94 = (_QWORD *)v194;
      if ( v194 )
      {
        if ( v194 == v194 + 24LL * *(_QWORD *)(v194 - 8) )
        {
          v100 = 0;
        }
        else
        {
          v163 = v8;
          v95 = (_QWORD *)(v194 + 24LL * *(_QWORD *)(v194 - 8));
          v96 = (_QWORD *)v194;
          do
          {
            v95 -= 3;
            if ( v27 == *v95 )
            {
              v97 = (__int64 *)v95[1];
              if ( v97 )
              {
                v98 = &v97[3 * *(v97 - 1)];
                if ( v97 == v98 )
                {
                  v99 = 0;
                }
                else
                {
                  do
                  {
                    v98 -= 3;
                    sub_5FF3B0(v98);
                  }
                  while ( v97 != v98 );
                  v99 = 24 * *(v97 - 1);
                }
                operator delete[](v97 - 1, v99 + 8);
              }
              v95[1] = 0;
            }
            else
            {
              sub_25769A0(v95);
            }
          }
          while ( v96 != v95 );
          v8 = v163;
          v94 = v96;
          v100 = 24LL * *(v96 - 1);
        }
        operator delete[](v94 - 1, v100 + 8);
      }
      v101 = (_QWORD *)v191;
      if ( v191 )
      {
        if ( v191 == v191 + 24LL * *(_QWORD *)(v191 - 8) )
        {
          v126 = 0;
        }
        else
        {
          v164 = v8;
          v102 = (_QWORD *)(v191 + 24LL * *(_QWORD *)(v191 - 8));
          v103 = (_QWORD *)v191;
          do
          {
            v102 -= 3;
            if ( v27 == *v102 )
            {
              v104 = (__int64 *)v102[1];
              if ( v104 )
              {
                v105 = &v104[3 * *(v104 - 1)];
                if ( v104 == v105 )
                {
                  v106 = 0;
                }
                else
                {
                  do
                  {
                    v105 -= 3;
                    sub_5FF3B0(v105);
                  }
                  while ( v104 != v105 );
                  v106 = 24 * *(v104 - 1);
                }
                operator delete[](v104 - 1, v106 + 8);
              }
              v102[1] = 0;
            }
            else
            {
              sub_25769A0(v102);
            }
          }
          while ( v103 != v102 );
          v8 = v164;
          v101 = v103;
          v126 = 24LL * *(v103 - 1);
        }
        operator delete[](v101 - 1, v126 + 8);
      }
    }
    else
    {
      sub_25768A0(v189, v186);
      sub_257C530(&v190, v189, v168, 1);
      sub_2576960(&v193, &v190);
      sub_257EDC0(v187, &v193, v27);
      sub_25769A0(&v193);
      sub_25769A0(&v190);
      sub_25769A0(v189);
    }
    sub_834250(a4, v187, v28);
    sub_5FF3B0(v187);
    sub_5FF3B0(v186);
    v19 = a4;
    if ( v8 != *a4 )
      goto LABEL_28;
    goto LABEL_98;
  }
  v168 = 0;
  if ( (*(_BYTE *)(v180 + 20) & 7u) > 1 )
    goto LABEL_89;
LABEL_27:
  v19 = a4;
  if ( v8 != *a4 )
  {
LABEL_28:
    sub_25768A0(&v193, v19);
    goto LABEL_29;
  }
LABEL_98:
  sub_257CF50(&v193, v19);
LABEL_29:
  if ( v8 == v193 )
    sub_2581E80(&v193, a4, 1);
  else
    sub_257BC30(&v193, a4, 1);
  if ( v8 == *a3 )
    sub_257CF50(&v190, a3);
  else
    sub_25768A0(&v190, a3);
  if ( v8 == v190 )
    sub_2581E80(&v190, a3, 1);
  else
    sub_257BC30(&v190, a3, 1);
  if ( v8 == v190 )
    sub_257CF50(v182, &v190);
  else
    sub_25768A0(v182, &v190);
  if ( v8 == v182[0] )
    sub_257DC20(v182, &v193, 1);
  else
    sub_257BF20(v182, &v193, 1);
  sub_5FF3B0(&v190);
  sub_5FF3B0(&v193);
  if ( v8 == *a2 )
    sub_257CF50(v184, a2);
  else
    sub_25768A0(v184, a2);
  if ( v8 == v184[0] )
    sub_2581E80(v184, a4, 1);
  else
    sub_257BC30(v184, a4, 1);
  if ( v8 == *a1 )
    sub_257CF50(v183, a1);
  else
    sub_25768A0(v183, a1);
  if ( v8 == v183[0] )
    sub_2581E80(v183, a3, 1);
  else
    sub_257BC30(v183, a3, 1);
  if ( v8 == v183[0] )
    sub_257CF50(v185, v183);
  else
    sub_25768A0(v185, v183);
  if ( v8 == v185[0] )
    sub_257DC20(v185, v184, 1);
  else
    sub_257BF20(v185, v184, 1);
  if ( v8 == v185[0] )
    sub_257CF50(v186, v185);
  else
    sub_25768A0(v186, v185);
  if ( v8 == v186[0] )
    sub_2581790(v186, v182, 1);
  else
    sub_257C2B0(v186, v182, 1);
  v174 = v186[0];
  if ( v8 == v186[0] )
  {
    sub_257E810(&v190, v186, v168, 1);
    sub_257D000(&v193, &v190, v75, v76);
    sub_257D000(v187, &v193, v77, v78);
    v79 = (__int64 *)v194;
    if ( v194 )
    {
      if ( v194 == v194 + 24LL * *(_QWORD *)(v194 - 8) )
      {
        v82 = 0;
      }
      else
      {
        v176 = v8;
        v80 = (__int64 *)v194;
        v81 = (__int64 *)(v194 + 24LL * *(_QWORD *)(v194 - 8));
        do
        {
          v81 -= 3;
          sub_5FF3B0(v81);
        }
        while ( v80 != v81 );
        v79 = v80;
        v8 = v176;
        v82 = 24 * *(v79 - 1);
      }
      operator delete[](v79 - 1, v82 + 8);
    }
    v83 = (__int64 *)v191;
    if ( v191 )
    {
      if ( v191 == v191 + 24LL * *(_QWORD *)(v191 - 8) )
      {
        v86 = 0;
      }
      else
      {
        v177 = v8;
        v84 = (__int64 *)v191;
        v85 = (__int64 *)(v191 + 24LL * *(_QWORD *)(v191 - 8));
        do
        {
          v85 -= 3;
          sub_5FF3B0(v85);
        }
        while ( v84 != v85 );
        v83 = v84;
        v8 = v177;
        v86 = 24 * *(v83 - 1);
      }
      operator delete[](v83 - 1, v86 + 8);
    }
  }
  else
  {
    sub_25768A0(v189, v186);
    sub_257C530(&v190, v189, v168, 1);
    sub_2576960(&v193, &v190);
    sub_257EDC0(v187, &v193, v174);
    sub_25769A0(&v193);
    sub_25769A0(&v190);
    sub_25769A0(v189);
  }
  sub_834250(a5, v187, v20);
  sub_5FF3B0(v187);
  sub_5FF3B0(v186);
  sub_5FF3B0(v185);
  sub_5FF3B0(v183);
  sub_5FF3B0(v184);
  if ( v8 == *a1 )
    sub_257CF50(v184, a1);
  else
    sub_25768A0(v184, a1);
  if ( v8 == v184[0] )
    sub_2581E80(v184, a4, 1);
  else
    sub_257BC30(v184, a4, 1);
  if ( v8 == *a2 )
    sub_257CF50(v183, a2);
  else
    sub_25768A0(v183, a2);
  if ( v8 == v183[0] )
    sub_2581E80(v183, a3, 1);
  else
    sub_257BC30(v183, a3, 1);
  if ( v8 == v183[0] )
    sub_257CF50(v185, v183);
  else
    sub_25768A0(v185, v183);
  if ( v8 == v185[0] )
    sub_257DC40(v185, v184, 1);
  else
    sub_257BF10(v185, v184, 1);
  if ( v8 == v185[0] )
    sub_257CF50(v186, v185);
  else
    sub_25768A0(v186, v185);
  if ( v8 == v186[0] )
    sub_2581790(v186, v182, 1);
  else
    sub_257C2B0(v186, v182, 1);
  v175 = v186[0];
  if ( v8 == v186[0] )
  {
    sub_257E810(&v190, v186, v168, 1);
    sub_257D000(&v193, &v190, v63, v64);
    sub_257D000(v187, &v193, v65, v66);
    v67 = (__int64 *)v194;
    if ( v194 )
    {
      if ( v194 == v194 + 24LL * *(_QWORD *)(v194 - 8) )
      {
        v70 = 0;
      }
      else
      {
        v169 = v8;
        v68 = (__int64 *)v194;
        v69 = (__int64 *)(v194 + 24LL * *(_QWORD *)(v194 - 8));
        do
        {
          v69 -= 3;
          sub_5FF3B0(v69);
        }
        while ( v68 != v69 );
        v67 = v68;
        v8 = v169;
        v70 = 24 * *(v67 - 1);
      }
      operator delete[](v67 - 1, v70 + 8);
    }
    v71 = (__int64 *)v191;
    if ( v191 )
    {
      if ( v191 == v191 + 24LL * *(_QWORD *)(v191 - 8) )
      {
        v74 = 0;
      }
      else
      {
        v170 = v8;
        v72 = (__int64 *)v191;
        v73 = (__int64 *)(v191 + 24LL * *(_QWORD *)(v191 - 8));
        do
        {
          v73 -= 3;
          sub_5FF3B0(v73);
        }
        while ( v72 != v73 );
        v71 = v72;
        v8 = v170;
        v74 = 24 * *(v71 - 1);
      }
      operator delete[](v71 - 1, v74 + 8);
    }
  }
  else
  {
    sub_25768A0(v189, v186);
    sub_257C530(&v190, v189, v168, 1);
    sub_2576960(&v193, &v190);
    sub_257EDC0(v187, &v193, v175);
    sub_25769A0(&v193);
    sub_25769A0(&v190);
    sub_25769A0(v189);
  }
  sub_834250((__int64 *)a6, v187, v21);
  sub_5FF3B0(v187);
  sub_5FF3B0(v186);
  sub_5FF3B0(v185);
  sub_5FF3B0(v183);
  sub_5FF3B0(v184);
  v22 = *a5;
  v23 = a5;
  if ( *a5 == v8 )
    v23 = (__int64 *)a5[1];
  if ( (*((_BYTE *)v23 + 20) & 7) == 1 )
  {
    if ( *(_QWORD *)a6 == v8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a6 + 8) + 20LL) & 7) != 1 )
        goto LABEL_78;
    }
    else if ( (*(_BYTE *)(a6 + 20) & 7) != 1 )
    {
      goto LABEL_78;
    }
    v29 = v182;
    if ( v8 == v182[0] )
      v29 = (__int64 *)v182[1];
    v30 = *((_BYTE *)v29 + 20);
    v31 = *a1;
    if ( (v30 & 7) == 3 && (v30 & 8) == 0 )
    {
      v127 = a1;
      if ( v8 == v31 )
        v127 = (__int64 *)a1[1];
      if ( (*((_BYTE *)v127 + 20) & 7) != 1 )
        goto LABEL_256;
      v137 = a2;
      if ( *a2 == v8 )
        v137 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v137 + 20) & 7) != 1 )
      {
LABEL_256:
        v128 = a3;
        if ( *a3 == v8 )
          v128 = (__int64 *)a3[1];
        v129 = (*((_BYTE *)v128 + 20) & 8) != 0;
        if ( v22 == v8 )
          sub_257CE40(&v190, v8, 0);
        else
          sub_2579AA0(&v190, v22, 0);
        if ( v8 == v190 )
          sub_257D420(&v190, v129);
        else
          sub_2579170(&v190, v129);
        sub_835150((__int64)&v193, &v190, v130);
        sub_8203E0(&v193, (__int64)a1, v131);
        sub_834250(a5, &v193, v132);
        sub_5FF3B0(&v193);
        sub_5FF3B0(&v190);
        if ( *a3 == v8 )
          v178 = (__int64 *)a3[1];
        v133 = (*((_BYTE *)v178 + 20) & 8) != 0;
        if ( *a5 == v8 )
          sub_257CE40(&v190, v8, 0);
        else
          sub_2579AA0(&v190, *a5, 0);
        if ( v8 == v190 )
          sub_257D420(&v190, v133);
        else
          sub_2579170(&v190, v133);
        sub_835150((__int64)&v193, &v190, v134);
        sub_8203E0(&v193, (__int64)a2, v135);
        sub_834250((__int64 *)a6, &v193, v136);
        sub_5FF3B0(&v193);
        sub_5FF3B0(&v190);
        goto LABEL_78;
      }
    }
    v32 = a1;
    if ( v8 == v31 )
      v32 = (__int64 *)a1[1];
    v33 = *((_BYTE *)v32 + 20) & 7;
    if ( v33 )
    {
      v124 = a2;
      if ( *a2 == v8 )
        v124 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v124 + 20) & 7) != 0 )
        goto LABEL_114;
    }
    v34 = a3;
    if ( *a3 == v8 )
      v34 = (__int64 *)a3[1];
    if ( (*((_BYTE *)v34 + 20) & 7u) <= 1 )
      goto LABEL_114;
    v138 = a4;
    if ( *a4 == v8 )
      v138 = (__int64 *)a4[1];
    if ( (*((_BYTE *)v138 + 20) & 7u) <= 1 )
    {
LABEL_114:
      v35 = &v179;
      if ( v179 == v8 )
        v35 = (__int64 *)v180;
      if ( (*((_BYTE *)v35 + 20) & 7) != 0 || (unsigned __int8)v33 <= 1u )
        goto LABEL_78;
      v36 = a2;
      if ( *a2 == v8 )
        v36 = (__int64 *)a2[1];
      if ( (*((_BYTE *)v36 + 20) & 7u) <= 1 )
        goto LABEL_78;
      v37 = a3;
      v38 = *a3;
      if ( *a3 == v8 )
        v37 = (__int64 *)a3[1];
      v193 = (*((_BYTE *)v37 + 20) & 7) == 0;
      sub_846440((__int64)&v190, v38, &v193);
      sub_835270(&v190, a3, v39);
      sub_835190((__int64)&v193, &v190, v40);
      sub_834250(a3, &v193, v41);
      sub_5FF3B0(&v193);
      sub_5FF3B0(&v190);
      v42 = a4;
      v43 = *a4;
      if ( *a4 == v8 )
        v42 = (__int64 *)a4[1];
      v193 = (*((_BYTE *)v42 + 20) & 7) == 0;
      sub_846440((__int64)&v190, v43, &v193);
      sub_835270(&v190, a4, v44);
      sub_835190((__int64)&v193, &v190, v45);
      sub_834250(a4, &v193, v46);
      sub_5FF3B0(&v193);
      sub_5FF3B0(&v190);
      sub_835150((__int64)v189, a2, v47);
      sub_8203E0(v189, (__int64)a4, v48);
      sub_835150((__int64)v187, a1, v49);
      sub_8203E0(v187, (__int64)a3, v50);
      sub_835150((__int64)&v190, v187, v51);
      sub_8351D0(&v190, (__int64)v189, 1);
      LODWORD(v193) = 0;
      sub_846480((__int64)v186, *a5, (unsigned int *)&v193);
      if ( v8 == v186[0] )
        sub_257D590(v186, 0);
      else
        sub_25795C0(v186, 0);
      sub_835150((__int64)&v193, v186, v52);
      sub_8203E0(&v193, (__int64)&v190, v53);
      sub_834250(a5, &v193, v54);
      sub_5FF3B0(&v193);
      sub_5FF3B0(v186);
      sub_5FF3B0(&v190);
      sub_5FF3B0(v187);
      sub_5FF3B0(v189);
      sub_835150((__int64)v189, a1, v55);
      sub_8203E0(v189, (__int64)a4, v56);
      sub_835150((__int64)v187, a2, v57);
      sub_8203E0(v187, (__int64)a3, v58);
      sub_835150((__int64)&v190, v187, v59);
      sub_835220(&v190, (__int64)v189, 1);
      LODWORD(v193) = 0;
      sub_846480((__int64)v186, *(_QWORD *)a6, (unsigned int *)&v193);
      if ( v8 == v186[0] )
        sub_257D590(v186, 0);
      else
        sub_25795C0(v186, 0);
    }
    else
    {
      v139 = *a1;
      v193 = (_BYTE)v33 == 0;
      sub_846440((__int64)&v190, v139, &v193);
      sub_835270(&v190, a1, v140);
      sub_835190((__int64)&v193, &v190, v141);
      sub_834250(a1, &v193, v142);
      sub_5FF3B0(&v193);
      sub_5FF3B0(&v190);
      v143 = *a2;
      v144 = a2;
      if ( *a2 == v8 )
        v144 = (__int64 *)a2[1];
      v193 = (*((_BYTE *)v144 + 20) & 7) == 0;
      sub_846440((__int64)&v190, v143, &v193);
      sub_835270(&v190, a2, v145);
      sub_835190((__int64)&v193, &v190, v146);
      sub_834250(a2, &v193, v147);
      sub_5FF3B0(&v193);
      sub_5FF3B0(&v190);
      sub_835150((__int64)v189, a2, v148);
      sub_8203E0(v189, (__int64)a4, v149);
      sub_835150((__int64)v187, a1, v150);
      sub_8203E0(v187, (__int64)a3, v151);
      sub_835150((__int64)&v190, v187, v152);
      sub_8351D0(&v190, (__int64)v189, 1);
      LODWORD(v193) = 0;
      sub_846480((__int64)v186, *a5, (unsigned int *)&v193);
      if ( v8 == v186[0] )
        sub_257D420(v186, 0);
      else
        sub_2579170(v186, 0);
      sub_835150((__int64)&v193, v186, v153);
      sub_8203E0(&v193, (__int64)&v190, v154);
      sub_834250(a5, &v193, v155);
      sub_5FF3B0(&v193);
      sub_5FF3B0(v186);
      sub_5FF3B0(&v190);
      sub_5FF3B0(v187);
      sub_5FF3B0(v189);
      sub_835150((__int64)v189, a1, v156);
      sub_8203E0(v189, (__int64)a4, v157);
      sub_835150((__int64)v187, a2, v158);
      sub_8203E0(v187, (__int64)a3, v159);
      sub_835150((__int64)&v190, v187, v160);
      sub_835220(&v190, (__int64)v189, 1);
      LODWORD(v193) = 0;
      sub_846480((__int64)v186, *(_QWORD *)a6, (unsigned int *)&v193);
      if ( v8 == v186[0] )
        sub_257D420(v186, 0);
      else
        sub_2579170(v186, 0);
    }
    sub_835150((__int64)&v193, v186, v60);
    sub_8203E0(&v193, (__int64)&v190, v61);
    sub_834250((__int64 *)a6, &v193, v62);
    sub_5FF3B0(&v193);
    sub_5FF3B0(v186);
    sub_5FF3B0(&v190);
    sub_5FF3B0(v187);
    sub_5FF3B0(v189);
  }
LABEL_78:
  sub_5FF3B0(v182);
  return sub_5FF3B0(&v179);
}

