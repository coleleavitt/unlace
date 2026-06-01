__int64 __fastcall sub_998620(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, _BOOL4),
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // r11
  int v15; // eax
  unsigned __int64 v16; // r13
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // rax
  _DWORD *v29; // r12
  unsigned int v30; // r11d
  __int64 v31; // rsi
  _DWORD *v32; // r14
  _DWORD *v33; // r13
  int v34; // r15d
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  _DWORD *v38; // rdx
  _DWORD *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rbp
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // r12
  unsigned int v46; // edx
  __int64 *v47; // r15
  unsigned __int64 v48; // rsi
  int v49; // r10d
  __int64 *v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  unsigned __int64 v55; // rdx
  __int64 v57; // r15
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rcx
  unsigned int v64; // edx
  __int64 v65; // rdi
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  int v68; // esi
  _DWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // r14d
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r13
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  bool v85; // cl
  unsigned int v86; // eax
  int v87; // esi
  int v88; // r13d
  __int64 v89; // rsi
  unsigned int v90; // edx
  __int64 v91; // r9
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rax
  int v94; // r8d
  unsigned __int64 v95; // r12
  __int64 v96; // r10
  unsigned int v97; // eax
  __int64 v98; // r14
  int v99; // eax
  unsigned int v100; // esi
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // rdi
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  unsigned __int8 v106; // al
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  _QWORD *v110; // rdi
  int v111; // esi
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 *v114; // r11
  __int64 *i; // rax
  __int64 v116; // rdx
  int v117; // r8d
  int v118; // r8d
  __int64 v119; // r10
  unsigned int v120; // edi
  _QWORD *v121; // rcx
  __int64 v122; // r9
  int v123; // edx
  __int64 v124; // rsi
  __int64 v125; // r8
  int v126; // r11d
  __int64 *v127; // r10
  unsigned __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rdi
  unsigned int v132; // r9d
  int v133; // ecx
  __int64 v134; // rdi
  _QWORD *v135; // rsi
  __int64 *v136; // r11
  __int64 *v137; // rax
  int v138; // r8d
  int v139; // r8d
  __int64 v140; // rbp
  unsigned int v141; // edi
  _QWORD *v142; // rsi
  __int64 v143; // r10
  int v144; // r8d
  int v145; // r11d
  __int64 v146; // rdi
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rdi
  int v150; // eax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rax
  int v157; // r10d
  __int64 v158; // rdx
  __int64 v160; // [rsp+10h] [rbp-108h]
  unsigned __int8 v161; // [rsp+10h] [rbp-108h]
  unsigned __int8 v163; // [rsp+18h] [rbp-100h]
  __int64 v164; // [rsp+18h] [rbp-100h]
  __int64 v168; // [rsp+38h] [rbp-E0h]
  unsigned int v169; // [rsp+38h] [rbp-E0h]
  __int64 v170; // [rsp+40h] [rbp-D8h]
  _DWORD *v171; // [rsp+40h] [rbp-D8h]
  _BOOL4 v172; // [rsp+40h] [rbp-D8h]
  unsigned int v173; // [rsp+48h] [rbp-D0h]
  unsigned int v174; // [rsp+48h] [rbp-D0h]
  __int64 v175; // [rsp+48h] [rbp-D0h]
  unsigned int v176; // [rsp+48h] [rbp-D0h]
  __int64 v177; // [rsp+48h] [rbp-D0h]
  _QWORD *v178; // [rsp+48h] [rbp-D0h]
  int v179; // [rsp+50h] [rbp-C8h]
  _QWORD *v180; // [rsp+50h] [rbp-C8h]
  int v181; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v182; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v183; // [rsp+68h] [rbp-B0h]
  __int64 v184; // [rsp+78h] [rbp-A0h]
  __int64 v185; // [rsp+80h] [rbp-98h]
  char v186; // [rsp+88h] [rbp-90h]
  int v187; // [rsp+90h] [rbp-88h]
  __int64 v188; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v189; // [rsp+A8h] [rbp-70h]
  __int64 v190; // [rsp+B8h] [rbp-60h]
  __int64 v191; // [rsp+C0h] [rbp-58h]
  char v192; // [rsp+C8h] [rbp-50h]
  int v193; // [rsp+D0h] [rbp-48h]

  v6 = a3;
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    goto LABEL_6;
  }
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(unsigned int *)(a1 + 32);
    v11 = *(_QWORD *)(v9 + 32);
    if ( (_DWORD)v10 != *(_DWORD *)(v11 + 16) && (_DWORD)v10 )
      v11 = *(_QWORD *)(v9 + v10 + 32);
LABEL_6:
    v12 = *(unsigned __int8 *)(v11 + 51);
    if ( (_BYTE)v12 )
      goto LABEL_7;
    goto LABEL_29;
  }
  if ( (unsigned int)(v8 - 2) <= 1 )
    BUG();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v12 = *(unsigned __int8 *)(v11 + 51);
  if ( (_BYTE)v12 )
  {
LABEL_7:
    if ( *(_QWORD *)(v11 + 32) )
    {
      v13 = sub_BEE000(v11);
      v14 = sub_6F6DE0(*a2, *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
      v15 = *(_DWORD *)(a1 + 48);
      if ( v15 )
      {
        v16 = *(_QWORD *)a1;
        if ( v15 == 1 )
        {
          v156 = *(_QWORD *)(a1 + 24);
          if ( v156 )
            LODWORD(v16) = *(_DWORD *)(v156 + 8) * v16;
          LODWORD(v16) = *(_QWORD *)(a1 + 32) + v16;
        }
        else
        {
          v16 += *(_QWORD *)(a1 + 24);
        }
        goto LABEL_11;
      }
      v63 = *(_QWORD *)(a1 + 24);
      if ( !v63 )
      {
LABEL_240:
        v163 = v12;
        LODWORD(v16) = 0;
        v160 = v14;
        while ( 1 )
        {
LABEL_12:
          v17 = *(_DWORD *)(v11 + 12);
          v18 = 0;
          if ( v17 != -1 )
            v18 = v17 / *(_DWORD *)(v11 + 8);
          if ( (_DWORD)v16 == v18 )
            return v163;
          v19 = *(_DWORD *)(a1 + 48);
          if ( v19 == 1 )
          {
            v71 = *(_QWORD *)(a1 + 24);
            v72 = *(_QWORD *)(a1 + 32);
            v182 = (unsigned int)v16;
            v187 = 1;
            v185 = v72;
            v184 = v71;
            v183 = 0;
LABEL_97:
            sub_A1BFE0(&v188, &v182);
            goto LABEL_98;
          }
          if ( v19 == 2 )
          {
            v73 = *(_QWORD *)(a1 + 24);
            v182 = (unsigned int)v16;
            v187 = 2;
            v184 = v73;
            v185 = 0;
            v186 = 1;
            v183 = 0;
            goto LABEL_97;
          }
          v20 = *(_DWORD *)(a1 + 32);
          if ( v20 == -1 )
          {
            if ( v19 == 3 )
              goto LABEL_302;
            sub_A1C030(
              &v182,
              *(_QWORD *)(a1 + 24),
              0xFFFFFFFFLL,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 12LL));
          }
          else
          {
            if ( v19 )
            {
              if ( v19 == 3 )
                goto LABEL_305;
              v21 = *(_QWORD *)(a1 + 24);
              v23 = v20;
              v22 = *(_QWORD *)(v21 + 32);
              v24 = *(unsigned int *)(v22 + 8) * (unsigned __int64)(unsigned int)v16;
            }
            else
            {
              v21 = *(_QWORD *)(a1 + 24);
              if ( !v21 )
                goto LABEL_254;
              v22 = *(_QWORD *)(v21 + 32);
              v23 = v20;
              if ( *(_DWORD *)(v22 + 16) != v20 && v20 )
                v22 = *(_QWORD *)(v21 + v20 + 32);
              v24 = *(unsigned int *)(v22 + 8) * (unsigned __int64)(unsigned int)v16;
            }
            v25 = v24 + 32;
            if ( *(_QWORD *)(v22 + 32) )
              v25 = v24 + 16;
            sub_A1C030(&v182, v21, v20, v23 + v25);
          }
          if ( v187 || !v184 )
            goto LABEL_97;
          v74 = *(_QWORD *)(v184 + 32);
          if ( (_DWORD)v185 != 0 && *(_DWORD *)(v74 + 16) != (_DWORD)v185 )
            break;
          if ( *(_DWORD *)(v74 + 12) == -1 )
            goto LABEL_97;
          v75 = v182;
          if ( (_DWORD)v185 == -1 )
            goto LABEL_122;
          if ( v182 == 0xFFFFFFFF || *(unsigned int *)(v74 + 20) < v182 )
            goto LABEL_120;
          v76 = (unsigned int)v185;
          v77 = *(_DWORD *)(v74 + 12);
          v78 = *(_QWORD *)(v184 + 32);
          if ( (unsigned int)v185 != v182 )
            goto LABEL_255;
LABEL_113:
          if ( *(_BYTE *)(v74 + 51) && !*(_QWORD *)(v74 + 32) )
          {
            if ( v76 != v75 )
              goto LABEL_97;
            sub_A1C030(&v188, v184, (unsigned int)v185, v76 + 32);
          }
          else if ( v76 == v75 )
          {
            if ( !*(_BYTE *)(v78 + 51) )
              goto LABEL_97;
            sub_A1C030(&v188, v184, (unsigned int)(v185 + 16), (unsigned int)(v185 + 16));
          }
          else
          {
            sub_A1C030(&v188, v184, (unsigned int)v75, v75);
          }
LABEL_98:
          sub_998620(&v188, a2, v6, a4, a5, a6);
          sub_A1C0C0(&v188);
          sub_A1C0C0(&v182);
          v6 += v160;
          if ( v6 >= a4 )
            return v163;
          LODWORD(v16) = v16 + 1;
        }
        v76 = (unsigned int)v185;
        v78 = *(_QWORD *)(v184 + (unsigned int)v185 + 32);
        if ( *(_DWORD *)(v78 + 12) == -1 )
          goto LABEL_97;
        v75 = v182;
        if ( (_DWORD)v185 == -1 )
        {
LABEL_122:
          if ( v75 )
            v75 = 0xFFFFFFFFLL;
          sub_A1C030(&v188, v184, 16, v75);
          goto LABEL_98;
        }
        if ( v182 == 0xFFFFFFFF || *(unsigned int *)(v74 + 20) < v182 )
          goto LABEL_120;
        v77 = *(_DWORD *)(v78 + 12);
        if ( (unsigned int)v185 != v182 )
        {
LABEL_255:
          v157 = 32;
          if ( *(_QWORD *)(v78 + 32) )
            v157 = 16;
          if ( (_DWORD)v75 - (_DWORD)v185 - v157 == v77 && v77 )
          {
LABEL_120:
            sub_A1C030(&v188, v184, (unsigned int)v185, 0xFFFFFFFFLL);
            goto LABEL_98;
          }
          if ( (_DWORD)v185 == 0 || *(_DWORD *)(v74 + 16) == (_DWORD)v185 )
            goto LABEL_113;
        }
        v74 = *(_QWORD *)(v184 + v76 + 32);
        goto LABEL_113;
      }
      v64 = *(_DWORD *)(a1 + 32);
      if ( v64 <= 0x10 )
      {
LABEL_69:
        v65 = *(_QWORD *)(v63 + 32);
        if ( *(_DWORD *)(v65 + 16) != v64 && v64 )
          v65 = *(_QWORD *)(v63 + v64 + 32);
        v66 = *(unsigned int *)(v65 + 8);
        if ( *(_DWORD *)(v65 + 8) )
        {
          v67 = *(_QWORD *)a1;
          v68 = 0;
          if ( *(_QWORD *)a1 != v64 )
          {
            v68 = 32;
            if ( *(_QWORD *)(v65 + 32) )
              v68 = 16;
          }
          LODWORD(v67) = v67 - v64 - v68;
          goto LABEL_211;
        }
        goto LABEL_240;
      }
      v67 = *(_QWORD *)a1;
      LODWORD(v16) = 0;
      if ( v64 != *(_QWORD *)a1 )
      {
        if ( v64 != -1 )
          goto LABEL_69;
        v148 = *(_QWORD *)(v63 + 32);
        v66 = *(unsigned int *)(v148 + 12);
        if ( *(_DWORD *)(v148 + 12) )
        {
LABEL_211:
          v163 = v12;
          v160 = v14;
          v16 = (unsigned int)v67 / v66;
          goto LABEL_12;
        }
      }
LABEL_11:
      v163 = v12;
      v160 = v14;
      goto LABEL_12;
    }
    v81 = sub_BEE000(v11);
    v164 = sub_6F6DE0(*a2, *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL));
    v82 = sub_8CA760(a2, v81);
    v169 = v82;
    v188 = v82;
    v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BEDF70(v11) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v85 = *(_BYTE *)(v83 + 16) == 57
       && (v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
           *(_BYTE *)(v84 + 16) == 13)
       && ((*(_WORD *)(v84 + 18) >> 3) & 0x1FF) == 435;
    v86 = *(_DWORD *)(v11 + 12);
    v87 = *(_DWORD *)(a1 + 48);
    if ( v86 != -1 )
    {
      v88 = v86 / *(_DWORD *)(v11 + 8);
      if ( !v87 )
      {
        v89 = *(_QWORD *)(a1 + 24);
        if ( !v89 )
        {
LABEL_260:
          LODWORD(v95) = 0;
          goto LABEL_145;
        }
        v90 = *(_DWORD *)(a1 + 32);
        if ( v90 <= 0x10 )
        {
LABEL_133:
          v91 = *(_QWORD *)(v89 + 32);
          if ( *(_DWORD *)(v91 + 16) != v90 && v90 )
            v91 = *(_QWORD *)(v89 + v90 + 32);
          v92 = *(unsigned int *)(v91 + 8);
          if ( *(_DWORD *)(v91 + 8) )
          {
            v93 = *(_QWORD *)a1;
            v94 = 0;
            if ( *(_QWORD *)a1 != v90 )
            {
              v94 = 32;
              if ( *(_QWORD *)(v91 + 32) )
                v94 = 16;
            }
            LODWORD(v93) = v93 - v90 - v94;
            goto LABEL_141;
          }
          goto LABEL_260;
        }
        v93 = *(_QWORD *)a1;
        LODWORD(v95) = 0;
        if ( v90 == *(_QWORD *)a1 )
          goto LABEL_145;
        if ( v90 != -1 )
          goto LABEL_133;
        v158 = *(_QWORD *)(v89 + 32);
        v92 = *(unsigned int *)(v158 + 12);
        if ( !*(_DWORD *)(v158 + 12) )
        {
LABEL_145:
          if ( v88 != (_DWORD)v95 )
          {
            v96 = 1;
            if ( !v85 )
              v96 = v164;
            v172 = v85;
            v97 = v12;
            v98 = v96;
            do
            {
              if ( (_BYTE)v97 )
              {
                v99 = *(_DWORD *)(a1 + 48);
                if ( v99 == 1 )
                {
                  v152 = *(_QWORD *)(a1 + 24);
                  v153 = *(_QWORD *)(a1 + 32);
                  v188 = (unsigned int)v95;
                  v193 = 1;
                  v190 = v152;
                  v191 = v153;
                  v189 = 0;
                  v106 = a5(a6, &v188, v169, v6, v164, v172);
                }
                else if ( v99 == 2 )
                {
                  v154 = *(_QWORD *)(a1 + 24);
                  v188 = (unsigned int)v95;
                  v193 = 2;
                  v190 = v154;
                  v191 = 0;
                  v192 = 1;
                  v189 = 0;
                  v106 = a5(a6, &v188, v169, v6, v164, v172);
                }
                else
                {
                  v100 = *(_DWORD *)(a1 + 32);
                  if ( v100 == -1 )
                  {
                    if ( v99 == 3 )
LABEL_302:
                      BUG();
                    sub_A1C030(
                      &v188,
                      *(_QWORD *)(a1 + 24),
                      0xFFFFFFFFLL,
                      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 12LL));
                    v106 = a5(a6, &v188, v169, v6, v164, v172);
                  }
                  else
                  {
                    if ( v99 )
                    {
                      if ( v99 == 3 )
LABEL_305:
                        BUG();
                      v101 = *(_QWORD *)(a1 + 24);
                      v102 = v100;
                      v103 = *(_QWORD *)(v101 + 32);
                      v104 = *(unsigned int *)(v103 + 8) * (unsigned __int64)(unsigned int)v95;
                    }
                    else
                    {
                      v101 = *(_QWORD *)(a1 + 24);
                      if ( !v101 )
LABEL_254:
                        BUG();
                      v103 = *(_QWORD *)(v101 + 32);
                      v102 = v100;
                      if ( *(_DWORD *)(v103 + 16) != v100 && v100 )
                        v103 = *(_QWORD *)(v101 + v100 + 32);
                      v104 = *(unsigned int *)(v103 + 8) * (unsigned __int64)(unsigned int)v95;
                    }
                    v105 = v104 + 32;
                    if ( *(_QWORD *)(v103 + 32) )
                      v105 = v104 + 16;
                    sub_A1C030(&v188, v101, v100, v102 + v105);
                    v106 = a5(a6, &v188, v169, v6, v164, v172);
                  }
                }
                v161 = v106;
                sub_A1C0C0(&v188);
                v97 = v161;
              }
              v6 += v98;
              if ( v6 >= a4 )
                break;
              LODWORD(v95) = v95 + 1;
            }
            while ( (_DWORD)v95 != v88 );
            return v97;
          }
          return v12;
        }
LABEL_141:
        v95 = (unsigned int)v93 / v92;
        goto LABEL_145;
      }
LABEL_143:
      v95 = *(_QWORD *)a1;
      if ( v87 == 1 )
      {
        v151 = *(_QWORD *)(a1 + 24);
        if ( v151 )
          LODWORD(v95) = *(_DWORD *)(v151 + 8) * v95;
        LODWORD(v95) = *(_QWORD *)(a1 + 32) + v95;
      }
      else
      {
        v95 += *(_QWORD *)(a1 + 24);
      }
      goto LABEL_145;
    }
    if ( v87 )
    {
      v88 = 0;
      goto LABEL_143;
    }
    v89 = *(_QWORD *)(a1 + 24);
    if ( v89 )
    {
      v90 = *(_DWORD *)(a1 + 32);
      if ( v90 <= 0x10 )
        goto LABEL_275;
      v93 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 == v90 )
        return v12;
      if ( v90 != -1 )
      {
LABEL_275:
        v88 = 0;
        goto LABEL_133;
      }
      v155 = *(_QWORD *)(v89 + 32);
      v92 = *(unsigned int *)(v155 + 12);
      if ( *(_DWORD *)(v155 + 12) )
      {
        v88 = 0;
        goto LABEL_141;
      }
    }
    return v12;
  }
LABEL_29:
  v26 = *(_QWORD *)(v11 + 24);
  v27 = *a2;
  if ( v26 )
  {
    v28 = sub_AB4240(*a2, *(_QWORD *)v26);
    v29 = *(_DWORD **)(v26 + 280);
    v30 = 1;
    v168 = v28;
    v31 = v28;
    v32 = &v29[6 * *(unsigned int *)(v26 + 288)];
    if ( v29 != v32 )
    {
      v170 = v26;
      v33 = *(_DWORD **)(v26 + 280);
      v34 = 1;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v33 + 68LL) & 1) == 0
          || (v35 = *(_QWORD *)(*(_QWORD *)v33 + 40LL), v35 > 7)
          || (_DWORD)v35 )
        {
          v36 = (unsigned int)(*(_DWORD *)a1 + v33[2]);
          sub_A1C030(&v188, *(_QWORD *)(a1 + 24), v36, (unsigned int)v36);
          v37 = *(_QWORD *)v33;
          if ( *(char *)(*(_QWORD *)v33 + 29LL) < 0 )
            v37 = sub_77A0C0(v37);
          if ( *(_DWORD *)(v37 + 68) <= 0xFu )
            sub_78B660(v37);
          if ( (_BYTE)v34 )
            v34 = sub_998620(
                    &v188,
                    a2,
                    *(_QWORD *)(*(_QWORD *)(v31 + 48) + 8LL * (unsigned int)((*(_DWORD *)(v37 + 68) >> 4) - 1)) + a3,
                    a4,
                    a5,
                    a6);
          sub_A1C0C0(&v188);
        }
        v33 += 6;
      }
      while ( v32 != v33 );
      v26 = v170;
      v30 = v34;
    }
    v38 = *(_DWORD **)(v26 + 8);
    v171 = &v38[8 * *(unsigned int *)(v26 + 16)];
    if ( v38 == v171 )
      return v30;
    v39 = *(_DWORD **)(v26 + 8);
    LOBYTE(v26) = v30;
    while ( 1 )
    {
      v40 = (unsigned int)(*(_DWORD *)a1 + v39[2]);
      sub_A1C030(&v188, *(_QWORD *)(a1 + 24), v40, (unsigned int)v40);
      v41 = *(_QWORD *)v39;
      v42 = *(_QWORD *)(*(_QWORD *)v39 + 128LL);
      v43 = v42;
      if ( v42 )
      {
LABEL_47:
        v42 = *(_QWORD *)(v43 + 88);
        goto LABEL_48;
      }
      v57 = *(_QWORD *)(v41 + 104);
      v58 = *(_QWORD *)(v57 + 96);
      v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v58 & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_48;
      }
      else
      {
        if ( v59 <= 3 || (v58 & 2) == 0 )
          goto LABEL_48;
        v60 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
        v61 = v60[2275];
        if ( !v61 )
        {
          *(_QWORD *)(v57 + 96) = v57 & 0xFFFFFFFFFFFFFFFALL | 1;
          v43 = *(_QWORD *)(v41 + 128);
          goto LABEL_81;
        }
        v62 = v60[274];
        v60[284] += 24LL;
        v59 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v60[275] >= v59 + 24 && v62 )
        {
          v60[274] = v59 + 24;
        }
        else
        {
          v177 = v61;
          v59 = sub_996C10((__int64)(v60 + 274), 24, 3);
          v61 = v177;
        }
        *(_QWORD *)v59 = v61;
        *(_DWORD *)(v59 + 8) = 0;
        v58 = v59 | 5;
        *(_QWORD *)(v59 + 16) = v57;
        *(_QWORD *)(v57 + 96) = v59 | 5;
        LOBYTE(v59) = v59 & 0xFA | 4;
      }
      if ( (v59 & 4) != 0 )
      {
        v69 = (_DWORD *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v69 )
        {
          v149 = *(_QWORD *)v69;
          v150 = *(_DWORD *)(*(_QWORD *)v69 + 12LL);
          if ( v69[2] != v150 )
          {
            v69[2] = v150;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v149 + 144LL))(v149, v57);
          }
        }
      }
      v43 = *(_QWORD *)(v41 + 128);
LABEL_81:
      if ( v43 )
        goto LABEL_47;
LABEL_48:
      v44 = 0;
      v45 = *(_QWORD *)(v168 + 72);
      v46 = *(_DWORD *)(v45 + 80);
      v47 = *(__int64 **)(v45 + 64);
      if ( !v46 )
        goto LABEL_162;
      v48 = v46 - 1;
      v49 = 1;
      v50 = nullptr;
      LODWORD(v51) = v48 & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
      v52 = &v47[2 * (unsigned int)v51];
      v53 = *v52;
      if ( *v52 != v42 )
      {
        while ( v53 != -4096 )
        {
          if ( !v50 && v53 == -8192 )
            v50 = v52;
          v51 = (unsigned int)v48 & ((_DWORD)v51 + v49);
          v52 = &v47[2 * v51];
          v53 = *v52;
          if ( v42 == *v52 )
            goto LABEL_50;
          ++v49;
        }
        v44 = 2 * v46;
        if ( !v50 )
          v50 = v52;
        v70 = *(_DWORD *)(v45 + 72) + 1;
        if ( 4 * v70 < 3 * v46 )
        {
          if ( v46 >> 3 >= v46 - *(_DWORD *)(v45 + 76) - v70 )
          {
            v174 = *(_DWORD *)(v45 + 80);
            v128 = ((((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1)) >> 4) | ((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1);
            v129 = ((((v128 >> 8) | v128) >> 16) | (v128 >> 8) | v128) + 1;
            if ( (unsigned int)v129 < 0x40 )
              LODWORD(v129) = 64;
            *(_DWORD *)(v45 + 80) = v129;
            v130 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v129, 8);
            v131 = *(unsigned int *)(v45 + 80);
            *(_QWORD *)(v45 + 64) = v130;
            v132 = ((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4);
            v133 = v131;
            v134 = 16 * v131;
            v135 = &v130[(unsigned __int64)v134 / 8];
            if ( v47 )
            {
              *(_QWORD *)(v45 + 72) = 0;
              v136 = &v47[2 * v174];
              if ( v134 )
              {
                if ( (v134 & 0x10) == 0 || (*v130 = -4096, v130 += 2, v130 != v135) )
                {
                  do
                  {
                    *v130 = -4096;
                    v130 += 4;
                    *(v130 - 2) = -4096;
                  }
                  while ( v130 != v135 );
                }
              }
              v175 = v42;
              v137 = v47;
              do
              {
                v116 = *v137;
                if ( *v137 != -4096 && v116 != -8192 )
                {
                  v138 = *(_DWORD *)(v45 + 80);
                  if ( !v138 )
                    goto LABEL_304;
                  v139 = v138 - 1;
                  v140 = *(_QWORD *)(v45 + 64);
                  v141 = v139 & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
                  v142 = (_QWORD *)(v140 + 16LL * v141);
                  v143 = *v142;
                  if ( *v142 != v116 )
                  {
                    v181 = 1;
                    v180 = nullptr;
                    while ( v143 != -4096 )
                    {
                      if ( v143 == -8192 )
                      {
                        if ( v180 )
                          v142 = v180;
                        v180 = v142;
                      }
                      v141 = v139 & (v181 + v141);
                      v142 = (_QWORD *)(v140 + 16LL * v141);
                      v143 = *v142;
                      if ( v116 == *v142 )
                        goto LABEL_197;
                      ++v181;
                    }
                    if ( v180 )
                      v142 = v180;
                  }
LABEL_197:
                  *v142 = v116;
                  v142[1] = v137[1];
                  ++*(_DWORD *)(v45 + 72);
                }
                v137 += 2;
              }
              while ( v136 != v137 );
              v42 = v175;
              v176 = v132;
              operator delete();
              v135 = *(_QWORD **)(v45 + 64);
              v133 = *(_DWORD *)(v45 + 80);
              v132 = v176;
              v70 = *(_DWORD *)(v45 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v45 + 72) = 0;
              if ( v130 == v135 )
              {
                v70 = 1;
              }
              else
              {
                if ( (v134 & 0x10) == 0 || (*v130 = -4096, v130 += 2, v130 != v135) )
                {
                  do
                  {
                    *v130 = -4096;
                    v130 += 4;
                    *(v130 - 2) = -4096;
                  }
                  while ( v130 != v135 );
                }
                v135 = *(_QWORD **)(v45 + 64);
                v133 = *(_DWORD *)(v45 + 80);
                v70 = *(_DWORD *)(v45 + 72) + 1;
              }
            }
            if ( !v133 )
            {
LABEL_306:
              *(_DWORD *)(v45 + 72) = v70;
              BUG();
            }
            v144 = v133 - 1;
            v145 = 1;
            v127 = nullptr;
            LODWORD(v146) = (v133 - 1) & v132;
            v50 = &v135[2 * (unsigned int)v146];
            v147 = *v50;
            if ( *v50 != v42 )
            {
              while ( v147 != -4096 )
              {
                if ( v147 == -8192 && !v127 )
                  v127 = v50;
                v146 = v144 & (unsigned int)(v146 + v145);
                v50 = &v135[2 * v146];
                v147 = *v50;
                if ( v42 == *v50 )
                  goto LABEL_93;
                ++v145;
              }
              goto LABEL_182;
            }
          }
          goto LABEL_93;
        }
LABEL_162:
        v173 = *(_DWORD *)(v45 + 80);
        v107 = ((((((((((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                    | (unsigned int)(v44 - 1)
                    | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 4)
                  | (((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                  | (unsigned int)(v44 - 1)
                  | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 8)
                | (((((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                  | (unsigned int)(v44 - 1)
                  | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 4)
                | (((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                | (unsigned int)(v44 - 1)
                | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 16)
              | (((((((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                  | (unsigned int)(v44 - 1)
                  | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 4)
                | (((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                | (unsigned int)(v44 - 1)
                | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
                | (unsigned int)(v44 - 1)
                | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 4)
              | (((unsigned int)(v44 - 1) | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1)) >> 2)
              | (unsigned int)(v44 - 1)
              | ((unsigned __int64)(unsigned int)(v44 - 1) >> 1))
             + 1;
        if ( (unsigned int)v107 < 0x40 )
          LODWORD(v107) = 64;
        *(_DWORD *)(v45 + 80) = v107;
        v108 = sub_25CC9C0(16LL * (unsigned int)v107, 8);
        v109 = *(unsigned int *)(v45 + 80);
        *(_QWORD *)(v45 + 64) = v108;
        v110 = (_QWORD *)v108;
        v111 = v109;
        v112 = 16 * v109;
        v113 = (_QWORD *)(v108 + v112);
        if ( v47 )
        {
          *(_QWORD *)(v45 + 72) = 0;
          v114 = &v47[2 * v173];
          if ( v112 )
          {
            if ( (((_BYTE)v113 - (_BYTE)v110) & 0x10) == 0 || (*v110 = -4096, v110 += 2, v113 != v110) )
            {
              do
              {
                *v110 = -4096;
                v110 += 4;
                *(v110 - 2) = -4096;
              }
              while ( v113 != v110 );
            }
          }
          for ( i = v47; v114 != i; i += 2 )
          {
            v116 = *i;
            if ( *i != -8192 && v116 != -4096 )
            {
              v117 = *(_DWORD *)(v45 + 80);
              if ( !v117 )
              {
LABEL_304:
                *(_QWORD *)&dword_0 = v116;
                BUG();
              }
              v118 = v117 - 1;
              v119 = *(_QWORD *)(v45 + 64);
              v120 = v118 & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
              v121 = (_QWORD *)(v119 + 16LL * v120);
              v122 = *v121;
              if ( *v121 != v116 )
              {
                v179 = 1;
                v178 = nullptr;
                while ( v122 != -4096 )
                {
                  if ( v122 == -8192 )
                  {
                    if ( v178 )
                      v121 = v178;
                    v178 = v121;
                  }
                  v120 = v118 & (v179 + v120);
                  v121 = (_QWORD *)(v119 + 16LL * v120);
                  v122 = *v121;
                  if ( v116 == *v121 )
                    goto LABEL_174;
                  ++v179;
                }
                if ( v178 )
                  v121 = v178;
              }
LABEL_174:
              *v121 = v116;
              v121[1] = i[1];
              ++*(_DWORD *)(v45 + 72);
            }
          }
          operator delete();
LABEL_177:
          v110 = *(_QWORD **)(v45 + 64);
          v111 = *(_DWORD *)(v45 + 80);
          v70 = *(_DWORD *)(v45 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v45 + 72) = 0;
          if ( v113 != v110 )
          {
            if ( (((_BYTE)v113 - (_BYTE)v110) & 0x10) == 0 || (*v110 = -4096, v110 += 2, v113 != v110) )
            {
              do
              {
                *v110 = -4096;
                v110 += 4;
                *(v110 - 2) = -4096;
              }
              while ( v113 != v110 );
            }
            goto LABEL_177;
          }
          v70 = 1;
        }
        if ( !v111 )
          goto LABEL_306;
        v123 = v111 - 1;
        LODWORD(v124) = (v111 - 1) & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
        v50 = &v110[2 * (unsigned int)v124];
        v125 = *v50;
        if ( v42 != *v50 )
        {
          v126 = 1;
          v127 = nullptr;
          while ( v125 != -4096 )
          {
            if ( v125 == -8192 && !v127 )
              v127 = v50;
            v124 = v123 & (unsigned int)(v124 + v126);
            v50 = &v110[2 * v124];
            v125 = *v50;
            if ( v42 == *v50 )
              goto LABEL_93;
            ++v126;
          }
LABEL_182:
          if ( v127 )
            v50 = v127;
        }
LABEL_93:
        *(_DWORD *)(v45 + 72) = v70;
        if ( *v50 != -4096 )
          --*(_DWORD *)(v45 + 76);
        *v50 = v42;
        v54 = 0;
        v50[1] = 0;
        goto LABEL_51;
      }
LABEL_50:
      v54 = v52[1];
LABEL_51:
      v55 = sub_70D460(*a2, v54) + a3;
      if ( (_BYTE)v26 && (LODWORD(v26) = sub_998620(&v188, a2, v55, a4, a5, a6), (_BYTE)v26) )
        sub_A1DB00(&v188);
      else
        LODWORD(v26) = 0;
      v39 += 8;
      sub_A1C0C0(&v188);
      if ( v171 == v39 )
        return (unsigned int)v26;
    }
  }
  v79 = sub_BEDF70(v11);
  v80 = sub_6F6DE0(v27, *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
  return a5(a6, a1, *(unsigned int *)(v11 + 40), a3, v80, 0);
}

