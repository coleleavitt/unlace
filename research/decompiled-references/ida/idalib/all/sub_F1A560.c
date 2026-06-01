void __fastcall sub_F1A560(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int8 v7; // bl
  __int64 v8; // rsi
  void *v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ebx
  bool v30; // al
  const char *v31; // rbx
  size_t v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  _BYTE *v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // rdx
  char v43; // r13
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned int v47; // r9d
  bool v48; // cf
  bool v49; // cc
  unsigned int v50; // r14d
  unsigned int v51; // r14d
  int v52; // eax
  unsigned __int64 v53; // rax
  unsigned __int8 v54; // r13
  unsigned int v55; // r9d
  __int64 v56; // rdx
  char v57; // r14
  unsigned int v58; // r10d
  unsigned int v59; // r9d
  unsigned __int64 v60; // rdx
  unsigned int v61; // r9d
  __int64 v62; // rdx
  char v63; // r14
  __int64 v64; // rdx
  unsigned __int8 v65; // r13
  unsigned int v66; // r10d
  __int64 v67; // rdx
  unsigned int v68; // r14d
  char v69; // cl
  unsigned int v70; // edi
  unsigned int v71; // edi
  unsigned __int64 v72; // rdx
  unsigned int v73; // r9d
  __int64 v74; // rdx
  unsigned int v75; // r9d
  unsigned int v76; // edx
  void *v77; // rdi
  __int64 v78; // rdx
  unsigned int v79; // r9d
  unsigned int v80; // edi
  unsigned __int64 v81; // rdx
  unsigned __int8 v82; // r13
  __int64 v83; // rdx
  unsigned int v84; // r10d
  unsigned int v85; // r9d
  char v86; // al
  int v87; // esi
  __int64 v88; // rdi
  unsigned int v89; // eax
  unsigned __int64 v90; // rdx
  _WORD *v91; // rdx
  _BYTE *v92; // rax
  _WORD *v93; // rdx
  _BYTE *v94; // rax
  __int64 v95; // rax
  char v96; // r13
  __int64 v97; // rdx
  unsigned int v98; // r9d
  __int64 v99; // rdi
  void *v100; // rax
  __int64 v101; // rdi
  void *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rdi
  unsigned __int64 v105; // rsi
  char *v106; // rcx
  const char *v107; // rbx
  unsigned int v108; // ecx
  unsigned int v109; // ecx
  unsigned int v110; // edx
  __int64 v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rdi
  __int64 v114; // rdx
  unsigned int v115; // eax
  unsigned __int64 v116; // rdx
  unsigned int v117; // eax
  unsigned __int64 v118; // rdx
  unsigned int v119; // eax
  unsigned __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  __int64 v126; // rdi
  char v128; // [rsp+1Fh] [rbp-D9h]
  char v129; // [rsp+20h] [rbp-D8h]
  int v130; // [rsp+24h] [rbp-D4h]
  int v131; // [rsp+24h] [rbp-D4h]
  int v132; // [rsp+24h] [rbp-D4h]
  int v133; // [rsp+24h] [rbp-D4h]
  int v134; // [rsp+24h] [rbp-D4h]
  int v135; // [rsp+24h] [rbp-D4h]
  unsigned int v136; // [rsp+24h] [rbp-D4h]
  int v137; // [rsp+24h] [rbp-D4h]
  int v138; // [rsp+24h] [rbp-D4h]
  int v139; // [rsp+24h] [rbp-D4h]
  int v140; // [rsp+24h] [rbp-D4h]
  unsigned int v141; // [rsp+24h] [rbp-D4h]
  int v142; // [rsp+24h] [rbp-D4h]
  char v143; // [rsp+24h] [rbp-D4h]
  int v144; // [rsp+24h] [rbp-D4h]
  int v145; // [rsp+24h] [rbp-D4h]
  int v146; // [rsp+24h] [rbp-D4h]
  unsigned int v147; // [rsp+24h] [rbp-D4h]
  int v148; // [rsp+24h] [rbp-D4h]
  int v149; // [rsp+24h] [rbp-D4h]
  unsigned int v150; // [rsp+24h] [rbp-D4h]
  int v151; // [rsp+24h] [rbp-D4h]
  int v152; // [rsp+24h] [rbp-D4h]
  unsigned int v153; // [rsp+24h] [rbp-D4h]
  int v154; // [rsp+24h] [rbp-D4h]
  int v155; // [rsp+24h] [rbp-D4h]
  int v156; // [rsp+24h] [rbp-D4h]
  int v157; // [rsp+24h] [rbp-D4h]
  unsigned int v158; // [rsp+24h] [rbp-D4h]
  unsigned int v159; // [rsp+24h] [rbp-D4h]
  int v160; // [rsp+24h] [rbp-D4h]
  int v161; // [rsp+24h] [rbp-D4h]
  unsigned int v162; // [rsp+24h] [rbp-D4h]
  int v163; // [rsp+24h] [rbp-D4h]
  int v164; // [rsp+24h] [rbp-D4h]
  unsigned int v165; // [rsp+24h] [rbp-D4h]
  unsigned int v166; // [rsp+24h] [rbp-D4h]
  unsigned int v167; // [rsp+24h] [rbp-D4h]
  unsigned int v168; // [rsp+24h] [rbp-D4h]
  unsigned int v169; // [rsp+24h] [rbp-D4h]
  unsigned int v170; // [rsp+24h] [rbp-D4h]
  unsigned int v171; // [rsp+24h] [rbp-D4h]
  unsigned int v172; // [rsp+24h] [rbp-D4h]
  unsigned int v173; // [rsp+24h] [rbp-D4h]
  unsigned int v174; // [rsp+24h] [rbp-D4h]
  unsigned int v175; // [rsp+24h] [rbp-D4h]
  unsigned int v176; // [rsp+24h] [rbp-D4h]
  unsigned int v177; // [rsp+24h] [rbp-D4h]
  unsigned int v178; // [rsp+24h] [rbp-D4h]
  unsigned int v179; // [rsp+24h] [rbp-D4h]
  void *v180; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v181; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v182; // [rsp+3Ch] [rbp-BCh]
  void *v183; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v184; // [rsp+48h] [rbp-B0h]
  char v185; // [rsp+4Ch] [rbp-ACh]
  void *v186; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v187; // [rsp+58h] [rbp-A0h]
  char v188; // [rsp+5Ch] [rbp-9Ch]
  void *v189; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v190; // [rsp+68h] [rbp-90h]
  char v191; // [rsp+6Ch] [rbp-8Ch]
  void *v192; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v193; // [rsp+78h] [rbp-80h]
  char v194; // [rsp+7Ch] [rbp-7Ch]
  void *v195; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v196; // [rsp+88h] [rbp-70h]
  char v197; // [rsp+8Ch] [rbp-6Ch]
  void *v198; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v199; // [rsp+98h] [rbp-60h]
  char v200; // [rsp+9Ch] [rbp-5Ch]
  void *v201; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v202; // [rsp+A8h] [rbp-50h]
  __int64 v203; // [rsp+B0h] [rbp-48h] BYREF

  v7 = *(_BYTE *)(a1 + 7) >> 7;
  v8 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
  v129 = a4;
  v9 = *(void **)(a1 + 8);
  v128 = a4;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)v8 > 0x40 )
  {
    sub_2205600(&v201, v8, v9, ((unsigned __int64)(unsigned int)v8 + 63) >> 6);
    v182 = v7;
    v181 = v202;
    v180 = v201;
  }
  else
  {
    v181 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
    v180 = v9;
    v182 = v7;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_BYTE *)(v11 + 16);
  if ( (*(_BYTE *)(a3 + 5) & 0x40) == 0 || v12 != 47 )
    goto LABEL_13;
  v13 = sub_F60F10(v11, v8, v9, a4, a5);
  sub_B7E870(v13, v8, v14, v15, v16, v17);
  v22 = sub_B7E870(v13, v8, v18, v19, v20, v21);
  if ( !v22 )
    v22 = (_QWORD *)v13;
  v23 = sub_B8E970((__int64)(v22 + 8));
  v24 = v23;
  if ( !v23 )
  {
LABEL_12:
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x21 )
  {
    do
    {
      v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v25;
      if ( !v25 )
        goto LABEL_12;
    }
    while ( (*(_BYTE *)(v25 + 28) & 0x7F) != 0x21 );
  }
LABEL_54:
  v43 = *(_BYTE *)(v24 + 80);
  v8 = *(_QWORD *)(v24 + 56);
  v44 = *(unsigned int *)(v24 + 64);
  v45 = (unsigned __int64)(v44 + 63) >> 6;
  if ( v45 > 1 )
  {
    sub_2205610(&v201, (unsigned int)v44, v45, *(_QWORD *)(v24 + 56));
    LODWORD(v44) = v202;
    v8 = (__int64)v201;
  }
  else
  {
    LODWORD(v202) = *(_DWORD *)(v24 + 64);
    if ( (unsigned int)v44 > 0x40 )
    {
      sub_2205470(&v201, v8, 0);
      LODWORD(v44) = v202;
      v8 = (__int64)v201;
    }
  }
  v184 = v44;
  v183 = (void *)v8;
  v185 = v43;
  if ( v181 != (_DWORD)v44 )
  {
    if ( v181 >= (unsigned int)v44 )
    {
      if ( v181 > (unsigned int)v44 )
      {
        if ( v43 )
        {
          sub_2206CD0(&v201, &v183, v181);
          v46 = v181;
          v191 = 1;
          v47 = v202;
          v8 = (__int64)v201;
          v190 = v202;
          v189 = v201;
          v48 = v181 < (unsigned int)v202;
          v49 = v181 <= (unsigned int)v202;
          if ( v181 != (_DWORD)v202 )
            goto LABEL_62;
        }
        else
        {
          sub_2206B70(&v201, &v183, v181);
          v46 = v181;
          v191 = 0;
          v47 = v202;
          v8 = (__int64)v201;
          v190 = v202;
          v189 = v201;
          v48 = v181 < (unsigned int)v202;
          v49 = v181 <= (unsigned int)v202;
          if ( v181 != (_DWORD)v202 )
          {
LABEL_62:
            if ( !v48 )
            {
              if ( !v49 )
              {
                if ( v43 )
                {
                  sub_2206CD0(&v201, &v189, v46);
                  v50 = v202;
                  v194 = 1;
                }
                else
                {
                  sub_2206B70(&v201, &v189, v46);
                  v50 = v202;
                  v194 = 0;
                }
                v8 = (__int64)v201;
                v193 = v202;
                v192 = v201;
                if ( v181 == v50 )
                {
                  if ( v182 == v43 )
                  {
                    if ( v43 )
                      goto LABEL_350;
                    v8 = (__int64)&v180;
                    v52 = sub_2205E20(&v192, &v180);
                    goto LABEL_84;
                  }
LABEL_347:
                  if ( !v43 )
                  {
                    v99 = 1LL << ((unsigned __int8)v50 - 1);
                    if ( v50 <= 0x40 )
                    {
                      v52 = -1;
                      if ( ((unsigned __int64)v201 & v99) != 0 )
                        goto LABEL_87;
                    }
                    else
                    {
                      v52 = -1;
                      if ( (v99 & *((_QWORD *)v201 + ((v50 - 1) >> 6))) != 0 )
                      {
LABEL_85:
                        if ( v192 )
                        {
                          v132 = v52;
                          operator delete[](v192);
                          v52 = v132;
                        }
                        goto LABEL_87;
                      }
                    }
                    goto LABEL_350;
                  }
                  if ( v182 )
                    goto LABEL_350;
                  v8 = (__int64)v180;
                  if ( v181 > 0x40 )
                    v8 = *((_QWORD *)v180 + ((v181 - 1) >> 6));
                  v52 = 1;
                  if ( (v8 & (1LL << ((unsigned __int8)v181 - 1))) == 0 )
                  {
LABEL_350:
                    v8 = (__int64)&v180;
                    v52 = sub_2205DB0(&v192, &v180);
                  }
LABEL_84:
                  if ( v50 > 0x40 )
                    goto LABEL_85;
LABEL_87:
                  v47 = v190;
                  goto LABEL_177;
                }
                if ( v181 >= v50 )
                {
                  if ( v181 > v50 )
                  {
                    if ( v43 )
                    {
                      sub_2206CD0(&v201, &v192, v181);
                      v51 = v202;
                      v8 = (__int64)v201;
                      v197 = 1;
                    }
                    else
                    {
                      sub_2206B70(&v201, &v192, v181);
                      v51 = v202;
                      v8 = (__int64)v201;
                      v197 = 0;
                    }
                    v196 = v202;
                    v195 = v201;
                    if ( v181 == v51 )
                    {
                      if ( v182 == v43 )
                      {
                        if ( v43 )
                          goto LABEL_497;
                        v8 = (__int64)&v180;
                        v52 = sub_2205E20(&v195, &v180);
                        goto LABEL_80;
                      }
                    }
                    else
                    {
                      if ( v181 < v51 )
                      {
                        if ( v182 )
                        {
                          sub_2206CD0(&v201, &v180, v51);
                          v200 = 1;
                        }
                        else
                        {
                          sub_2206B70(&v201, &v180, v51);
                          v200 = 0;
                        }
                        v199 = v202;
                        v198 = v201;
                        v8 = (__int64)&v198;
                        v52 = sub_98E2D0((__int64 *)&v195, (__int64 *)&v198);
                        if ( v199 > 0x40 )
                        {
LABEL_77:
                          if ( v198 )
                          {
                            v130 = v52;
                            operator delete[](v198);
                            v52 = v130;
                          }
                        }
LABEL_79:
                        v51 = v196;
                        goto LABEL_80;
                      }
                      if ( v181 > v51 )
                      {
                        if ( v43 )
                        {
                          sub_2206CD0(&v201, &v195, v181);
                          v200 = 1;
                        }
                        else
                        {
                          sub_2206B70(&v201, &v195, v181);
                          v200 = 0;
                        }
                        v199 = v202;
                        v198 = v201;
                        v8 = (__int64)&v180;
                        v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v180);
                        if ( v199 > 0x40 )
                          goto LABEL_77;
                        goto LABEL_79;
                      }
                    }
                    if ( !v43 )
                    {
                      v121 = 1LL << ((unsigned __int8)v51 - 1);
                      if ( v51 <= 0x40 )
                      {
                        v52 = -1;
                        if ( (v8 & v121) != 0 )
                          goto LABEL_83;
                      }
                      else if ( (v121 & *(_QWORD *)(v8 + 8LL * ((v51 - 1) >> 6))) != 0 )
                      {
                        v52 = -1;
LABEL_81:
                        if ( v195 )
                        {
                          v131 = v52;
                          operator delete[](v195);
                          v52 = v131;
                        }
                        goto LABEL_83;
                      }
                      goto LABEL_497;
                    }
                    if ( v182 )
                      goto LABEL_497;
                    v8 = (__int64)v180;
                    if ( v181 > 0x40 )
                      v8 = *((_QWORD *)v180 + ((v181 - 1) >> 6));
                    v52 = 1;
                    if ( (v8 & (1LL << ((unsigned __int8)v181 - 1))) == 0 )
                    {
LABEL_497:
                      v8 = (__int64)&v180;
                      v52 = sub_2205DB0(&v195, &v180);
                    }
LABEL_80:
                    if ( v51 > 0x40 )
                      goto LABEL_81;
LABEL_83:
                    v50 = v193;
                    goto LABEL_84;
                  }
                  goto LABEL_347;
                }
                v82 = v182;
                if ( v182 )
                {
                  sub_2206CD0(&v201, &v180, v50);
                  v83 = (unsigned int)v202;
                  v8 = (__int64)v201;
                  v197 = 1;
                  v84 = v193;
                  v196 = v202;
                  v195 = v201;
                  v85 = v193;
                  if ( (_DWORD)v202 == v193 )
                  {
                    if ( v194 )
                      goto LABEL_544;
LABEL_541:
                    v125 = (unsigned __int64)v192;
                    v8 = 1LL << ((unsigned __int8)v85 - 1);
                    if ( v85 > 0x40 )
                      v125 = *((_QWORD *)v192 + ((v85 - 1) >> 6));
                    v52 = -1;
                    if ( (v125 & v8) == 0 )
                      goto LABEL_544;
LABEL_286:
                    if ( v84 <= 0x40 )
                      goto LABEL_388;
                    goto LABEL_287;
                  }
                  if ( (unsigned int)v202 >= v193 )
                  {
LABEL_279:
                    if ( (unsigned int)v83 > v85 )
                    {
                      if ( v194 )
                      {
                        sub_2206CD0(&v201, &v192, v83);
                        v200 = 1;
                      }
                      else
                      {
                        sub_2206B70(&v201, &v192, v83);
                        v200 = 0;
                      }
                      v199 = v202;
                      v198 = v201;
                      v8 = (__int64)&v195;
                      v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v195);
                      if ( v199 > 0x40 )
                      {
LABEL_283:
                        if ( v198 )
                        {
                          v154 = v52;
                          operator delete[](v198);
                          v52 = v154;
                        }
                      }
LABEL_285:
                      v84 = v196;
                      goto LABEL_286;
                    }
                    v84 = v83;
                    if ( v194 )
                    {
                      if ( !v82 )
                        goto LABEL_537;
LABEL_544:
                      v8 = (__int64)&v195;
                      v172 = v84;
                      v52 = sub_2205DB0(&v192, &v195);
                      v84 = v172;
                      goto LABEL_286;
                    }
                    goto LABEL_541;
                  }
                  sub_2206CD0(&v201, &v195, v193);
                  v200 = 1;
                  v199 = v202;
                  v198 = v201;
                }
                else
                {
                  sub_2206B70(&v201, &v180, v50);
                  v83 = (unsigned int)v202;
                  v8 = (__int64)v201;
                  v197 = 0;
                  v84 = v193;
                  v196 = v202;
                  v195 = v201;
                  v85 = v193;
                  if ( (_DWORD)v202 == v193 )
                  {
                    if ( v194 )
                    {
LABEL_537:
                      v124 = 1LL << ((unsigned __int8)v84 - 1);
                      if ( v84 <= 0x40 )
                      {
                        v52 = 1;
                        if ( (v8 & v124) != 0 )
                          goto LABEL_289;
                      }
                      else if ( (v124 & *(_QWORD *)(v8 + 8LL * ((v84 - 1) >> 6))) != 0 )
                      {
                        v52 = 1;
LABEL_287:
                        if ( v195 )
                        {
                          v155 = v52;
                          operator delete[](v195);
                          v85 = v193;
                          v52 = v155;
LABEL_289:
                          v50 = v85;
                          goto LABEL_84;
                        }
LABEL_388:
                        v85 = v193;
                        goto LABEL_289;
                      }
                      goto LABEL_544;
                    }
                    v8 = (__int64)&v195;
                    v174 = v193;
                    v52 = sub_2205E20(&v192, &v195);
                    v84 = v174;
                    goto LABEL_286;
                  }
                  if ( (unsigned int)v202 >= v193 )
                    goto LABEL_279;
                  sub_2206B70(&v201, &v195, v193);
                  v200 = 0;
                  v199 = v202;
                  v198 = v201;
                }
                v8 = (__int64)&v198;
                v52 = sub_98E2D0((__int64 *)&v192, (__int64 *)&v198);
                if ( v199 > 0x40 )
                  goto LABEL_283;
                goto LABEL_285;
              }
              goto LABEL_173;
            }
            v65 = v182;
            if ( v182 )
            {
              sub_2206CD0(&v201, &v180, v47);
              v66 = v190;
              v194 = 1;
              v67 = (unsigned int)v202;
              v8 = (__int64)v201;
              v193 = v202;
              v192 = v201;
              if ( (_DWORD)v202 == v190 )
              {
                v89 = v190;
                if ( v191 )
                  goto LABEL_321;
                goto LABEL_318;
              }
              if ( (unsigned int)v202 >= v190 )
                goto LABEL_184;
              sub_2206CD0(&v201, &v192, v190);
              v78 = (unsigned int)v202;
              v8 = (__int64)v201;
              v197 = 1;
              v79 = v190;
              v196 = v202;
              v195 = v201;
              if ( (_DWORD)v202 == v190 )
              {
                v117 = v190;
                if ( !v191 )
                  goto LABEL_468;
                goto LABEL_471;
              }
              if ( (unsigned int)v202 >= v190 )
                goto LABEL_305;
              sub_2206CD0(&v201, &v195, v190);
              v200 = 1;
              v199 = v202;
              v198 = v201;
            }
            else
            {
              sub_2206B70(&v201, &v180, v47);
              v66 = v190;
              v194 = 0;
              v67 = (unsigned int)v202;
              v8 = (__int64)v201;
              v193 = v202;
              v192 = v201;
              if ( (_DWORD)v202 == v190 )
              {
                v47 = v190;
                if ( !v191 )
                {
                  v8 = (__int64)&v192;
                  v171 = v190;
                  v52 = sub_2205E20(&v189, &v192);
                  v66 = v171;
                  goto LABEL_199;
                }
                goto LABEL_371;
              }
              if ( (unsigned int)v202 >= v190 )
              {
LABEL_184:
                if ( (unsigned int)v67 > v66 )
                {
                  v143 = v191;
                  if ( v191 )
                  {
                    sub_2206CD0(&v201, &v189, v67);
                    v68 = v202;
                    v69 = v143;
                    v197 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v201, &v189, v67);
                    v68 = v202;
                    v69 = 0;
                    v197 = 0;
                  }
                  v8 = (__int64)v201;
                  v196 = v202;
                  v195 = v201;
                  v66 = v193;
                  if ( v193 == v68 )
                  {
                    if ( v194 == v69 )
                    {
                      if ( v69 )
                        goto LABEL_427;
                      v8 = (__int64)&v192;
                      v52 = sub_2205E20(&v195, &v192);
                      goto LABEL_196;
                    }
                  }
                  else
                  {
                    if ( v193 < v68 )
                    {
                      if ( v194 )
                      {
                        sub_2206CD0(&v201, &v192, v68);
                        v200 = 1;
                      }
                      else
                      {
                        sub_2206B70(&v201, &v192, v68);
                        v200 = 0;
                      }
                      v199 = v202;
                      v198 = v201;
                      v8 = (__int64)&v198;
                      v52 = sub_98E2D0((__int64 *)&v195, (__int64 *)&v198);
                      if ( v199 > 0x40 )
                      {
LABEL_193:
                        if ( v198 )
                        {
                          v144 = v52;
                          operator delete[](v198);
                          v52 = v144;
                        }
                      }
LABEL_195:
                      v68 = v196;
                      goto LABEL_196;
                    }
                    if ( v193 > v68 )
                    {
                      if ( v69 )
                      {
                        sub_2206CD0(&v201, &v195, v193);
                        v200 = 1;
                      }
                      else
                      {
                        sub_2206B70(&v201, &v195, v193);
                        v200 = 0;
                      }
                      v199 = v202;
                      v198 = v201;
                      v8 = (__int64)&v192;
                      v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v192);
                      if ( v199 > 0x40 )
                        goto LABEL_193;
                      goto LABEL_195;
                    }
                  }
                  if ( !v69 )
                  {
                    v113 = 1LL << ((unsigned __int8)v68 - 1);
                    if ( v68 > 0x40 )
                    {
                      v52 = -1;
                      if ( (v113 & *((_QWORD *)v201 + ((v68 - 1) >> 6))) != 0 )
                      {
LABEL_197:
                        if ( v195 )
                        {
                          v145 = v52;
                          operator delete[](v195);
                          v66 = v193;
                          v52 = v145;
                          goto LABEL_199;
                        }
                        goto LABEL_315;
                      }
                      goto LABEL_427;
                    }
                    v52 = -1;
                    if ( ((unsigned __int64)v201 & v113) == 0 )
                    {
LABEL_427:
                      v8 = (__int64)&v192;
                      v52 = sub_2205DB0(&v195, &v192);
                      goto LABEL_196;
                    }
LABEL_199:
                    if ( v66 <= 0x40 )
                      goto LABEL_87;
                    goto LABEL_200;
                  }
                  if ( v194 )
                    goto LABEL_427;
                  v8 = (__int64)v192;
                  if ( v193 > 0x40 )
                    v8 = *((_QWORD *)v192 + ((v193 - 1) >> 6));
                  v52 = 1;
                  if ( (v8 & (1LL << ((unsigned __int8)v193 - 1))) == 0 )
                    goto LABEL_427;
LABEL_196:
                  if ( v68 > 0x40 )
                    goto LABEL_197;
LABEL_315:
                  v66 = v193;
                  goto LABEL_199;
                }
                if ( !v191 )
                {
                  v89 = v66;
                  v66 = v67;
LABEL_318:
                  v90 = (unsigned __int64)v189;
                  v8 = 1LL << ((unsigned __int8)v89 - 1);
                  if ( v89 > 0x40 )
                    v90 = *((_QWORD *)v189 + ((v89 - 1) >> 6));
                  v52 = -1;
                  if ( (v90 & v8) != 0 )
                    goto LABEL_199;
LABEL_321:
                  v8 = (__int64)&v192;
                  v158 = v66;
                  v52 = sub_2205DB0(&v189, &v192);
                  v66 = v158;
                  goto LABEL_199;
                }
                if ( v65 )
                {
                  v66 = v67;
                  goto LABEL_321;
                }
                v47 = v66;
                v66 = v67;
LABEL_371:
                v103 = 1LL << ((unsigned __int8)v66 - 1);
                if ( v66 <= 0x40 )
                {
                  v52 = 1;
                  if ( (v8 & v103) != 0 )
                    goto LABEL_177;
                }
                else if ( (v103 & *(_QWORD *)(v8 + 8LL * ((v66 - 1) >> 6))) != 0 )
                {
                  v52 = 1;
LABEL_200:
                  if ( !v192 )
                    goto LABEL_87;
                  v146 = v52;
                  operator delete[](v192);
                  v47 = v190;
                  v52 = v146;
                  goto LABEL_177;
                }
                goto LABEL_321;
              }
              sub_2206B70(&v201, &v192, v190);
              v78 = (unsigned int)v202;
              v8 = (__int64)v201;
              v197 = 0;
              v79 = v190;
              v196 = v202;
              v195 = v201;
              if ( (_DWORD)v202 == v190 )
              {
                if ( !v191 )
                {
                  v8 = (__int64)&v195;
                  v176 = v190;
                  v52 = sub_2205E20(&v189, &v195);
                  v79 = v176;
                  goto LABEL_312;
                }
                goto LABEL_499;
              }
              if ( (unsigned int)v202 >= v190 )
              {
LABEL_305:
                if ( (unsigned int)v78 > v79 )
                {
                  if ( v191 )
                  {
                    sub_2206CD0(&v201, &v189, v78);
                    v200 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v201, &v189, v78);
                    v200 = 0;
                  }
                  v199 = v202;
                  v198 = v201;
                  v8 = (__int64)&v195;
                  v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v195);
                  if ( v199 > 0x40 )
                  {
LABEL_309:
                    if ( v198 )
                    {
                      v156 = v52;
                      operator delete[](v198);
                      v52 = v156;
                    }
                  }
LABEL_311:
                  v79 = v196;
                  goto LABEL_312;
                }
                if ( !v191 )
                {
                  v117 = v79;
                  v79 = v78;
LABEL_468:
                  v118 = (unsigned __int64)v189;
                  v8 = 1LL << ((unsigned __int8)v117 - 1);
                  if ( v117 > 0x40 )
                    v118 = *((_QWORD *)v189 + ((v117 - 1) >> 6));
                  v52 = -1;
                  if ( (v118 & v8) == 0 )
                    goto LABEL_471;
LABEL_312:
                  if ( v79 <= 0x40 )
                    goto LABEL_315;
LABEL_313:
                  if ( v195 )
                  {
                    v157 = v52;
                    operator delete[](v195);
                    v52 = v157;
                  }
                  goto LABEL_315;
                }
                v79 = v78;
                if ( v65 )
                {
LABEL_471:
                  v8 = (__int64)&v195;
                  v168 = v79;
                  v52 = sub_2205DB0(&v189, &v195);
                  v79 = v168;
                  goto LABEL_312;
                }
LABEL_499:
                v123 = 1LL << ((unsigned __int8)v79 - 1);
                if ( v79 <= 0x40 )
                {
                  v52 = 1;
                  if ( (v8 & v123) != 0 )
                    goto LABEL_315;
                }
                else
                {
                  v52 = 1;
                  if ( (v123 & *(_QWORD *)(v8 + 8LL * ((v79 - 1) >> 6))) != 0 )
                    goto LABEL_313;
                }
                goto LABEL_471;
              }
              sub_2206B70(&v201, &v195, v190);
              v200 = 0;
              v199 = v202;
              v198 = v201;
            }
            v8 = (__int64)&v198;
            v52 = sub_98E2D0((__int64 *)&v189, (__int64 *)&v198);
            if ( v199 > 0x40 )
              goto LABEL_309;
            goto LABEL_311;
          }
        }
        if ( v182 == v43 )
        {
          if ( v43 )
            goto LABEL_176;
          v8 = (__int64)&v180;
          v150 = v47;
          v52 = sub_2205E20(&v189, &v180);
          v47 = v150;
          goto LABEL_177;
        }
LABEL_173:
        if ( !v43 )
        {
          if ( v47 > 0x40 )
          {
            if ( ((1LL << ((unsigned __int8)v47 - 1)) & *(_QWORD *)(v8 + 8LL * ((v47 - 1) >> 6))) != 0 )
            {
              v52 = -1;
LABEL_178:
              if ( v189 )
              {
                v142 = v52;
                operator delete[](v189);
                v52 = v142;
              }
              goto LABEL_180;
            }
            goto LABEL_176;
          }
          if ( (v8 & (1LL << ((unsigned __int8)v47 - 1))) != 0 )
          {
            if ( v184 <= 0x40 )
              goto LABEL_94;
            goto LABEL_91;
          }
LABEL_176:
          v8 = (__int64)&v180;
          v141 = v47;
          v52 = sub_2205DB0(&v189, &v180);
          v47 = v141;
          goto LABEL_177;
        }
        if ( v182 )
          goto LABEL_176;
        v8 = (__int64)v180;
        if ( (unsigned int)v46 > 0x40 )
          v8 = *((_QWORD *)v180 + ((unsigned int)(v46 - 1) >> 6));
        v52 = 1;
        if ( (v8 & (1LL << ((unsigned __int8)v46 - 1))) == 0 )
          goto LABEL_176;
LABEL_177:
        if ( v47 > 0x40 )
          goto LABEL_178;
LABEL_180:
        LODWORD(v44) = v184;
        goto LABEL_98;
      }
      goto LABEL_88;
    }
    v54 = v182;
    if ( v182 )
    {
      sub_2206CD0(&v201, &v180, (unsigned int)v44);
      v55 = v184;
      v188 = 1;
      v56 = (unsigned int)v202;
      v8 = (__int64)v201;
      v187 = v202;
      v186 = v201;
      if ( (_DWORD)v202 == v184 )
      {
        v71 = v184;
        if ( v185 )
          goto LABEL_211;
        goto LABEL_208;
      }
      if ( (unsigned int)v202 >= v184 )
        goto LABEL_111;
      sub_2206CD0(&v201, &v186, v184);
      v61 = v184;
      v191 = 1;
      v62 = (unsigned int)v202;
      v8 = (__int64)v201;
      v190 = v202;
      v189 = v201;
      if ( (_DWORD)v202 == v184 )
      {
        v80 = v184;
        if ( v185 )
          goto LABEL_275;
        goto LABEL_272;
      }
      if ( (unsigned int)v202 < v184 )
      {
        sub_2206CD0(&v201, &v189, v184);
        v73 = v184;
        v194 = 1;
        v74 = (unsigned int)v202;
        v8 = (__int64)v201;
        v193 = v202;
        v192 = v201;
        if ( (_DWORD)v202 == v184 )
        {
          v115 = v184;
          if ( !v185 )
            goto LABEL_433;
          goto LABEL_436;
        }
        if ( (unsigned int)v202 < v184 )
        {
          sub_2206CD0(&v201, &v192, v184);
          v75 = v202;
          v8 = (__int64)v201;
          v197 = 1;
          v76 = v184;
          v196 = v202;
          v195 = v201;
          if ( (_DWORD)v202 == v184 )
          {
            v75 = v184;
            if ( v185 )
            {
              v8 = (__int64)&v195;
              v178 = v184;
              v52 = sub_2205DB0(&v183, &v195);
              v75 = v178;
              goto LABEL_228;
            }
            goto LABEL_572;
          }
          if ( (unsigned int)v202 >= v184 )
          {
LABEL_221:
            if ( v75 > v76 )
            {
              if ( v185 )
              {
                sub_2206CD0(&v201, &v183, v75);
                v200 = 1;
              }
              else
              {
                sub_2206B70(&v201, &v183, v75);
                v200 = 0;
              }
              v199 = v202;
              v198 = v201;
              v8 = (__int64)&v195;
              v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v195);
              if ( v199 > 0x40 )
              {
LABEL_225:
                if ( v198 )
                {
                  v149 = v52;
                  operator delete[](v198);
                  v52 = v149;
                }
              }
LABEL_227:
              v75 = v196;
              goto LABEL_228;
            }
            if ( v185 )
            {
              if ( v54 )
              {
LABEL_561:
                v8 = (__int64)&v195;
                v173 = v75;
                v52 = sub_2205DB0(&v183, &v195);
                v75 = v173;
                goto LABEL_228;
              }
LABEL_559:
              v126 = 1LL << ((unsigned __int8)v75 - 1);
              if ( v75 <= 0x40 )
              {
                v52 = 1;
                if ( (v8 & v126) != 0 )
                  goto LABEL_265;
              }
              else
              {
                v52 = 1;
                if ( (v126 & *(_QWORD *)(v8 + 8LL * ((v75 - 1) >> 6))) != 0 )
                {
LABEL_229:
                  v77 = v195;
                  if ( !v195 )
                    goto LABEL_265;
                  goto LABEL_264;
                }
              }
              goto LABEL_561;
            }
LABEL_572:
            v8 = (__int64)v183;
            if ( v76 > 0x40 )
              v8 = *((_QWORD *)v183 + ((v76 - 1) >> 6));
            v52 = -1;
            if ( (v8 & (1LL << ((unsigned __int8)v76 - 1))) == 0 )
              goto LABEL_561;
            goto LABEL_228;
          }
          sub_2206CD0(&v201, &v195, v184);
          v200 = 1;
          v199 = v202;
          v198 = v201;
LABEL_442:
          v8 = (__int64)&v198;
          v52 = sub_98E2D0((__int64 *)&v183, (__int64 *)&v198);
          if ( v199 > 0x40 )
            goto LABEL_225;
          goto LABEL_227;
        }
LABEL_259:
        if ( (unsigned int)v74 > v73 )
        {
          if ( v185 )
          {
            sub_2206CD0(&v201, &v183, v74);
            v200 = 1;
          }
          else
          {
            sub_2206B70(&v201, &v183, v74);
            v200 = 0;
          }
          v199 = v202;
          v198 = v201;
          v8 = (__int64)&v192;
          v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v192);
          if ( v199 <= 0x40 )
            goto LABEL_265;
          v77 = v198;
          if ( !v198 )
            goto LABEL_265;
LABEL_264:
          v151 = v52;
          operator delete[](v77);
          v52 = v151;
          goto LABEL_265;
        }
        if ( !v185 )
        {
          v115 = v73;
          v73 = v74;
LABEL_433:
          v116 = (unsigned __int64)v183;
          v8 = 1LL << ((unsigned __int8)v115 - 1);
          if ( v115 > 0x40 )
            v116 = *((_QWORD *)v183 + ((v115 - 1) >> 6));
          v52 = -1;
          if ( (v116 & v8) == 0 )
            goto LABEL_436;
LABEL_266:
          if ( v73 > 0x40 )
            goto LABEL_267;
LABEL_269:
          v61 = v190;
          goto LABEL_167;
        }
        v73 = v74;
        if ( !v54 )
        {
LABEL_429:
          v114 = 1LL << ((unsigned __int8)v73 - 1);
          if ( v73 <= 0x40 )
          {
            v52 = 1;
            if ( (v8 & v114) != 0 )
              goto LABEL_269;
          }
          else if ( (v114 & *(_QWORD *)(v8 + 8LL * ((v73 - 1) >> 6))) != 0 )
          {
            v52 = 1;
LABEL_267:
            if ( v192 )
            {
              v152 = v52;
              operator delete[](v192);
              v52 = v152;
            }
            goto LABEL_269;
          }
        }
LABEL_436:
        v8 = (__int64)&v192;
        v166 = v73;
        v52 = sub_2205DB0(&v183, &v192);
        v73 = v166;
        goto LABEL_266;
      }
    }
    else
    {
      sub_2206B70(&v201, &v180, (unsigned int)v44);
      v55 = v184;
      v188 = 0;
      v56 = (unsigned int)v202;
      v8 = (__int64)v201;
      v187 = v202;
      v186 = v201;
      if ( (_DWORD)v202 == v184 )
      {
        v70 = v184;
        if ( !v185 )
        {
          v8 = (__int64)&v186;
          v162 = v184;
          v52 = sub_2205E20(&v183, &v186);
          v55 = v162;
          goto LABEL_212;
        }
        goto LABEL_203;
      }
      if ( (unsigned int)v202 >= v184 )
      {
LABEL_111:
        v57 = v185;
        if ( (unsigned int)v56 > v55 )
        {
          if ( v185 )
          {
            sub_2206CD0(&v201, &v183, v56);
            v58 = v202;
            v194 = 1;
          }
          else
          {
            sub_2206B70(&v201, &v183, v56);
            v58 = v202;
            v194 = 0;
          }
          v193 = v202;
          v192 = v201;
          v55 = v187;
          if ( v187 == v58 )
          {
            if ( v188 == v57 )
            {
              if ( !v57 )
              {
                v8 = (__int64)&v186;
                v159 = v58;
                v52 = sub_2205E20(&v192, &v186);
                v58 = v159;
                goto LABEL_139;
              }
              goto LABEL_138;
            }
            goto LABEL_133;
          }
          if ( v187 >= v58 )
          {
            if ( v187 > v58 )
            {
              if ( v57 )
              {
                sub_2206CD0(&v201, &v192, v187);
                v59 = v202;
                v8 = (__int64)v201;
                v197 = 1;
              }
              else
              {
                sub_2206B70(&v201, &v192, v187);
                v59 = v202;
                v8 = (__int64)v201;
                v197 = 0;
              }
              v196 = v202;
              v195 = v201;
              if ( v187 == v59 )
              {
                if ( v188 == v57 )
                {
                  if ( v57 )
                    goto LABEL_420;
                  v8 = (__int64)&v186;
                  v167 = v59;
                  v52 = sub_2205E20(&v195, &v186);
                  v59 = v167;
                  goto LABEL_128;
                }
              }
              else
              {
                if ( v187 < v59 )
                {
                  if ( v188 )
                  {
                    sub_2206CD0(&v201, &v186, v59);
                    v200 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v201, &v186, v59);
                    v200 = 0;
                  }
                  v199 = v202;
                  v198 = v201;
                  v8 = (__int64)&v198;
                  v52 = sub_98E2D0((__int64 *)&v195, (__int64 *)&v198);
                  if ( v199 > 0x40 )
                  {
LABEL_125:
                    if ( v198 )
                    {
                      v134 = v52;
                      operator delete[](v198);
                      v52 = v134;
                    }
                  }
LABEL_127:
                  v59 = v196;
                  goto LABEL_128;
                }
                if ( v187 > v59 )
                {
                  if ( v57 )
                  {
                    sub_2206CD0(&v201, &v195, v187);
                    v200 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v201, &v195, v187);
                    v200 = 0;
                  }
                  v199 = v202;
                  v198 = v201;
                  v8 = (__int64)&v186;
                  v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v186);
                  if ( v199 > 0x40 )
                    goto LABEL_125;
                  goto LABEL_127;
                }
              }
              if ( !v57 )
              {
                v112 = 1LL << ((unsigned __int8)v59 - 1);
                if ( v59 <= 0x40 )
                {
                  v52 = -1;
                  if ( (v8 & v112) != 0 )
                    goto LABEL_131;
                }
                else
                {
                  v52 = -1;
                  if ( (v112 & *(_QWORD *)(v8 + 8LL * ((v59 - 1) >> 6))) != 0 )
                  {
LABEL_129:
                    if ( v195 )
                    {
                      v135 = v52;
                      operator delete[](v195);
                      v52 = v135;
                    }
                    goto LABEL_131;
                  }
                }
                goto LABEL_420;
              }
              if ( v188 )
                goto LABEL_420;
              v8 = (__int64)v186;
              if ( v187 > 0x40 )
                v8 = *((_QWORD *)v186 + ((v187 - 1) >> 6));
              v52 = 1;
              if ( (v8 & (1LL << ((unsigned __int8)v187 - 1))) == 0 )
              {
LABEL_420:
                v8 = (__int64)&v186;
                v165 = v59;
                v52 = sub_2205DB0(&v195, &v186);
                v59 = v165;
              }
LABEL_128:
              if ( v59 > 0x40 )
                goto LABEL_129;
LABEL_131:
              v58 = v193;
              goto LABEL_139;
            }
LABEL_133:
            if ( v57 )
            {
              if ( v188 )
                goto LABEL_138;
              v60 = (unsigned __int64)v186;
              v8 = 1LL << ((unsigned __int8)v187 - 1);
              if ( v187 > 0x40 )
                v60 = *((_QWORD *)v186 + ((v187 - 1) >> 6));
              v52 = 1;
              if ( (v60 & v8) == 0 )
                goto LABEL_138;
LABEL_139:
              if ( v58 > 0x40 )
                goto LABEL_140;
LABEL_170:
              v55 = v187;
              goto LABEL_212;
            }
            v8 = 1LL << ((unsigned __int8)v58 - 1);
            if ( v58 > 0x40 )
            {
              if ( (v8 & *((_QWORD *)v201 + ((v58 - 1) >> 6))) != 0 )
              {
                v52 = -1;
LABEL_140:
                if ( v192 )
                {
                  v137 = v52;
                  operator delete[](v192);
                  v55 = v187;
                  v52 = v137;
                  goto LABEL_212;
                }
                goto LABEL_170;
              }
              goto LABEL_138;
            }
            v52 = -1;
            if ( ((unsigned __int64)v201 & v8) == 0 )
            {
LABEL_138:
              v8 = (__int64)&v186;
              v136 = v58;
              v52 = sub_2205DB0(&v192, &v186);
              v58 = v136;
              goto LABEL_139;
            }
LABEL_212:
            if ( v55 <= 0x40 )
              goto LABEL_180;
LABEL_213:
            if ( v186 )
            {
              v148 = v52;
              operator delete[](v186);
              LODWORD(v44) = v184;
              v52 = v148;
              goto LABEL_98;
            }
            goto LABEL_180;
          }
          v96 = v188;
          if ( v188 )
          {
            sub_2206CD0(&v201, &v186, v58);
            v97 = (unsigned int)v202;
            v8 = (__int64)v201;
            v197 = 1;
            v98 = v193;
            v196 = v202;
            v195 = v201;
            if ( (_DWORD)v202 == v193 )
            {
              v119 = v193;
              if ( !v194 )
                goto LABEL_475;
              goto LABEL_478;
            }
            if ( (unsigned int)v202 >= v193 )
            {
LABEL_337:
              if ( (unsigned int)v97 > v98 )
              {
                if ( v194 )
                {
                  sub_2206CD0(&v201, &v192, v97);
                  v200 = 1;
                }
                else
                {
                  sub_2206B70(&v201, &v192, v97);
                  v200 = 0;
                }
                v199 = v202;
                v198 = v201;
                v8 = (__int64)&v195;
                v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v195);
                if ( v199 > 0x40 )
                {
LABEL_341:
                  if ( v198 )
                  {
                    v160 = v52;
                    operator delete[](v198);
                    v52 = v160;
                  }
                }
LABEL_343:
                v98 = v196;
                goto LABEL_344;
              }
              if ( !v194 )
              {
                v119 = v98;
                v98 = v97;
LABEL_475:
                v120 = (unsigned __int64)v192;
                v8 = 1LL << ((unsigned __int8)v119 - 1);
                if ( v119 > 0x40 )
                  v120 = *((_QWORD *)v192 + ((v119 - 1) >> 6));
                v52 = -1;
                if ( (v120 & v8) == 0 )
                  goto LABEL_478;
LABEL_344:
                if ( v98 <= 0x40 )
                  goto LABEL_131;
                goto LABEL_345;
              }
              if ( !v96 )
              {
                v58 = v98;
                v98 = v97;
                goto LABEL_489;
              }
              v98 = v97;
LABEL_478:
              v8 = (__int64)&v195;
              v169 = v98;
              v52 = sub_2205DB0(&v192, &v195);
              v98 = v169;
              goto LABEL_344;
            }
            sub_2206CD0(&v201, &v195, v193);
            v200 = 1;
            v199 = v202;
            v198 = v201;
          }
          else
          {
            sub_2206B70(&v201, &v186, v58);
            v97 = (unsigned int)v202;
            v8 = (__int64)v201;
            v197 = 0;
            v98 = v193;
            v196 = v202;
            v195 = v201;
            if ( (_DWORD)v202 == v193 )
            {
              v58 = v193;
              if ( !v194 )
              {
                v8 = (__int64)&v195;
                v177 = v193;
                v52 = sub_2205E20(&v192, &v195);
                v98 = v177;
                goto LABEL_344;
              }
LABEL_489:
              v122 = 1LL << ((unsigned __int8)v98 - 1);
              if ( v98 <= 0x40 )
              {
                v52 = 1;
                if ( (v8 & v122) != 0 )
                  goto LABEL_139;
              }
              else
              {
                v52 = 1;
                if ( (v122 & *(_QWORD *)(v8 + 8LL * ((v98 - 1) >> 6))) != 0 )
                {
LABEL_345:
                  if ( !v195 )
                    goto LABEL_131;
                  v161 = v52;
                  operator delete[](v195);
                  v58 = v193;
                  v52 = v161;
                  goto LABEL_139;
                }
              }
              goto LABEL_478;
            }
            if ( (unsigned int)v202 >= v193 )
              goto LABEL_337;
            sub_2206B70(&v201, &v195, v193);
            v200 = 0;
            v199 = v202;
            v198 = v201;
          }
          v8 = (__int64)&v198;
          v52 = sub_98E2D0((__int64 *)&v192, (__int64 *)&v198);
          if ( v199 > 0x40 )
            goto LABEL_341;
          goto LABEL_343;
        }
        if ( !v185 )
        {
          v71 = v55;
          v55 = v56;
LABEL_208:
          v72 = (unsigned __int64)v183;
          v8 = 1LL << ((unsigned __int8)v71 - 1);
          if ( v71 > 0x40 )
            v72 = *((_QWORD *)v183 + ((v71 - 1) >> 6));
          v52 = -1;
          if ( (v72 & v8) != 0 )
            goto LABEL_212;
LABEL_211:
          v8 = (__int64)&v186;
          v147 = v55;
          v52 = sub_2205DB0(&v183, &v186);
          v55 = v147;
          goto LABEL_212;
        }
        if ( v54 )
        {
          v55 = v56;
          goto LABEL_211;
        }
        v70 = v55;
        v55 = v56;
LABEL_203:
        if ( v55 > 0x40 )
        {
          v52 = 1;
          if ( ((1LL << ((unsigned __int8)v55 - 1)) & *(_QWORD *)(v8 + 8LL * ((v55 - 1) >> 6))) != 0 )
            goto LABEL_213;
        }
        else if ( (v8 & (1LL << ((unsigned __int8)v55 - 1))) != 0 )
        {
          if ( v70 <= 0x40 )
            goto LABEL_94;
          goto LABEL_91;
        }
        goto LABEL_211;
      }
      sub_2206B70(&v201, &v186, v184);
      v61 = v184;
      v191 = 0;
      v62 = (unsigned int)v202;
      v8 = (__int64)v201;
      v190 = v202;
      v189 = v201;
      if ( (_DWORD)v202 == v184 )
      {
        if ( !v185 )
        {
          v8 = (__int64)&v189;
          v170 = v184;
          v52 = sub_2205E20(&v183, &v189);
          v61 = v170;
          goto LABEL_167;
        }
        goto LABEL_356;
      }
      if ( (unsigned int)v202 < v184 )
      {
        sub_2206B70(&v201, &v189, v184);
        v73 = v184;
        v194 = 0;
        v74 = (unsigned int)v202;
        v8 = (__int64)v201;
        v193 = v202;
        v192 = v201;
        if ( (_DWORD)v202 == v184 )
        {
          if ( !v185 )
          {
            v8 = (__int64)&v192;
            v175 = v184;
            v52 = sub_2205E20(&v183, &v192);
            v73 = v175;
            goto LABEL_266;
          }
          goto LABEL_429;
        }
        if ( (unsigned int)v202 < v184 )
        {
          sub_2206B70(&v201, &v192, v184);
          v75 = v202;
          v8 = (__int64)v201;
          v197 = 0;
          v76 = v184;
          v196 = v202;
          v195 = v201;
          if ( (_DWORD)v202 == v184 )
          {
            v75 = v184;
            if ( v185 )
              goto LABEL_559;
            v8 = (__int64)&v195;
            v179 = v184;
            v52 = sub_2205E20(&v183, &v195);
            v75 = v179;
LABEL_228:
            if ( v75 <= 0x40 )
            {
LABEL_265:
              v73 = v193;
              goto LABEL_266;
            }
            goto LABEL_229;
          }
          if ( (unsigned int)v202 >= v184 )
            goto LABEL_221;
          sub_2206B70(&v201, &v195, v184);
          v200 = 0;
          v199 = v202;
          v198 = v201;
          goto LABEL_442;
        }
        goto LABEL_259;
      }
    }
    v63 = v185;
    if ( (unsigned int)v62 > v61 )
    {
      if ( v185 )
      {
        sub_2206CD0(&v201, &v183, v62);
        v64 = (unsigned int)v202;
        v8 = (__int64)v201;
        v197 = 1;
      }
      else
      {
        sub_2206B70(&v201, &v183, v62);
        v64 = (unsigned int)v202;
        v8 = (__int64)v201;
        v197 = 0;
      }
      v196 = v202;
      v195 = v201;
      v61 = v190;
      if ( v190 == (_DWORD)v64 )
      {
        if ( v191 == v63 )
        {
          if ( v63 )
            goto LABEL_392;
          v8 = (__int64)&v189;
          v164 = v64;
          v52 = sub_2205E20(&v195, &v189);
          LODWORD(v64) = v164;
          goto LABEL_164;
        }
      }
      else
      {
        if ( v190 < (unsigned int)v64 )
        {
          if ( v191 )
          {
            sub_2206CD0(&v201, &v189, v64);
            v200 = 1;
          }
          else
          {
            sub_2206B70(&v201, &v189, v64);
            v200 = 0;
          }
          v199 = v202;
          v198 = v201;
          v8 = (__int64)&v198;
          v52 = sub_98E2D0((__int64 *)&v195, (__int64 *)&v198);
          if ( v199 > 0x40 )
          {
LABEL_161:
            if ( v198 )
            {
              v138 = v52;
              operator delete[](v198);
              v52 = v138;
            }
          }
LABEL_163:
          LODWORD(v64) = v196;
          goto LABEL_164;
        }
        if ( v190 > (unsigned int)v64 )
        {
          if ( v63 )
          {
            sub_2206CD0(&v201, &v195, v190);
            v200 = 1;
          }
          else
          {
            sub_2206B70(&v201, &v195, v190);
            v200 = 0;
          }
          v199 = v202;
          v198 = v201;
          v8 = (__int64)&v189;
          v52 = sub_98E2D0((__int64 *)&v198, (__int64 *)&v189);
          if ( v199 > 0x40 )
            goto LABEL_161;
          goto LABEL_163;
        }
      }
      if ( !v63 )
      {
        v104 = 1LL << ((unsigned __int8)v64 - 1);
        if ( (unsigned int)v64 > 0x40 )
        {
          v52 = -1;
          if ( (v104 & *(_QWORD *)(v8 + 8LL * ((unsigned int)(v64 - 1) >> 6))) != 0 )
            goto LABEL_165;
          goto LABEL_392;
        }
        v52 = -1;
        if ( (v8 & v104) == 0 )
        {
LABEL_392:
          v8 = (__int64)&v189;
          v163 = v64;
          v52 = sub_2205DB0(&v195, &v189);
          LODWORD(v64) = v163;
          goto LABEL_164;
        }
LABEL_167:
        if ( v61 <= 0x40 )
          goto LABEL_170;
LABEL_168:
        if ( v189 )
        {
          v140 = v52;
          operator delete[](v189);
          v52 = v140;
        }
        goto LABEL_170;
      }
      if ( v191 )
        goto LABEL_392;
      v8 = (__int64)v189;
      if ( v190 > 0x40 )
        v8 = *((_QWORD *)v189 + ((v190 - 1) >> 6));
      v52 = 1;
      if ( (v8 & (1LL << ((unsigned __int8)v190 - 1))) == 0 )
        goto LABEL_392;
LABEL_164:
      if ( (unsigned int)v64 <= 0x40 )
        goto LABEL_269;
LABEL_165:
      if ( v195 )
      {
        v139 = v52;
        operator delete[](v195);
        v61 = v190;
        v52 = v139;
        goto LABEL_167;
      }
      goto LABEL_269;
    }
    if ( !v185 )
    {
      v80 = v61;
      v61 = v62;
LABEL_272:
      v81 = (unsigned __int64)v183;
      v8 = 1LL << ((unsigned __int8)v80 - 1);
      if ( v80 > 0x40 )
        v81 = *((_QWORD *)v183 + ((v80 - 1) >> 6));
      v52 = -1;
      if ( (v81 & v8) != 0 )
        goto LABEL_167;
LABEL_275:
      v8 = (__int64)&v189;
      v153 = v61;
      v52 = sub_2205DB0(&v183, &v189);
      v61 = v153;
      goto LABEL_167;
    }
    v61 = v62;
    if ( v54 )
      goto LABEL_275;
LABEL_356:
    v101 = 1LL << ((unsigned __int8)v61 - 1);
    if ( v61 <= 0x40 )
    {
      v52 = 1;
      if ( (v8 & v101) != 0 )
        goto LABEL_170;
    }
    else
    {
      v52 = 1;
      if ( (v101 & *(_QWORD *)(v8 + 8LL * ((v61 - 1) >> 6))) != 0 )
        goto LABEL_168;
    }
    goto LABEL_275;
  }
  if ( v43 != v182 )
  {
LABEL_88:
    if ( v43 )
    {
      if ( !v182 )
      {
        v8 = (__int64)v180;
        if ( v181 > 0x40 )
          v8 = *((_QWORD *)v180 + ((v181 - 1) >> 6));
        if ( (v8 & (1LL << ((unsigned __int8)v181 - 1))) != 0 )
        {
          if ( (unsigned int)v44 <= 0x40 )
            goto LABEL_94;
LABEL_91:
          if ( v183 )
            operator delete[](v183);
LABEL_94:
          while ( 1 )
          {
            v53 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v24 = v53;
            if ( !v53 )
              break;
            if ( (*(_BYTE *)(v53 + 28) & 0x7F) == 0x21 )
              goto LABEL_54;
          }
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          v12 = *(_BYTE *)(v11 + 16);
LABEL_13:
          if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 )
          {
            if ( v12 == 13 )
            {
              if ( ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 0x1B4 )
                goto LABEL_47;
              v128 = sub_F57EE0(v10);
              if ( !v128 )
              {
                if ( !(unsigned __int8)sub_F57FF0(v10, a6) )
                  goto LABEL_47;
LABEL_18:
                if ( (*(_BYTE *)(a3 + 4) & 0x10) == 0 )
                {
LABEL_294:
                  v86 = sub_F57F20(v10, v8, v26, v27, v28);
                  v87 = 1;
                  if ( !v86 )
                  {
                    v87 = 2;
                    if ( !(unsigned __int8)sub_F57F60(v10) )
                    {
                      v87 = 3;
                      if ( !(unsigned __int8)sub_F57F90(v10) )
                        v87 = 4 * ((unsigned __int8)sub_F57FC0(v10) != 0);
                    }
                  }
                  LODWORD(v88) = v181;
                  if ( v182 )
                  {
                    if ( v181 <= 0x40 )
                      LODWORD(v88) = (_DWORD)v180;
                    else
                      v88 = *(_QWORD *)v180;
                  }
                  else if ( v181 > 0x40 )
                  {
                    LODWORD(v88) = *(_DWORD *)v180;
                  }
                  else if ( v181 )
                  {
                    v88 = (__int64)((_QWORD)v180 << (64 - (unsigned __int8)v181)) >> (64 - (unsigned __int8)v181);
                  }
                  sub_BF84C0(v88, v87, (__int64)a2);
                  goto LABEL_36;
                }
LABEL_42:
                if ( v128 )
                {
                  v37 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( *(_BYTE *)(v37 + 16) == 13 )
                  {
                    v38 = *(unsigned __int16 *)(v37 + 18);
                    LOWORD(v38) = (unsigned __int16)v38 >> 3;
                    v39 = (unsigned int)(v38 + 68);
                    LOWORD(v39) = v39 & 0x1FF;
                    switch ( v39 )
                    {
                      case 0LL:
                        sub_220C370(&v180, a2, v182 ^ 1u);
                        v92 = (_BYTE *)a2[2].m128i_i64[0];
                        if ( v92 == (_BYTE *)a2[1].m128i_i64[1] )
                        {
                          sub_227BF10(a2, "U", 1);
                        }
                        else
                        {
                          *v92 = 85;
                          ++a2[2].m128i_i64[0];
                        }
                        break;
                      case 1LL:
                        sub_220C370(&v180, a2, v182 ^ 1u);
                        v91 = (_WORD *)a2[2].m128i_i64[0];
                        if ( a2[1].m128i_i64[1] - (__int64)v91 > 1uLL )
                        {
                          *v91 = 19541;
                          a2[2].m128i_i64[0] += 2;
                        }
                        else
                        {
                          sub_227BF10(a2, "UL", 2);
                        }
                        break;
                      case 2LL:
                        sub_220C370(&v180, a2, v182 ^ 1u);
                        v95 = a2[2].m128i_i64[0];
                        if ( (unsigned __int64)(a2[1].m128i_i64[1] - v95) > 2 )
                        {
                          *(_BYTE *)(v95 + 2) = 76;
                          *(_WORD *)v95 = 19541;
                          a2[2].m128i_i64[0] += 3;
                        }
                        else
                        {
                          sub_227BF10(a2, "ULL", 3);
                        }
                        break;
                      case 8LL:
                        goto LABEL_47;
                      case 9LL:
                        sub_220C370(&v180, a2, v182 ^ 1u);
                        v94 = (_BYTE *)a2[2].m128i_i64[0];
                        if ( v94 == (_BYTE *)a2[1].m128i_i64[1] )
                        {
                          sub_227BF10(a2, "L", 1);
                        }
                        else
                        {
                          *v94 = 76;
                          ++a2[2].m128i_i64[0];
                        }
                        break;
                      case 10LL:
                        sub_220C370(&v180, a2, v182 ^ 1u);
                        v93 = (_WORD *)a2[2].m128i_i64[0];
                        if ( a2[1].m128i_i64[1] - (__int64)v93 > 1uLL )
                        {
                          *v93 = 19532;
                          a2[2].m128i_i64[0] += 2;
                        }
                        else
                        {
                          sub_227BF10(a2, "LL", 2);
                        }
                        break;
                      default:
                        goto LABEL_48;
                    }
                  }
                  else
                  {
LABEL_48:
                    v40 = (_BYTE *)a2[2].m128i_i64[0];
                    if ( (_BYTE *)a2[1].m128i_i64[1] == v40 )
                    {
                      a2 = (const __m128i *)sub_227BF10(a2, "(", 1);
                    }
                    else
                    {
                      *v40 = 40;
                      ++a2[2].m128i_i64[0];
                    }
                    v198 = *(void **)(v10 + 8);
                    sub_F785A0(&v201, &v198, a3);
                    v41 = sub_227BF10(a2, v201, v202);
                    v42 = *(_BYTE **)(v41 + 32);
                    if ( v42 == *(_BYTE **)(v41 + 24) )
                    {
                      v41 = sub_227BF10(v41, ")", 1);
                    }
                    else
                    {
                      *v42 = 41;
                      ++*(_QWORD *)(v41 + 32);
                    }
                    sub_220C370(&v180, v41, v182 ^ 1u);
                    if ( v201 != &v203 )
                      operator delete(v201);
                  }
                  goto LABEL_36;
                }
LABEL_47:
                sub_220C370(&v180, a2, v182 ^ 1u);
                goto LABEL_36;
              }
            }
            else if ( !(unsigned __int8)sub_F57EE0(v10) )
            {
              if ( (unsigned __int8)sub_F57FF0(v10, a6) && (*(_BYTE *)(a3 + 4) & 0x10) == 0 )
                goto LABEL_294;
              goto LABEL_47;
            }
          }
          else
          {
            if ( v12 == 13 && ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 0x1B4 )
            {
              v29 = v181;
              if ( v181 <= 0x40 )
                v30 = v180 == nullptr;
              else
                v30 = v29 == (unsigned int)sub_2206780(&v180);
              v31 = "true";
              if ( v30 )
                v31 = "false";
              v32 = strlen(v31);
              v33 = (_QWORD *)a2[2].m128i_i64[0];
              if ( v32 <= a2[1].m128i_i64[1] - (__int64)v33 )
              {
                if ( (unsigned int)v32 >= 8 )
                {
                  *v33 = *(_QWORD *)v31;
                  *(_QWORD *)((char *)v33 + (unsigned int)v32 - 8) = *(_QWORD *)&v31[(unsigned int)v32 - 8];
                  v105 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  v106 = (char *)v33 - v105;
                  v107 = (const char *)(v31 - v106);
                  v108 = (v32 + (_DWORD)v106) & 0xFFFFFFF8;
                  if ( v108 >= 8 )
                  {
                    v109 = v108 & 0xFFFFFFF8;
                    v110 = 0;
                    do
                    {
                      v111 = v110;
                      v110 += 8;
                      *(_QWORD *)(v105 + v111) = *(_QWORD *)&v107[v111];
                    }
                    while ( v110 < v109 );
                  }
                }
                else if ( (v32 & 4) != 0 )
                {
                  *(_DWORD *)v33 = *(_DWORD *)v31;
                  *(_DWORD *)((char *)v33 + (unsigned int)v32 - 4) = *(_DWORD *)&v31[(unsigned int)v32 - 4];
                }
                else if ( (_DWORD)v32 )
                {
                  *(_BYTE *)v33 = *v31;
                  if ( (v32 & 2) != 0 )
                    *(_WORD *)((char *)v33 + (unsigned int)v32 - 2) = *(_WORD *)&v31[(unsigned int)v32 - 2];
                }
                a2[2].m128i_i64[0] += v32;
              }
              else
              {
                sub_227BF10(a2, v31, v32);
              }
LABEL_36:
              if ( v181 <= 0x40 )
                return;
              goto LABEL_37;
            }
            if ( !(unsigned __int8)sub_F57EE0(v10) )
            {
              if ( !(unsigned __int8)sub_F57FF0(v10, a6) )
                goto LABEL_42;
              goto LABEL_18;
            }
            if ( v129 )
            {
              v34 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v34 + 16) == 13 )
              {
                v35 = (*(_WORD *)(v34 + 18) >> 3) & 0x1FF;
                if ( v35 == 449 )
                {
                  v100 = (void *)a2[2].m128i_i64[0];
                  if ( a2[1].m128i_i64[1] - (__int64)v100 > 0xCuLL )
                  {
                    qmemcpy(v100, "(signed char)", 13);
                    a2[2].m128i_i64[0] += 13;
                  }
                  else
                  {
                    sub_227BF10(a2, "(signed char)", 13);
                  }
                }
                else if ( v35 == 438 )
                {
                  v102 = (void *)a2[2].m128i_i64[0];
                  if ( a2[1].m128i_i64[1] - (__int64)v102 > 0xEuLL )
                  {
                    qmemcpy(v102, "(unsigned char)", 15);
                    a2[2].m128i_i64[0] += 15;
                  }
                  else
                  {
                    sub_227BF10(a2, "(unsigned char)", 15);
                  }
                }
              }
            }
          }
          LODWORD(v36) = (_DWORD)v180;
          if ( v181 > 0x40 )
            v36 = *(_QWORD *)v180;
          sub_BF84C0(v36, 0, (__int64)a2);
          goto LABEL_36;
        }
      }
    }
    else if ( (unsigned int)v44 <= 0x40 )
    {
      if ( (v8 & (1LL << ((unsigned __int8)v44 - 1))) != 0 )
        goto LABEL_94;
    }
    else if ( ((1LL << ((unsigned __int8)v44 - 1)) & *(_QWORD *)(v8 + 8LL * ((unsigned int)(v44 - 1) >> 6))) != 0 )
    {
      goto LABEL_91;
    }
    goto LABEL_97;
  }
  if ( !v43 )
  {
    v8 = (__int64)&v180;
    v52 = sub_2205E20(&v183, &v180);
    goto LABEL_98;
  }
LABEL_97:
  v8 = (__int64)&v180;
  v52 = sub_2205DB0(&v183, &v180);
LABEL_98:
  if ( (unsigned int)v44 > 0x40 && v183 )
  {
    v133 = v52;
    operator delete[](v183);
    v52 = v133;
  }
  if ( v52 )
    goto LABEL_94;
  sub_B76DD0((_QWORD *)v24, a2, a3);
  if ( v181 > 0x40 )
  {
LABEL_37:
    if ( v180 )
      operator delete[](v180);
  }
}
