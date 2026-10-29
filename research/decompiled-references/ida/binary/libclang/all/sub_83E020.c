char __fastcall sub_83E020(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // r11
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r8
  char v17; // r15
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rax
  bool v21; // al
  char v22; // al
  unsigned int v23; // ebp
  void *v24; // r12
  char v25; // r8
  unsigned int v26; // eax
  unsigned int v28; // r14d
  unsigned int v29; // r14d
  char v30; // r15
  unsigned int v31; // eax
  void *v32; // rdx
  void *v33; // r14
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r11
  char v37; // r14
  unsigned int v38; // edi
  __int64 v39; // rsi
  void *v40; // rax
  __int64 v41; // r11
  __int64 v42; // r11
  void *v43; // rdi
  __int64 v44; // rax
  char v45; // r14
  unsigned int v46; // edi
  __int64 v47; // rsi
  void *v48; // rax
  __int64 v49; // r11
  unsigned __int64 v50; // r15
  unsigned int v51; // r14d
  int v52; // eax
  __int64 v53; // r11
  int v54; // r15d
  char v55; // dl
  unsigned int v56; // r15d
  __int64 v57; // rbp
  unsigned __int64 v58; // rbp
  unsigned int v59; // eax
  unsigned __int8 v60; // si
  char v61; // si
  unsigned int v62; // ebp
  char v63; // r14
  __int64 v64; // r12
  __int64 v65; // r12
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 v68; // rsi
  unsigned __int64 v69; // r15
  unsigned int v70; // r14d
  int v71; // eax
  __int64 v72; // r11
  int v73; // r15d
  unsigned __int8 **v74; // r15
  char v75; // r15
  unsigned int v76; // ebp
  unsigned __int64 v77; // r12
  __int64 v78; // rsi
  unsigned int v79; // ebp
  void *v80; // r12
  __int64 *v81; // rbx
  void *v82; // rax
  __int64 v83; // rax
  __int128 v84; // rax
  unsigned __int8 **v85; // r15
  unsigned int v86; // eax
  char v87; // al
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  int v91; // eax
  unsigned int v92; // eax
  bool v93; // cc
  unsigned int v94; // eax
  __int64 v95; // r14
  unsigned int v96; // eax
  void *v97; // rax
  unsigned int v98; // ecx
  unsigned __int64 v99; // rax
  char v100; // al
  char v102; // [rsp+8h] [rbp-F0h]
  char v105; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v109; // [rsp+8h] [rbp-F0h]
  __int64 v110; // [rsp+10h] [rbp-E8h]
  __int64 v111; // [rsp+10h] [rbp-E8h]
  __int64 v112; // [rsp+10h] [rbp-E8h]
  __int64 v113; // [rsp+10h] [rbp-E8h]
  __int64 v114; // [rsp+10h] [rbp-E8h]
  __int64 v115; // [rsp+10h] [rbp-E8h]
  char v116; // [rsp+10h] [rbp-E8h]
  char v117; // [rsp+10h] [rbp-E8h]
  __int64 v118; // [rsp+10h] [rbp-E8h]
  char v119; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v120; // [rsp+10h] [rbp-E8h]
  __int64 v121; // [rsp+10h] [rbp-E8h]
  __int64 v122; // [rsp+10h] [rbp-E8h]
  __int64 v123; // [rsp+10h] [rbp-E8h]
  char v124; // [rsp+10h] [rbp-E8h]
  __int64 v127; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v128; // [rsp+10h] [rbp-E8h]
  __int64 v129; // [rsp+18h] [rbp-E0h]
  unsigned int v130; // [rsp+20h] [rbp-D8h]
  __int64 v131; // [rsp+20h] [rbp-D8h]
  void *v132; // [rsp+28h] [rbp-D0h]
  void *v133; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v134; // [rsp+38h] [rbp-C0h]
  char v135; // [rsp+3Ch] [rbp-BCh]
  void *v136; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v137; // [rsp+48h] [rbp-B0h]
  void *v138; // [rsp+50h] [rbp-A8h] BYREF
  size_t v139; // [rsp+58h] [rbp-A0h]
  void *v140; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v141; // [rsp+78h] [rbp-80h]
  char v142; // [rsp+7Ch] [rbp-7Ch]

  v10 = (_QWORD *)a5;
  switch ( a4 )
  {
    case 2:
      return sub_839F40(a1, a2, a3, a5, 2 * *(_DWORD *)(a3 + 8), a6);
    case 3:
    case 4:
      v12 = sub_8320B0(a5, nullptr);
      v15 = a5;
      v16 = v12;
      if ( !(_BYTE)v12 )
      {
        v17 = *(_BYTE *)(a5 + 12);
        if ( v17 )
          goto LABEL_10;
        v18 = *(_DWORD *)(a5 + 8);
        v19 = *(_QWORD *)a5;
        v14 = v18 - 1;
        v20 = 1LL << ((unsigned __int8)v18 - 1);
        if ( v18 > 0x40 )
        {
          v14 = (unsigned int)v14 >> 6;
          if ( (*(_QWORD *)(v19 + 8LL * (unsigned int)v14) & v20) == 0 )
            goto LABEL_9;
          v120 = v16;
          v91 = sub_2587660(a5);
          v15 = a5;
          v16 = v120;
          v21 = v18 == v91;
        }
        else
        {
          if ( (v20 & v19) == 0 )
          {
LABEL_9:
            v17 = 1;
            goto LABEL_10;
          }
          if ( !v18 )
          {
LABEL_185:
            v17 = *(_BYTE *)(a3 + 12);
            v109 = v16;
            if ( v17 )
            {
              if ( a4 != 4 )
                goto LABEL_12;
              goto LABEL_190;
            }
            v118 = v15;
            v87 = sub_831890((__int64 *)a3, v19, v13);
            v15 = v118;
            LOBYTE(v16) = v109;
            if ( !v87 )
            {
              v17 = 1;
              if ( a4 != 4 )
                goto LABEL_188;
              goto LABEL_223;
            }
            v131 = v118;
            v127 = *(_QWORD *)(a2 + 8);
            sub_831A30((__int64)&v138, a3, (unsigned int)(*(_DWORD *)(a3 + 8) + 1));
            sub_831B20((__int64)&v140, (__int64)&v138);
            v100 = sub_82CA30(a1, a2, (__int64)&v140, v127);
            v16 = v109;
            v15 = v131;
            v17 = v100;
            if ( v141 > 0x40 && v140 )
            {
              operator delete[](v140);
              v15 = v131;
              v16 = v109;
            }
            if ( (unsigned int)v139 > 0x40 && v138 )
            {
              v129 = v15;
              v128 = v16;
              operator delete[](v138);
              v16 = v128;
              v15 = v129;
            }
LABEL_10:
            v22 = *(_BYTE *)(a3 + 12);
            if ( a4 != 4 )
            {
              if ( v22 )
              {
LABEL_12:
                sub_2588A50(&v140, a3, v15, v14, v16);
                v23 = v141;
                v24 = v140;
                v25 = 1;
LABEL_13:
                if ( *(_DWORD *)(a6 + 8) > 0x40u )
                {
                  if ( *(_QWORD *)a6 )
                  {
                    v102 = v25;
                    operator delete[](*(void **)a6);
                    v25 = v102;
                  }
                }
                *(_QWORD *)a6 = v24;
                *(_DWORD *)(a6 + 8) = v23;
                *(_BYTE *)(a6 + 12) = v25;
                return v17;
              }
LABEL_188:
              v119 = v16;
              sub_2588D90(&v140, a3, v15);
              v23 = v141;
              v24 = v140;
              v25 = v119;
              goto LABEL_13;
            }
            if ( v22 )
            {
LABEL_190:
              sub_25893F0(&v140, a3, v15, v14, v16);
              v23 = v141;
              v24 = v140;
              v25 = 1;
              goto LABEL_13;
            }
LABEL_223:
            v124 = v16;
            sub_2589B90(&v140, a3, v15);
            v23 = v141;
            v24 = v140;
            v25 = v124;
            goto LABEL_13;
          }
          v14 = 64 - v18;
          v21 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v18) == v19;
        }
        if ( !v21 )
          goto LABEL_9;
        goto LABEL_185;
      }
      v81 = (__int64 *)sub_A2E130(a1, a2, 2306, 0);
      v82 = (void *)sub_AC7B80(*(_QWORD *)(a2 + 24));
      if ( v81 )
      {
        v140 = v82;
        LOBYTE(v141) = 1;
        sub_839C90(v81, (__int64 *)&v140);
      }
      return 0;
    case 5:
      v26 = *(_DWORD *)(a3 + 8);
      if ( !*(_BYTE *)(a3 + 12) )
        return sub_83A580(a1, a2, a3, a5, v26 + 1, a6);
      v141 = *(_DWORD *)(a3 + 8);
      if ( v26 > 0x40 )
      {
        sub_2585B30(&v140);
        v10 = (_QWORD *)a5;
      }
      else
      {
        v140 = *(void **)a3;
      }
      sub_2586200(&v140, v10);
      v79 = v141;
      v80 = v140;
      if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
        operator delete[](*(void **)a6);
      *(_QWORD *)a6 = v80;
      *(_DWORD *)(a6 + 8) = v79;
      *(_BYTE *)(a6 + 12) = 1;
      return 1;
    case 6:
      v17 = *(_BYTE *)(a3 + 12);
      v28 = *(_DWORD *)(a3 + 8);
      if ( v17 )
      {
        v141 = *(_DWORD *)(a3 + 8);
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v140);
          v10 = (_QWORD *)a5;
        }
        else
        {
          v140 = *(void **)a3;
        }
        sub_25863C0(&v140, v10);
        BYTE4(v139) = 1;
        LODWORD(v139) = v141;
        v138 = v140;
        sub_821230(a6, (__int64)&v138);
        if ( (unsigned int)v139 > 0x40 )
        {
          v34 = v138;
          if ( v138 )
          {
LABEL_40:
            operator delete[](v34);
            return v17;
          }
        }
      }
      else
      {
        v29 = v28 + 1;
        sub_831A30((__int64)&v136, a5, v29);
        sub_831A30((__int64)&v138, a3, v29);
        v141 = v139;
        if ( (unsigned int)v139 > 0x40 )
          sub_2585B30(&v140);
        else
          v140 = v138;
        sub_25863C0(&v140, &v136);
        v135 = 0;
        v134 = v141;
        v133 = v140;
        if ( (unsigned int)v139 > 0x40 && v138 )
          operator delete[](v138);
        if ( v137 > 0x40 && v136 )
          operator delete[](v136);
        v30 = v135;
        sub_25877E0(&v140, &v133, *(unsigned int *)(a3 + 8));
        v31 = v141;
        v32 = v140;
        if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
        {
          v132 = v140;
          v130 = v141;
          operator delete[](*(void **)a6);
          v32 = v132;
          v31 = v130;
        }
        *(_QWORD *)a6 = v32;
        *(_DWORD *)(a6 + 8) = v31;
        *(_BYTE *)(a6 + 12) = v30;
        sub_831A30((__int64)&v140, a6, v29);
        v33 = v140;
        if ( v141 <= 0x40 )
        {
          v17 = v140 == v133;
        }
        else
        {
          v17 = sub_2586760(&v140, &v133);
          if ( v33 )
            operator delete[](v33);
        }
        if ( !v17 )
        {
          if ( *(_BYTE *)(a1 + 963) )
          {
            v95 = sub_6BB140(*(_QWORD *)(a1 + 16));
            v96 = sub_8124E0(a2);
            sub_C6CF40(&v140, v95, v96, 2353);
            sub_83DF30((__int64 *)&v138, a6, 10, *(_BYTE *)(a6 + 12) ^ 1, 0, 1u, 1u);
            sub_838D50((unsigned __int8 **)&v140, v138, v139);
            sub_8356A0((unsigned __int8 **)&v140, *(_QWORD *)(a2 + 8), 8u);
            v97 = (void *)sub_AC7B80(a2);
            LOBYTE(v137) = 1;
            v136 = v97;
            sub_839C90((__int64 *)&v140, (__int64 *)&v136);
            std::string::_M_dispose();
            sub_83BB20((__int64)&v140);
          }
          v17 = sub_82CA30(a1, a2, (__int64)&v133, *(_QWORD *)(a2 + 8));
        }
        if ( v134 > 0x40 )
        {
          v34 = v133;
          if ( v133 )
            goto LABEL_40;
        }
      }
      return v17;
    case 7:
      v35 = sub_A2CB40(a1);
      v36 = a5;
      v37 = *(_BYTE *)(a5 + 12);
      if ( (*(_BYTE *)(v35 + 47) & 0x20) == 0 )
      {
        if ( v37 )
          goto LABEL_65;
        v38 = *(_DWORD *)(a5 + 8);
        v39 = *(_QWORD *)a5;
        if ( v38 > 0x40 )
          v39 = *(_QWORD *)(v39 + 8LL * ((v38 - 1) >> 6));
        if ( (v39 & (1LL << ((unsigned __int8)v38 - 1))) == 0 )
          goto LABEL_65;
        v40 = (void *)sub_A2E240(a1, a2, 2242, 0);
        v41 = a5;
        v140 = v40;
        if ( v40 )
        {
          sub_829A30((unsigned __int8 ***)&v140, a5);
          v41 = a5;
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
        if ( *(_DWORD *)(a1 + 964) <= 1u && !*(_BYTE *)(a1 + 963) )
          return 0;
        v110 = v41;
        sub_831B20((__int64)&v140, v41);
        sub_821230(v110, (__int64)&v140);
        v42 = v110;
        if ( v141 <= 0x40 )
          goto LABEL_119;
        v43 = v140;
        if ( !v140 )
          goto LABEL_119;
LABEL_52:
        operator delete[](v43);
        v42 = v110;
        goto LABEL_119;
      }
      v78 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
      LODWORD(v139) = *(_DWORD *)(a5 + 8);
      if ( (unsigned int)v139 <= 0x40 )
      {
        *(_QWORD *)a5 &= v78;
        goto LABEL_65;
      }
      sub_2585A50(&v138, v78, 0);
      v36 = a5;
      v94 = v139;
      v142 = v37;
      LODWORD(v139) = 0;
      v93 = *(_DWORD *)(a5 + 8) <= 0x40u;
      v141 = v94;
      v140 = v138;
      if ( v93 )
      {
        *(_QWORD *)a5 &= (unsigned __int64)v138;
        if ( v94 <= 0x40 )
          goto LABEL_65;
      }
      else
      {
        sub_2586580(a5, &v140);
        v36 = a5;
        if ( v141 <= 0x40 )
        {
LABEL_218:
          if ( (unsigned int)v139 > 0x40 && v138 )
          {
            v123 = v36;
            operator delete[](v138);
            v36 = v123;
          }
          goto LABEL_65;
        }
      }
      if ( v140 )
      {
        v122 = v36;
        operator delete[](v140);
        v36 = v122;
      }
      goto LABEL_218;
    case 8:
      v44 = sub_A2CB40(a1);
      v42 = a5;
      v45 = *(_BYTE *)(a5 + 12);
      if ( (*(_BYTE *)(v44 + 47) & 0x20) == 0 )
      {
        if ( v45 )
          goto LABEL_119;
        v46 = *(_DWORD *)(a5 + 8);
        v47 = *(_QWORD *)a5;
        if ( v46 > 0x40 )
          v47 = *(_QWORD *)(v47 + 8LL * ((v46 - 1) >> 6));
        if ( (v47 & (1LL << ((unsigned __int8)v46 - 1))) == 0 )
          goto LABEL_119;
        v48 = (void *)sub_A2E240(a1, a2, 2242, 0);
        v49 = a5;
        v140 = v48;
        if ( v48 )
        {
          sub_829A30((unsigned __int8 ***)&v140, a5);
          v49 = a5;
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
        if ( *(_DWORD *)(a1 + 964) <= 1u && !*(_BYTE *)(a1 + 963) )
          return 0;
        v111 = v49;
        sub_831B20((__int64)&v140, v49);
        sub_821230(v111, (__int64)&v140);
        v36 = v111;
        if ( v141 > 0x40 && v140 )
        {
          operator delete[](v140);
          v36 = v111;
        }
LABEL_65:
        v112 = v36;
        v50 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
        v51 = *(_DWORD *)(a3 + 8) - 1;
        if ( !sub_8318F0(v36, v50) )
        {
          v50 = *(_QWORD *)v112;
          if ( *(_DWORD *)(v112 + 8) > 0x40u )
            v50 = *(_QWORD *)v50;
          v51 = v50;
          v50 = (unsigned int)v50;
        }
        v140 = (void *)v50;
        v141 = 64;
        v142 = 0;
        v52 = sub_804370((__int64 *)v112, (__int64 *)&v140);
        v53 = v112;
        v54 = v52;
        if ( v141 > 0x40 && v140 )
        {
          operator delete[](v140);
          v53 = v112;
        }
        if ( v54 )
        {
          v115 = v53;
          v140 = (void *)sub_A2E240(a1, a2, 2220, 0);
          v85 = (unsigned __int8 **)v140;
          if ( v140 )
          {
            sub_829A30((unsigned __int8 ***)&v140, v115);
            sub_8356A0(v85, *(_QWORD *)(a2 + 8), 8u);
            sub_8356A0(v85, *(unsigned int *)(a3 + 8), 3u);
          }
          goto LABEL_177;
        }
        v55 = *(_BYTE *)(a3 + 12);
        if ( v55 )
          goto LABEL_74;
        v88 = sub_A2CB40(a1);
        v55 = *(_BYTE *)(a3 + 12);
        if ( *(char *)(v88 + 1) < 0 )
          goto LABEL_74;
        v56 = *(_DWORD *)(a3 + 8);
        if ( v55 )
        {
          if ( v56 <= 0x40 )
          {
LABEL_227:
            v98 = *(_DWORD *)(a3 + 8);
            if ( *(_QWORD *)a3 )
            {
              _BitScanReverse64(&v99, *(_QWORD *)a3);
              v98 = v56 + (v99 ^ 0x3F) - 64;
            }
            if ( v98 >= v51 )
              goto LABEL_75;
LABEL_230:
            sub_A2E240(a1, a2, 2224, 0);
LABEL_177:
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
            if ( *(_DWORD *)(a1 + 964) <= 1u && !*(_BYTE *)(a1 + 963) )
              return 0;
            v55 = *(_BYTE *)(a3 + 12);
LABEL_74:
            v56 = *(_DWORD *)(a3 + 8);
            v141 = v56;
            if ( v56 <= 0x40 )
            {
LABEL_75:
              v140 = *(void **)a3;
              goto LABEL_76;
            }
LABEL_183:
            v117 = v55;
            sub_2585B30(&v140);
            v56 = v141;
            v55 = v117;
            if ( v141 > 0x40 )
            {
              sub_258CCA0(&v140, v51);
              v56 = v141;
              v58 = (unsigned __int64)v140;
              v55 = v117;
LABEL_80:
              if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
              {
                v105 = v55;
                operator delete[](*(void **)a6);
                v55 = v105;
              }
              *(_QWORD *)a6 = v58;
              *(_DWORD *)(a6 + 8) = v56;
              *(_BYTE *)(a6 + 12) = v55;
              return 1;
            }
LABEL_76:
            v57 = 0;
            if ( v51 != v56 )
              v57 = (_QWORD)v140 << v51;
            v58 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v56) & v57;
            if ( !v56 )
              v58 = 0;
            goto LABEL_80;
          }
        }
        else
        {
          v89 = *(_QWORD *)a3;
          v90 = 1LL << ((unsigned __int8)v56 - 1);
          if ( v56 <= 0x40 )
          {
            if ( (v90 & v89) != 0 )
            {
LABEL_201:
              v140 = (void *)sub_A2E240(a1, a2, 2225, 0);
              if ( v140 )
                sub_829A30((unsigned __int8 ***)&v140, a3);
              goto LABEL_177;
            }
            goto LABEL_227;
          }
          if ( (*(_QWORD *)(v89 + 8LL * ((v56 - 1) >> 6)) & v90) != 0 )
            goto LABEL_201;
        }
        v116 = *(_BYTE *)(a3 + 12);
        v86 = sub_2587400(a3);
        v55 = v116;
        if ( v86 >= v51 )
        {
          v141 = v56;
          goto LABEL_183;
        }
        goto LABEL_230;
      }
      v68 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
      LODWORD(v139) = *(_DWORD *)(a5 + 8);
      if ( (unsigned int)v139 <= 0x40 )
      {
        *(_QWORD *)a5 &= v68;
        goto LABEL_119;
      }
      sub_2585A50(&v138, v68, 0);
      v42 = a5;
      v92 = v139;
      v142 = v45;
      LODWORD(v139) = 0;
      v93 = *(_DWORD *)(a5 + 8) <= 0x40u;
      v141 = v92;
      v140 = v138;
      if ( v93 )
      {
        *(_QWORD *)a5 &= (unsigned __int64)v138;
        if ( v92 <= 0x40 )
          goto LABEL_119;
      }
      else
      {
        sub_2586580(a5, &v140);
        v42 = a5;
        if ( v141 <= 0x40 )
          goto LABEL_209;
      }
      if ( v140 )
      {
        v121 = v42;
        operator delete[](v140);
        v42 = v121;
      }
LABEL_209:
      if ( (unsigned int)v139 > 0x40 )
      {
        v43 = v138;
        if ( v138 )
        {
          v110 = v42;
          goto LABEL_52;
        }
      }
LABEL_119:
      v113 = v42;
      v69 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
      v70 = *(_DWORD *)(a3 + 8) - 1;
      if ( !sub_8318F0(v42, v69) )
      {
        v69 = *(_QWORD *)v113;
        if ( *(_DWORD *)(v113 + 8) > 0x40u )
          v69 = *(_QWORD *)v69;
        v70 = v69;
        v69 = (unsigned int)v69;
      }
      v140 = (void *)v69;
      v141 = 64;
      v142 = 0;
      v71 = sub_804370((__int64 *)v113, (__int64 *)&v140);
      v72 = v113;
      v73 = v71;
      if ( v141 > 0x40 && v140 )
      {
        operator delete[](v140);
        v72 = v113;
      }
      v114 = v72;
      if ( v73 )
      {
        v140 = (void *)sub_A2E240(a1, a2, 2220, 0);
        v74 = (unsigned __int8 **)v140;
        if ( v140 )
        {
          sub_829A30((unsigned __int8 ***)&v140, v114);
          sub_8356A0(v74, *(_QWORD *)(a2 + 8), 8u);
          sub_8356A0(v74, *(unsigned int *)(a3 + 8), 3u);
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
        if ( *(_DWORD *)(a1 + 964) <= 1u && !*(_BYTE *)(a1 + 963) )
          return 0;
      }
      v75 = *(_BYTE *)(a3 + 12);
      v76 = *(_DWORD *)(a3 + 8);
      v141 = v76;
      if ( !v75 )
      {
        if ( v76 > 0x40 )
        {
          sub_2585B30(&v140);
          v76 = v141;
          if ( v141 > 0x40 )
          {
            sub_2587FC0(&v140, v70);
            v76 = v141;
            v77 = (unsigned __int64)v140;
            goto LABEL_136;
          }
          v83 = (__int64)v140;
        }
        else
        {
          v83 = *(_QWORD *)a3;
        }
        v77 = 0;
        if ( v76 )
        {
          v84 = v83 << (64 - (unsigned __int8)v76) >> (64 - (unsigned __int8)v76);
          *(_QWORD *)&v84 = (__int64)v84 >> v70;
          if ( v70 == v76 )
            *(_QWORD *)&v84 = *((_QWORD *)&v84 + 1);
          v77 = v84 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v76);
        }
        goto LABEL_136;
      }
      if ( v76 <= 0x40 )
      {
        v140 = *(void **)a3;
        goto LABEL_134;
      }
      sub_2585B30(&v140);
      v76 = v141;
      if ( v141 <= 0x40 )
      {
LABEL_134:
        v77 = 0;
        if ( v70 != v76 )
          v77 = (unsigned __int64)v140 >> v70;
        goto LABEL_136;
      }
      sub_258EF20(&v140, v70);
      v76 = v141;
      v77 = (unsigned __int64)v140;
LABEL_136:
      if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
        operator delete[](*(void **)a6);
      *(_QWORD *)a6 = v77;
      *(_DWORD *)(a6 + 8) = v76;
      *(_BYTE *)(a6 + 12) = v75;
      return 1;
    case 10:
      if ( *(_BYTE *)(a3 + 12) )
        v59 = (unsigned int)sub_25867A0(a3, a5) >> 31;
      else
        v59 = (unsigned int)sub_2586820(a3, a5) >> 31;
      goto LABEL_94;
    case 11:
      if ( *(_BYTE *)(a3 + 12) )
        v60 = (int)sub_25867A0(a3, a5) > 0;
      else
        v60 = (int)sub_2586820(a3, a5) > 0;
      goto LABEL_98;
    case 12:
      if ( *(_BYTE *)(a3 + 12) )
        v60 = (int)sub_25867A0(a3, a5) <= 0;
      else
        v60 = (int)sub_2586820(a3, a5) <= 0;
      goto LABEL_98;
    case 13:
      if ( *(_BYTE *)(a3 + 12) )
        v60 = (int)sub_25867A0(a3, a5) >= 0;
      else
        v60 = (int)sub_2586820(a3, a5) >= 0;
      goto LABEL_98;
    case 14:
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
        LOBYTE(v59) = *(_QWORD *)a3 == *(_QWORD *)a5;
      else
        LOBYTE(v59) = sub_2586760(a3, a5);
LABEL_94:
      sub_821DE0((_DWORD *)a6, (unsigned __int8)v59);
      return 1;
    case 15:
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
        v61 = *(_QWORD *)a3 == *(_QWORD *)a5;
      else
        v61 = sub_2586760(a3, a5);
      v60 = v61 ^ 1;
LABEL_98:
      sub_821DE0((_DWORD *)a6, v60);
      return 1;
    case 16:
      v62 = *(_DWORD *)(a3 + 8);
      v63 = *(_BYTE *)(a3 + 12);
      v141 = v62;
      if ( v62 <= 0x40 )
      {
        v64 = *(_QWORD *)a3;
LABEL_101:
        v65 = *v10 & v64;
        goto LABEL_108;
      }
      sub_2585B30(&v140);
      v62 = v141;
      v10 = (_QWORD *)a5;
      if ( v141 <= 0x40 )
      {
        v64 = (__int64)v140;
        goto LABEL_101;
      }
      sub_2586580(&v140, a5);
      v62 = v141;
      v65 = (__int64)v140;
      goto LABEL_108;
    case 17:
      v62 = *(_DWORD *)(a3 + 8);
      v63 = *(_BYTE *)(a3 + 12);
      v141 = v62;
      if ( v62 <= 0x40 )
      {
        v66 = *(_QWORD *)a3;
LABEL_104:
        v65 = *v10 ^ v66;
        goto LABEL_108;
      }
      sub_2585B30(&v140);
      v62 = v141;
      v10 = (_QWORD *)a5;
      if ( v141 <= 0x40 )
      {
        v66 = (__int64)v140;
        goto LABEL_104;
      }
      sub_25866C0(&v140, a5);
      v62 = v141;
      v65 = (__int64)v140;
      goto LABEL_108;
    case 18:
      v62 = *(_DWORD *)(a3 + 8);
      v63 = *(_BYTE *)(a3 + 12);
      v141 = v62;
      if ( v62 > 0x40 )
      {
        sub_2585B30(&v140);
        v62 = v141;
        v10 = (_QWORD *)a5;
        if ( v141 > 0x40 )
        {
          sub_2586620(&v140, a5);
          v62 = v141;
          v65 = (__int64)v140;
LABEL_108:
          if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
            operator delete[](*(void **)a6);
          *(_QWORD *)a6 = v65;
          *(_DWORD *)(a6 + 8) = v62;
          *(_BYTE *)(a6 + 12) = v63;
          return 1;
        }
        v67 = (__int64)v140;
      }
      else
      {
        v67 = *(_QWORD *)a3;
      }
      v65 = *v10 | v67;
      goto LABEL_108;
    default:
      sub_A2E130(a1, a2, 110, 0);
      return 0;
  }
}

