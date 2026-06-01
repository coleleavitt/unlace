void __fastcall sub_EBE690(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  char v12; // r12
  char v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _BYTE *v16; // rsi
  signed __int64 v17; // r13
  __int64 v18; // rdx
  __m128i v19; // xmm1
  unsigned __int8 *v20; // rsi
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // al
  bool v27; // zf
  __int64 v28; // r13
  __int64 v29; // rbx
  unsigned int v30; // eax
  signed __int64 v31; // rax
  __int64 v32; // rcx
  signed __int64 v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  _BOOL8 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rtt
  char v39; // al
  __int64 v40; // rbx
  __int64 *v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // r13
  unsigned __int8 v48; // al
  __int64 v49; // r14
  __int64 v50; // rcx
  unsigned int v51; // ebx
  _QWORD *v52; // rdi
  __int64 v53; // rdx
  unsigned int v54; // r13d
  unsigned int v55; // ecx
  unsigned __int8 v56; // dl
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // r14
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rsi
  char v67; // al
  __m128i si128; // xmm0
  unsigned __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  unsigned __int8 *v74; // r14
  __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // dl
  unsigned __int64 v81; // rax
  char v82; // al
  unsigned __int64 v83; // r13
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r14
  unsigned int v87; // eax
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  unsigned __int64 v91; // rcx
  char v92; // si
  __int64 v93; // rdx
  _BOOL8 v94; // rdi
  unsigned __int64 v95; // r14
  char v96; // al
  __int64 v97; // rcx
  char v98; // dl
  __int64 v99; // rsi
  char v100; // si
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // rdi
  signed __int64 v104; // rax
  signed __int64 v105; // rbx
  signed __int64 v106; // rax
  char v107; // dl
  unsigned int v108; // ebx
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  _BOOL8 v114; // rdi
  unsigned __int64 v115; // r12
  _BOOL8 v116; // r14
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  char v119; // al
  unsigned __int64 v120; // rax
  __int64 v121; // rdi
  bool v122; // cf
  __int64 v123; // rax
  char v124; // al
  __int64 v125; // rbx
  unsigned __int8 **v126; // rbp
  unsigned __int64 v127; // r13
  unsigned __int64 v128; // rax
  __int64 v129; // rbp
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // r13
  __int64 v132; // rbx
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // r14
  unsigned __int64 v135; // rax
  char v136; // al
  __int64 v137; // rdi
  char v138; // al
  __int64 v139; // rax
  __m128i v140; // xmm0
  char v141; // al
  unsigned int v142; // ebx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rsi
  unsigned __int64 v149; // rsi
  char *v150; // rax
  signed __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  unsigned __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned int v158; // eax
  bool v159; // [rsp+0h] [rbp-128h]
  unsigned __int64 v160; // [rsp+0h] [rbp-128h]
  __int64 v161; // [rsp+0h] [rbp-128h]
  unsigned __int8 *v162; // [rsp+8h] [rbp-120h]
  __int64 v163; // [rsp+8h] [rbp-120h]
  __int64 v164; // [rsp+8h] [rbp-120h]
  __int64 v165; // [rsp+8h] [rbp-120h]
  __int64 src; // [rsp+10h] [rbp-118h]
  char v167; // [rsp+18h] [rbp-110h]
  __int64 v168; // [rsp+18h] [rbp-110h]
  unsigned int v169; // [rsp+18h] [rbp-110h]
  unsigned __int64 v170; // [rsp+18h] [rbp-110h]
  unsigned __int64 v171; // [rsp+20h] [rbp-108h]
  _BOOL8 v172; // [rsp+20h] [rbp-108h]
  unsigned __int8 v173; // [rsp+20h] [rbp-108h]
  __int64 v174; // [rsp+20h] [rbp-108h]
  unsigned __int8 *v175; // [rsp+28h] [rbp-100h]
  unsigned int v176; // [rsp+28h] [rbp-100h]
  __int64 v177; // [rsp+30h] [rbp-F8h]
  unsigned int v178; // [rsp+30h] [rbp-F8h]
  unsigned int v180; // [rsp+48h] [rbp-E0h]
  char v181; // [rsp+4Eh] [rbp-DAh]
  bool v182; // [rsp+4Eh] [rbp-DAh]
  unsigned __int8 v183; // [rsp+4Fh] [rbp-D9h]
  __int64 v184; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v185; // [rsp+58h] [rbp-D0h]
  __int64 v186; // [rsp+58h] [rbp-D0h]
  _QWORD *v187; // [rsp+60h] [rbp-C8h]
  _QWORD dest[2]; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v189; // [rsp+80h] [rbp-A8h]
  __int64 v190; // [rsp+90h] [rbp-98h]
  unsigned __int8 *v191; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v192; // [rsp+A8h] [rbp-80h]
  __int64 v193; // [rsp+B0h] [rbp-78h]
  __int64 v194; // [rsp+B8h] [rbp-70h]
  __int64 v195; // [rsp+C0h] [rbp-68h]
  __int64 v196; // [rsp+C8h] [rbp-60h]
  char v197; // [rsp+D0h] [rbp-58h] BYREF

  v4 = a2;
  v5 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  v159 = sub_B54500(a2);
  if ( !v159
    || (a2 = *(_QWORD *)(v5 + 104),
        sub_6E4DB0((__int64 *)(a2 + 96), a2, v6, v7, v8, v9),
        v171 = 0,
        (*(_BYTE *)(*(_QWORD *)(v5 + 128) + 1LL) & 2) == 0) )
  {
    if ( (*(_BYTE *)(a1 + 200) & 8) != 0 )
    {
      v159 = 0;
      v171 = 0;
    }
    else
    {
      a2 = *(_QWORD *)(a1 + 216);
      v159 = 0;
      v171 = sub_A742B0(*(_QWORD *)a1, a2);
    }
  }
  v10 = sub_A321E0;
  v11 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)a1 + 17448LL) + 832LL);
  if ( v11 == sub_A321E0 || (v13 = v11()) == 0 )
  {
    v167 = 0;
    v12 = 1;
    v13 = 0;
  }
  else
  {
    v167 = *(_BYTE *)(a1 + 267) | v159;
    v12 = 0;
    if ( v167 )
    {
      v13 = 0;
    }
    else
    {
      v167 = v13;
      *(_BYTE *)(a1 + 267) = ((*(_BYTE *)(a1 + 200) >> 3) ^ 1) & 1;
    }
  }
  if ( (*(_BYTE *)(v4 + 68) & 1) == 0 )
  {
    v184 = *(_QWORD *)(a1 + 216);
    v183 = *(_BYTE *)(a1 + 201);
    *(_WORD *)(a1 + 201) = 0;
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
    v15 = dest;
    v16 = *(_BYTE **)(v14 + 216);
    v17 = *(_QWORD *)(v14 + 224);
    v187 = dest;
    v181 = v16 == nullptr && &v16[v17] != nullptr;
    if ( v181 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v17 > 0xF )
    {
      if ( v17 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v164 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
      v15 = (_QWORD *)operator new(v17 + 1);
      dest[0] = v17;
      v14 = v164;
      v187 = v15;
    }
    else
    {
      if ( v17 == 1 )
      {
        LOBYTE(dest[0]) = *v16;
        goto LABEL_11;
      }
      if ( !v17 )
      {
LABEL_11:
        *((_BYTE *)v15 + v17) = 0;
        v18 = *(_QWORD *)(v4 + 48);
        v19 = _mm_loadu_si128((const __m128i *)(v14 + 248));
        v190 = *(_QWORD *)(v14 + 264);
        v20 = *(unsigned __int8 **)a1;
        v189 = v19;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 5 )
        {
          sub_A8AC20((__int64)&v191, (__int64)v20, v18);
          v21 = v193;
          v175 = nullptr;
          v162 = nullptr;
          src = v192;
          v26 = *(_BYTE *)(a1 + 200);
          goto LABEL_14;
        }
        sub_A8AC20((__int64)&v191, (__int64)v20, v18);
        v21 = v193;
        src = v192;
        v162 = v191;
        v20 = v191;
        v175 = v191;
        if ( sub_B54500(v4) )
        {
          v113 = sub_EBA840(*(_QWORD *)a1, (char *)v5, v22, v23, v24, v25);
          v22 = v113[9];
          v20 = (unsigned __int8 *)v113[1];
          if ( *(_QWORD *)v22 >= (__int64)v20 )
            v20 = *(unsigned __int8 **)v22;
          v175 = v20;
        }
        v26 = *(_BYTE *)(a1 + 200);
        if ( (v26 & 0x40) == 0 )
        {
LABEL_14:
          if ( (v26 & 4) != 0
            && (!v5
             || (v20 = *(unsigned __int8 **)(v5 + 104),
                 sub_6E4DB0((__int64 *)v20 + 12, (__int64)v20, v22, v23, v24, v25),
                 (*(_BYTE *)(*(_QWORD *)(v5 + 128) + 1LL) & 1) != 0)
             || (*(_BYTE *)(v5 + 29) & 1) != 0 && sub_EB2890(v5, (__int64)v20, v22, v23, v24, v25)
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 2320LL) + 212LL) <= 0x8Fu
             || v189.m128i_i32[0] == 38
             && v189.m128i_i32[2] == 3
             && (v22 = (unsigned int)(v189.m128i_i32[3] - 24), (unsigned int)v22 <= 1)
             || v189.m128i_i32[3] <= 0x1Fu && (v22 = 4161798690LL, _bittest64(&v22, v189.m128i_u32[3]))) )
          {
            v181 = 1;
          }
          else
          {
            if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
            {
              v27 = v21 == 1;
              v28 = src;
              if ( (unsigned __int8)v12 | v27 )
                goto LABEL_17;
              v181 = 0;
              goto LABEL_96;
            }
            v181 = sub_EB2890(v4, (__int64)v20, v22, v23, v24, v25);
          }
          if ( v21 == 1 || v12 )
            goto LABEL_73;
          if ( ((unsigned __int8)v181 & (v21 == 2)) != 0 )
          {
            v181 &= v21 == 2;
            v28 = src;
            goto LABEL_17;
          }
LABEL_96:
          if ( v13 || (v28 = src, (*(_BYTE *)(a1 + 200) & 0x20) != 0) )
          {
            v57 = sub_EB4140(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v20, v22, v23);
            v58 = v57;
            if ( *(_BYTE *)(v57 + 16) == 14 )
              goto LABEL_99;
            v137 = *(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            v138 = *(_BYTE *)(v137 + 16);
            if ( v138 == 14 )
            {
              v139 = sub_F3F310(v58, v20, v22, v23);
              if ( v139 )
              {
                v58 = v139;
LABEL_99:
                v28 = src;
                if ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 18LL) >> 3)
                    & 0x1FFu)
                   - 482 > 1 )
                  goto LABEL_17;
                goto LABEL_100;
              }
              v137 = *(_QWORD *)(*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v138 = *(_BYTE *)(v137 + 16);
            }
            if ( v138 == 13 )
            {
              if ( ((*(_WORD *)(v137 + 18) >> 3) & 0x1FFu) - 482 <= 1 )
              {
LABEL_100:
                v28 = 8;
                goto LABEL_17;
              }
LABEL_73:
              v28 = src;
              goto LABEL_17;
            }
            v28 = src;
            if ( v138 == 48 )
            {
              v20 = (unsigned __int8 *)sub_F3D1D0(v137, v20, v22, v23, v24);
              v28 = sub_EBA840(*(_QWORD *)a1, (char *)v20, v154, v155, v156, v157)[3];
            }
          }
LABEL_17:
          v29 = *(_QWORD *)a1;
          v30 = sub_B68C30(v4, (__int64)v20, v22, v23, v24, v25);
          v31 = sub_A742B0(v29, v30);
          v32 = 1;
          if ( v31 > 0 )
            v32 = v31;
          if ( v28 < v31 )
            v28 = v31;
          if ( src >= v31 )
            v31 = src;
          v177 = v32;
          v33 = v31;
          v34 = *(_QWORD *)(a1 + 208);
          if ( v34 )
          {
            if ( v32 > v34 )
              v32 = *(_QWORD *)(a1 + 208);
            if ( v28 > v34 )
              v28 = *(_QWORD *)(a1 + 208);
            v177 = v32;
            if ( v33 > v34 )
              v33 = *(_QWORD *)(a1 + 208);
          }
          if ( v181 )
          {
            if ( !v167 )
            {
              v168 = v177;
              v35 = v177;
LABEL_33:
              v28 = v33;
              v33 = v35;
LABEL_34:
              v36 = v171 != 0;
              v37 = v171 - v36;
              v172 = v36;
              v185 = v37;
              v38 = v37;
              v39 = *(_BYTE *)(a1 + 200);
              v40 = v35 * (v38 / v35 + v36);
              if ( (v39 & 1) != 0 )
              {
                v59 = *(_QWORD *)a1;
                v60 = sub_A74320(*(_QWORD *)a1, v40);
                v191 = (unsigned __int8 *)v4;
                v61 = v60;
                v66 = *sub_EB7B40(a1 + 680, (__int64 *)&v191, v62, v63, v64, v65);
                v67 = *(_BYTE *)(a1 + 200);
                if ( (v67 & 2) != 0 && v61 > v66 )
                {
                  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CC0);
                  *(_BYTE *)(a1 + 200) = v67 & 0xFD;
                  *(__m128i *)(a1 + 24) = si128;
                }
                v69 = sub_A742B0(v59, v66);
                v40 = v69;
                if ( (*(_BYTE *)(a1 + 200) & 8) == 0 )
                {
                  v70 = *(__int64 **)(a1 + 8);
                  if ( v70 )
                    sub_EBE5C0(v70, v4, v69);
                }
              }
              else if ( (v39 & 8) == 0 )
              {
                v41 = *(__int64 **)(a1 + 8);
                if ( v41 )
                {
                  while ( !(unsigned __int8)sub_EBE5C0(v41, v4, v40) )
                  {
                    if ( v40 || !sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 216)) )
                    {
                      v40 += v35;
                    }
                    else
                    {
                      v42 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 216));
                      v40 = v35 * ((v42 - (v42 != 0)) / v35 + (v42 != 0));
                    }
                    v41 = *(__int64 **)(a1 + 8);
                  }
                }
              }
              v71 = sub_A74320(*(_QWORD *)a1, v40);
              sub_995F50(a1 + 56, v71);
              if ( (*(_BYTE *)(a1 + 200) & 1) == 0 )
              {
                sub_A74320(*(_QWORD *)a1, v28);
                v174 = sub_A74320(*(_QWORD *)a1, v28 * (v185 / v28 + v172));
                v86 = sub_A74320(*(_QWORD *)a1, v40);
                sub_EB4100(*(_QWORD *)a1, (*(_BYTE *)(a1 + 200) & 8) != 0, v86, v184 - v183, v4);
                if ( v174 != v86 )
                {
                  if ( v181 )
                    *(_BYTE *)(a1 + 266) = 1;
                }
              }
              if ( a3 )
              {
                v72 = 8;
                if ( (__int64)v162 % 8 )
                  v72 = 16 - (__int64)v162 % 8;
                v162 += v72;
                v175 = v162;
              }
              v73 = *(_QWORD *)a1;
              v74 = &v162[v40];
              if ( v159 )
              {
                v75 = (__int64)&v162[v40];
                v85 = sub_A74320(v73, (__int64)&v162[v40]);
                if ( *(_QWORD *)(a1 + 16) >= v85 )
                  v85 = *(_QWORD *)(a1 + 16);
                v80 = *(_BYTE *)(a1 + 200);
                *(_QWORD *)(a1 + 16) = v85;
              }
              else
              {
                v75 = (__int64)v175;
                v76 = sub_A74320(v73, (__int64)v175);
                v80 = *(_BYTE *)(a1 + 200);
                if ( (v80 & 8) != 0 )
                {
                  if ( *(_QWORD *)(a1 + 216) >= v76 )
                    v76 = *(_QWORD *)(a1 + 216);
                  *(_QWORD *)(a1 + 216) = v76;
                }
                else
                {
                  v75 = (__int64)&v175[v40];
                  v117 = sub_A74320(*(_QWORD *)a1, (__int64)&v175[v40]);
                  v80 = *(_BYTE *)(a1 + 200);
                  *(_QWORD *)(a1 + 216) = v117;
                }
                if ( *(_QWORD *)(a1 + 248) < (__int64)v74 )
                  *(_QWORD *)(a1 + 248) = v74;
                v81 = *(_QWORD *)(a1 + 216);
                if ( *(_QWORD *)(a1 + 16) >= v81 )
                  v81 = *(_QWORD *)(a1 + 16);
                *(_QWORD *)(a1 + 16) = v81;
              }
              if ( *(_QWORD *)(a1 + 48) < v33 )
                *(_QWORD *)(a1 + 48) = v33;
              v82 = v80;
              if ( (v80 & 0x10) == 0 && (v80 & 3) != 1 )
              {
                if ( *(_QWORD *)(a1 + 24) < v33 )
                  *(_QWORD *)(a1 + 24) = v33;
                if ( v28 > *(_QWORD *)(a1 + 40) )
                  *(_QWORD *)(a1 + 40) = v28;
                v75 = v168;
                if ( *(_QWORD *)(a1 + 32) < v168 )
                  *(_QWORD *)(a1 + 32) = v168;
              }
              v83 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
                v83 = *(_QWORD *)v83;
              v84 = (*(_BYTE *)(v83 + 8) & 0x7Fu) - 58;
              if ( (unsigned int)v84 <= 3 && v83 != 64 )
              {
                if ( ((*(_BYTE *)(v83 - 35) & 1) != 0 && sub_EB2890(v83 - 64, v75, v84, v77, v78, v79)
                   || *(_QWORD *)(a1 + 208))
                  && src > v33
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) == 48
                  && v40 % src )
                {
                  v142 = *(_DWORD *)(v4 + 24);
                  v143 = sub_A3ED80(*(_QWORD *)a1);
                  sub_FA3370(&v191, v143, v142, 2588);
                  v148 = *(_QWORD *)(v83 - 16);
                  if ( v148 )
                    v149 = v148 & 0xFFFFFFFFFFFFFFF0LL;
                  else
                    v149 = sub_A56D30(*(_QWORD *)a1, v83 - 64, v144, v145, v146, v147);
                  sub_AC60B0(&v191, v149, 8u);
                  v150 = (char *)sub_971A10(v4);
                  sub_AC84E0(&v191, v150, v151);
                  sub_AC60B0(&v191, *(_QWORD *)(v4 + 48), 8u);
                  sub_AC6300((__int64)&v191);
                }
                v82 = *(_BYTE *)(a1 + 200);
              }
              if ( (v82 & 4) != 0 && !v181 && v33 > v177 )
              {
                v108 = *(_DWORD *)(v4 + 24);
                v109 = sub_A3ED80(*(_QWORD *)a1);
                sub_FA3370(&v191, v109, v108, 2590);
                sub_AC60B0(&v191, v4, 0xAu);
                sub_AC6300((__int64)&v191);
              }
              if ( v187 != dest )
                operator delete(v187);
              return;
            }
            v35 = v177;
            v33 = v177;
          }
          else
          {
            if ( !v167 )
            {
              v35 = v33;
              v168 = v28;
              goto LABEL_33;
            }
            v35 = v28;
          }
          v168 = v35;
          goto LABEL_34;
        }
        v110 = *(_QWORD *)(*(_QWORD *)(sub_A4D710(*(_QWORD *)a1, *(_QWORD *)(v4 + 48)) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
             & 0xFFFFFFFFFFFFFFF0LL;
        v20 = *(unsigned __int8 **)v110;
        if ( *(_BYTE *)(*(_QWORD *)v110 + 16LL) == 13 )
        {
          v111 = sub_A8A730(*(_QWORD *)a1, (__int64)v20);
          v24 = v111;
          if ( !v111 || (v111 & (v111 - 1)) != 0 )
          {
            v112 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
            if ( *(_DWORD *)(v112 + 260) != 15 || *(_DWORD *)(v112 + 264) != 1 )
            {
              v186 = v24;
              v178 = *(_DWORD *)(v4 + 24);
              v20 = (unsigned __int8 *)sub_A3ED80(*(_QWORD *)a1);
              sub_FA3370(&v191, v20, v178, 2563);
              sub_AC6300((__int64)&v191);
              v24 = v186;
            }
            if ( v24 <= src || !v24 || (v24 & (v24 - 1)) != 0 )
              goto LABEL_205;
            goto LABEL_204;
          }
          if ( v111 > src )
LABEL_204:
            src = v24;
        }
LABEL_205:
        v26 = *(_BYTE *)(a1 + 200);
        goto LABEL_14;
      }
    }
    v165 = v14;
    memcpy(v15, v16, v17);
    v15 = v187;
    v14 = v165;
    goto LABEL_11;
  }
  v182 = 1;
  if ( (*(_BYTE *)(a1 + 200) & 4) == 0 )
  {
    v182 = 0;
    if ( (*(_BYTE *)(v4 + 29) & 1) != 0 )
      v182 = sub_EB2890(v4, a2, (__int64)v10, v7, v8, v9);
  }
  v180 = sub_B54430(v4);
  v43 = *(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v47 = sub_A73FE0(*(_QWORD *)a1, v43);
  v160 = v47;
  v48 = *(_BYTE *)(a1 + 200);
  v49 = v44 >> 32;
  v50 = v48 & 0x40;
  if ( (v48 & 0x40) == 0 )
  {
    v173 = 0;
    v51 = v44;
    goto LABEL_50;
  }
  v56 = *(_BYTE *)(a1 + 202);
  v51 = v47;
  v173 = *(_BYTE *)(a1 + 201);
  v43 = v56;
  if ( v47 != v56 )
  {
    if ( !v56 && !v180 )
      v51 = 1;
    goto LABEL_89;
  }
  if ( v180 > (unsigned __int64)v173 )
  {
LABEL_89:
    v43 = 0;
    *(_WORD *)(a1 + 201) = 0;
    goto LABEL_50;
  }
  v173 = 0;
LABEL_50:
  v52 = *(_QWORD **)a1;
  v53 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
  if ( *(_DWORD *)(v53 + 260) == 20 )
  {
    v120 = sub_A73FE0((__int64)v52, *(_QWORD *)(v52[2346] & 0xFFFFFFFFFFFFFFF0LL));
    v121 = *(_QWORD *)a1;
    v122 = v47 < v120;
    v123 = *(_QWORD *)(*(_QWORD *)a1 + 18768LL);
    if ( v122 )
    {
      v43 = *(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL);
      v160 = sub_A73FE0(v121, v43);
    }
    else
    {
      v43 = *(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v47 > sub_A73FE0(v121, v43) )
      {
        v124 = sub_2294180(*(_QWORD *)(*(_QWORD *)a1 + 17448LL) + 216LL);
        if ( v180 <= 0x20uLL )
        {
          if ( v124 )
          {
            if ( (_DWORD)v49 && v51 > 0x1F )
            {
              v48 = *(_BYTE *)(a1 + 200);
              v160 = 32;
              v50 = v48 & 0x40;
LABEL_52:
              if ( (v48 & 8) != 0 )
              {
                v163 = 0;
              }
              else
              {
                v53 = *(unsigned __int8 *)(a1 + 201);
                v43 = *(_QWORD *)(a1 + 216) - v53;
                v163 = v43;
              }
              if ( !(_BYTE)v50 )
              {
                v50 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
                v53 = *(unsigned __int8 *)(v50 + 184);
                if ( (v53 & 2) == 0 )
                {
                  if ( !v180 )
                  {
                    if ( (v53 & 4) != 0 )
                    {
                      if ( v163 || (v54 = 1, (((unsigned __int8)v53 | v48) & 8) != 0) )
                      {
                        if ( *(_DWORD *)(v50 + 188) >= v51 )
                          v51 = *(_DWORD *)(v50 + 188);
                        v54 = v51;
                      }
                      v55 = sub_B68C30(v4, v43, v53, v50, v45, v46);
                      if ( !v55 )
                      {
                        v51 = v54;
                        v158 = sub_A74320(*(_QWORD *)a1, *(_QWORD *)(a1 + 208));
                        v90 = *(_QWORD *)(a1 + 208);
                        v91 = 0;
                        v176 = v158;
                        goto LABEL_163;
                      }
                      v51 = v54;
                      goto LABEL_157;
                    }
                    v54 = 1;
                    v51 = 1;
LABEL_156:
                    v55 = sub_B68C30(v4, v43, v53, v50, v45, v46);
                    if ( !v55 )
                    {
LABEL_161:
                      v169 = v55;
                      v87 = sub_A74320(*(_QWORD *)a1, *(_QWORD *)(a1 + 208));
                      v90 = *(_QWORD *)(a1 + 208);
                      v91 = v169;
                      v176 = v87;
                      if ( v90 && v180 )
                      {
                        if ( v51 > v87 )
                          v51 = v87;
                        if ( v182 )
                        {
                          v54 = v51;
                        }
                        else if ( v54 > v87 )
                        {
                          v54 = v87;
                        }
                      }
LABEL_163:
                      v92 = *(_BYTE *)(a1 + 200);
                      v93 = v92 & 0x48;
                      if ( (_BYTE)v93 == 72 )
                      {
                        v51 = 1;
                        v54 = 1;
                      }
                      if ( (v92 & 0x40) != 0 )
                      {
                        if ( !v180 || v180 > (unsigned __int64)*(unsigned __int8 *)(a1 + 201) )
                        {
                          *(_BYTE *)(a1 + 201) = 0;
                          v94 = v163 != 0;
                          v91 = v163 - v94;
                          v95 = v54 * ((v163 - v94) / (unsigned __int64)v54 + v94);
                          v88 = v51;
                          v93 = (v163 - v94) % (unsigned __int64)v51;
                          v170 = v51 * (v94 + (v163 - v94) / (unsigned __int64)v51);
LABEL_169:
                          if ( (v92 & 1) != 0 )
                          {
                            v191 = (unsigned __int8 *)v4;
                            v118 = *sub_EB7B40(a1 + 680, (__int64 *)&v191, v93, v91, v88, v89);
                            v119 = *(_BYTE *)(a1 + 200);
                            if ( (v119 & 2) != 0 && v95 > v118 )
                            {
                              v140 = _mm_load_si128((const __m128i *)&xmmword_2384CC0);
                              v95 = v118;
                              *(_BYTE *)(a1 + 200) = v119 & 0xFD;
                              *(__m128i *)(a1 + 24) = v140;
                            }
                            else
                            {
                              v95 = v118;
                            }
                          }
                          sub_995F50(a1 + 56, v95);
                          v96 = *(_BYTE *)(a1 + 200);
                          v97 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
                          v98 = v96 & 0x40;
                          if ( (v96 & 0x40) == 0 && (*(_BYTE *)(v97 + 184) & 4) == 0 )
                          {
                            v99 = *(_QWORD *)(v4 + 40);
                            if ( (v99 & 7) != 0 )
                            {
                              v51 = 1;
                              v54 = 1;
                            }
                            else if ( (v99 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                            {
                              v51 = 1;
                              v54 = 1;
                            }
                          }
                          if ( *(_DWORD *)(v97 + 260) == 20 && !v180 )
                          {
                            if ( v182 )
                              v54 = 1;
                            if ( *(_QWORD *)(a1 + 208) )
                            {
                              if ( v51 > v176 )
                                v51 = v176;
                              if ( v54 > v176 )
                                v54 = v176;
                            }
                          }
                          v100 = v96 & 8;
                          if ( (v96 & 1) == 0 )
                          {
                            sub_EB4100(*(_QWORD *)a1, v100 != 0, v95, v163 - v173, v4);
                            if ( v95 != v170 && v182 )
                              *(_BYTE *)(a1 + 266) = 1;
                            v98 = *(_BYTE *)(a1 + 200) & 0x40;
                            v100 = *(_BYTE *)(a1 + 200) & 8;
                          }
                          if ( v100 )
                          {
                            if ( v98 )
                            {
                              v101 = 8;
                              if ( v180 )
                                v101 = v160;
                            }
                            else
                            {
                              v101 = 8 * (((v180 - (unsigned __int64)(v180 != 0)) >> 3) + (v180 != 0));
                            }
                            v102 = v101;
                            if ( *(_QWORD *)(a1 + 216) >= v101 )
                              v102 = *(_QWORD *)(a1 + 216);
                            *(_QWORD *)(a1 + 216) = v102;
                          }
                          else if ( v98 && v180 )
                          {
                            v141 = *(_BYTE *)(a1 + 201);
                            if ( v141 )
                            {
                              v102 = *(_QWORD *)(a1 + 216);
                            }
                            else
                            {
                              v141 = v160;
                              v102 = v95 + v160;
                              *(_QWORD *)(a1 + 216) = v95 + v160;
                            }
                            *(_BYTE *)(a1 + 202) = v160;
                            *(_BYTE *)(a1 + 201) = v141 - v180;
                          }
                          else
                          {
                            v115 = v95 + v180;
                            *(_BYTE *)(a1 + 202) = 0;
                            v116 = v115 != 0;
                            v102 = 8 * (v116 + ((v115 - v116) >> 3));
                            *(_QWORD *)(a1 + 216) = v102;
                            *(_BYTE *)(a1 + 201) = 8 * (v116 + ((v115 - v116) >> 3)) - v115;
                          }
                          if ( *(_QWORD *)(a1 + 16) >= v102 )
                            v102 = *(_QWORD *)(a1 + 16);
                          v103 = *(_QWORD *)a1;
                          *(_QWORD *)(a1 + 16) = v102;
                          v104 = sub_A742B0(v103, v54);
                          if ( *(_QWORD *)(a1 + 48) < v104 )
                            *(_QWORD *)(a1 + 48) = v104;
                          v105 = sub_A742B0(*(_QWORD *)a1, v51);
                          v106 = sub_A742B0(*(_QWORD *)a1, v54);
                          v107 = *(_BYTE *)(a1 + 200);
                          if ( (v107 & 0x10) == 0 && (v107 & 3) != 1 )
                          {
                            if ( v106 > *(_QWORD *)(a1 + 24) )
                              *(_QWORD *)(a1 + 24) = v106;
                            if ( v105 > *(_QWORD *)(a1 + 40) )
                              *(_QWORD *)(a1 + 40) = v105;
                            if ( v106 > *(_QWORD *)(a1 + 32) )
                              *(_QWORD *)(a1 + 32) = v106;
                          }
                          return;
                        }
LABEL_197:
                        v95 = v163;
                        v170 = v163;
                        goto LABEL_169;
                      }
                      if ( !v180 )
                      {
                        v88 = v163 != 0;
                        v91 = v163 - v88;
                        v95 = v54 * ((v163 - v88) / (unsigned __int64)v54 + v88);
LABEL_251:
                        v93 = v91 % v51;
                        v170 = v51 * (v88 + v91 / v51);
                        goto LABEL_169;
                      }
                      if ( v90 )
                      {
                        if ( !(_DWORD)v91 )
                          goto LABEL_197;
                      }
                      else
                      {
                        if ( v180 + (unsigned __int64)((unsigned int)v163 & (v54 - 1)) > v160 )
                        {
                          v89 = v163;
                          v88 = v163 != 0;
                          v93 = (v163 - v88) % (unsigned __int64)v54;
                          v95 = v54 * ((v163 - v88) / (unsigned __int64)v54 + v88);
                          if ( v180 + (unsigned __int64)((unsigned int)v163 & (v51 - 1)) <= v160 )
                          {
                            v170 = v163;
                            if ( !(_DWORD)v91 )
                              goto LABEL_169;
                            goto LABEL_225;
                          }
                          goto LABEL_334;
                        }
                        if ( !(_DWORD)v91 )
                        {
                          v91 = v163;
                          if ( v160 >= v180 + (unsigned __int64)((unsigned int)v163 & (v51 - 1)) )
                          {
                            v170 = v163;
                            v95 = v163;
                            goto LABEL_169;
                          }
                          v95 = v163;
LABEL_334:
                          v88 = v163 != 0;
                          v91 = v163 - v88;
                          goto LABEL_251;
                        }
                      }
                      if ( v176 < (unsigned int)v91 && v176 )
                      {
                        if ( v90 )
                          goto LABEL_197;
                        v95 = v163;
                      }
                      else
                      {
                        v88 = *(_QWORD *)a1;
                        v95 = v163;
                        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 17448LL) + 184LL) & 0x10) != 0 )
                          v95 = (unsigned int)v91
                              * ((v163 - (unsigned __int64)(v163 != 0)) / (unsigned int)v91 + (v163 != 0));
                        if ( v90 )
                          goto LABEL_228;
                      }
                      if ( v180 + (unsigned __int64)((unsigned int)v163 & (v51 - 1)) <= v160 )
                      {
LABEL_225:
                        v93 = v176;
                        if ( v176 )
                        {
                          v170 = v163;
                          if ( v176 < (unsigned int)v91 )
                            goto LABEL_169;
                        }
                        v88 = *(_QWORD *)a1;
LABEL_228:
                        v93 = v163;
                        v170 = v163;
                        if ( (*(_BYTE *)(*(_QWORD *)(v88 + 17448) + 184LL) & 0x10) != 0 )
                        {
                          v114 = v163 != 0;
                          v93 = (v163 - v114) % v91;
                          v170 = v91 * (v114 + (v163 - v114) / v91);
                        }
                        goto LABEL_169;
                      }
                      goto LABEL_334;
                    }
LABEL_157:
                    if ( v54 < v55 )
                      v54 = v55;
                    if ( v51 < v55 )
                      v51 = v55;
                    goto LABEL_161;
                  }
                  v51 = 1;
                }
                if ( v182 )
                {
                  v54 = 1;
                  if ( v180 )
                    goto LABEL_156;
                }
              }
              v54 = v51;
              goto LABEL_156;
            }
            v51 = 32;
            v160 = 32;
LABEL_298:
            v48 = *(_BYTE *)(a1 + 200);
            v50 = v48 & 0x40;
            goto LABEL_52;
          }
        }
      }
    }
    if ( v51 < v160 )
      v51 = v160;
    if ( v180 > v160 )
    {
      v52 = *(_QWORD **)a1;
      v53 = *(_QWORD *)(*(_QWORD *)a1 + 17448LL);
      if ( *(_DWORD *)(v53 + 260) != 20 )
        goto LABEL_261;
    }
    goto LABEL_298;
  }
  if ( v180 <= v47 )
    goto LABEL_52;
LABEL_261:
  v161 = v4;
  v125 = 0;
  v126 = &v191;
  v191 = (unsigned __int8 *)v52[2344];
  v192 = v52[2345];
  v193 = v52[2346];
  v194 = v52[2347];
  v195 = v52[2348];
  v196 = v52[2349];
  v127 = *(unsigned int *)(v53 + 192);
  while ( 1 )
  {
    v128 = sub_A73FE0((__int64)v52, *(_QWORD *)((unsigned __int64)*v126 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v180 < v128 || v127 < v128 )
      break;
    v125 = (__int64)*v126++;
    v52 = *(_QWORD **)a1;
    if ( &v197 == (char *)v126 )
    {
      v129 = v161;
      goto LABEL_266;
    }
  }
  v129 = v161;
  v52 = *(_QWORD **)a1;
LABEL_266:
  v130 = sub_A74360((__int64)v52, v125);
  v131 = *(_QWORD *)(a1 + 216);
  v132 = v130;
  *(_WORD *)(a1 + 201) = 0;
  if ( (*(_BYTE *)(a1 + 200) & 8) != 0 )
  {
    v133 = 8 * (((v180 - (unsigned __int64)(v180 != 0)) >> 3) + (v180 != 0));
    if ( v133 < v131 )
      v133 = v131;
    v134 = 0;
    *(_QWORD *)(a1 + 216) = v133;
  }
  else
  {
    v152 = sub_A74320(*(_QWORD *)a1, v130);
    v134 = v152
         * ((*(_QWORD *)(a1 + 216) - (unsigned __int64)(*(_QWORD *)(a1 + 216) != 0)) / v152
          + (*(_QWORD *)(a1 + 216) != 0));
    v153 = 8 * ((v134 + v180 != 0) + ((v134 + v180 - (v134 + v180 != 0)) >> 3));
    *(_QWORD *)(a1 + 216) = v153;
    *(_BYTE *)(a1 + 201) = v153 - (v134 + v180);
  }
  sub_995F50(a1 + 56, v134);
  sub_A74320(*(_QWORD *)a1, v132);
  sub_EB4100(*(_QWORD *)a1, (*(_BYTE *)(a1 + 200) & 8) != 0, v134, v131, v129);
  v135 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 216) >= v135 )
    v135 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 16) = v135;
  if ( *(_QWORD *)(a1 + 48) < v132 )
    *(_QWORD *)(a1 + 48) = v132;
  v136 = *(_BYTE *)(a1 + 200);
  if ( (v136 & 0x10) == 0 && (v136 & 3) != 1 )
  {
    if ( v132 > *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = v132;
    if ( v132 > *(_QWORD *)(a1 + 40) )
      *(_QWORD *)(a1 + 40) = v132;
    if ( v132 > *(_QWORD *)(a1 + 32) )
      *(_QWORD *)(a1 + 32) = v132;
  }
}

