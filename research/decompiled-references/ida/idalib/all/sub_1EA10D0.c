__int64 __fastcall sub_1EA10D0(__int64 *a1, __int64 a2, double a3)
{
  unsigned int v3; // r15d
  char v4; // al
  _DWORD *v5; // rbp
  unsigned int v9; // r8d
  char v10; // cl
  unsigned int v11; // edx
  int v12; // r14d
  void *v13; // rdi
  void *v14; // rdi
  unsigned int v15; // edx
  void *v16; // rbp
  char v17; // cl
  unsigned int v18; // edx
  char v19; // cl
  unsigned int v20; // r9d
  __int64 *v21; // rsi
  __int64 v22; // rdi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rsi
  unsigned int v28; // r9d
  char v29; // cl
  unsigned __int64 v30; // rsi
  int v31; // eax
  unsigned int v32; // r8d
  char v33; // cl
  void *v34; // rdi
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rsi
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rsi
  unsigned __int64 v44; // rsi
  int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  void *v49; // rdi
  int v50; // eax
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rsi
  char v55; // al
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r13
  __int64 v65; // rbx
  unsigned int v66; // esi
  unsigned int v67; // r15d
  unsigned int v68; // ecx
  __int64 *v69; // rdx
  __int64 v70; // r10
  _QWORD *v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rsi
  unsigned __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rdi
  unsigned __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // rsi
  int v88; // eax
  __int64 v89; // rdi
  __int64 v90; // rdx
  int v91; // eax
  int v92; // eax
  __int64 v93; // rsi
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  __int64 v96; // rdi
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rsi
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // r15
  __int64 v107; // r13
  void *v108; // rdi
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // rax
  __int64 v113; // r13
  void *v114; // rdi
  int v115; // r11d
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  int v119; // ecx
  int v120; // ecx
  int v121; // esi
  __int64 *v122; // rdx
  unsigned int i; // r15d
  __int64 v124; // rdi
  int v125; // esi
  int v126; // esi
  int v127; // edi
  __int64 *v128; // rcx
  unsigned int j; // edx
  __int64 v130; // r8
  unsigned int v131; // r15d
  unsigned int v132; // edx
  char v133; // [rsp+8h] [rbp-140h]
  char v134; // [rsp+8h] [rbp-140h]
  char v135; // [rsp+8h] [rbp-140h]
  unsigned int v136; // [rsp+8h] [rbp-140h]
  unsigned int v137; // [rsp+8h] [rbp-140h]
  char v138; // [rsp+8h] [rbp-140h]
  char v139; // [rsp+8h] [rbp-140h]
  unsigned int v140; // [rsp+8h] [rbp-140h]
  char v141; // [rsp+8h] [rbp-140h]
  unsigned int v142; // [rsp+8h] [rbp-140h]
  unsigned int v143; // [rsp+8h] [rbp-140h]
  unsigned int v144; // [rsp+8h] [rbp-140h]
  unsigned int v145; // [rsp+8h] [rbp-140h]
  char v146; // [rsp+8h] [rbp-140h]
  unsigned int v147; // [rsp+8h] [rbp-140h]
  unsigned int v148; // [rsp+8h] [rbp-140h]
  unsigned int v149; // [rsp+8h] [rbp-140h]
  char v150; // [rsp+8h] [rbp-140h]
  unsigned int v151; // [rsp+8h] [rbp-140h]
  int v152; // [rsp+8h] [rbp-140h]
  unsigned int v153; // [rsp+8h] [rbp-140h]
  unsigned int v154; // [rsp+8h] [rbp-140h]
  __int64 v155; // [rsp+8h] [rbp-140h]
  void *v156; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v157; // [rsp+18h] [rbp-130h]
  char v158; // [rsp+1Ch] [rbp-12Ch]
  void *v159; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v160; // [rsp+28h] [rbp-120h]
  char v161; // [rsp+2Ch] [rbp-11Ch]
  void *v162; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v163; // [rsp+38h] [rbp-110h]
  char v164; // [rsp+3Ch] [rbp-10Ch]
  _QWORD *v165; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v166; // [rsp+48h] [rbp-100h]
  char v167; // [rsp+4Ch] [rbp-FCh]
  void *v168; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v169; // [rsp+58h] [rbp-F0h]
  char v170; // [rsp+5Ch] [rbp-ECh]
  void *v171; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v172; // [rsp+68h] [rbp-E0h]
  char v173; // [rsp+6Ch] [rbp-DCh]
  void *v174; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v175; // [rsp+78h] [rbp-D0h]
  char v176; // [rsp+7Ch] [rbp-CCh]
  __int64 v177; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v178; // [rsp+88h] [rbp-C0h]
  __int64 v179; // [rsp+90h] [rbp-B8h]
  __int64 v180; // [rsp+A0h] [rbp-A8h]
  __int64 v181; // [rsp+A8h] [rbp-A0h]
  unsigned __int8 v182; // [rsp+F8h] [rbp-50h]
  unsigned int v183; // [rsp+100h] [rbp-48h]
  unsigned __int8 v184; // [rsp+104h] [rbp-44h]

  v3 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  v157 = 1;
  v158 = 0;
  v156 = nullptr;
  v5 = *(_DWORD **)(a2 + 8 * (((v4 & 8) != 0) + 1LL) + 64);
  if ( ((*v5 >> 14) & 0xC) != 0 )
    return v3;
  v3 = sub_16D4840(*a1, a2, 4u, (__int64)&v156);
  if ( !(_BYTE)v3 )
  {
    v160 = 64;
    v159 = &dword_0 + 1;
    v161 = 0;
    if ( v157 == 64 )
    {
      if ( v158 )
        v12 = sub_2205DB0(&v156, &v159);
      else
        v12 = sub_2205E20(&v156, &v159);
      goto LABEL_43;
    }
    if ( v157 > 0x40 )
    {
      sub_2206B70(&v177, &v159, v157);
      v164 = 0;
      v9 = v178;
      v163 = v178;
      v162 = (void *)v177;
      if ( v157 == v178 )
      {
        if ( !v158 )
        {
          v149 = v178;
          v76 = sub_2205E20(&v156, &v162);
          v9 = v149;
          v12 = v76;
          goto LABEL_35;
        }
        goto LABEL_54;
      }
      if ( v157 <= v178 )
      {
        if ( v157 < v178 )
        {
          v133 = v158;
          if ( v158 )
          {
            sub_2206CD0(&v177, &v156, v178);
            v170 = 1;
            v10 = v133;
          }
          else
          {
            sub_2206B70(&v177, &v156, v178);
            v170 = 0;
            v10 = 0;
          }
          v11 = v178;
          v169 = v178;
          v168 = (void *)v177;
          v9 = v163;
          if ( v163 == v178 )
          {
            if ( v164 == v10 )
            {
              if ( v10 )
                goto LABEL_212;
              v148 = v178;
              v75 = sub_2205E20(&v168, &v162);
              v11 = v148;
              v12 = v75;
              goto LABEL_31;
            }
LABEL_209:
            if ( !v10 )
            {
              v51 = 1LL << ((unsigned __int8)v178 - 1);
              if ( v178 > 0x40 )
              {
                v12 = -1;
                if ( (v51 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
                {
LABEL_32:
                  v13 = v168;
                  if ( v168 )
LABEL_33:
                    operator delete[](v13);
LABEL_34:
                  v9 = v163;
                  goto LABEL_35;
                }
                goto LABEL_212;
              }
              v12 = -1;
              if ( (v51 & v177) == 0 )
              {
LABEL_212:
                v145 = v178;
                v52 = sub_2205DB0(&v168, &v162);
                v11 = v145;
                v12 = v52;
                goto LABEL_31;
              }
LABEL_35:
              if ( v9 <= 0x40 )
                goto LABEL_38;
              goto LABEL_36;
            }
            if ( v164 )
              goto LABEL_212;
            v80 = (unsigned __int64)v162;
            if ( v163 > 0x40 )
              v80 = *((_QWORD *)v162 + ((v163 - 1) >> 6));
            v12 = 1;
            if ( (v80 & (1LL << ((unsigned __int8)v163 - 1))) == 0 )
              goto LABEL_212;
LABEL_31:
            if ( v11 <= 0x40 )
              goto LABEL_34;
            goto LABEL_32;
          }
          if ( v163 >= v178 )
          {
            if ( v163 > v178 )
            {
              if ( v10 )
              {
                sub_2206CD0(&v177, &v168, v163);
                v173 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v168, v163);
                v173 = 0;
              }
              v172 = v178;
              v171 = (void *)v177;
              if ( v178 == v163 )
              {
                if ( v173 == v164 )
                {
                  if ( !v173 )
                  {
                    v12 = sub_2205E20(&v171, &v162);
                    goto LABEL_27;
                  }
                  goto LABEL_382;
                }
              }
              else
              {
                if ( v172 > v163 )
                {
                  if ( v164 )
                  {
                    sub_2206CD0(&v177, &v162, v178);
                    v176 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v177, &v162, v178);
                    v176 = 0;
                  }
                  v175 = v178;
                  v174 = (void *)v177;
                  v12 = sub_98E2D0((__int64 *)&v171, (__int64 *)&v174);
                  if ( v175 <= 0x40 )
                    goto LABEL_27;
                  goto LABEL_25;
                }
                if ( v172 < v163 )
                {
                  if ( v173 )
                  {
                    sub_2206CD0(&v177, &v171, v163);
                    v176 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v177, &v171, v163);
                    v176 = 0;
                  }
                  v175 = v178;
                  v174 = (void *)v177;
                  v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v162);
                  if ( v175 <= 0x40 )
                    goto LABEL_27;
LABEL_25:
                  if ( v174 )
                    operator delete[](v174);
LABEL_27:
                  if ( v172 > 0x40 )
                    goto LABEL_28;
LABEL_30:
                  v11 = v169;
                  goto LABEL_31;
                }
              }
              if ( v173 )
              {
                if ( !v164 )
                {
                  v103 = (unsigned __int64)v162;
                  if ( v163 > 0x40 )
                    v103 = *((_QWORD *)v162 + ((v163 - 1) >> 6));
                  if ( (v103 & (1LL << ((unsigned __int8)v163 - 1))) != 0 )
                  {
                    v12 = 1;
                    goto LABEL_27;
                  }
                }
              }
              else
              {
                v93 = 1LL << ((unsigned __int8)v178 - 1);
                if ( v178 <= 0x40 )
                {
                  v12 = -1;
                  if ( (v93 & (unsigned __int64)v171) != 0 )
                    goto LABEL_30;
                }
                else if ( (v93 & *((_QWORD *)v171 + ((v178 - 1) >> 6))) != 0 )
                {
                  v12 = -1;
LABEL_28:
                  if ( v171 )
                    operator delete[](v171);
                  goto LABEL_30;
                }
              }
LABEL_382:
              v12 = sub_2205DB0(&v171, &v162);
              goto LABEL_27;
            }
            goto LABEL_209;
          }
          v150 = v164;
          if ( v164 )
          {
            sub_2206CD0(&v177, &v162, v178);
            v77 = v178;
            v78 = v169;
            v173 = 1;
            v79 = v177;
            v172 = v178;
            v171 = (void *)v177;
            if ( v178 == v169 )
            {
              if ( v170 )
                goto LABEL_398;
              goto LABEL_395;
            }
            if ( v178 >= v169 )
            {
LABEL_255:
              if ( (unsigned int)v77 > v78 )
              {
                if ( v170 )
                {
                  sub_2206CD0(&v177, &v168, v77);
                  v176 = 1;
                }
                else
                {
                  sub_2206B70(&v177, &v168, v77);
                  v176 = 0;
                }
                v175 = v178;
                v174 = (void *)v177;
                v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v171);
                if ( v175 <= 0x40 )
                  goto LABEL_261;
                goto LABEL_259;
              }
              if ( v170 )
              {
                if ( !v150 )
                {
LABEL_417:
                  v100 = 1LL << ((unsigned __int8)v77 - 1);
                  if ( (unsigned int)v77 <= 0x40 )
                  {
                    v12 = 1;
                    if ( (v79 & v100) != 0 )
                    {
                      v11 = v78;
                      goto LABEL_31;
                    }
                  }
                  else if ( (v100 & *(_QWORD *)(v79 + 8LL * ((unsigned int)(v77 - 1) >> 6))) != 0 )
                  {
                    v12 = 1;
                    goto LABEL_262;
                  }
                }
LABEL_398:
                v12 = sub_2205DB0(&v168, &v171);
                goto LABEL_261;
              }
LABEL_395:
              v97 = (unsigned __int64)v168;
              if ( v78 > 0x40 )
                v97 = *((_QWORD *)v168 + ((v78 - 1) >> 6));
              v12 = -1;
              if ( (v97 & (1LL << ((unsigned __int8)v78 - 1))) != 0 )
              {
LABEL_261:
                if ( v172 <= 0x40 )
                {
LABEL_264:
                  v11 = v169;
                  goto LABEL_31;
                }
LABEL_262:
                if ( v171 )
                  operator delete[](v171);
                goto LABEL_264;
              }
              goto LABEL_398;
            }
            sub_2206CD0(&v177, &v171, v169);
            v176 = 1;
            v175 = v178;
            v174 = (void *)v177;
          }
          else
          {
            sub_2206B70(&v177, &v162, v178);
            v77 = v178;
            v78 = v169;
            v173 = 0;
            v79 = v177;
            v172 = v178;
            v171 = (void *)v177;
            if ( v178 == v169 )
            {
              if ( !v170 )
              {
                v12 = sub_2205E20(&v168, &v171);
                goto LABEL_261;
              }
              goto LABEL_417;
            }
            if ( v178 >= v169 )
              goto LABEL_255;
            sub_2206B70(&v177, &v171, v169);
            v176 = 0;
            v175 = v178;
            v174 = (void *)v177;
          }
          v12 = sub_98E2D0((__int64 *)&v168, (__int64 *)&v174);
          if ( v175 <= 0x40 )
            goto LABEL_261;
LABEL_259:
          if ( v174 )
            operator delete[](v174);
          goto LABEL_261;
        }
        if ( !v158 )
        {
          v30 = (unsigned __int64)v156;
          if ( v157 > 0x40 )
            v30 = *((_QWORD *)v156 + ((v157 - 1) >> 6));
          v12 = -1;
          if ( (v30 & (1LL << ((unsigned __int8)v157 - 1))) != 0 )
            goto LABEL_35;
          goto LABEL_123;
        }
LABEL_54:
        if ( v178 > 0x40 )
        {
          if ( ((1LL << ((unsigned __int8)v178 - 1)) & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
          {
            v12 = 1;
LABEL_36:
            v14 = v162;
            if ( v162 )
LABEL_37:
              operator delete[](v14);
LABEL_38:
            if ( v160 > 0x40 && v159 )
              operator delete[](v159);
LABEL_43:
            if ( !v12 )
              goto LABEL_4;
            goto LABEL_44;
          }
          goto LABEL_123;
        }
        if ( ((1LL << ((unsigned __int8)v178 - 1)) & v177) == 0 )
        {
LABEL_123:
          v140 = v178;
          v31 = sub_2205DB0(&v156, &v162);
          v9 = v140;
          v12 = v31;
          goto LABEL_35;
        }
        if ( v160 <= 0x40 )
        {
LABEL_44:
          if ( (unsigned __int8)sub_AC43F0((__int64)&v156, (char *)&dword_0 + 2)
            || (unsigned __int8)sub_AC43F0((__int64)&v156, &byte_4)
            || (unsigned __int8)sub_AC43F0((__int64)&v156, byte_8) )
          {
            goto LABEL_4;
          }
          if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
          {
            v15 = *(_DWORD *)(a2 + 24);
          }
          else if ( *(char *)(a2 + 2) >= 0
                 || (v15 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 8, a3)) == 0 )
          {
            v15 = sub_EEB7E0(*(_QWORD *)(a2 + 32), 8, a3);
            if ( !v15 )
            {
              if ( *(_DWORD *)(a2 + 16) )
              {
                v39 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
                if ( v39 )
                  v15 = sub_EEB7E0(v39, 8, a3);
              }
            }
          }
          sub_168B9F0((__int64)&v177, a1, v15, 0x156Au, 0);
          v16 = (void *)sub_EEC8C0((unsigned __int64)v5, (__int64)a1, a3);
          if ( v182 )
          {
            v46 = v180;
            if ( !v180 )
            {
              v90 = v181;
              v91 = *(_DWORD *)(v181 + 14976);
              if ( v91 )
              {
                v104 = (unsigned int)(v91 - 1);
                *(_DWORD *)(v181 + 14976) = v104;
                v46 = *(_QWORD *)(v90 + 8 * v104 + 14848);
                v105 = *(unsigned int *)(v46 + 536);
                *(_BYTE *)v46 = 0;
                v106 = *(_QWORD *)(v46 + 528);
                *(_DWORD *)(v46 + 424) = 0;
                v107 = v106 + (v105 << 6);
                while ( v106 != v107 )
                {
                  while ( 1 )
                  {
                    v107 -= 64;
                    v108 = *(void **)(v107 + 24);
                    if ( v108 == (void *)(v107 + 40) )
                      break;
                    operator delete(v108);
                    if ( v106 == v107 )
                      goto LABEL_459;
                  }
                }
LABEL_459:
                *(_DWORD *)(v46 + 536) = 0;
              }
              else
              {
                v46 = operator new(0x3A0u);
                *(_BYTE *)v46 = 0;
                *(_QWORD *)(v46 + 96) = v46 + 112;
                *(_QWORD *)(v46 + 128) = v46 + 144;
                *(_QWORD *)(v46 + 160) = v46 + 176;
                *(_QWORD *)(v46 + 192) = v46 + 208;
                *(_QWORD *)(v46 + 224) = v46 + 240;
                *(_QWORD *)(v46 + 256) = v46 + 272;
                *(_QWORD *)(v46 + 288) = v46 + 304;
                *(_QWORD *)(v46 + 320) = v46 + 336;
                *(_QWORD *)(v46 + 352) = v46 + 368;
                *(_QWORD *)(v46 + 384) = v46 + 400;
                *(_QWORD *)(v46 + 416) = v46 + 432;
                *(_BYTE *)(v46 + 112) = 0;
                *(_QWORD *)(v46 + 104) = 0;
                *(_QWORD *)(v46 + 136) = 0;
                *(_BYTE *)(v46 + 144) = 0;
                *(_QWORD *)(v46 + 168) = 0;
                *(_BYTE *)(v46 + 176) = 0;
                *(_QWORD *)(v46 + 200) = 0;
                *(_BYTE *)(v46 + 208) = 0;
                *(_QWORD *)(v46 + 232) = 0;
                *(_BYTE *)(v46 + 240) = 0;
                *(_QWORD *)(v46 + 264) = 0;
                *(_BYTE *)(v46 + 272) = 0;
                *(_QWORD *)(v46 + 296) = 0;
                *(_BYTE *)(v46 + 304) = 0;
                *(_QWORD *)(v46 + 328) = 0;
                *(_BYTE *)(v46 + 336) = 0;
                *(_QWORD *)(v46 + 360) = 0;
                *(_BYTE *)(v46 + 368) = 0;
                *(_QWORD *)(v46 + 392) = 0;
                *(_BYTE *)(v46 + 400) = 0;
                *(_QWORD *)(v46 + 424) = 0x800000000LL;
                *(_QWORD *)(v46 + 528) = v46 + 544;
                *(_QWORD *)(v46 + 536) = 0x600000000LL;
              }
              v180 = v46;
            }
            goto LABEL_191;
          }
          v3 = v184;
          if ( !v184 )
          {
LABEL_51:
            sub_15F7200(&v177);
            goto LABEL_4;
          }
          v59 = sub_168B9E0(&v177);
          v64 = v179;
          v65 = v59;
          if ( v179 )
            v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v179 + 32LL))(v179);
          v66 = *(_DWORD *)(v65 + 16);
          if ( !v66 )
            goto LABEL_490;
          v62 = v66 - 1;
          v67 = ((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4);
          v68 = v62 & v67;
          v69 = (__int64 *)(*(_QWORD *)v65 + 32LL * ((unsigned int)v62 & v67));
          v70 = *v69;
          if ( v64 == *v69 )
          {
LABEL_233:
            v71 = v69 + 1;
            goto LABEL_234;
          }
          v115 = 1;
          v116 = nullptr;
          if ( v70 == -4096 )
            goto LABEL_477;
          while ( 1 )
          {
            if ( v70 == -8192 && !v116 )
              v116 = v69;
            v63 = (unsigned int)(v115 + 1);
            v68 = v62 & (v115 + v68);
            v69 = (__int64 *)(*(_QWORD *)v65 + 32LL * v68);
            v70 = *v69;
            if ( v64 == *v69 )
              goto LABEL_233;
            if ( v70 == -4096 )
              break;
            ++v115;
          }
          if ( !v116 )
LABEL_477:
            v116 = v69;
          v60 = (unsigned int)(*(_DWORD *)(v65 + 8) + 1);
          v61 = 3 * v66;
          if ( 4 * (int)v60 < (unsigned int)v61 )
          {
            v117 = v66 - *(_DWORD *)(v65 + 12) - (unsigned int)v60;
            v118 = v66 >> 3;
            if ( (unsigned int)v117 > (unsigned int)v118 )
            {
LABEL_480:
              ++*(_DWORD *)(v65 + 8);
              if ( *v116 != -4096 )
                --*(_DWORD *)(v65 + 12);
              *v116 = v64;
              v71 = v116 + 1;
              *v71 = 0;
              v71[1] = 0;
              v71[2] = 0;
LABEL_234:
              v72 = *v71 + 32LL * v183;
              v46 = *(_QWORD *)(v72 + 8);
              if ( !v46 )
              {
                v73 = *(_QWORD *)(v72 + 16);
                v74 = *(_DWORD *)(v73 + 14976);
                if ( v74 )
                {
                  v110 = (unsigned int)(v74 - 1);
                  *(_DWORD *)(v73 + 14976) = v110;
                  v46 = *(_QWORD *)(v73 + 8 * v110 + 14848);
                  v111 = *(unsigned int *)(v46 + 536);
                  *(_BYTE *)v46 = 0;
                  v112 = *(_QWORD *)(v46 + 528);
                  *(_DWORD *)(v46 + 424) = 0;
                  v113 = v112 + (v111 << 6);
                  while ( v112 != v113 )
                  {
                    while ( 1 )
                    {
                      v113 -= 64;
                      v114 = *(void **)(v113 + 24);
                      if ( v114 == (void *)(v113 + 40) )
                        break;
                      v155 = v112;
                      operator delete(v114);
                      v112 = v155;
                      if ( v155 == v113 )
                        goto LABEL_475;
                    }
                  }
LABEL_475:
                  *(_DWORD *)(v46 + 536) = 0;
                }
                else
                {
                  v46 = operator new(0x3A0u);
                  *(_BYTE *)v46 = 0;
                  *(_QWORD *)(v46 + 96) = v46 + 112;
                  *(_QWORD *)(v46 + 128) = v46 + 144;
                  *(_QWORD *)(v46 + 160) = v46 + 176;
                  *(_QWORD *)(v46 + 192) = v46 + 208;
                  *(_QWORD *)(v46 + 224) = v46 + 240;
                  *(_QWORD *)(v46 + 256) = v46 + 272;
                  *(_QWORD *)(v46 + 288) = v46 + 304;
                  *(_QWORD *)(v46 + 320) = v46 + 336;
                  *(_QWORD *)(v46 + 352) = v46 + 368;
                  *(_QWORD *)(v46 + 384) = v46 + 400;
                  *(_QWORD *)(v46 + 416) = v46 + 432;
                  *(_BYTE *)(v46 + 112) = 0;
                  *(_QWORD *)(v46 + 104) = 0;
                  *(_QWORD *)(v46 + 136) = 0;
                  *(_BYTE *)(v46 + 144) = 0;
                  *(_QWORD *)(v46 + 168) = 0;
                  *(_BYTE *)(v46 + 176) = 0;
                  *(_QWORD *)(v46 + 200) = 0;
                  *(_BYTE *)(v46 + 208) = 0;
                  *(_QWORD *)(v46 + 232) = 0;
                  *(_BYTE *)(v46 + 240) = 0;
                  *(_QWORD *)(v46 + 264) = 0;
                  *(_BYTE *)(v46 + 272) = 0;
                  *(_QWORD *)(v46 + 296) = 0;
                  *(_BYTE *)(v46 + 304) = 0;
                  *(_QWORD *)(v46 + 328) = 0;
                  *(_BYTE *)(v46 + 336) = 0;
                  *(_QWORD *)(v46 + 360) = 0;
                  *(_BYTE *)(v46 + 368) = 0;
                  *(_QWORD *)(v46 + 392) = 0;
                  *(_BYTE *)(v46 + 400) = 0;
                  *(_QWORD *)(v46 + 424) = 0x800000000LL;
                  *(_QWORD *)(v46 + 528) = v46 + 544;
                  *(_QWORD *)(v46 + 536) = 0x600000000LL;
                }
                *(_QWORD *)(v72 + 8) = v46;
              }
LABEL_191:
              v174 = v16;
              LOBYTE(v175) = 1;
              v47 = *(unsigned int *)(v46 + 424);
              if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(v46 + 428) )
              {
                sub_2237220(v46 + 416, v46 + 432, v47 + 1, 12);
                v47 = *(unsigned int *)(v46 + 424);
              }
              v48 = *(_QWORD *)(v46 + 416) + 12 * v47;
              *(_QWORD *)v48 = v174;
              *(_DWORD *)(v48 + 8) = v175;
              v3 = v182;
              ++*(_DWORD *)(v46 + 424);
              goto LABEL_51;
            }
            sub_1587800(v65, v66, v117, v118, v62, v63);
            v119 = *(_DWORD *)(v65 + 16);
            if ( v119 )
            {
              v120 = v119 - 1;
              v121 = 1;
              v122 = nullptr;
              for ( i = v120 & v67; ; i = v120 & v131 )
              {
                v116 = (__int64 *)(*(_QWORD *)v65 + 32LL * i);
                v124 = *v116;
                if ( v64 == *v116 )
                  break;
                if ( v124 == -4096 )
                {
                  if ( v122 )
                    v116 = v122;
                  goto LABEL_480;
                }
                if ( v122 || v124 != -8192 )
                  v116 = v122;
                v131 = v121 + i;
                v122 = v116;
                ++v121;
              }
              goto LABEL_480;
            }
          }
          else
          {
LABEL_490:
            sub_1587800(v65, 2 * v66, v60, v61, v62, v63);
            v125 = *(_DWORD *)(v65 + 16);
            if ( v125 )
            {
              v126 = v125 - 1;
              v127 = 1;
              v128 = nullptr;
              for ( j = v126 & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4)); ; j = v126 & v132 )
              {
                v116 = (__int64 *)(*(_QWORD *)v65 + 32LL * j);
                v130 = *v116;
                if ( v64 == *v116 )
                  break;
                if ( v130 == -4096 )
                {
                  if ( v128 )
                    v116 = v128;
                  goto LABEL_480;
                }
                if ( v128 || v130 != -8192 )
                  v116 = v128;
                v132 = v127 + j;
                v128 = v116;
                ++v127;
              }
              goto LABEL_480;
            }
          }
          ++*(_DWORD *)(v65 + 8);
          BUG();
        }
LABEL_169:
        if ( v159 )
          operator delete[](v159);
        goto LABEL_44;
      }
      sub_2206B70(&v177, &v162, v157);
      v167 = 0;
      v32 = v178;
      v166 = v178;
      v165 = (_QWORD *)v177;
      if ( v157 == v178 )
      {
        if ( !v158 )
        {
          v151 = v178;
          v86 = sub_2205E20(&v156, &v165);
          v32 = v151;
          v12 = v86;
          goto LABEL_141;
        }
        goto LABEL_182;
      }
      if ( v157 <= v178 )
      {
        if ( v157 < v178 )
        {
          v141 = v158;
          if ( v158 )
          {
            sub_2206CD0(&v177, &v156, v178);
            v173 = 1;
            v33 = v141;
          }
          else
          {
            sub_2206B70(&v177, &v156, v178);
            v173 = 0;
            v33 = 0;
          }
          v172 = v178;
          v171 = (void *)v177;
          v32 = v166;
          if ( v178 == v166 )
          {
            if ( v167 == v33 )
            {
              if ( !v33 )
              {
                v12 = sub_2205E20(&v171, &v165);
                goto LABEL_137;
              }
              goto LABEL_332;
            }
          }
          else
          {
            if ( v172 > v166 )
            {
              if ( v167 )
              {
                sub_2206CD0(&v177, &v165, v178);
                v176 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v165, v178);
                v176 = 0;
              }
              v175 = v178;
              v174 = (void *)v177;
              v12 = sub_98E2D0((__int64 *)&v171, (__int64 *)&v174);
              if ( v175 <= 0x40 )
                goto LABEL_137;
              goto LABEL_135;
            }
            if ( v172 < v166 )
            {
              if ( v33 )
              {
                sub_2206CD0(&v177, &v171, v166);
                v176 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v171, v166);
                v176 = 0;
              }
              v175 = v178;
              v174 = (void *)v177;
              v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v165);
              if ( v175 <= 0x40 )
                goto LABEL_137;
LABEL_135:
              if ( v174 )
                operator delete[](v174);
LABEL_137:
              if ( v172 <= 0x40 )
                goto LABEL_140;
              goto LABEL_138;
            }
          }
          if ( v33 )
          {
            if ( !v167 )
            {
              v99 = (__int64)v165;
              if ( v166 > 0x40 )
                v99 = v165[(v166 - 1) >> 6];
              if ( (v99 & (1LL << ((unsigned __int8)v166 - 1))) != 0 )
              {
                v12 = 1;
                goto LABEL_137;
              }
            }
            goto LABEL_332;
          }
          v85 = 1LL << ((unsigned __int8)v178 - 1);
          if ( v178 > 0x40 )
          {
            if ( (v85 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
            {
              v12 = -1;
LABEL_138:
              v34 = v171;
              if ( v171 )
LABEL_139:
                operator delete[](v34);
LABEL_140:
              v32 = v166;
              goto LABEL_141;
            }
            goto LABEL_332;
          }
          v12 = -1;
          if ( (v177 & v85) == 0 )
          {
LABEL_332:
            v12 = sub_2205DB0(&v171, &v165);
            goto LABEL_137;
          }
LABEL_141:
          if ( v32 <= 0x40 )
            goto LABEL_34;
          goto LABEL_142;
        }
        if ( !v158 )
        {
          v44 = (unsigned __int64)v156;
          if ( v157 > 0x40 )
            v44 = *((_QWORD *)v156 + ((v157 - 1) >> 6));
          v12 = -1;
          if ( (v44 & (1LL << ((unsigned __int8)v157 - 1))) != 0 )
            goto LABEL_141;
LABEL_189:
          v143 = v178;
          v45 = sub_2205DB0(&v156, &v165);
          v32 = v143;
          v12 = v45;
          goto LABEL_141;
        }
LABEL_182:
        v43 = 1LL << ((unsigned __int8)v178 - 1);
        if ( v178 <= 0x40 )
        {
          v12 = 1;
          if ( (v43 & v177) != 0 )
            goto LABEL_34;
        }
        else if ( (v43 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
        {
          v12 = 1;
LABEL_142:
          v13 = v165;
          if ( !v165 )
            goto LABEL_34;
          goto LABEL_33;
        }
        goto LABEL_189;
      }
      sub_2206B70(&v177, &v165, v157);
      v170 = 0;
      v169 = v178;
      v168 = (void *)v177;
      if ( v157 == v178 )
      {
        if ( !v158 )
        {
          v12 = sub_2205E20(&v156, &v168);
          goto LABEL_203;
        }
        goto LABEL_290;
      }
      if ( v157 <= v178 )
      {
        if ( v157 < v178 )
        {
          if ( v158 )
          {
            sub_2206CD0(&v177, &v156, v178);
            v176 = 1;
          }
          else
          {
            sub_2206B70(&v177, &v156, v178);
            v176 = 0;
          }
          v175 = v178;
          v174 = (void *)v177;
          v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v168);
          if ( v175 > 0x40 )
          {
            v49 = v174;
            if ( v174 )
              goto LABEL_202;
          }
          goto LABEL_203;
        }
        if ( !v158 )
        {
          v83 = (unsigned __int64)v156;
          if ( v157 > 0x40 )
            v83 = *((_QWORD *)v156 + ((v157 - 1) >> 6));
          v12 = -1;
          if ( (v83 & (1LL << ((unsigned __int8)v157 - 1))) != 0 )
            goto LABEL_203;
LABEL_297:
          v12 = sub_2205DB0(&v156, &v168);
          goto LABEL_203;
        }
LABEL_290:
        v82 = 1LL << ((unsigned __int8)v178 - 1);
        if ( v178 <= 0x40 )
        {
          v12 = 1;
          if ( (v82 & v177) != 0 )
            goto LABEL_140;
        }
        else if ( (v82 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
        {
          v12 = 1;
LABEL_204:
          v34 = v168;
          if ( !v168 )
            goto LABEL_140;
          goto LABEL_139;
        }
        goto LABEL_297;
      }
      sub_2206B70(&v177, &v168, v157);
      v173 = 0;
      v172 = v178;
      v171 = (void *)v177;
      if ( v157 == v178 )
      {
        if ( !v158 )
        {
          v12 = sub_2205E20(&v156, &v171);
          goto LABEL_313;
        }
      }
      else
      {
        if ( v157 > v178 )
        {
          sub_2206B70(&v177, &v171, v157);
          v176 = 0;
          v175 = v178;
          v174 = (void *)v177;
          v12 = sub_98E2D0((__int64 *)&v156, (__int64 *)&v174);
          if ( v175 <= 0x40 )
            goto LABEL_313;
LABEL_311:
          if ( v174 )
            operator delete[](v174);
          goto LABEL_313;
        }
        if ( v157 < v178 )
        {
          if ( v158 )
          {
            sub_2206CD0(&v177, &v156, v178);
            v176 = 1;
          }
          else
          {
            sub_2206B70(&v177, &v156, v178);
            v176 = 0;
          }
          v175 = v178;
          v174 = (void *)v177;
          v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v171);
          if ( v175 <= 0x40 )
            goto LABEL_313;
          goto LABEL_311;
        }
        if ( !v158 )
        {
          v102 = (unsigned __int64)v156;
          if ( v157 > 0x40 )
            v102 = *((_QWORD *)v156 + ((v157 - 1) >> 6));
          v12 = -1;
          if ( (v102 & (1LL << ((unsigned __int8)v157 - 1))) != 0 )
          {
LABEL_313:
            if ( v172 <= 0x40 )
              goto LABEL_203;
            goto LABEL_314;
          }
LABEL_432:
          v12 = sub_2205DB0(&v156, &v171);
          goto LABEL_313;
        }
      }
      v101 = 1LL << ((unsigned __int8)v178 - 1);
      if ( v178 <= 0x40 )
      {
        v12 = 1;
        if ( (v101 & v177) != 0 )
          goto LABEL_203;
      }
      else if ( (v101 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
      {
        v12 = 1;
LABEL_314:
        v49 = v171;
        if ( v171 )
LABEL_202:
          operator delete[](v49);
LABEL_203:
        if ( v169 <= 0x40 )
          goto LABEL_140;
        goto LABEL_204;
      }
      goto LABEL_432;
    }
    v134 = v158;
    if ( v158 )
    {
      sub_2206CD0(&v177, &v156, 64);
      v167 = 1;
      v17 = v134;
    }
    else
    {
      sub_2206B70(&v177, &v156, 64);
      v167 = 0;
      v17 = 0;
    }
    v18 = v178;
    v166 = v178;
    v165 = (_QWORD *)v177;
    if ( v160 == v178 )
    {
      if ( v17 == v161 )
      {
        if ( v17 )
          goto LABEL_93;
        v137 = v178;
        v24 = sub_2205E20(&v165, &v159);
        v18 = v137;
        v12 = v24;
        goto LABEL_86;
      }
LABEL_90:
      if ( !v17 )
      {
        v22 = 1LL << ((unsigned __int8)v178 - 1);
        if ( v178 <= 0x40 )
        {
          if ( (v22 & v177) != 0 )
          {
            if ( v160 <= 0x40 )
              goto LABEL_44;
            goto LABEL_169;
          }
        }
        else
        {
          v12 = -1;
          if ( (v22 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
          {
LABEL_87:
            v14 = v165;
            if ( !v165 )
              goto LABEL_38;
            goto LABEL_37;
          }
        }
        goto LABEL_93;
      }
      if ( v161 )
        goto LABEL_93;
      v35 = (unsigned __int64)v159;
      if ( v160 > 0x40 )
        v35 = *((_QWORD *)v159 + ((v160 - 1) >> 6));
      v12 = 1;
      if ( (v35 & (1LL << ((unsigned __int8)v160 - 1))) == 0 )
      {
LABEL_93:
        v136 = v178;
        v23 = sub_2205DB0(&v165, &v159);
        v18 = v136;
        v12 = v23;
      }
LABEL_86:
      if ( v18 <= 0x40 )
        goto LABEL_38;
      goto LABEL_87;
    }
    if ( v160 >= v178 )
    {
      if ( v160 > v178 )
      {
        v135 = v17;
        if ( v17 )
        {
          sub_2206CD0(&v177, &v165, v160);
          v170 = 1;
          v19 = v135;
        }
        else
        {
          sub_2206B70(&v177, &v165, v160);
          v170 = 0;
          v19 = 0;
        }
        v20 = v178;
        v169 = v178;
        v168 = (void *)v177;
        if ( v160 == v178 )
        {
          if ( v19 == v161 )
          {
            if ( v19 )
              goto LABEL_180;
            v144 = v178;
            v50 = sub_2205E20(&v168, &v159);
            v20 = v144;
            v12 = v50;
            goto LABEL_82;
          }
LABEL_172:
          if ( !v19 )
          {
            v40 = 1LL << ((unsigned __int8)v178 - 1);
            if ( v178 <= 0x40 )
            {
              v12 = -1;
              if ( (v40 & v177) != 0 )
                goto LABEL_85;
            }
            else if ( (v40 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
            {
              v12 = -1;
LABEL_83:
              if ( v168 )
                operator delete[](v168);
              goto LABEL_85;
            }
            goto LABEL_180;
          }
          if ( v161 )
            goto LABEL_180;
          v41 = (unsigned __int64)v159;
          if ( v160 > 0x40 )
            v41 = *((_QWORD *)v159 + ((v160 - 1) >> 6));
          v12 = 1;
          if ( (v41 & (1LL << ((unsigned __int8)v160 - 1))) == 0 )
          {
LABEL_180:
            v142 = v178;
            v42 = sub_2205DB0(&v168, &v159);
            v20 = v142;
            v12 = v42;
          }
LABEL_82:
          if ( v20 > 0x40 )
            goto LABEL_83;
LABEL_85:
          v18 = v166;
          goto LABEL_86;
        }
        if ( v160 >= v178 )
        {
          if ( v160 > v178 )
          {
            if ( v19 )
            {
              sub_2206CD0(&v177, &v168, v160);
              v173 = 1;
            }
            else
            {
              sub_2206B70(&v177, &v168, v160);
              v173 = 0;
            }
            v172 = v178;
            v171 = (void *)v177;
            if ( v178 == v160 )
            {
              if ( v173 == v161 )
              {
                if ( !v173 )
                {
                  v12 = sub_2205E20(&v171, &v159);
                  goto LABEL_78;
                }
                goto LABEL_330;
              }
            }
            else
            {
              if ( v172 > v160 )
              {
                if ( v161 )
                {
                  sub_2206CD0(&v177, &v159, v178);
                  v176 = 1;
                }
                else
                {
                  sub_2206B70(&v177, &v159, v178);
                  v176 = 0;
                }
                v175 = v178;
                v174 = (void *)v177;
                v12 = sub_98E2D0((__int64 *)&v171, (__int64 *)&v174);
                if ( v175 <= 0x40 )
                  goto LABEL_78;
                goto LABEL_76;
              }
              if ( v172 < v160 )
              {
                if ( v173 )
                {
                  sub_2206CD0(&v177, &v171, v160);
                  v176 = 1;
                }
                else
                {
                  sub_2206B70(&v177, &v171, v160);
                  v176 = 0;
                }
                v175 = v178;
                v174 = (void *)v177;
                v21 = (__int64 *)&v159;
                goto LABEL_75;
              }
            }
            if ( v173 )
            {
              if ( !v161 )
              {
                v98 = (unsigned __int64)v159;
                if ( v160 > 0x40 )
                  v98 = *((_QWORD *)v159 + ((v160 - 1) >> 6));
                if ( (v98 & (1LL << ((unsigned __int8)v160 - 1))) != 0 )
                {
                  v12 = 1;
                  goto LABEL_78;
                }
              }
            }
            else
            {
              v84 = 1LL << ((unsigned __int8)v178 - 1);
              if ( v178 <= 0x40 )
              {
                v12 = -1;
                if ( (v84 & (unsigned __int64)v171) != 0 )
                  goto LABEL_81;
              }
              else if ( (v84 & *((_QWORD *)v171 + ((v178 - 1) >> 6))) != 0 )
              {
                v12 = -1;
                goto LABEL_79;
              }
            }
LABEL_330:
            v12 = sub_2205DB0(&v171, &v159);
            goto LABEL_78;
          }
          goto LABEL_172;
        }
        v146 = v161;
        if ( v161 )
        {
          sub_2206CD0(&v177, &v159, v178);
          v20 = v169;
          v173 = 1;
          v53 = v178;
          v54 = v177;
          v55 = v146;
          v172 = v178;
          v171 = (void *)v177;
          if ( v178 == v169 )
          {
            if ( v170 )
              goto LABEL_387;
            goto LABEL_384;
          }
          if ( v178 >= v169 )
          {
LABEL_216:
            if ( (unsigned int)v53 > v20 )
            {
              if ( v170 )
              {
                sub_2206CD0(&v177, &v168, v53);
                v176 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v168, v53);
                v176 = 0;
              }
              v175 = v178;
              v174 = (void *)v177;
              v21 = (__int64 *)&v171;
LABEL_75:
              v12 = sub_98E2D0((__int64 *)&v174, v21);
              if ( v175 <= 0x40 )
                goto LABEL_78;
LABEL_76:
              if ( v174 )
                operator delete[](v174);
              goto LABEL_78;
            }
            if ( v170 )
            {
              if ( v55 )
                goto LABEL_387;
              goto LABEL_390;
            }
LABEL_384:
            v95 = (unsigned __int64)v168;
            if ( v20 > 0x40 )
              v95 = *((_QWORD *)v168 + ((v20 - 1) >> 6));
            v12 = -1;
            if ( (v95 & (1LL << ((unsigned __int8)v20 - 1))) != 0 )
            {
LABEL_78:
              if ( v172 > 0x40 )
                goto LABEL_79;
LABEL_81:
              v20 = v169;
              goto LABEL_82;
            }
            goto LABEL_387;
          }
          sub_2206CD0(&v177, &v171, v169);
          v176 = 1;
          v175 = v178;
          v174 = (void *)v177;
        }
        else
        {
          sub_2206B70(&v177, &v159, v178);
          v20 = v169;
          v173 = 0;
          v53 = v178;
          v54 = v177;
          v172 = v178;
          v171 = (void *)v177;
          if ( v178 == v169 )
          {
            if ( !v170 )
            {
              v12 = sub_2205E20(&v168, &v171);
              goto LABEL_78;
            }
LABEL_390:
            v96 = 1LL << ((unsigned __int8)v53 - 1);
            if ( (unsigned int)v53 <= 0x40 )
            {
              v12 = 1;
              if ( (v54 & v96) != 0 )
                goto LABEL_82;
            }
            else
            {
              v12 = 1;
              if ( (v96 & *(_QWORD *)(v54 + 8LL * ((unsigned int)(v53 - 1) >> 6))) != 0 )
              {
LABEL_79:
                if ( v171 )
                  operator delete[](v171);
                goto LABEL_81;
              }
            }
LABEL_387:
            v12 = sub_2205DB0(&v168, &v171);
            goto LABEL_78;
          }
          v55 = 0;
          if ( v178 >= v169 )
            goto LABEL_216;
          sub_2206B70(&v177, &v171, v169);
          v176 = 0;
          v175 = v178;
          v174 = (void *)v177;
        }
        v12 = sub_98E2D0((__int64 *)&v168, (__int64 *)&v174);
        if ( v175 <= 0x40 )
          goto LABEL_78;
        goto LABEL_76;
      }
      goto LABEL_90;
    }
    v138 = v161;
    if ( v161 )
    {
      sub_2206CD0(&v177, &v159, v178);
      v25 = v178;
      v26 = v166;
      v170 = 1;
      v27 = v177;
      v169 = v178;
      v28 = v166;
      v168 = (void *)v177;
      if ( v178 == v166 )
      {
        if ( v167 )
          goto LABEL_223;
        goto LABEL_225;
      }
      if ( v178 >= v166 )
      {
LABEL_100:
        if ( (unsigned int)v25 > v26 )
        {
          v139 = v167;
          if ( v167 )
          {
            sub_2206CD0(&v177, &v165, v25);
            v173 = 1;
            v29 = v139;
          }
          else
          {
            sub_2206B70(&v177, &v165, v25);
            v173 = 0;
            v29 = 0;
          }
          v172 = v178;
          v171 = (void *)v177;
          v28 = v169;
          if ( v169 == v178 )
          {
            if ( v170 == v29 )
            {
              if ( !v29 )
              {
                v12 = sub_2205E20(&v171, &v168);
                goto LABEL_111;
              }
              goto LABEL_299;
            }
          }
          else
          {
            if ( v169 < v178 )
            {
              if ( v170 )
              {
                sub_2206CD0(&v177, &v168, v178);
                v176 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v168, v178);
                v176 = 0;
              }
              v175 = v178;
              v174 = (void *)v177;
              v12 = sub_98E2D0((__int64 *)&v171, (__int64 *)&v174);
              if ( v175 <= 0x40 )
                goto LABEL_111;
              goto LABEL_109;
            }
            if ( v169 > v178 )
            {
              if ( v29 )
              {
                sub_2206CD0(&v177, &v171, v169);
                v176 = 1;
              }
              else
              {
                sub_2206B70(&v177, &v171, v169);
                v176 = 0;
              }
              v175 = v178;
              v174 = (void *)v177;
              v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v168);
              if ( v175 <= 0x40 )
                goto LABEL_111;
LABEL_109:
              if ( v174 )
                operator delete[](v174);
LABEL_111:
              if ( v172 > 0x40 )
                goto LABEL_112;
LABEL_114:
              v28 = v169;
              goto LABEL_115;
            }
          }
          if ( v29 )
          {
            if ( !v170 )
            {
              v94 = (unsigned __int64)v168;
              if ( v169 > 0x40 )
                v94 = *((_QWORD *)v168 + ((v169 - 1) >> 6));
              if ( (v94 & (1LL << ((unsigned __int8)v169 - 1))) != 0 )
              {
                v12 = 1;
                goto LABEL_111;
              }
            }
            goto LABEL_299;
          }
          v81 = 1LL << ((unsigned __int8)v178 - 1);
          if ( v178 > 0x40 )
          {
            if ( (v81 & *(_QWORD *)(v177 + 8LL * ((v178 - 1) >> 6))) != 0 )
            {
              v12 = -1;
              goto LABEL_112;
            }
LABEL_299:
            v12 = sub_2205DB0(&v171, &v168);
            goto LABEL_111;
          }
          v12 = -1;
          if ( (v81 & v177) == 0 )
            goto LABEL_299;
LABEL_115:
          if ( v28 <= 0x40 )
          {
LABEL_118:
            v18 = v166;
            goto LABEL_86;
          }
LABEL_116:
          if ( v168 )
            operator delete[](v168);
          goto LABEL_118;
        }
        v28 = v25;
        if ( v167 )
        {
          if ( v138 )
            goto LABEL_223;
LABEL_221:
          v56 = 1LL << ((unsigned __int8)v28 - 1);
          if ( v28 <= 0x40 )
          {
            v12 = 1;
            if ( (v56 & v27) != 0 )
            {
              v18 = v26;
              goto LABEL_86;
            }
          }
          else
          {
            v12 = 1;
            if ( (v56 & *(_QWORD *)(v27 + 8LL * ((v28 - 1) >> 6))) != 0 )
              goto LABEL_116;
          }
          goto LABEL_223;
        }
LABEL_225:
        v58 = (__int64)v165;
        if ( v26 > 0x40 )
          v58 = v165[(v26 - 1) >> 6];
        v12 = -1;
        if ( (v58 & (1LL << ((unsigned __int8)v26 - 1))) != 0 )
          goto LABEL_115;
LABEL_223:
        v147 = v28;
        v57 = sub_2205DB0(&v165, &v168);
        v28 = v147;
        v12 = v57;
        goto LABEL_115;
      }
      sub_2206CD0(&v177, &v168, v166);
      v36 = v178;
      v37 = v166;
      v173 = 1;
      v38 = v177;
      v172 = v178;
      v171 = (void *)v177;
      if ( v178 == v166 )
      {
        if ( v167 )
          goto LABEL_338;
LABEL_335:
        v87 = (__int64)v165;
        if ( v37 > 0x40 )
          v87 = v165[(v37 - 1) >> 6];
        v12 = -1;
        if ( (v87 & (1LL << ((unsigned __int8)v37 - 1))) == 0 )
          goto LABEL_338;
LABEL_160:
        if ( (unsigned int)v36 <= 0x40 )
          goto LABEL_114;
LABEL_112:
        if ( v171 )
          operator delete[](v171);
        goto LABEL_114;
      }
      if ( v178 < v166 )
      {
        sub_2206CD0(&v177, &v171, v166);
        v176 = 1;
        v175 = v178;
        v174 = (void *)v177;
        goto LABEL_250;
      }
    }
    else
    {
      sub_2206B70(&v177, &v159, v178);
      v25 = v178;
      v26 = v166;
      v170 = 0;
      v27 = v177;
      v169 = v178;
      v28 = v166;
      v168 = (void *)v177;
      if ( v178 == v166 )
      {
        if ( !v167 )
        {
          v153 = v166;
          v92 = sub_2205E20(&v165, &v168);
          v28 = v153;
          v12 = v92;
          goto LABEL_115;
        }
        goto LABEL_221;
      }
      if ( v178 >= v166 )
        goto LABEL_100;
      sub_2206B70(&v177, &v168, v166);
      v36 = v178;
      v37 = v166;
      v173 = 0;
      v38 = v177;
      v172 = v178;
      v171 = (void *)v177;
      if ( v178 == v166 )
      {
        if ( v167 )
        {
LABEL_351:
          v89 = 1LL << ((unsigned __int8)v36 - 1);
          if ( (unsigned int)v36 <= 0x40 )
          {
            v12 = 1;
            if ( (v89 & v38) != 0 )
              goto LABEL_114;
          }
          else if ( (v89 & *(_QWORD *)(v38 + 8LL * ((unsigned int)(v36 - 1) >> 6))) != 0 )
          {
            v12 = 1;
            goto LABEL_112;
          }
          goto LABEL_338;
        }
        v154 = v178;
        v109 = sub_2205E20(&v165, &v171);
        LODWORD(v36) = v154;
        v12 = v109;
        goto LABEL_160;
      }
      if ( v178 < v166 )
      {
        sub_2206B70(&v177, &v171, v166);
        v176 = 0;
        v175 = v178;
        v174 = (void *)v177;
LABEL_250:
        v12 = sub_98E2D0((__int64 *)&v165, (__int64 *)&v174);
        if ( v175 > 0x40 )
          goto LABEL_157;
        goto LABEL_159;
      }
    }
    if ( (unsigned int)v36 > v37 )
    {
      if ( v167 )
      {
        sub_2206CD0(&v177, &v165, v36);
        v176 = 1;
      }
      else
      {
        sub_2206B70(&v177, &v165, v36);
        v176 = 0;
      }
      v175 = v178;
      v174 = (void *)v177;
      v12 = sub_98E2D0((__int64 *)&v174, (__int64 *)&v171);
      if ( v175 > 0x40 )
      {
LABEL_157:
        if ( v174 )
          operator delete[](v174);
      }
LABEL_159:
      LODWORD(v36) = v172;
      goto LABEL_160;
    }
    if ( v167 )
    {
      if ( !v138 )
        goto LABEL_351;
LABEL_338:
      v152 = v36;
      v88 = sub_2205DB0(&v165, &v171);
      LODWORD(v36) = v152;
      v12 = v88;
      goto LABEL_160;
    }
    goto LABEL_335;
  }
LABEL_4:
  if ( v157 > 0x40 && v156 )
    operator delete[](v156);
  return v3;
}
