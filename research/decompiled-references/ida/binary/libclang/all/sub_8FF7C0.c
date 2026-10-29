__int64 __fastcall sub_8FF7C0(__int64 a1, int a2, unsigned int a3, int a4, int a5, _QWORD *a6)
{
  __int64 result; // rax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // r8d
  _BYTE *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rax
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rdx
  char v37; // al
  unsigned int v38; // r14d
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  unsigned int v51; // r14d
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r15d
  __int64 v62; // rsi
  __int64 v63; // rdx
  unsigned int v64; // r15d
  __int64 v65; // rsi
  __int64 v66; // rdx
  unsigned int v67; // r15d
  __int64 v68; // rsi
  __int64 v69; // rdx
  unsigned int v70; // r15d
  __int64 v71; // rsi
  __int64 v72; // rdx
  unsigned int v73; // r15d
  __int64 v74; // rsi
  __int64 v75; // rdx
  unsigned int v76; // r15d
  __int64 v77; // rsi
  __int64 v78; // rdx
  unsigned int v79; // r15d
  __int64 v80; // rsi
  __int64 v81; // rdx
  unsigned int v82; // r15d
  __int64 v83; // rsi
  __int64 v84; // rdx
  unsigned int v85; // r14d
  __int64 v86; // rsi
  __int64 v87; // rax
  int v88; // r8d
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rax
  const __m128i *v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rax
  __m128i *v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 *v101; // [rsp+8h] [rbp-130h]
  char v102; // [rsp+8h] [rbp-130h]
  unsigned __int8 v103; // [rsp+8h] [rbp-130h]
  __int64 v104; // [rsp+8h] [rbp-130h]
  _BYTE *v107; // [rsp+8h] [rbp-130h]
  _BYTE *v109; // [rsp+8h] [rbp-130h]
  _WORD *v111; // [rsp+8h] [rbp-130h]
  _WORD *v113; // [rsp+8h] [rbp-130h]
  _DWORD *v115; // [rsp+8h] [rbp-130h]
  _DWORD *v117; // [rsp+8h] [rbp-130h]
  _QWORD *v119; // [rsp+8h] [rbp-130h]
  _QWORD *v121; // [rsp+8h] [rbp-130h]
  __int64 v122; // [rsp+10h] [rbp-128h]
  __int64 v123; // [rsp+10h] [rbp-128h]
  __int64 v124; // [rsp+10h] [rbp-128h]
  __int64 v125; // [rsp+10h] [rbp-128h]
  __int64 v126; // [rsp+10h] [rbp-128h]
  __int64 v127; // [rsp+10h] [rbp-128h]
  __int64 v128; // [rsp+10h] [rbp-128h]
  __int64 v129; // [rsp+10h] [rbp-128h]
  __int64 v130; // [rsp+10h] [rbp-128h]
  unsigned int v132; // [rsp+18h] [rbp-120h]
  __int64 v133; // [rsp+18h] [rbp-120h]
  __int64 v134; // [rsp+18h] [rbp-120h]
  __int64 v135; // [rsp+18h] [rbp-120h]
  __int64 v136; // [rsp+18h] [rbp-120h]
  __int64 v137; // [rsp+18h] [rbp-120h]
  __int64 v138; // [rsp+18h] [rbp-120h]
  __int64 v139; // [rsp+18h] [rbp-120h]
  __int64 v140; // [rsp+18h] [rbp-120h]
  __int64 v141; // [rsp+18h] [rbp-120h]
  __int64 v142; // [rsp+18h] [rbp-120h]
  unsigned int v144; // [rsp+18h] [rbp-120h]
  __int64 v145; // [rsp+20h] [rbp-118h]
  __int64 v146; // [rsp+20h] [rbp-118h]
  unsigned int v147; // [rsp+20h] [rbp-118h]
  unsigned int v149; // [rsp+20h] [rbp-118h]
  __int64 v150; // [rsp+20h] [rbp-118h]
  __int64 v151; // [rsp+20h] [rbp-118h]
  __int64 v152; // [rsp+20h] [rbp-118h]
  __int64 v153; // [rsp+20h] [rbp-118h]
  __int64 v154; // [rsp+20h] [rbp-118h]
  __int64 v155; // [rsp+20h] [rbp-118h]
  __int64 v156; // [rsp+20h] [rbp-118h]
  __int64 v157; // [rsp+20h] [rbp-118h]
  __int64 v158; // [rsp+20h] [rbp-118h]
  __int64 v159; // [rsp+20h] [rbp-118h]
  _BYTE *v160; // [rsp+28h] [rbp-110h]
  __int64 v161; // [rsp+28h] [rbp-110h]
  __int64 v162; // [rsp+28h] [rbp-110h]
  __int64 v163; // [rsp+28h] [rbp-110h]
  __int64 v164; // [rsp+28h] [rbp-110h]
  __int64 v165; // [rsp+28h] [rbp-110h]
  __int64 v166; // [rsp+28h] [rbp-110h]
  unsigned int v167; // [rsp+28h] [rbp-110h]
  unsigned int v168; // [rsp+28h] [rbp-110h]
  unsigned int v169; // [rsp+28h] [rbp-110h]
  unsigned int v170; // [rsp+28h] [rbp-110h]
  unsigned int v171; // [rsp+28h] [rbp-110h]
  unsigned int v172; // [rsp+28h] [rbp-110h]
  unsigned int v173; // [rsp+28h] [rbp-110h]
  unsigned int v174; // [rsp+28h] [rbp-110h]
  __int64 v175; // [rsp+28h] [rbp-110h]
  __int64 v176; // [rsp+28h] [rbp-110h]
  __int64 v177; // [rsp+30h] [rbp-108h]
  __int64 v178; // [rsp+30h] [rbp-108h]
  __int64 v179; // [rsp+30h] [rbp-108h]
  __int64 v180; // [rsp+30h] [rbp-108h]
  const __m128i *v181; // [rsp+30h] [rbp-108h]
  __int64 v182; // [rsp+38h] [rbp-100h]
  __int64 v183; // [rsp+38h] [rbp-100h]
  __int64 v184; // [rsp+38h] [rbp-100h]
  __int64 v185; // [rsp+38h] [rbp-100h]
  __int64 v186; // [rsp+38h] [rbp-100h]
  __int64 v187; // [rsp+38h] [rbp-100h]
  __int64 v188; // [rsp+38h] [rbp-100h]
  __int64 v189[3]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v190; // [rsp+58h] [rbp-E0h]
  unsigned int v191; // [rsp+60h] [rbp-D8h]
  int v192; // [rsp+70h] [rbp-C8h]
  __int64 v193[3]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v194; // [rsp+98h] [rbp-A0h]
  unsigned int v195; // [rsp+A0h] [rbp-98h]
  unsigned int v196; // [rsp+B0h] [rbp-88h]
  _BYTE v197[120]; // [rsp+C0h] [rbp-78h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v61 = a3;
        v62 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v135 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v62);
        v151 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v167 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v61);
          v18 = sub_9E4580(a1 + 384, v135, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v63 = a4 - a3 + v61++;
          sub_8E61F0((__int64)v189, v151, v63);
          v107 = (_BYTE *)sub_8F63E0(v193);
          *(_BYTE *)sub_8F63E0(v189) = *v107;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v61 == v167 )
            goto LABEL_132;
        }
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v64 = a3;
        v65 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v136 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v65);
        v152 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v168 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v64);
          v18 = sub_9E4580(a1 + 384, v136, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v66 = a4 - a3 + v64++;
          sub_8E61F0((__int64)v189, v152, v66);
          v109 = (_BYTE *)sub_8F6BD0(v193);
          *(_BYTE *)sub_8F6BD0(v189) = *v109;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v64 == v168 )
            goto LABEL_132;
        }
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v67 = a3;
        v68 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v137 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v68);
        v153 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v169 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v67);
          v18 = sub_9E4580(a1 + 384, v137, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v69 = a4 - a3 + v67++;
          sub_8E61F0((__int64)v189, v153, v69);
          v111 = (_WORD *)sub_8F6C20(v193);
          *(_WORD *)sub_8F6C20(v189) = *v111;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v67 == v169 )
            goto LABEL_132;
        }
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v70 = a3;
        v71 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v138 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v71);
        v154 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v170 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v70);
          v18 = sub_9E4580(a1 + 384, v138, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v72 = a4 - a3 + v70++;
          sub_8E61F0((__int64)v189, v154, v72);
          v113 = (_WORD *)sub_8F7430(v193);
          *(_WORD *)sub_8F7430(v189) = *v113;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v170 == v70 )
            goto LABEL_132;
        }
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v73 = a3;
        v74 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v139 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v74);
        v155 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v171 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v73);
          v18 = sub_9E4580(a1 + 384, v139, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v75 = a4 - a3 + v73++;
          sub_8E61F0((__int64)v189, v155, v75);
          v115 = (_DWORD *)sub_8F7480(v193);
          *(_DWORD *)sub_8F7480(v189) = *v115;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v73 == v171 )
            goto LABEL_132;
        }
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v76 = a3;
        v77 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v140 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v77);
        v156 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v172 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v76);
          v18 = sub_9E4580(a1 + 384, v140, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v78 = a4 - a3 + v76++;
          sub_8E61F0((__int64)v189, v156, v78);
          v117 = (_DWORD *)sub_8F7C70(v193);
          *(_DWORD *)sub_8F7C70(v189) = *v117;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v172 == v76 )
            goto LABEL_132;
        }
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v79 = a3;
        v80 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v141 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v80);
        v157 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v173 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v79);
          v18 = sub_9E4580(a1 + 384, v141, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v81 = a4 - a3 + v79++;
          sub_8E61F0((__int64)v189, v157, v81);
          v119 = (_QWORD *)sub_8F7CC0(v193);
          *(_QWORD *)sub_8F7CC0(v189) = *v119;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v79 == v173 )
            goto LABEL_132;
        }
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v82 = a3;
        v83 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v142 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v83);
        v158 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v174 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v82);
          v18 = sub_9E4580(a1 + 384, v142, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v84 = a4 - a3 + v82++;
          sub_8E61F0((__int64)v189, v158, v84);
          v121 = (_QWORD *)sub_8F84D0(v193);
          *(_QWORD *)sub_8F84D0(v189) = *v121;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v82 == v174 )
            goto LABEL_132;
        }
      }
      break;
    case 8:
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v97 = *(_QWORD *)(a1 + 792);
        v98 = a1 + 384;
        *(_QWORD *)(v98 + 416) = *a6;
        result = sub_8FF260(v98, v97, a3, a4, a5);
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = a3;
        v10 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v122 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v10);
        v11 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v12 = a5;
        v145 = v11;
        v132 = a3 + a5;
        if ( !v12 )
          goto LABEL_132;
        do
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v9);
          v18 = sub_9E4580(a1 + 384, v122, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          sub_8E61F0((__int64)v189, v145, a4 - a3 + v9);
          v19 = v194;
          v20 = v193[0];
          if ( !v196
            && (v178 = v193[0],
                v161 = v194,
                v21 = sub_8E5480((__int64)v193),
                v19 = v161,
                v20 = v178,
                *(_BYTE *)(v21 + 51))
            && v195 == v178 )
          {
            v13 = (_BYTE *)(v161 + v195 + 72);
          }
          else
          {
            v13 = (_BYTE *)(v19 + v20 + 40);
          }
          v14 = v190;
          v15 = v189[0];
          if ( v192
            || (v182 = v189[0],
                v177 = v190,
                v160 = v13,
                v16 = sub_8E5480((__int64)v189),
                v13 = v160,
                v14 = v177,
                v15 = v182,
                !*(_BYTE *)(v16 + 51))
            || (v17 = (_BYTE *)(v177 + v191 + 72), v191 != v182) )
          {
            v17 = (_BYTE *)(v14 + v15 + 40);
          }
          ++v9;
          *v17 = *v13;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
        }
        while ( v132 != v9 );
        goto LABEL_132;
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v22 = *(_QWORD *)(a1 + 568);
        v23 = a3;
        *(_QWORD *)(a1 + 800) = *a6;
        v146 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v22);
        v162 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( !a5 )
          goto LABEL_132;
        do
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v23);
          v18 = sub_9E4580(a1 + 384, v146, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          sub_8E61F0((__int64)v189, v162, a4 - a3 + v23);
          v25 = v194;
          v26 = v193[0];
          if ( v196
            || (v183 = v193[0],
                v124 = v194,
                v27 = sub_8E5480((__int64)v193),
                v25 = v124,
                v26 = v183,
                !*(_BYTE *)(v27 + 51))
            || (v28 = v124 + v195 + 72, v195 != v183) )
          {
            v28 = v25 + v26 + 40;
          }
          v29 = v190;
          v30 = v189[0];
          if ( v192
            || (v184 = v190,
                v125 = v189[0],
                v31 = sub_8E5480((__int64)v189),
                v30 = v125,
                v29 = v184,
                !*(_BYTE *)(v31 + 51))
            || (v24 = v184 + v125 + 72, v125 != v191) )
          {
            v24 = v29 + v30 + 40;
          }
          if ( *(_DWORD *)(v24 + 8) > 0x40u || *(_DWORD *)(v28 + 8) > 0x40u )
          {
            v123 = v24;
            sub_2585EA0(v24, v28);
            v24 = v123;
          }
          else
          {
            *(_QWORD *)v24 = *(_QWORD *)v28;
            *(_DWORD *)(v24 + 8) = *(_DWORD *)(v28 + 8);
          }
          ++v23;
          *(_BYTE *)(v24 + 12) = *(_BYTE *)(v28 + 12);
          *(_DWORD *)(v24 + 16) = *(_DWORD *)(v28 + 16);
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
        }
        while ( v23 != a3 + a5 );
        goto LABEL_132;
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v32 = a3;
        v33 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v133 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v33);
        v163 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v147 = a3 + a5;
        if ( !a5 )
          goto LABEL_132;
        while ( 1 )
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v32);
          v18 = sub_9E4580(a1 + 384, v133, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          v34 = a4 - a3 + v32++;
          sub_8E61F0((__int64)v189, v163, v34);
          v101 = (__int64 *)sub_8F8D80(v193);
          v35 = (__int64 *)sub_8F8D80(v189);
          sub_8DBB60(v35, v101, v36);
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
          if ( v32 == v147 )
            goto LABEL_132;
        }
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v38 = a3;
        v39 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v104 = a1 + 384;
        v126 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v39);
        v40 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v41 = a5;
        v134 = v40;
        v149 = a3 + a5;
        if ( !v41 )
          goto LABEL_132;
        do
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v38);
          v18 = sub_9E4580(v104, v126, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          sub_8E61F0((__int64)v189, v134, a4 - a3 + v38);
          v42 = v194;
          v43 = v193[0];
          if ( v196
            || (v179 = v194,
                v164 = v193[0],
                v44 = sub_8E5480((__int64)v193),
                v43 = v164,
                v42 = v179,
                !*(_BYTE *)(v44 + 51))
            || (v45 = v179 + v195 + 72, v195 != v164) )
          {
            v45 = v42 + v43 + 40;
          }
          v46 = v190;
          v47 = v189[0];
          if ( v192
            || (v185 = v190,
                v165 = v189[0],
                v48 = sub_8E5480((__int64)v189),
                v47 = v165,
                v46 = v185,
                !*(_BYTE *)(v48 + 51))
            || (v49 = v185 + v165 + 72, v165 != v191) )
          {
            v49 = v46 + v47 + 40;
          }
          sub_A1C120(v49, v45, v47);
          ++v38;
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
        }
        while ( v38 != v149 );
        goto LABEL_132;
      }
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v85 = a3;
        v86 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v130 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v86);
        v87 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v88 = a5;
        v159 = v87;
        v144 = a3 + a5;
        if ( !v88 )
          goto LABEL_132;
        do
        {
          sub_8E61F0((__int64)v193, (__int64)v197, v85);
          v18 = sub_9E4580(a1 + 384, v130, v193, 0);
          if ( !v18 )
            goto LABEL_40;
          sub_8E61F0((__int64)v189, v159, a4 - a3 + v85);
          v89 = v194;
          v90 = v193[0];
          if ( v196
            || (v180 = v194,
                v175 = v193[0],
                v91 = sub_8E5480((__int64)v193),
                v90 = v175,
                v89 = v180,
                !*(_BYTE *)(v91 + 51))
            || (v92 = (const __m128i *)(v180 + v195 + 72), v195 != v175) )
          {
            v92 = (const __m128i *)(v89 + v90 + 40);
          }
          v93 = v190;
          v94 = v189[0];
          if ( v192
            || (v188 = v189[0],
                v181 = v92,
                v176 = v190,
                v95 = sub_8E5480((__int64)v189),
                v93 = v176,
                v92 = v181,
                v94 = v188,
                !*(_BYTE *)(v95 + 51))
            || (v96 = (__m128i *)(v176 + v191 + 72), v191 != v188) )
          {
            v96 = (__m128i *)(v93 + v94 + 40);
          }
          ++v85;
          *v96 = _mm_loadu_si128(v92);
          v96[1].m128i_i8[0] = v92[1].m128i_i8[0];
          sub_A1DB00(v189);
          sub_A1C0C0(v189);
          sub_A1C0C0(v193);
        }
        while ( v144 != v85 );
        goto LABEL_132;
      }
      break;
    case 15:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v50 = *(_QWORD *)(a1 + 568);
        v51 = a3;
        *(_QWORD *)(a1 + 800) = *a6;
        v150 = *(_QWORD *)(a1 + 792);
        sub_8F41A0((__int64)v197, v50);
        v166 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( a5 )
        {
          while ( 1 )
          {
            sub_8E61F0((__int64)v193, (__int64)v197, v51);
            v18 = sub_9E4580(a1 + 384, v150, v193, 0);
            if ( !v18 )
              break;
            sub_8E61F0((__int64)v189, v166, a4 - a3 + v51);
            v52 = v196;
            v53 = v194;
            v54 = v193[0];
            if ( v196
              || (v186 = v194,
                  v127 = v193[0],
                  v55 = sub_8E5480((__int64)v193),
                  v54 = v127,
                  v53 = v186,
                  !*(_BYTE *)(v55 + 51))
              || (v56 = v186 + v127 + 72, v127 != v195) )
            {
              v56 = v53 + v54 + 40;
            }
            v57 = v190;
            v58 = v189[0];
            if ( v192
              || (v187 = v190,
                  v128 = v189[0],
                  v59 = sub_8E5480((__int64)v189),
                  v58 = v128,
                  v57 = v187,
                  !*(_BYTE *)(v59 + 51))
              || (v60 = v187 + v128 + 72, v128 != v191) )
            {
              v60 = v57 + v58 + 40;
            }
            v129 = v60;
            ++v51;
            sub_A1C120(v60, v56, v52);
            *(_QWORD *)(v129 + 56) = *(_QWORD *)(v56 + 56);
            *(_DWORD *)(v129 + 64) = *(_DWORD *)(v56 + 64);
            sub_A1DB00(v189);
            sub_A1C0C0(v189);
            sub_A1C0C0(v193);
            if ( v51 == a3 + a5 )
              goto LABEL_132;
          }
LABEL_40:
          v102 = v18;
          sub_A1C0C0(v193);
          v37 = v102;
        }
        else
        {
LABEL_132:
          v37 = 1;
        }
        v103 = v37;
        sub_A1C0C0(v197);
        result = v103;
      }
      break;
  }
  return result;
}

