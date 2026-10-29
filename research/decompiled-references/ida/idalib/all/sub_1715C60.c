void __fastcall sub_1715C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  _QWORD **v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v10; // r12
  bool v11; // cf
  bool v12; // zf
  unsigned __int64 v13; // rax
  char v14; // bp
  __int64 v15; // rax
  int v16; // eax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  _QWORD *v23; // rdi
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // r14
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // r9
  __int64 v34; // r12
  bool v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int8 v38; // al
  bool v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rbx
  __int64 v45; // rbp
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  char v52; // al
  __int64 *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rbp
  __int64 v57; // rax
  int v58; // eax
  unsigned __int64 v59; // rax
  char v60; // al
  __int64 v61; // r9
  __int64 *v62; // rax
  int v63; // ecx
  unsigned int v64; // edi
  __int64 v65; // rdx
  int v66; // esi
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // rdx
  __int64 *v70; // rdi
  __int64 v71; // rbp
  unsigned int v72; // edx
  int v73; // edx
  unsigned __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rbp
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r13
  unsigned __int64 v80; // rdx
  _QWORD *v81; // rsi
  _QWORD *v82; // rdi
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  unsigned __int8 v85; // al
  __int64 v86; // rdx
  _QWORD *v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  char v91; // r14
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // r14d
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // r14d
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // eax
  unsigned __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rbx
  __int64 v108; // r14
  __int64 v109; // rcx
  unsigned __int64 v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 *v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __m128 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  int v123; // r14d
  __int64 v124; // rdx
  __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  char v131; // r14
  char v132; // al
  __int64 *v133; // r15
  unsigned __int64 v134; // rax
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rax
  char v141; // al
  char v142; // al
  char v143; // al
  char v144; // al
  char v145; // al
  char v146; // al
  _QWORD *v147; // rdi
  __int64 v148; // rax
  __int64 *v149; // rax
  _QWORD *v150; // rax
  _QWORD *v151; // rbp
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // rax
  __int64 v155; // [rsp+8h] [rbp-180h]
  __int64 v156; // [rsp+8h] [rbp-180h]
  __int64 v157; // [rsp+8h] [rbp-180h]
  __int64 v160; // [rsp+10h] [rbp-178h]
  __int64 v161; // [rsp+10h] [rbp-178h]
  __int64 v162; // [rsp+10h] [rbp-178h]
  unsigned int v163; // [rsp+10h] [rbp-178h]
  __int64 v164; // [rsp+10h] [rbp-178h]
  __int64 v165; // [rsp+10h] [rbp-178h]
  __int64 v166; // [rsp+10h] [rbp-178h]
  unsigned __int64 v167; // [rsp+18h] [rbp-170h]
  __int64 v168; // [rsp+20h] [rbp-168h]
  __int64 v169; // [rsp+28h] [rbp-160h]
  __int64 v170; // [rsp+28h] [rbp-160h]
  __int64 *v171; // [rsp+38h] [rbp-150h]
  int v172; // [rsp+40h] [rbp-148h]
  char v173; // [rsp+57h] [rbp-131h]
  __int64 v174; // [rsp+58h] [rbp-130h]
  __int64 v175; // [rsp+60h] [rbp-128h]
  __int64 v176; // [rsp+68h] [rbp-120h]
  int v177; // [rsp+70h] [rbp-118h]
  int v178; // [rsp+74h] [rbp-114h]
  __int64 v179; // [rsp+78h] [rbp-110h]
  char v180; // [rsp+87h] [rbp-101h] BYREF
  __int64 *v181; // [rsp+88h] [rbp-100h] BYREF
  __int64 *v182[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v183; // [rsp+A0h] [rbp-E8h]
  __int64 v184; // [rsp+A4h] [rbp-E4h]
  int v185; // [rsp+B0h] [rbp-D8h]
  __m128 v186; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v187; // [rsp+C8h] [rbp-C0h]
  char v188; // [rsp+D0h] [rbp-B8h]
  __int64 v189; // [rsp+D8h] [rbp-B0h]
  __int64 v190; // [rsp+E0h] [rbp-A8h]
  __int64 v191; // [rsp+E8h] [rbp-A0h]
  __m128 v192; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v193; // [rsp+100h] [rbp-88h]
  _BYTE v194[112]; // [rsp+118h] [rbp-70h] BYREF

  v6 = (_QWORD **)a2;
  v7 = a1;
  if ( *(_DWORD *)(a2 + 24) )
  {
    sub_1706C30(a1, a2);
    return;
  }
  v8 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 28LL) & 0x7Fu) - 53 <= 1 )
  {
    v10 = *(_QWORD *)(a2 + 72);
    v11 = *(_DWORD *)(a2 + 32) == 0;
    v12 = *(_DWORD *)(a2 + 32) == 1;
    v192.m128_u64[0] = *(_QWORD *)(a2 + 40);
    v13 = *(_QWORD *)(a2 + 48);
    v14 = v11 || v12;
    *(_OWORD *)(a2 + 40) = 0;
    v192.m128_u64[1] = v13;
    v15 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = 0;
    v193 = v15;
    v16 = sub_16FE9F0(a1, *(_QWORD *)(v8 + 64));
    v17 = *(__int64 **)(v8 + 64);
    v183 = v16;
    v189 = v10;
    v186 = v192;
    v182[0] = v17;
    v192 = 0;
    v187 = v193;
    v184 = 0;
    v185 = 0;
    v193 = 0;
    v188 = v188 & 0x80 | 0x40;
    v190 = 0;
    v191 = 0;
    sub_15A3440((unsigned int *)v182, v14, (__int64)v17, v18, v19, v20);
    sub_1705410((__int64)&v192);
    v190 = v8;
    sub_17048E0((__int64)&v192, (__int64)v182);
    sub_1715C60(a1, &v192, a3, a4, 0, a6);
    sub_1705410((__int64)v194);
    sub_1705410((__int64)&v186);
    return;
  }
  v21 = *(_QWORD *)a2;
  v180 = 0;
  if ( (unsigned __int8)sub_16FFF90(a1, v21, &v180) )
  {
    v23 = *v6;
    v24 = a6;
    v25 = *((_BYTE *)*v6 + 28) & 0x7F;
    if ( v25 == 71 )
      v25 = *(_BYTE *)(v23[6] + 28LL) & 0x7F;
    if ( v25 != 38 )
    {
      if ( a4 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 176) + 232LL) + 1LL) & 8) == 0
          || (unsigned __int8)sub_16FF5F0(v7 + 176, (__int64)v6, a3, a4) )
        {
          return;
        }
        v23 = *v6;
        v24 = a6;
      }
      v160 = v24;
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 32LL))(v23);
      sub_1705CB0(&v192, v7 + 24, v26);
      v29 = v193;
      if ( !(_BYTE)v193 )
        return;
      v30 = v160;
      if ( v180 )
      {
        *((_BYTE *)v6 + 64) |= 8u;
        *((_DWORD *)v6 + 4) = 75;
      }
      else if ( *(__int64 (__fastcall **)(__int64, __int64))(v7 + 200) == sub_16FFA20 && !*(_QWORD *)(v7 + 208) )
      {
        if ( v6[9] )
          goto LABEL_18;
        if ( a5 )
        {
          v82 = (_QWORD *)((*v6)[2] & 0xFFFFFFFFFFFFFFF8LL);
          if ( ((*v6)[2] & 4) != 0 )
            v82 = (_QWORD *)*v82;
          v83 = sub_B8EAA0((__int64)v82);
          v30 = v160;
          if ( (*(_BYTE *)(v83 + 8) & 0x7Fu) - 59 > 2 )
          {
            if ( ((_BYTE)v6[8] & 4) == 0 )
              goto LABEL_19;
          }
          else
          {
            *((_BYTE *)v6 + 64) |= 4u;
          }
          if ( v6[9] )
          {
LABEL_19:
            *((_DWORD *)v6 + 4) += 2;
            *((_BYTE *)v6 + 64) |= 2u;
            goto LABEL_20;
          }
          v31 = *((_BYTE *)v6 + 64);
        }
        else
        {
          v31 = *((_BYTE *)v6 + 64);
          if ( (v31 & 4) == 0 )
            goto LABEL_20;
        }
LABEL_84:
        if ( (v31 & 8) != 0 )
          goto LABEL_18;
        v84 = (*v6)[2] & 0xFFFFFFFFFFFFFFF8LL;
        if ( ((*v6)[2] & 4) != 0 )
          v84 = *(_QWORD *)v84;
        v85 = *(_BYTE *)(v84 + 8) & 0x7F;
        if ( v85 == 24 )
        {
          v86 = v84 - 48;
          if ( v86 )
          {
            v164 = v30;
            v87 = sub_E91C40(*(_QWORD **)(*(_QWORD *)(v7 + 176) + 248LL), 0, v86);
            v30 = v164;
            v6[9] = v87;
            goto LABEL_18;
          }
          goto LABEL_126;
        }
        if ( (unsigned int)v85 - 58 > 4 || v84 == 64 )
        {
LABEL_126:
          *((_BYTE *)v6 + 64) &= ~4u;
          goto LABEL_18;
        }
        v147 = *(_QWORD **)(*(_QWORD *)(v7 + 176) + 248LL);
        v148 = *(_QWORD *)(v84 - 16);
        if ( v148 )
        {
          v149 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
        }
        else
        {
          v166 = v30;
          v153 = sub_A7AA70((__int64)v147, v84 - 64, v84, v27, v28, v30);
          v30 = v166;
          v149 = (__int64 *)(v153 & 0xFFFFFFFFFFFFFFF0LL);
          v147 = *(_QWORD **)(*(_QWORD *)(v7 + 176) + 248LL);
        }
        v165 = v30;
        v150 = sub_E91A00(v147, 0, *v149);
        v30 = v165;
        v6[9] = v150;
LABEL_18:
        if ( !a5 )
        {
LABEL_20:
          v32 = (__int64)v6;
          v161 = v30;
          sub_17044D0((_QWORD *)v7, (__int64 *)v6, (_DWORD *)v6 + 4, v27, v28, v30);
          v33 = v161;
          v34 = (__int64)*v6;
          if ( !*(_BYTE *)(v7 + 292) || (*(_BYTE *)(v34 + 28) & 0x7Fu) - 35 > 3 )
          {
LABEL_24:
            if ( *(_DWORD *)(v7 + 304) == 21 )
            {
              v38 = *(_BYTE *)(v34 + 28) & 0x7F;
              if ( v38 == 71 )
              {
                v34 = *(_QWORD *)(v34 + 48);
                v38 = *(_BYTE *)(v34 + 28) & 0x7F;
              }
              v155 = v33;
              if ( (unsigned int)v38 - 35 <= 3 )
              {
                v39 = sub_B979F0((_QWORD *)v34);
                v43 = v155;
                if ( !v39 )
                {
                  if ( !*(_QWORD *)(*(_QWORD *)(v7 + 176) + 544LL) )
                    goto LABEL_47;
                  v156 = v7;
                  v44 = *(_QWORD *)(*(_QWORD *)(v7 + 176) + 544LL);
                  v45 = v43;
                  while ( 1 )
                  {
                    if ( (*(_BYTE *)(v44 + 8) & 0x7Fu) - 35 <= 3 && v44 != 72 )
                    {
                      v46 = sub_B72690(v44);
                      if ( !v46 )
                        BUG();
                      v47 = *(_QWORD *)(v46 + 64);
                      if ( !v47 || (*(_BYTE *)(v47 + 10) & 0x20) == 0 )
                        break;
                    }
                    v44 = sub_B72690(v44);
                    if ( !v44 )
                    {
                      v7 = v156;
                      v43 = v45;
                      goto LABEL_47;
                    }
                  }
                  v162 = v45;
                  v48 = v44;
                  v7 = v156;
                  v49 = sub_B72690(v48);
                  v43 = v162;
                  if ( !v49 )
                    goto LABEL_47;
                  v157 = v49 - 64;
                  if ( v49 == 64 )
                    goto LABEL_47;
                  v50 = sub_B72690(v34 + 72);
                  if ( !v50 || v157 != v50 - 64 )
                  {
                    v51 = sub_B72690(v34 + 72);
                    if ( v51 )
                      v51 -= 64LL;
                    v32 = v51;
                    v52 = sub_B70650(v157, v51);
                    v43 = v162;
                    if ( !v52 )
                    {
LABEL_47:
                      v53 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
                      if ( v53 && (v151 = sub_F63270(*v53, v32, v40, v41, v42, (__int64)v53)) != nullptr )
                      {
                        v152 = sub_B72690(v34 + 72);
                        if ( !v152 || (v152 -= 64LL, v151 != (_QWORD *)v152) )
                          v29 = sub_B70650((__int64)v151, v152);
                      }
                      else
                      {
                        v29 = 0;
                      }
                    }
                  }
                }
              }
            }
            *((_BYTE *)v6 + 64) = ((v29 & 1) << 6) | (_BYTE)v6[8] & 0xBF;
            sub_1706C30(v7, (__int64)v6);
            if ( !v180 )
            {
              sub_17048E0((__int64)&v192, (__int64)v6);
              sub_1714200(v7, &v192);
              sub_1705410((__int64)v194);
            }
            return;
          }
          v35 = sub_B979F0(*v6);
          v33 = v161;
          if ( v35 )
          {
            v34 = (__int64)*v6;
            goto LABEL_24;
          }
          v56 = sub_1703690(v34, (__int64)v6, v36, v37);
          v57 = *(_QWORD *)(v7 + 280);
          if ( v56 == v57 )
          {
            --*((_DWORD *)v6 + 4);
          }
          else
          {
            if ( (v56 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v88 = ~(v56 & 7) & v57;
              if ( ((v88 >> 4) & 3) == ((v56 >> 4) & 3) )
                v88 &= 0xFFFFFFFFFFFFFFCFLL;
              if ( ((v88 >> 6) & 7) == ((v56 >> 6) & 7) )
                v88 &= 0xFFFFFFFFFFFFFE3FLL;
              if ( (unsigned int)v88 >> 9 == (unsigned int)v56 >> 9 )
                v88 &= 0xFFFFFFFF000001FFLL;
              v54 = (unsigned int)v88;
              v32 = HIDWORD(v88);
              if ( HIDWORD(v56) == HIDWORD(v88) )
                v88 = (unsigned int)v88;
            }
            else
            {
              v54 = ~v56;
              v88 = ~v56 & v57;
            }
            if ( v88 )
              return;
          }
          v58 = sub_1703830(v34, v32, v54, v55);
          if ( v58 == 1 )
          {
            if ( *(_DWORD *)(v7 + 288) != 1 && (v56 & 1) == 0 )
              return;
          }
          else if ( v58 == 2 && *(_DWORD *)(v7 + 288) == 1 )
          {
            return;
          }
          v59 = *(_QWORD *)(v34 + 40);
          v192.m128_u64[0] = a3;
          v192.m128_u64[1] = v59;
          v60 = sub_16FE710((__int64 *)(v7 + 256), (__int64 *)&v192, &v181);
          v61 = v161;
          v12 = v60 == 0;
          v62 = v181;
          if ( !v12 )
            goto LABEL_62;
          v63 = *(_DWORD *)(v7 + 264);
          v64 = *(_DWORD *)(v7 + 272);
          v182[0] = v181;
          v65 = (unsigned int)(v63 + 1);
          v66 = 2 * v64;
          v67 = (unsigned int)(4 * v65);
          v68 = 3 * v64;
          if ( (unsigned int)v67 < (unsigned int)v68 )
          {
            v68 = v64 >> 3;
            if ( v64 - *(_DWORD *)(v7 + 268) - (unsigned int)v65 > (unsigned int)v68 )
              goto LABEL_59;
            v66 = v64;
          }
          sub_17002D0((__int64 *)(v7 + 256), v66, v65, v67, v68, v161);
          sub_16FE710((__int64 *)(v7 + 256), (__int64 *)&v192, v182);
          v61 = v161;
          LODWORD(v65) = *(_DWORD *)(v7 + 264) + 1;
          v62 = v182[0];
LABEL_59:
          v12 = *v62 == -4096;
          *(_DWORD *)(v7 + 264) = v65;
          if ( !v12 || v62[1] != -1 )
            --*(_DWORD *)(v7 + 268);
          *v62 = v192.m128_u64[0];
          v69 = v192.m128_u64[1];
          *((_OWORD *)v62 + 1) = 0;
          v62[1] = v69;
LABEL_62:
          v169 = v61;
          v70 = v62 + 2;
          v168 = (__int64)(v62 + 2);
          v71 = (__int64)sub_16FE500(v62 + 2);
          v163 = v72;
          v173 = v29;
          v167 = sub_16FE540(v70);
          v172 = v73;
          v171 = (__int64 *)v6;
          v174 = v169;
          while ( 1 )
          {
            if ( v167 == v71 )
            {
LABEL_73:
              if ( v163 == v172 )
              {
                v32 = v34;
                v6 = (_QWORD **)v171;
                v29 = v173;
                sub_16FF6E0(v168, v34, -1431655765 * ((__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)v7) >> 5));
                v34 = *v171;
                v33 = v174;
                goto LABEL_24;
              }
            }
            while ( 1 )
            {
              v74 = v71 & 0xFFFFFFFFFFFFFFF8LL;
              v170 = (v71 >> 2) & 1;
              if ( ((v71 >> 2) & 1) != 0 || (v75 = v163, !v74) )
                v75 = *(unsigned int *)(v74 + 8);
              v76 = *(_QWORD *)v7 + 96 * v75;
              v77 = sub_B8C1B0(a3);
              v78 = *(_QWORD *)(v34 + 16);
              v79 = *(_QWORD *)v76;
              if ( (v78 & 4) != 0 )
                v80 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v80 = v78 & 0xFFFFFFFFFFFFFFF8LL;
              v81 = (_QWORD *)(*(_QWORD *)(v79 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v79 + 16) & 4) != 0 )
                v81 = (_QWORD *)*v81;
              if ( v81 == (_QWORD *)v80 )
              {
                v175 = sub_B8C330(v77);
                v177 = *(_DWORD *)(v7 + 288);
                v91 = sub_B748A0(v34, (__int64)v81, v89, v90);
                if ( v91 == sub_B748A0(v79, (__int64)v81, v92, v93) )
                {
                  v96 = sub_B76070(v34, (__int64)v81, v94, v95);
                  if ( v96 == (unsigned int)sub_B76070(v79, (__int64)v81, v97, v98) )
                  {
                    v99 = sub_B770E0(v34, (__int64)v81);
                    if ( v99 == (unsigned int)sub_B770E0(v79, (__int64)v81) )
                    {
                      v102 = sub_B76070(v34, (__int64)v81, v100, v101);
                      v106 = 0;
                      v176 = v7;
                      v178 = v102;
                      v107 = 0;
                      while ( v178 != (_DWORD)v107 )
                      {
                        v108 = *(_QWORD *)(v79 + 120);
                        sub_B76070(v79, (__int64)v81, v106, v103);
                        v109 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v108 + 8 * v107) + 48LL)
                                                & 0xFFFFFFFFFFFFFFF0LL];
                        v110 = v109 & 0xFFFFFFFFFFFFFFF8LL
                             | ((unsigned __int8)v109 | *(_BYTE *)(*(_QWORD *)(v108 + 8 * v107) + 48LL)) & 7;
                        v179 = *(_QWORD *)(v34 + 120);
                        sub_B76070(v34, (__int64)v81, v111, v179);
                        v112 = *(_QWORD *)(v179 + 8 * v107++);
                        v113 = *(_QWORD *)(v112 + 48);
                        v114 = *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL];
                        LOBYTE(v113) = v114 | v113;
                        v103 = v114 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( v110 != (v103 | v113 & 7) )
                        {
                          v7 = v176;
                          goto LABEL_71;
                        }
                      }
                      v7 = v176;
                      v182[0] = (__int64 *)sub_1705DC0(v34, (__int64)v81, v106, v103, v104, v105);
                      v182[1] = v115;
                      if ( sub_1705E30(v182) )
                      {
                        v120.m128_u64[0] = sub_1705DC0(v79, (__int64)v81, v116, v117, v118, v119);
                        v192 = v120;
                        if ( sub_1705E30((__int64 **)&v192) )
                        {
                          v123 = sub_1703830(v34, (__int64)v81, v121, v122);
                          v126 = sub_1703830(v79, (__int64)v81, v124, v125);
                          if ( v177 == 2 && v123 != v126 )
                          {
                            v133 = v171;
                            if ( v123 == 2 )
                            {
LABEL_111:
                              *(_QWORD *)v76 = *v133;
                              *(_QWORD *)(v76 + 8) = v133[1];
                              *(_DWORD *)(v76 + 16) = *((_DWORD *)v133 + 4);
                              *(_DWORD *)(v76 + 20) = *((_DWORD *)v133 + 5);
                              *(_DWORD *)(v76 + 24) = *((_DWORD *)v133 + 6);
                              *(_DWORD *)(v76 + 28) = *((_DWORD *)v133 + 7);
                              *(_DWORD *)(v76 + 32) = *((_DWORD *)v133 + 8);
                              v134 = *(_QWORD *)(v76 + 40);
                              *(_QWORD *)(v76 + 40) = 0;
                              v192.m128_u64[0] = v134;
                              v135 = *(_QWORD *)(v76 + 48);
                              *(_QWORD *)(v76 + 48) = 0;
                              v192.m128_u64[1] = v135;
                              v136 = *(_QWORD *)(v76 + 56);
                              *(_QWORD *)(v76 + 56) = 0;
                              v193 = v136;
                              *(_QWORD *)(v76 + 40) = v133[5];
                              v137 = v133[6];
                              v133[5] = 0;
                              v138 = *(_QWORD *)(v76 + 48);
                              *(_QWORD *)(v76 + 48) = v137;
                              v139 = v133[7];
                              v133[6] = v138;
                              v140 = *(_QWORD *)(v76 + 56);
                              *(_QWORD *)(v76 + 56) = v139;
                              v133[7] = v140;
                              sub_1705410((__int64)&v192);
                              v141 = v133[8] & 1 | *(_BYTE *)(v76 + 64) & 0xFE;
                              *(_BYTE *)(v76 + 64) = v141;
                              v142 = v133[8] & 2 | v141 & 0xFD;
                              *(_BYTE *)(v76 + 64) = v142;
                              v143 = v133[8] & 4 | v142 & 0xFB;
                              *(_BYTE *)(v76 + 64) = v143;
                              v144 = v133[8] & 8 | v143 & 0xF7;
                              *(_BYTE *)(v76 + 64) = v144;
                              v145 = v133[8] & 0x10 | v144 & 0xEF;
                              *(_BYTE *)(v76 + 64) = v145;
                              v146 = v133[8] & 0x20 | v145 & 0xDF;
                              *(_BYTE *)(v76 + 64) = v146;
                              *(_BYTE *)(v76 + 64) = v133[8] & 0x40 | v146 & 0xBF;
                              *(_QWORD *)(v76 + 72) = v133[9];
                              *(_QWORD *)(v76 + 80) = v133[10];
                              *(_QWORD *)(v76 + 88) = v133[11];
                              return;
                            }
                          }
                          else
                          {
                            v182[0] = (__int64 *)sub_1703690(v34, (__int64)v81, v127, v128);
                            v192.m128_u64[0] = sub_1703690(v79, (__int64)v81, v129, v130);
                            v131 = sub_16A8C50((unsigned __int64 *)v182, v192.m128_u64[0], v175);
                            v132 = sub_16A8C50((unsigned __int64 *)&v192, (unsigned __int64)v182[0], v175);
                            if ( v131 == v132 )
                              goto LABEL_71;
                            v133 = v171;
                            if ( v132 )
                              goto LABEL_111;
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
LABEL_71:
              if ( !v170 )
                break;
              v71 = (v74 + 16) | 4;
              if ( v167 == v71 )
                goto LABEL_73;
            }
            v163 = 0;
            v71 = 0;
          }
        }
        goto LABEL_19;
      }
      v31 = *((_BYTE *)v6 + 64);
      if ( (v31 & 4) == 0 || v6[9] )
        goto LABEL_18;
      goto LABEL_84;
    }
  }
}
