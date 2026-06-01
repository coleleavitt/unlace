__int64 __fastcall sub_C5C820(const __m128i *a1, __m128i *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned int v9; // r13d
  unsigned __int8 v11; // kr18_1
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *v15; // rdi
  void *v16; // rdi
  __int8 v17; // al
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdi
  unsigned __int8 **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i *v38; // rsi
  unsigned __int64 v39; // rbp
  _WORD *v40; // rax
  __int64 v41; // r8
  bool v42; // zf
  __int64 v43; // rax
  char *v44; // rdx
  int v45; // eax
  __int64 v46; // rcx
  char v47; // dl
  __int64 v48; // rdi
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rax
  int v56; // esi
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r12
  unsigned __int8 **v65; // rax
  __int64 v66; // r15
  char v67; // al
  __int64 v68; // rbx
  int v69; // eax
  __int64 *v70; // r13
  __int64 v71; // rax
  int v72; // esi
  __int64 *v73; // rax
  __int64 *v74; // rax
  _WORD *v75; // rdx
  __int64 v76; // rsi
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 v82; // rbp
  unsigned __int64 *v83; // r15
  __int64 v84; // r11
  __int64 v85; // rsi
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // eax
  _QWORD *v91; // r13
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rsi
  __int64 v95; // rbp
  int v96; // esi
  __int64 v97; // r12
  __int64 v98; // rax
  unsigned int v99; // eax
  int v100; // esi
  __int64 v101; // rax
  int v102; // ecx
  void *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned __int64 *v111; // r15
  __int64 v112; // r13
  unsigned __int64 *v113; // r12
  char *v114; // rdi
  __int64 v115; // rbp
  _DWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // r12
  __int64 v121; // r15
  __int64 v122; // r13
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  unsigned __int64 v125; // rdx
  unsigned __int8 **v126; // rax
  __int64 v127; // rax
  _BOOL4 v128; // r9d
  __int64 v129; // r15
  __int64 v130; // r15
  unsigned int v131; // eax
  unsigned __int64 v132; // r9
  __int64 i; // r12
  char *v134; // rdx
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rax
  unsigned int v139; // eax
  unsigned __int8 **v140; // rax
  _QWORD *v141; // rsi
  __int64 v142; // r15
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  int v151; // edx
  __int64 v152; // rsi
  int v153; // ecx
  unsigned int v154; // eax
  __int64 v155; // r12
  int v156; // [rsp+0h] [rbp-148h]
  __int64 v157; // [rsp+0h] [rbp-148h]
  unsigned __int64 v158; // [rsp+0h] [rbp-148h]
  __int64 v159; // [rsp+8h] [rbp-140h]
  char v160; // [rsp+8h] [rbp-140h]
  __int64 v161; // [rsp+8h] [rbp-140h]
  __int64 v162; // [rsp+8h] [rbp-140h]
  unsigned __int64 v163; // [rsp+8h] [rbp-140h]
  __int64 v164; // [rsp+8h] [rbp-140h]
  char v165; // [rsp+10h] [rbp-138h]
  __int64 v166; // [rsp+10h] [rbp-138h]
  __int64 v167; // [rsp+10h] [rbp-138h]
  int v168; // [rsp+18h] [rbp-130h]
  unsigned __int64 *v169; // [rsp+20h] [rbp-128h] BYREF
  __int64 v170; // [rsp+28h] [rbp-120h]
  _BYTE v171[16]; // [rsp+30h] [rbp-118h] BYREF
  void *v172; // [rsp+40h] [rbp-108h] BYREF
  __int64 v173; // [rsp+48h] [rbp-100h]
  _BYTE v174[48]; // [rsp+50h] [rbp-F8h] BYREF
  void *v175[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v176; // [rsp+90h] [rbp-B8h] BYREF
  char v177; // [rsp+98h] [rbp-B0h]
  __int64 v178; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v180; // [rsp+B8h] [rbp-90h]
  _BYTE v181[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v182; // [rsp+101h] [rbp-47h]

  v8 = a2->m128i_u16[0];
  LOWORD(v8) = v8 & 0x1FF;
  if ( (unsigned __int16)v8 > 0x75u )
  {
    if ( (unsigned __int16)v8 <= 0x77u )
    {
      switch ( ((unsigned __int16)a2->m128i_i16[1] >> 3) & 0x3F )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x20:
          return (unsigned int)sub_C66AA0(a1, a2);
        case 0x15:
          v33 = sub_E32240(a1->m128i_i64[0]);
          v13 = a1->m128i_i64[0];
          if ( (*(_BYTE *)(v33 + 1) & 0x20) == 0
            && (!*(_DWORD *)(v13 + 48) || !*(_BYTE *)(v13 + 914) && !*(_BYTE *)(v13 + 915)) )
          {
            return (unsigned int)sub_C14310(v13, (__int64)a2);
          }
          v36 = a2[1].m128i_u64[1];
          v37 = a1->m128i_i64[0];
          LODWORD(v175[0]) = 0;
          BYTE4(v175[0]) &= ~1u;
          v9 = sub_C39A10((__int64)v175, v37, v36, v34, v35);
          if ( (_BYTE)v9 )
          {
            if ( (unsigned __int8)sub_C5C820(a1, a2[1].m128i_i64[0]) )
            {
              if ( *(char *)(sub_E32240(a1->m128i_i64[0]) + 1) >= 0
                || (v125 = a1->m128i_u64[1], (*(_BYTE *)(v125 + 128) & 2) == 0)
                && (*(_BYTE *)(v125 + 24) & 1) == 0
                && (unsigned __int8)sub_C34190(a1->m128i_i64[0], a2[1].m128i_i64[0], v125, v123, v124) )
              {
                v9 = sub_C30FD0(
                       a1->m128i_i64[0],
                       a2,
                       (__m128i *)a1->m128i_i64[1],
                       *(_QWORD *)(a2[1].m128i_i64[0] + 8),
                       (__int64)v175);
                goto LABEL_49;
              }
            }
          }
          else if ( (unsigned __int8)sub_C11850(a1->m128i_i64[0]) )
          {
            sub_C5C820(a1, a2[1].m128i_i64[0]);
            goto LABEL_49;
          }
          v9 = 0;
LABEL_49:
          if ( LODWORD(v175[0]) > 1 )
            sub_A4F8E0((int *)v175);
          break;
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
          return (unsigned int)sub_C66B40(a1, a2);
        default:
          a3 = ((unsigned __int16)a2->m128i_i16[1] >> 3) & 0x3F;
          goto LABEL_4;
      }
      return v9;
    }
    goto LABEL_4;
  }
  if ( (_WORD)v8 != 4 )
  {
LABEL_4:
    LOWORD(v8) = (v8 + 509) & 0x1FF;
    switch ( v8 )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 8LL:
      case 9LL:
      case 10LL:
      case 11LL:
      case 12LL:
      case 13LL:
      case 16LL:
      case 19LL:
      case 20LL:
      case 21LL:
      case 22LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
      case 40LL:
      case 41LL:
      case 42LL:
      case 44LL:
      case 46LL:
      case 47LL:
      case 48LL:
      case 49LL:
      case 51LL:
      case 52LL:
      case 53LL:
      case 55LL:
      case 56LL:
      case 59LL:
      case 60LL:
      case 62LL:
      case 64LL:
      case 65LL:
      case 66LL:
      case 67LL:
      case 69LL:
      case 70LL:
      case 71LL:
      case 72LL:
      case 75LL:
      case 92LL:
      case 94LL:
      case 95LL:
      case 96LL:
      case 97LL:
      case 99LL:
      case 100LL:
      case 101LL:
      case 102LL:
      case 103LL:
      case 104LL:
      case 105LL:
      case 106LL:
      case 107LL:
      case 110LL:
      case 111LL:
      case 112LL:
      case 114LL:
      case 117LL:
      case 118LL:
      case 119LL:
      case 121LL:
      case 122LL:
      case 123LL:
      case 124LL:
        return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)a2);
      case 5LL:
      case 98LL:
        return (unsigned int)sub_C5C820(a1, a2[1].m128i_i64[0]);
      case 6LL:
        v101 = *(_QWORD *)(a1->m128i_i64[0] + 16);
        v102 = *(_DWORD *)(v101 + 1384);
        *(_DWORD *)(v101 + 1384) = v102 + 1;
        sub_A4F2D0((__int64)v175, (__int64)a2, 0, v102);
        goto LABEL_54;
      case 7LL:
        v66 = a1->m128i_i64[0];
        v9 = 1;
        v67 = *(_BYTE *)(a1->m128i_i64[0] + 915);
        *(_BYTE *)(a1->m128i_i64[0] + 915) = 0;
        v68 = a2[1].m128i_i64[0];
        v160 = v67;
        if ( !*(_DWORD *)(v68 + 4) )
          goto LABEL_105;
        v69 = *(_DWORD *)(v66 + 272);
        v169 = (unsigned __int64 *)v66;
        v70 = (__int64 *)(v68 + 24);
        LODWORD(v170) = v69;
        v71 = *(_QWORD *)(v66 + 32);
        v72 = *(_DWORD *)(v71 + 160) + 1;
        *(_DWORD *)(v71 + 160) = v72;
        sub_9B7040(v71 + 136, v72);
        v73 = (__int64 *)(v68 + 16);
        v157 = v68 + 8LL * *(unsigned int *)(v68 + 4) + 16;
        if ( v68 + 24 == v157 )
          goto LABEL_102;
        while ( 2 )
        {
          v75 = (_WORD *)*(v70 - 1);
          v76 = a1->m128i_i64[0];
          v172 = v175;
          BYTE4(v175[0]) &= ~1u;
          LODWORD(v175[0]) = 0;
          v173 = 0;
          v77 = sub_C53060((__int64 *)&v172, v76, v75);
          if ( v77 != 2 )
          {
            if ( v77 )
            {
              v155 = a1->m128i_i64[0];
              v76 = (unsigned int)sub_EEB7E0(*(v70 - 1));
              sub_E33C80(v155, v76, 2485, 0);
            }
            if ( LODWORD(v175[0]) > 1 )
            {
              v9 = 0;
              sub_A4F8E0((int *)v175);
              goto LABEL_104;
            }
LABEL_209:
            v9 = 0;
            goto LABEL_104;
          }
          if ( LODWORD(v175[0]) <= 1 )
          {
            v74 = v70 + 1;
            if ( (__int64 *)v157 == v70 + 1 )
            {
LABEL_101:
              v73 = v70;
LABEL_102:
              v76 = *v73;
              if ( ((*(_WORD *)*v73 + 509) & 0x1FFu) > 0x7E )
              {
                v81 = a1->m128i_i64[0];
                v9 = 0;
                v76 = (unsigned int)sub_EEB7E0(v76);
                sub_E33C80(v81, v76, 2485, 0);
                goto LABEL_104;
              }
              if ( (unsigned __int8)sub_C5C820(a1, v76) )
              {
                v76 = 1;
                v154 = sub_C54F60((__int64)v169, (__m128i *)((char *)&dword_0 + 1), v170, v79, v80);
                LODWORD(v170) = -1;
                v9 = v154;
LABEL_104:
                sub_C55380((__int64)&v169, v76, v78, v79, v80);
LABEL_105:
                *(_BYTE *)(v66 + 915) = v160;
                return v9;
              }
              goto LABEL_209;
            }
          }
          else
          {
            sub_A4F8E0((int *)v175);
            v74 = v70 + 1;
            if ( (__int64 *)v157 == v70 + 1 )
              goto LABEL_101;
          }
          v70 = v74;
          continue;
        }
      case 14LL:
        v82 = (__int64)&a2[1].m128i_i64[a2->m128i_u16[2]];
        if ( &a2[1].m128i_u64[1] == (unsigned __int64 *)v82 )
          return 1;
        v83 = &a2[1].m128i_u64[1];
        while ( 2 )
        {
          v91 = (_QWORD *)*v83;
          v92 = a2->m128i_u16[3];
          v93 = *(unsigned __int16 *)*v83;
          LOWORD(v93) = v93 & 0x1FF;
          if ( (_WORD)v93 != 26 )
          {
            v94 = *v83;
            if ( (_WORD)v92 && v91 == (_QWORD *)a2[1].m128i_i64[v92] )
            {
              if ( !(unsigned __int8)sub_C5C820(a1, v94) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0(a1->m128i_i64[0], v94, v93, a4, a5) )
            {
              return 0;
            }
LABEL_114:
            if ( (unsigned __int64 *)v82 == ++v83 )
              return 1;
            continue;
          }
          break;
        }
        if ( (_WORD)v92 && v91 == (_QWORD *)a2[1].m128i_i64[v92] )
          return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)a2);
        if ( (*v91 & 0x80000LL) != 0 )
          goto LABEL_114;
        v84 = a1->m128i_i64[0];
        v85 = *v83;
        v175[0] = nullptr;
        v175[1] = nullptr;
        v176 = 0;
        v177 |= 1u;
        v178 = 0;
        ptr = v181;
        v180 = 0x800000000LL;
        v182 = 0;
        v166 = v84;
        v161 = *(_QWORD *)(v84 + 32);
        v158 = v91[2];
        v86 = sub_C104A0(*(_QWORD *)(v84 + 16), v85);
        v87 = sub_C2C1C0(v161, (unsigned __int64)v91, v86, (__int64)v175);
        v90 = sub_C39A10(v87, v166, v158, v88, v89);
        v16 = ptr;
        v9 = v90;
        if ( (_BYTE)v90 )
        {
          if ( ptr != v181 )
            free(ptr);
          goto LABEL_114;
        }
        if ( ptr == v181 )
          return v9;
        goto LABEL_23;
      case 15LL:
      case 34LL:
        sub_A4F2D0((__int64)v175, (__int64)a2, 0, 0);
        goto LABEL_54;
      case 17LL:
      case 113LL:
        goto LABEL_51;
      case 18LL:
        v50 = sub_C1DE00((__int64)a2);
        return (unsigned int)sub_C5C820(a1, v50);
      case 23LL:
        v115 = a1->m128i_i64[0];
        v116 = (_DWORD *)sub_C110E0(*(_QWORD *)(a1->m128i_i64[0] + 32), (unsigned __int64)a2);
        if ( v116 && *v116 )
        {
          v9 = 1;
          sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(v115 + 16), (__int64)v116);
        }
        else
        {
          v38 = (__m128i *)a2[1].m128i_i64[0];
          if ( v38 && a2 != v38 )
            return (unsigned int)sub_C5C820(a1, v38);
          else
            return (unsigned int)sub_C14310(v115, (__int64)a2);
        }
        return v9;
      case 43LL:
        return (unsigned int)sub_C65F20(a1, a2);
      case 45LL:
        v169 = (unsigned __int64 *)v171;
        v170 = 0x200000000LL;
        v175[1] = (void *)0x200000000LL;
        v105 = a2[1].m128i_i64[0];
        v175[0] = &v176;
        if ( (v105 & 4) != 0 )
          v106 = *(_QWORD *)((v105 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          v106 = v105 & 0xFFFFFFFFFFFFFFF8LL;
        v107 = sub_BF71E0(v106, (unsigned __int64)&v169, (__int64)v175, a4, a5);
        v111 = v169;
        v112 = v107;
        v113 = &v169[(unsigned int)v170];
        if ( v169 == v113 )
          goto LABEL_176;
        do
        {
          if ( !(unsigned __int8)sub_C3FAF0(a1->m128i_i64[0], *v111, v108, v109, v110) )
            goto LABEL_138;
          ++v111;
        }
        while ( v113 != v111 );
LABEL_176:
        v127 = a2[1].m128i_i64[0];
        if ( (v127 & 4) != 0 )
        {
          v42 = (unsigned int)sub_B99CC0(v127 & 0xFFFFFFFFFFFFFFF8LL) == 3;
          v148 = a1->m128i_i64[0];
          if ( v42 )
          {
            if ( *(_DWORD *)(v148 + 916) == 2 )
            {
LABEL_138:
              v9 = 0;
              goto LABEL_139;
            }
            v150 = sub_B9B790(a2[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL, 1);
            BYTE4(v172) &= ~1u;
            v130 = v150;
            LODWORD(v172) = 0;
            sub_A4FD20(v150, (__int64)&v172);
            if ( (unsigned int)v172 > 1 )
              sub_A4F8E0((int *)&v172);
            v164 = a1->m128i_i64[1];
            sub_A4F2D0((__int64)&v172, (__int64)a2, 0, 0);
            sub_C24210(v164, (__int64)v172, (__int64 *)v173, 0);
LABEL_179:
            v163 = *(_QWORD *)(v112 + 8);
            v131 = sub_C4F9A0(v130, a1->m128i_i64[0], (const __m128i *)a1->m128i_i64[1], v112);
            v132 = v163;
            v9 = v131;
            if ( (_BYTE)v131 )
            {
              v114 = (char *)v175[0];
              if ( LODWORD(v175[1]) )
              {
                for ( i = 24LL * (unsigned int)(LODWORD(v175[1]) - 1); i != -24; i -= 24 )
                {
                  v134 = &v114[i];
                  v135 = *(_DWORD *)&v114[i];
                  if ( v135 == 1 )
                  {
                    if ( !(unsigned __int8)sub_C15060(
                                             a1->m128i_i64[0],
                                             (__int64)a2,
                                             a1->m128i_i64[1],
                                             *((_QWORD *)v134 + 1)) )
                      goto LABEL_138;
                    v114 = (char *)v175[0];
                    v132 = *(_QWORD *)(*(_QWORD *)((char *)v175[0] + i + 8) + 48LL);
                  }
                  else if ( v135 )
                  {
                    if ( v135 == 2 )
                    {
                      if ( !sub_C39320(
                              a1->m128i_i64[0],
                              v132,
                              a1->m128i_i64[1],
                              *((unsigned __int16 **)v134 + 2),
                              1,
                              v132) )
                        goto LABEL_138;
                      v114 = (char *)v175[0];
                      v132 = *(_QWORD *)(*(_QWORD *)((char *)v175[0] + i + 8) + 32LL);
                    }
                  }
                  else
                  {
                    if ( !(unsigned __int8)sub_C2E310(a1->m128i_i64[0], *((_QWORD *)v134 + 1), v132, a1->m128i_i64[1]) )
                      goto LABEL_138;
                    v114 = (char *)v175[0];
                    v132 = *(_QWORD *)(*(_QWORD *)((char *)v175[0] + i + 8) + 8LL);
                  }
                }
              }
LABEL_140:
              if ( v114 != (char *)&v176 )
                free(v114);
              v16 = v169;
              if ( v169 == (unsigned __int64 *)v171 )
                return v9;
LABEL_23:
              free(v16);
              return v9;
            }
            BYTE4(v172) &= ~1u;
            LODWORD(v172) = 0;
            sub_A4FD20(v130, (__int64)&v172);
            if ( (unsigned int)v172 > 1 )
            {
              sub_A4F8E0((int *)&v172);
              v114 = (char *)v175[0];
              goto LABEL_140;
            }
LABEL_139:
            v114 = (char *)v175[0];
            goto LABEL_140;
          }
          v129 = *(_QWORD *)(v148 + 32);
          v162 = a1->m128i_i64[1];
          v149 = a2[1].m128i_i64[0];
          v128 = (v149 & 4) == 0 || sub_B99CC0(v149 & 0xFFFFFFFFFFFFFFF8LL) == 0;
        }
        else
        {
          v128 = 1;
          v129 = *(_QWORD *)(a1->m128i_i64[0] + 32);
          v162 = a1->m128i_i64[1];
        }
        v168 = v128;
        v167 = *(_QWORD *)(v112 + 8);
        sub_A4F2D0(
          (__int64)&v172,
          (__int64)a2,
          *(_DWORD *)(v129 + 128),
          *(_DWORD *)(*(_QWORD *)(v129 + 136) + 4LL * *(unsigned int *)(v129 + 144) - 4));
        sub_C24210(v162, (__int64)v172, (__int64 *)v173, 0);
        v130 = sub_C2BD20(v129, (__int64)v172, v173, (unsigned __int64)a2, v167, v168);
        goto LABEL_179;
      case 50LL:
        v49 = (_QWORD *)a2[1].m128i_i64[0];
        if ( (unsigned int)((a2[1].m128i_i64[1] - (__int64)v49) >> 3) != 1 )
          return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)a2);
        return (unsigned int)sub_C5C820(a1, *v49);
      case 54LL:
        return (unsigned int)sub_C5C820(
                               a1,
                               a2[2].m128i_i64[(((unsigned __int32)a2[1].m128i_i32[0] >> 15) & 0x7FFF)
                                             + ((a2[1].m128i_i8[3] & 0x40) != 0)]);
      case 57LL:
        v54 = *(_DWORD *)(a1->m128i_i64[0] + 272);
        v175[0] = (void *)a1->m128i_i64[0];
        LODWORD(v175[1]) = v54;
        v55 = *((_QWORD *)v175[0] + 4);
        v56 = *(_DWORD *)(v55 + 160) + 1;
        *(_DWORD *)(v55 + 160) = v56;
        sub_9B7040(v55 + 136, v56);
        v57 = a2[1].m128i_i64[0];
        v9 = sub_C5C820(a1, v57);
        if ( (_BYTE)v9 )
        {
          v57 = 1;
          v139 = sub_C553F0((__int64)v175[0], 1, (unsigned int)v175[1], v59, v60);
          LODWORD(v175[1]) = -1;
          v9 = v139;
        }
        sub_C559A0((__int64)v175, v57, v58, v59, v60);
        return v9;
      case 58LL:
        if ( (((unsigned __int64)a2->m128i_i64[0] >> 16) & 0x1E0) == 0 )
          return (unsigned int)sub_C5C820(a1, a2[1].m128i_i64[0]);
        sub_BF7B00((__int64)v175, (__int64)a2, a3, a4, a5, a6, v156, v159, v165);
        sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v175);
        if ( LODWORD(v175[0]) > 1 )
          sub_A4F8E0((int *)v175);
        return 1;
      case 61LL:
        v51 = a2[1].m128i_u64[0];
        v52 = a1->m128i_i64[0];
        LODWORD(v175[0]) = 0;
        BYTE4(v175[0]) &= ~1u;
        v9 = sub_C39A10((__int64)v175, v52, v51, a4, a5);
        if ( (_BYTE)v9 )
        {
          v172 = v174;
          v173 = 0x400000000LL;
          sub_C00560((__int64)a2, (__int64)&v172);
          if ( (unsigned int)v173 <= 1 )
          {
            v141 = *(_QWORD **)(a1->m128i_i64[0] + 16);
            sub_C245D0(a1->m128i_i64[1], v141, (__int64)v175);
            v142 = *(_QWORD *)(a2[1].m128i_i64[0] + 8);
            if ( sub_C00400((__int64)a2) )
              v142 = sub_F68450(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL), v141, v143, v144, v145);
            v146 = *(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL);
            v147 = (unsigned int)*(unsigned __int8 *)(v146 + 16) - 57;
            if ( (unsigned int)v147 > 1 )
              v146 = sub_F63050(v146, v141, v147, v144);
            sub_C13000(
              a1->m128i_i64[0],
              (unsigned __int64)a2,
              a1->m128i_i64[1],
              *(_QWORD *)(v146 + 32),
              *(unsigned int *)v172);
          }
          else
          {
            v9 = 0;
          }
        }
        else
        {
          v53 = a1->m128i_i64[0];
          if ( !*(_DWORD *)(a1->m128i_i64[0] + 48) || !*(_BYTE *)(v53 + 914) && !*(_BYTE *)(v53 + 915) )
            goto LABEL_49;
          **(_BYTE **)(v53 + 24) = 1;
          v172 = v174;
          v173 = 0x400000000LL;
          sub_C00560((__int64)a2, (__int64)&v172);
        }
        if ( v172 != v174 )
          free(v172);
        goto LABEL_49;
      case 63LL:
        v103 = (void *)a2[3].m128i_u32[0];
        v175[0] = a2;
        v175[1] = v103;
        v104 = (_QWORD *)sub_C29F30(v175);
        return (unsigned int)sub_C5C820(a1, *v104);
      case 68LL:
        return (unsigned int)sub_C66260(a1, a2);
      case 73LL:
        v61 = a1->m128i_i64[0];
        if ( (a2[1].m128i_i8[8] & 4) != 0 && (a2->m128i_i8[1] & 6) != 0 )
        {
          v62 = sub_C0D160((__int64)a2, *(_QWORD **)(v61 + 16), a3, a4, a5, a6);
          v63 = a1->m128i_i64[1];
          v64 = v62;
          sub_A4F2D0((__int64)v175, (__int64)a2, 0, 0);
          sub_C24210(v63, (__int64)v175[0], (__int64 *)v175[1], 0);
          BYTE4(v175[0]) &= ~1u;
          LODWORD(v175[0]) = 0;
          sub_A4FD20(v64, (__int64)v175);
          if ( LODWORD(v175[0]) > 1 )
            sub_A4F8E0((int *)v175);
        }
        else
        {
          v120 = *(_QWORD *)(v61 + 32);
          v121 = a1->m128i_i64[1];
          v122 = *(_QWORD *)(a2[2].m128i_i64[0] + 8);
          sub_A4F2D0(
            (__int64)v175,
            (__int64)a2,
            *(_DWORD *)(v120 + 128),
            *(_DWORD *)(*(_QWORD *)(v120 + 136) + 4LL * *(unsigned int *)(v120 + 144) - 4));
          sub_C24210(v121, (__int64)v175[0], (__int64 *)v175[1], 0);
          v64 = sub_C2BD20(v120, (__int64)v175[0], (__int64)v175[1], (unsigned __int64)a2, v122, 0);
        }
        v9 = sub_C4F9A0(v64, a1->m128i_i64[0], (const __m128i *)a1->m128i_i64[1], a2[2].m128i_i64[0]);
        if ( (_BYTE)v9 )
          return 1;
        LODWORD(v175[0]) = 0;
        BYTE4(v175[0]) &= ~1u;
        sub_A4FD20(v64, (__int64)v175);
        goto LABEL_49;
      case 74LL:
        if ( (a2->m128i_i8[2] & 8) != 0 )
LABEL_51:
          v38 = (__m128i *)a2[1].m128i_i64[1];
        else
          v38 = (__m128i *)a2[2].m128i_i64[0];
        return (unsigned int)sub_C5C820(a1, v38);
      case 76LL:
      case 77LL:
      case 78LL:
      case 81LL:
      case 82LL:
      case 83LL:
      case 84LL:
      case 85LL:
        return (unsigned int)sub_C66750(a1, a2);
      case 79LL:
        v65 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2417, 0);
        if ( v65 )
          sub_C11320(v65, 0);
        return (unsigned int)sub_C66750(a1, a2);
      case 80LL:
        v31 = a1->m128i_i64[0];
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) >= 0 )
        {
          v32 = (unsigned __int8 **)sub_E33C90(v31, a2, 2417, 0);
          if ( v32 )
            sub_C11320(v32, 1);
        }
        return (unsigned int)sub_C66750(a1, a2);
      case 86LL:
      case 87LL:
      case 88LL:
      case 89LL:
      case 90LL:
        return (unsigned int)sub_C64D70(a1, a2);
      case 91LL:
        sub_A4F2A0((__int64)v175, a2[1].m128i_i64[1], 0, 0);
LABEL_54:
        sub_C24210(a1->m128i_i64[1], (__int64)v175[0], (__int64 *)v175[1], 0);
        return 1;
      case 93LL:
        return (unsigned int)sub_C668F0(a1, a2);
      case 108LL:
        v95 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v100 = *(_DWORD *)(v95 + 160) + 1;
        *(_DWORD *)(v95 + 160) = v100;
        sub_9B7040(v95 + 136, v100);
        if ( sub_C94CC0(a2) )
        {
          v97 = *(_QWORD *)(a1->m128i_i64[0] + 32);
          if ( !*(_QWORD *)(v97 + 64) )
          {
            *(_QWORD *)(v97 + 64) = a2;
            v98 = sub_C94CC0(a2);
            goto LABEL_122;
          }
          v138 = sub_C94CC0(a2);
          v9 = sub_C5C820(a1, v138);
        }
        else
        {
          v9 = sub_C14310(a1->m128i_i64[0], (__int64)a2);
        }
        goto LABEL_123;
      case 109LL:
        v95 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v96 = *(_DWORD *)(v95 + 160) + 1;
        *(_DWORD *)(v95 + 160) = v96;
        sub_9B7040(v95 + 136, v96);
        v97 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        if ( *(_QWORD *)(v97 + 64) )
        {
          v136 = sub_C94C80(a2);
          v9 = sub_C5C820(a1, v136);
        }
        else
        {
          *(_QWORD *)(v97 + 64) = a2;
          v98 = sub_C94C80(a2);
LABEL_122:
          v99 = sub_C5C820(a1, v98);
          *(_QWORD *)(v97 + 64) = 0;
          v9 = v99;
        }
LABEL_123:
        --*(_DWORD *)(v95 + 144);
        return v9;
      case 115LL:
        return (unsigned int)sub_C66AA0(a1, a2);
      case 116LL:
        return (unsigned int)sub_C66B40(a1, a2);
      case 120LL:
        return (unsigned int)sub_C4C6D0((__int64)a1, a2, a3, a4, a5);
      case 125LL:
        v39 = a2[1].m128i_u64[1];
        v40 = (_WORD *)sub_BFD550(v39);
        if ( ((*v40 + 423) & 0x1FFu) > 4 )
        {
          v43 = a1->m128i_i64[0];
        }
        else
        {
          v42 = (unsigned int)sub_BFBE70((__int64)v40) == 214;
          v43 = a1->m128i_i64[0];
          if ( v42 )
          {
            v9 = 0;
            if ( *(_BYTE *)(v43 + 914) )
              return v9;
            v175[0] = (void *)a1->m128i_i64[0];
            LOBYTE(v175[1]) = 1;
            v46 = *(_QWORD *)(v43 + 24);
            v151 = *(_DWORD *)(v43 + 916);
            v152 = *(_QWORD *)(v46 + 8);
            if ( !v152 || *(_DWORD *)(v152 + 8) )
            {
              BYTE1(v175[1]) = 0;
              HIDWORD(v175[1]) = v151;
            }
            else
            {
              v153 = *(unsigned __int8 *)v46;
              HIDWORD(v175[1]) = *(_DWORD *)(v43 + 916);
              v46 = v153 ^ 1u;
              BYTE1(v175[1]) = v46;
            }
            *(_DWORD *)(v43 + 916) = 2;
            v39 = a2[1].m128i_u64[1];
LABEL_63:
            if ( (unsigned __int8)sub_C3FB70(v39, &v172, a1->m128i_i64[0], v46, v41) )
            {
              if ( (_BYTE)v172 )
                v137 = a2[2].m128i_i64[0];
              else
                v137 = a2[2].m128i_i64[1];
              v9 = sub_C5C820(a1, v137);
              if ( (_BYTE)v9 )
                goto LABEL_69;
            }
            else
            {
              v48 = a1->m128i_i64[0];
              if ( *(_BYTE *)(a1->m128i_i64[0] + 914) && (unsigned __int8)sub_C11850(v48) )
              {
                sub_C67AE0(a1, a2);
              }
              else if ( (unsigned __int8)sub_C11850(a1->m128i_i64[0]) )
              {
                sub_C5C820(a1, a2[2].m128i_i64[0]);
                sub_C5C820(a1, a2[2].m128i_i64[1]);
              }
            }
            LOBYTE(v175[1]) = 0;
            v9 = 0;
LABEL_69:
            sub_C23B30((__int64 *)v175);
            return v9;
          }
          v39 = a2[1].m128i_u64[1];
        }
        v175[0] = (void *)v43;
        LOBYTE(v175[1]) = 0;
        v44 = *(char **)(v43 + 24);
        v45 = *(_DWORD *)(v43 + 916);
        v46 = *((_QWORD *)v44 + 1);
        if ( !v46 || (v46 = *(unsigned int *)(v46 + 8), (_DWORD)v46) )
        {
          BYTE1(v175[1]) = 0;
          HIDWORD(v175[1]) = v45;
        }
        else
        {
          v47 = *v44;
          HIDWORD(v175[1]) = v45;
          BYTE1(v175[1]) = v47 ^ 1;
        }
        goto LABEL_63;
      case 126LL:
        return (unsigned int)sub_C67DE0(a1, a2);
      default:
        BUG();
    }
  }
  v11 = (unsigned __int8)a2->m128i_i8[2] >> 3;
  switch ( v11 )
  {
    case 0u:
    case 1u:
      v12 = sub_E32240(a1->m128i_i64[0]);
      v13 = a1->m128i_i64[0];
      if ( (*(_BYTE *)(v12 + 1) & 0x20) == 0
        && (!*(_DWORD *)(v13 + 48) || !*(_BYTE *)(v13 + 914) && !*(_BYTE *)(v13 + 915)) )
      {
        return (unsigned int)sub_C14310(v13, (__int64)a2);
      }
      v175[0] = nullptr;
      v177 |= 1u;
      ptr = v181;
      v175[1] = nullptr;
      v176 = 0;
      v178 = 0;
      v180 = 0x800000000LL;
      v182 = 0;
      v14 = a2[1].m128i_i64[0];
      v172 = (void *)v13;
      v173 = (__int64)v175;
      v174[0] = 0;
      v9 = sub_C5C820(&v172, v14);
      if ( (_BYTE)v9 )
      {
        BYTE4(v172) &= ~1u;
        v15 = (__int64 *)a1->m128i_i64[0];
        LODWORD(v172) = 0;
        v9 = sub_C31D20(
               v15,
               a2->m128i_i64,
               (__m128i *)v175,
               *(_QWORD *)(a2[1].m128i_i64[0] + 8),
               (((unsigned __int8)a2->m128i_i8[2] >> 3) & 0x1D) == 0,
               (__int64)&v172);
        if ( (_BYTE)v9 )
          sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v172);
        if ( (unsigned int)v172 > 1 )
          sub_A4F8E0((int *)&v172);
      }
      v16 = ptr;
      if ( ptr != v181 )
        goto LABEL_23;
      return v9;
    case 2u:
    case 3u:
      return (unsigned int)sub_C65E60();
    case 4u:
    case 7u:
    case 8u:
    case 9u:
    case 0xDu:
      return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)a2);
    case 5u:
      v17 = a1[1].m128i_i8[0];
      v18 = a2[1].m128i_i64[0];
      *(__m128i *)v175 = _mm_load_si128(a1);
      LOBYTE(v176) = v17;
      return (unsigned int)sub_C48CF0((__m128i *)v175, v18, v11, a4, a5, a6);
    case 6u:
    case 0xCu:
      return (unsigned int)sub_C5C820(a1, a2[1].m128i_i64[0]);
    case 0xAu:
      v9 = sub_C5C820(a1, a2[1].m128i_i64[0]);
      if ( !(_BYTE)v9 )
        return 0;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1].m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 14 )
        return 1;
      v24 = a1->m128i_i64[1];
      v23 = a2->m128i_i64[1];
      v117 = a1->m128i_i64[0];
      if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
        return v9;
      v118 = 2461;
      if ( (*(_BYTE *)(v24 + 128) & 1) != 0 )
        goto LABEL_204;
      if ( !sub_C105C0(v24 + 24) )
      {
        v119 = *(unsigned int *)(v24 + 56);
        if ( v119 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 60) )
        {
          sub_2237220(v24 + 48, v24 + 64, v119 + 1, 8);
          v119 = *(unsigned int *)(v24 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(v24 + 48) + 8 * v119) = 0;
        goto LABEL_36;
      }
      v118 = 2466;
LABEL_204:
      v140 = (unsigned __int8 **)sub_E33C90(v117, a2, v118, 0);
      if ( v140 )
        sub_C11320(v140, 5);
      goto LABEL_175;
    case 0xBu:
      v19 = a2[1].m128i_i64[0];
      v9 = sub_C5C820(a1, v19);
      if ( !(_BYTE)v9 )
        return 0;
      v23 = a2->m128i_i64[1];
      v24 = a1->m128i_i64[1];
      v175[0] = nullptr;
      v25 = sub_C00A40((unsigned __int64)a2, v19, v20, v21, v22);
      v26 = a1->m128i_i64[0];
      if ( !(unsigned __int8)sub_C0FE30(a1->m128i_i64[0], v25, v23, (__int64 *)v175, 0) )
        return v9;
      *(_QWORD *)(v24 + 16) += v175[0];
      if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
        return v9;
      v27 = 2461;
      if ( (*(_BYTE *)(v24 + 128) & 1) != 0 )
        goto LABEL_173;
      if ( sub_C105C0(v24 + 24) )
      {
        v27 = 2466;
LABEL_173:
        v126 = (unsigned __int8 **)sub_E33C90(v26, a2, v27, 0);
        if ( v126 )
          sub_C11320(v126, 6);
LABEL_175:
        *(_BYTE *)(v24 + 24) |= 1u;
        *(_DWORD *)(v24 + 56) = 0;
      }
      else
      {
        v28 = *(unsigned int *)(v24 + 56);
        if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 60) )
        {
          sub_2237220(v24 + 48, v24 + 64, v28 + 1, 8);
          v28 = *(unsigned int *)(v24 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(v24 + 48) + 8 * v28) = 1;
LABEL_36:
        v29 = *(_DWORD *)(v24 + 56);
        *(_BYTE *)(v24 + 24) |= 8u;
        v30 = *(_DWORD *)(v24 + 24);
        *(_QWORD *)(v24 + 40) = v23;
        ++v29;
        *(_QWORD *)(v24 + 32) = 2;
        *(_DWORD *)(v24 + 56) = v29;
        *(_DWORD *)(v24 + 24) = v30 & 0xF | (16 * v29);
      }
      break;
    default:
      a3 = (unsigned __int8)a2->m128i_i8[2] >> 3;
      goto LABEL_4;
  }
  return v9;
}
