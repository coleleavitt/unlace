__int64 __fastcall sub_869D30(__m128i *a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  unsigned __int8 **v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  __m128i v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  int v32; // r13d
  size_t v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rbx
  _DWORD *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  _WORD *v39; // rdi
  unsigned __int16 v40; // ax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ebx
  char v47; // r15
  unsigned __int8 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // r15
  char v55; // al
  __int64 v56; // rdx
  unsigned int v57; // ebx
  int v58; // eax
  _QWORD *v59; // r14
  __int64 v60; // rdx
  __int64 v61; // r12
  _QWORD *v62; // rax
  __int64 v63; // rsi
  int v64; // eax
  __int64 v65; // rbx
  unsigned int v66; // eax
  __int64 v67; // rsi
  __int64 v68; // rax
  _BYTE *v69; // rdx
  __int64 *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rsi
  int v73; // eax
  char v74; // dl
  unsigned __int64 v75; // rbx
  int v76; // eax
  unsigned __int16 *v77; // rbp
  unsigned __int64 v78; // rdx
  unsigned __int64 *v79; // r14
  __int64 v80; // rbx
  __int64 v81; // r11
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // rbx
  int v87; // esi
  __int64 v88; // rbp
  __int64 v89; // rax
  int v90; // esi
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rax
  unsigned __int32 v96; // ebp
  int v97; // ecx
  __int64 v98; // rdi
  unsigned __int8 **v99; // rdi
  _QWORD *v100; // rdi
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  _BYTE *v103; // rdx
  __int64 v104; // rdi
  char v105; // al
  unsigned int v106; // edx
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  unsigned int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  __m128i *v114; // rdx
  __int64 v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // r12
  unsigned int v118; // eax
  __int64 v119; // rdx
  unsigned __int8 **v120; // rdi
  __int64 v121; // rdi
  unsigned int v122; // eax
  char v123; // al
  __int64 v124; // rsi
  __m128i v125; // xmm0
  char v126; // bl
  __int64 v127; // rbx
  char v128; // al
  unsigned __int8 **v129; // rbx
  __int64 v130; // rax
  unsigned __int8 **v131; // rdi
  void *v132; // rdi
  char v133; // dl
  __int64 v134; // r15
  __int64 v135; // rcx
  __int64 v136; // rdi
  __int64 v137; // rax
  _QWORD *v138; // r13
  unsigned __int8 *v139; // rbp
  _BYTE *v140; // rdx
  __int64 v141; // rax
  __m128i v142; // xmm0
  _QWORD *v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  unsigned __int16 *v146; // rbp
  __int64 v147; // rbx
  unsigned int v148; // eax
  __int64 *v149; // rbx
  __int64 v150; // r14
  __int64 *v151; // rbp
  __int64 v152; // rcx
  __int64 v153; // rdx
  int v154; // eax
  __int64 v155; // rax
  __int64 v156; // r12
  __int64 v157; // r14
  __int64 v158; // r12
  void *v159; // rdi
  unsigned __int8 *v160; // rax
  unsigned __int8 *v161; // rdx
  unsigned __int8 v162; // [rsp+0h] [rbp-148h]
  char v163; // [rsp+0h] [rbp-148h]
  __int64 v164; // [rsp+0h] [rbp-148h]
  __int64 v165; // [rsp+0h] [rbp-148h]
  __int64 v166; // [rsp+8h] [rbp-140h]
  unsigned __int64 v167; // [rsp+8h] [rbp-140h]
  __int64 v168; // [rsp+10h] [rbp-138h]
  __int64 v169; // [rsp+10h] [rbp-138h]
  __int64 v170; // [rsp+20h] [rbp-128h] BYREF
  int v171; // [rsp+28h] [rbp-120h]
  _QWORD v172[2]; // [rsp+30h] [rbp-118h] BYREF
  void *v173; // [rsp+40h] [rbp-108h] BYREF
  __int64 v174; // [rsp+48h] [rbp-100h]
  _BYTE v175[48]; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v176; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v177; // [rsp+90h] [rbp-B8h]
  void *p_src; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v179; // [rsp+A0h] [rbp-A8h]
  __int64 src; // [rsp+A8h] [rbp-A0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v182; // [rsp+B8h] [rbp-90h]
  _BYTE v183[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v184; // [rsp+101h] [rbp-47h]

  while ( 2 )
  {
    while ( 2 )
    {
      v4 = *(_WORD *)a2 & 0x1FF;
      if ( v4 <= 0x76u )
      {
        if ( v4 == 4 )
        {
          if ( *(_BYTE *)(a2 + 2) > 0x6Fu )
          {
LABEL_8:
            sub_827DB0(a1->m128i_i64[0], a2, 110);
            return 0;
          }
          switch ( *(_BYTE *)(a2 + 2) >> 3 )
          {
            case 0:
            case 1:
              v7 = sub_A2CB40(a1->m128i_i64[0]);
              v8 = a1->m128i_i64[0];
              if ( (*(_BYTE *)(v7 + 1) & 0x20) == 0
                && (!*(_DWORD *)(v8 + 48)
                 || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v8 + 962), *(unsigned __int8 *)(v8 + 963))) )
              {
                sub_827DB0(v8, a2, 110);
                return 0;
              }
              LOBYTE(p_src) = (unsigned __int8)p_src | 1;
              v176 = 0u;
              v177 = 0;
              src = 0;
              ptr = v183;
              v182 = 0x800000000LL;
              v184 = 0;
              v19 = *(_QWORD *)(a2 + 16);
              v173 = (void *)v8;
              v174 = (__int64)&v176;
              v175[0] = 0;
              v5 = sub_869D30(&v173, v19);
              if ( (_BYTE)v5 )
              {
                BYTE4(v173) &= ~1u;
                LODWORD(v173) = 0;
                v5 = sub_84D690(
                       a1->m128i_i64[0],
                       (_DWORD *)a2,
                       &v176,
                       *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
                       ((*(_BYTE *)(a2 + 2) >> 3) & 0x1D) == 0,
                       (__int64)&v173);
                if ( (_BYTE)v5 )
                  sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v173);
                if ( (unsigned int)v173 > 1 )
                  sub_69F740((__int64)&v173);
              }
              if ( ptr != v183 )
                free(ptr);
              return v5;
            case 2:
            case 3:
              return sub_86DDC0(a1, a2);
            case 4:
            case 7:
            case 8:
            case 9:
            case 13:
              goto LABEL_8;
            case 5:
              v9 = *(_QWORD *)(a2 + 16);
              v10 = _mm_loadu_si128(a1);
              LOBYTE(v177) = a1[1].m128i_i8[0];
              v176 = v10;
              return (unsigned int)sub_871080(&v176, v9);
            case 6:
            case 12:
LABEL_13:
              a2 = *(_QWORD *)(a2 + 16);
              continue;
            case 10:
              if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
                return 0;
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) != 14 )
                return 1;
              v12 = a1->m128i_i64[1];
              v11 = *(_QWORD *)(a2 + 8);
              v104 = a1->m128i_i64[0];
              v105 = *(_BYTE *)(v12 + 24);
              if ( (v105 & 1) != 0 )
                return 1;
              if ( (*(_BYTE *)(v12 + 128) & 1) != 0 )
              {
                v131 = (unsigned __int8 **)sub_A2E240(v104, a2, 2259, 0);
                if ( v131 )
                  sub_823450(v131, 5);
              }
              else
              {
                if ( (v105 & 2) == 0 )
                {
                  if ( (v106 = *(_DWORD *)(v12 + 56), v106 == 1) && (v105 & 4) != 0
                    || (v105 & 8) == 0
                    || *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * ((*(_DWORD *)(v12 + 24) >> 4) - 1)) != *(_QWORD *)(v12 + 32) )
                  {
                    v107 = v106;
                    v108 = v106 + 1LL;
                    if ( *(unsigned int *)(v12 + 60) < v108 )
                    {
                      sub_25D6060(v12 + 48, v12 + 64, v108, 8);
                      v107 = *(unsigned int *)(v12 + 56);
                    }
                    *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8 * v107) = 0;
                    goto LABEL_31;
                  }
                }
                v137 = sub_A2E240(v104, a2, 2264, 0);
                v138 = (_QWORD *)v137;
                if ( v137 )
                {
                  v139 = *(unsigned __int8 **)v137;
                  if ( !*(_QWORD *)v137 )
                  {
                    v153 = *(_QWORD *)(v137 + 8);
                    v154 = *(_DWORD *)(v153 + 14976);
                    if ( v154 )
                    {
                      v155 = (unsigned int)(v154 - 1);
                      *(_DWORD *)(v153 + 14976) = v155;
                      v139 = *(unsigned __int8 **)(v153 + 8 * v155 + 14848);
                      *((_DWORD *)v139 + 106) = 0;
                      v156 = *((unsigned int *)v139 + 134);
                      v157 = *((_QWORD *)v139 + 66);
                      *v139 = 0;
                      v158 = v157 + (v156 << 6);
                      while ( v157 != v158 )
                      {
                        v158 -= 64;
                        v159 = *(void **)(v158 + 24);
                        if ( v159 != (void *)(v158 + 40) )
                          operator delete(v159, *(_QWORD *)(v158 + 40) + 1LL);
                      }
                      *((_DWORD *)v139 + 134) = 0;
                    }
                    else
                    {
                      v139 = (unsigned __int8 *)operator new(0x3A0u);
                      *v139 = 0;
                      v160 = v139 + 112;
                      v161 = v139 + 432;
                      do
                      {
                        *((_QWORD *)v160 - 2) = v160;
                        v160 += 32;
                        *((_QWORD *)v160 - 5) = 0;
                        *(v160 - 32) = 0;
                      }
                      while ( v161 != v160 );
                      *((_QWORD *)v139 + 52) = v161;
                      *((_QWORD *)v139 + 53) = 0x800000000LL;
                      *((_QWORD *)v139 + 66) = v139 + 544;
                      *((_QWORD *)v139 + 67) = 0x600000000LL;
                    }
                    *v138 = v139;
                  }
                  v139[*v139 + 1] = 2;
                  v140 = (_BYTE *)*v138;
                  v141 = *(unsigned __int8 *)*v138;
                  *v140 = v141 + 1;
                  *(_QWORD *)&v140[8 * v141 + 16] = 5;
                }
              }
              goto LABEL_208;
            case 11:
              if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
                return 0;
              v11 = *(_QWORD *)(a2 + 8);
              v12 = a1->m128i_i64[1];
              v13 = sub_8124E0(a2);
              v14 = a1->m128i_i64[0];
              v176.m128i_i64[0] = 0;
              if ( !(unsigned __int8)sub_81FCD0(v14, v13, v11, v176.m128i_i64, 0) )
                return 1;
              *(_QWORD *)(v12 + 16) += v176.m128i_i64[0];
              if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
                return 1;
              if ( (*(_BYTE *)(v12 + 128) & 1) != 0 )
              {
                v119 = 2259;
              }
              else
              {
                if ( !sub_820300(v12 + 24) )
                {
                  v15 = *(unsigned int *)(v12 + 56);
                  if ( *(unsigned int *)(v12 + 60) < (unsigned __int64)(v15 + 1) )
                  {
                    sub_25D6060(v12 + 48, v12 + 64, v15 + 1, 8);
                    v15 = *(unsigned int *)(v12 + 56);
                  }
                  *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8 * v15) = 1;
LABEL_31:
                  v16 = *(_DWORD *)(v12 + 56);
                  v17 = *(_DWORD *)(v12 + 24);
                  *(_QWORD *)(v12 + 40) = v11;
                  *(_QWORD *)(v12 + 32) = 2;
                  *(_DWORD *)(v12 + 56) = ++v16;
                  *(_DWORD *)(v12 + 24) = v17 & 7 | (16 * v16) | 8;
                  return 1;
                }
                v119 = 2264;
              }
              v120 = (unsigned __int8 **)sub_A2E240(v14, a2, v119, 0);
              if ( v120 )
                sub_823450(v120, 6);
LABEL_208:
              *(_BYTE *)(v12 + 24) |= 1u;
              *(_DWORD *)(v12 + 56) = 0;
              break;
          }
          return 1;
        }
      }
      else if ( v4 <= 0x78u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
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
            return sub_89FB60(a1, a2);
          case 0x15:
            v20 = sub_A2CB40(a1->m128i_i64[0]);
            v21 = a1->m128i_i64[0];
            if ( (*(_BYTE *)(v20 + 1) & 0x20) == 0
              && (!*(_DWORD *)(v21 + 48) || !*(_BYTE *)(v21 + 962) && !*(_BYTE *)(v21 + 963)) )
            {
              v22 = (__int64 *)sub_A2E130(v21, a2, 110, 0);
              v23 = sub_AC7B80(a2);
              if ( v22 )
              {
                v176.m128i_i64[0] = v23;
                v176.m128i_i8[8] = 1;
                sub_839C90(v22, v176.m128i_i64);
              }
              return 0;
            }
            v176.m128i_i8[4] &= ~1u;
            v176.m128i_i32[0] = 0;
            if ( !(unsigned __int8)sub_856400((__int64)&v176, v21, *(_QWORD *)(a2 + 24)) )
            {
              v102 = a1->m128i_i64[0];
              if ( *(_DWORD *)(a1->m128i_i64[0] + 48) )
              {
                v103 = *(_BYTE **)(v102 + 24);
                if ( *(_BYTE *)(v102 + 962) )
                {
                  *v103 = 1;
                }
                else
                {
                  v123 = *(_BYTE *)(v102 + 963);
                  *v103 |= v123;
                  if ( !v123 )
                    goto LABEL_171;
                }
                sub_869D30(a1, *(_QWORD *)(a2 + 16));
              }
LABEL_171:
              v5 = 0;
              break;
            }
            if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
              goto LABEL_171;
            if ( *(char *)(sub_A2CB40(a1->m128i_i64[0]) + 1) < 0 )
            {
              v114 = (__m128i *)a1->m128i_i64[1];
              if ( (v114[8].m128i_i8[0] & 2) != 0
                || (v114[1].m128i_i8[8] & 1) != 0
                || !(unsigned __int8)sub_84FB20(a1->m128i_i64[0], *(_DWORD **)(a2 + 16), v114) )
              {
                goto LABEL_171;
              }
            }
            v5 = sub_84C750(
                   a1->m128i_i64[0],
                   (_DWORD *)a2,
                   (__m128i *)a1->m128i_i64[1],
                   *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
                   (__int64)&v176);
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
            return sub_86E9B0(a1, a2);
          default:
            goto LABEL_7;
        }
LABEL_112:
        if ( v176.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v176);
        return v5;
      }
      break;
    }
LABEL_7:
    switch ( (v4 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2D:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x38:
      case 0x39:
      case 0x3C:
      case 0x3D:
      case 0x3F:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4C:
      case 0x5D:
      case 0x5F:
      case 0x60:
      case 0x61:
      case 0x62:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6F:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x7A:
      case 0x7B:
      case 0x7C:
      case 0x7D:
        goto LABEL_8;
      case 1:
      case 0x7F:
        return sub_870080(a1, a2);
      case 6:
      case 0x63:
        goto LABEL_13;
      case 7:
        v52 = *(_QWORD *)(a1->m128i_i64[0] + 16);
        v53 = *(_DWORD *)(v52 + 1312);
        *(_DWORD *)(v52 + 1312) = v53 + 1;
        sub_69F1F0((__int64)&v176, a2, 0, v53);
        goto LABEL_44;
      case 8:
        v54 = a1->m128i_i64[0];
        v5 = 1;
        v55 = *(_BYTE *)(a1->m128i_i64[0] + 963);
        *(_BYTE *)(a1->m128i_i64[0] + 963) = 0;
        v163 = v55;
        v166 = *(_QWORD *)(a2 + 16);
        if ( !*(_DWORD *)(v166 + 4) )
          goto LABEL_103;
        v56 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v57 = *(_DWORD *)(a1->m128i_i64[0] + 320);
        v168 = a1->m128i_i64[0];
        v170 = a1->m128i_i64[0];
        v58 = *(_DWORD *)(v56 + 208);
        v171 = v57;
        *(_DWORD *)(v56 + 208) = v58 + 1;
        sub_847EC0(v56 + 184, v58 + 1);
        v59 = (_QWORD *)(v166 + 24);
        v60 = 8LL * *(unsigned int *)(v166 + 4);
        v61 = v166 + v60 + 16;
        if ( v60 == 8 )
        {
          v59 = (_QWORD *)(v166 + 16);
LABEL_99:
          if ( ((*(_WORD *)*v59 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_869D30(a1, *v59) )
            {
              v171 = -1;
              v5 = sub_8931F0(v168, 1, v57);
LABEL_102:
              sub_893480(&v170);
LABEL_103:
              *(_BYTE *)(v54 + 963) = v163;
              return v5;
            }
          }
          else
          {
            v65 = a1->m128i_i64[0];
            v66 = sub_AC6DA0(*v59);
            sub_A2E1A0(v65, v66, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v173 = &v176;
            v63 = a1->m128i_i64[0];
            v176.m128i_i8[4] &= ~1u;
            v176.m128i_i32[0] = 0;
            v174 = 0;
            v64 = sub_88E980(&v173, v63, *(v59 - 1), 0);
            if ( v64 != 2 )
              break;
            if ( v176.m128i_i32[0] <= 1u )
            {
              v62 = v59 + 1;
              if ( (_QWORD *)v61 == v59 + 1 )
                goto LABEL_99;
            }
            else
            {
              sub_69F740((__int64)&v176);
              v62 = v59 + 1;
              if ( v59 + 1 == (_QWORD *)v61 )
                goto LABEL_99;
            }
            v59 = v62;
          }
          if ( v64 )
          {
            v147 = a1->m128i_i64[0];
            v148 = sub_AC6DA0(*(v59 - 1));
            sub_A2E1A0(v147, v148, 2283, 0);
          }
          if ( v176.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v176);
        }
        v5 = 0;
        goto LABEL_102;
      case 0xF:
        v164 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 16;
        if ( a2 + 24 == v164 )
          return 1;
        v79 = (unsigned __int64 *)(a2 + 24);
        while ( 2 )
        {
          v84 = *v79;
          v85 = *(unsigned __int16 *)(a2 + 6);
          if ( (*(_WORD *)*v79 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v85 && v84 == *(_QWORD *)(a2 + 8 * v85 + 16) )
            {
              if ( !(unsigned __int8)sub_869D30(a1, *v79) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(a1->m128i_i64[0], *v79) )
            {
              return 0;
            }
LABEL_138:
            if ( (unsigned __int64 *)v164 == ++v79 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v85 || v84 != *(_QWORD *)(a2 + 8 * v85 + 16) )
        {
          if ( (*(_BYTE *)(v84 + 2) & 8) == 0 )
          {
            v80 = a1->m128i_i64[0];
            v176 = 0u;
            LOBYTE(p_src) = (unsigned __int8)p_src | 1;
            v177 = 0;
            src = 0;
            ptr = v183;
            v182 = 0x800000000LL;
            v184 = 0;
            v81 = *(_QWORD *)(v80 + 32);
            v167 = *(_QWORD *)(v84 + 16);
            if ( (*(_BYTE *)(v84 + 1) & 6) != 0 )
            {
              v169 = *(_QWORD *)(v80 + 32);
              v101 = sub_6C4DA0(*(_QWORD *)(v80 + 16), *(_QWORD *)(v84 + 8), 1u);
              v81 = v169;
              v82 = v101;
            }
            else
            {
              v82 = *(_QWORD *)(v84 + 8);
            }
            v83 = sub_823B90(v81, v84, v82, &v176);
            if ( !(unsigned __int8)sub_856400(v83, v80, v167) )
            {
              if ( ptr != v183 )
                free(ptr);
              return 0;
            }
            if ( ptr != v183 )
              free(ptr);
          }
          goto LABEL_138;
        }
        goto LABEL_8;
      case 0x10:
      case 0x23:
      case 0x4A:
        sub_69F1F0((__int64)&v176, a2, 0, 0);
        goto LABEL_44;
      case 0x12:
      case 0x72:
        goto LABEL_51;
      case 0x13:
        a2 = sub_83DE90(a2);
        continue;
      case 0x18:
        v35 = a1->m128i_i64[0];
        v36 = (_DWORD *)sub_821340(*(_QWORD *)(a1->m128i_i64[0] + 32), a2);
        if ( v36 && *v36 )
        {
          sub_824D00(a1->m128i_i64[1], *(_QWORD **)(v35 + 16), (__int64)v36);
          return 1;
        }
        v37 = *(_QWORD *)(a2 + 16);
        if ( !v37 || a2 == v37 )
        {
          sub_827DB0(v35, a2, 110);
          return 0;
        }
        a2 = *(_QWORD *)(a2 + 16);
        continue;
      case 0x2C:
        v75 = *(_QWORD *)(a2 + 24);
        v76 = *(_BYTE *)(v75 + 28) & 0x7F;
        if ( (unsigned int)(v76 - 38) <= 6 )
        {
          v77 = *(unsigned __int16 **)(a2 + 16);
          if ( (*(_BYTE *)sub_A2CB40(a1->m128i_i64[0]) & 0x20) == 0
            || (unsigned __int8)sub_8146E0(v77, *(_QWORD *)(a1->m128i_i64[0] + 16), 1u) )
          {
            sub_857160(a1->m128i_i64[0], (unsigned __int64)v77);
          }
          v78 = v75;
          return sub_867720(a1->m128i_i64, a2, v78);
        }
        if ( (unsigned int)(v76 - 33) <= 3 && (unsigned __int8)sub_7A4F00(*(_QWORD **)(a2 + 24)) )
        {
          v146 = *(unsigned __int16 **)(a2 + 16);
          if ( (*(_BYTE *)sub_A2CB40(a1->m128i_i64[0]) & 0x20) == 0
            || (unsigned __int8)sub_8146E0(v146, *(_QWORD *)(a1->m128i_i64[0] + 16), 1u) )
          {
            sub_857160(a1->m128i_i64[0], (unsigned __int64)v146);
          }
          v72 = v75;
LABEL_119:
          sub_69F1C0((__int64)&v176, v72, 0, 0);
LABEL_44:
          sub_823790(a1->m128i_i64[1], v176.m128i_i64[0], v176.m128i_i64[1], 0);
          return 1;
        }
        v124 = *(_QWORD *)(a2 + 16);
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
        {
          v142 = _mm_loadu_si128(a1);
          LOBYTE(v177) = a1[1].m128i_i8[0];
          v176 = v142;
          v126 = sub_871080(&v176, v124);
          v143 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v143 + 16LL) != 41 )
            sub_B0D320(*v143);
        }
        else if ( (*(_BYTE *)(v124 + 1) & 6) != 0 )
        {
          v126 = sub_869D30(a1, v124);
        }
        else
        {
          v125 = _mm_loadu_si128(a1);
          LOBYTE(v177) = 0;
          v176 = v125;
          v126 = sub_89CD60(&v176);
        }
        if ( !v126 )
        {
          if ( !a1[1].m128i_i8[0] )
            return 0;
          v127 = a1->m128i_i64[1];
          sub_69F1F0((__int64)&v176, a2, 0, 0);
          sub_823790(v127, v176.m128i_i64[0], v176.m128i_i64[1], 1);
          return 1;
        }
        v134 = *(_QWORD *)(a2 + 24);
        if ( (*(_BYTE *)(v134 + 28) & 0x7Fu) - 47 > 2 )
        {
          if ( (*(_BYTE *)(v134 + 28) & 0x7F) != 0x1E )
            goto LABEL_8;
          v149 = *(__int64 **)(v134 + 56);
          v150 = a1->m128i_i64[1];
          v165 = a1->m128i_i64[0];
          v151 = &v149[*(unsigned int *)(v134 + 64)];
          while ( v151 != v149 )
          {
            v152 = *v149++;
            if ( !(unsigned __int8)sub_825C70(v165, a2, v150, v152) )
              return 0;
          }
        }
        else if ( !(unsigned __int8)sub_825C70(a1->m128i_i64[0], a2, a1->m128i_i64[1], *(_QWORD *)(a2 + 24)) )
        {
          return 0;
        }
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v134 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 42 > 1 )
          return 1;
        v135 = a1->m128i_i64[1];
        v136 = a1->m128i_i64[0];
        v176.m128i_i32[0] = 0;
        v176.m128i_i8[4] &= ~1u;
        v5 = sub_85F440(v136, (_DWORD *)a2, *(_QWORD *)(v134 + 48), v135, (__int64)&v176, 0);
        if ( (_BYTE)v5 )
          sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v176);
        goto LABEL_112;
      case 0x2E:
        return sub_8696D0(a1->m128i_i64, a2);
      case 0x33:
        v70 = *(__int64 **)(a2 + 16);
        if ( (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v70) >> 3) != 1 )
          goto LABEL_8;
        a2 = *v70;
        continue;
      case 0x37:
        a2 = *(_QWORD *)(a2
                       + 8LL
                       * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v94 = a1->m128i_i64[0];
        v95 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v96 = *(_DWORD *)(a1->m128i_i64[0] + 320);
        v176.m128i_i64[0] = a1->m128i_i64[0];
        v97 = *(_DWORD *)(v95 + 208);
        v176.m128i_i32[2] = v96;
        *(_DWORD *)(v95 + 208) = v97 + 1;
        sub_847EC0(v95 + 184, v97 + 1);
        v5 = sub_869D30(a1, *(_QWORD *)(a2 + 16));
        if ( (_BYTE)v5 )
        {
          v122 = sub_8941C0(v94, 1, v96);
          v176.m128i_i32[2] = -1;
          v5 = v122;
        }
        sub_894600(&v176);
        return v5;
      case 0x3B:
        if ( (*(_WORD *)(a2 + 2) & 0x1E0) == 0 )
          goto LABEL_13;
        sub_805700((__int64)&v176, a2);
        sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v176);
        if ( v176.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v176);
        return 1;
      case 0x3E:
        v176.m128i_i8[4] &= ~1u;
        v67 = a1->m128i_i64[0];
        v176.m128i_i32[0] = 0;
        v5 = sub_856400((__int64)&v176, v67, *(_QWORD *)(a2 + 16));
        if ( (_BYTE)v5 )
        {
          v173 = v175;
          v174 = 0x400000000LL;
          sub_819B80(a2, (__int64)&v173);
          if ( (unsigned int)v174 <= 1 )
          {
            sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v176);
            v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v121 + 16) - 56 > 1 )
              v121 = sub_B0D320(v121);
            sub_82AA80(a1->m128i_i64[0], a2, a1->m128i_i64[1], *(_QWORD *)(v121 + 32), *(unsigned int *)v173);
LABEL_110:
            if ( v173 != v175 )
              free(v173);
            goto LABEL_112;
          }
        }
        else
        {
          v68 = a1->m128i_i64[0];
          if ( !*(_DWORD *)(a1->m128i_i64[0] + 48) )
            goto LABEL_112;
          v69 = *(_BYTE **)(v68 + 24);
          if ( *(_BYTE *)(v68 + 962) )
          {
            *v69 = 1;
          }
          else
          {
            v128 = *(_BYTE *)(v68 + 963);
            *v69 |= v128;
            if ( !v128 )
              goto LABEL_112;
          }
          v173 = v175;
          v174 = 0x400000000LL;
          sub_819B80(a2, (__int64)&v173);
        }
        v5 = 0;
        goto LABEL_110;
      case 0x40:
        v71 = *(unsigned int *)(a2 + 48);
        v172[0] = a2;
        v172[1] = v71;
        a2 = *(_QWORD *)sub_849A00(v172);
        continue;
      case 0x45:
        v72 = *(_QWORD *)(a2 + 16);
        v73 = *(_BYTE *)(v72 + 28) & 0x7F;
        v74 = *(_BYTE *)(v72 + 28) & 0x7F;
        if ( (unsigned int)(v73 - 32) <= 5 || ((v74 + 101) & 0x7Fu) <= 2 )
          goto LABEL_119;
        if ( (unsigned int)(v73 - 38) > 6 )
        {
          if ( v74 != 50 )
            goto LABEL_8;
          a2 = *(_QWORD *)(v72 + 64);
          continue;
        }
        v78 = *(_QWORD *)(a2 + 16);
        return sub_867720(a1->m128i_i64, a2, v78);
      case 0x4B:
        if ( *(_BYTE *)(a2 + 48) )
LABEL_51:
          a2 = *(_QWORD *)(a2 + 24);
        else
          a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        return sub_86E3B0(a1, a2);
      case 0x50:
        v18 = (unsigned __int8 **)sub_A2E240(a1->m128i_i64[0], a2, 2215, 0);
        if ( v18 )
          sub_823450(v18, 0);
        return sub_86E3B0(a1, a2);
      case 0x51:
        v98 = a1->m128i_i64[0];
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2160LL) + 1LL) >= 0 )
        {
          v99 = (unsigned __int8 **)sub_A2E240(v98, a2, 2215, 0);
          if ( v99 )
            sub_823450(v99, 1);
        }
        return sub_86E3B0(a1, a2);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8B2780(a1, a2);
      case 0x5C:
        v72 = *(_QWORD *)(a2 + 24);
        goto LABEL_119;
      case 0x5E:
        if ( !(unsigned __int8)sub_8C13F0(a2) )
        {
          v24 = *(_QWORD *)(a2 + 16);
          if ( (v24 & 4) != 0 )
            v25 = sub_8C15B0(a2, *(_QWORD *)(a1->m128i_i64[0] + 16));
          else
            v25 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          sub_69F0F0(&v176, *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
          v26 = (void *)v176.m128i_i64[0];
          goto LABEL_56;
        }
        v111 = a1->m128i_i64[0];
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2160LL) + 1LL) < 0 )
          goto LABEL_186;
        v129 = (unsigned __int8 **)sub_A2E240(v111, a2, 2287, 0);
        v112 = *(_QWORD *)(a2 + 16);
        if ( v129 )
        {
          sub_8356A0(v129, *(_QWORD *)((*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8), 8u);
          v130 = sub_AC7B80(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          v176.m128i_i8[8] = 1;
          v176.m128i_i64[0] = v130;
          sub_839C90((__int64 *)v129, v176.m128i_i64);
LABEL_186:
          v112 = *(_QWORD *)(a2 + 16);
        }
        if ( !(unsigned __int8)sub_869D30(a1, v112 & 0xFFFFFFFFFFFFFFF8LL) )
          return 0;
        sub_84F320((__int64)&v176, a1->m128i_i64[0], a2, (__m128i *)a1->m128i_i64[1], 7u);
        if ( !(_BYTE)v177 )
          return 0;
        v113 = sub_6E8B00(*(_QWORD *)(a1->m128i_i64[0] + 16), v176.m128i_i64[0]);
        sub_69F0F0(&v173, *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL));
        v26 = v173;
LABEL_56:
        v27.m128i_i64[0] = sub_69F230((__int64)v26);
        v28 = a1->m128i_i64[1];
        *(_BYTE *)(v28 + 128) &= ~2u;
        *(__m128i *)v28 = v27;
        *(_QWORD *)(v28 + 16) = 0;
        v176 = v27;
        v29 = sub_69F240(v176.m128i_i64);
        p_src = &src;
        v177 = v29;
        v176.m128i_i32[0] = 0;
        v179 = 0x800000000LL;
        v176.m128i_i64[1] = 0;
        *(_DWORD *)(v28 + 24) = 0;
        *(_QWORD *)(v28 + 32) = 0;
        *(_QWORD *)(v28 + 40) = v177;
        if ( (void **)(v28 + 48) == &p_src )
        {
LABEL_65:
          if ( p_src != &src )
            free(p_src);
          goto LABEL_67;
        }
        if ( p_src != &src )
        {
          v132 = *(void **)(v28 + 48);
          if ( v132 != (void *)(v28 + 64) )
            free(v132);
          *(_QWORD *)(v28 + 48) = p_src;
          *(_QWORD *)(v28 + 56) = v179;
          goto LABEL_67;
        }
        v30 = (unsigned int)v179;
        v31 = *(unsigned int *)(v28 + 56);
        v32 = v179;
        if ( v31 >= (unsigned int)v179 )
        {
          *(_DWORD *)(v28 + 56) = 0;
LABEL_67:
          *(_WORD *)(v28 + 128) &= 0xFEu;
          return 1;
        }
        if ( *(unsigned int *)(v28 + 60) < (unsigned __int64)(unsigned int)v179 )
        {
          *(_DWORD *)(v28 + 56) = 0;
          sub_25D6060(v28 + 48, v28 + 64, v30, 8);
        }
        else if ( *(_DWORD *)(v28 + 56) )
        {
          v33 = 8 * v31;
          v100 = *(_QWORD **)(v28 + 48);
          if ( v31 == 1 )
            *v100 = src;
          else
            memmove(v100, &src, v33);
          goto LABEL_62;
        }
        v33 = 0;
LABEL_62:
        v34 = 8LL * (unsigned int)v179;
        if ( v33 != v34 )
          memcpy((void *)(v33 + *(_QWORD *)(v28 + 48)), (char *)p_src + v33, v34 - v33);
        *(_DWORD *)(v28 + 56) = v32;
        goto LABEL_65;
      case 0x6D:
        v86 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v90 = *(_DWORD *)(v86 + 208) + 1;
        *(_DWORD *)(v86 + 208) = v90;
        sub_847EC0(v86 + 184, v90);
        v91 = sub_8C4900(a2);
        v92 = a1->m128i_i64[0];
        if ( !v91 )
        {
          v5 = 0;
          sub_827DB0(v92, a2, 110);
          goto LABEL_151;
        }
        v88 = *(_QWORD *)(v92 + 32);
        if ( *(_QWORD *)(v88 + 64) )
        {
          v93 = sub_8C4900(a2);
          v5 = sub_869D30(a1, v93);
          goto LABEL_151;
        }
        *(_QWORD *)(v88 + 64) = a2;
        v109 = sub_8C4900(a2);
        goto LABEL_184;
      case 0x6E:
        v86 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v87 = *(_DWORD *)(v86 + 208) + 1;
        *(_DWORD *)(v86 + 208) = v87;
        sub_847EC0(v86 + 184, v87);
        v88 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        if ( *(_QWORD *)(v88 + 64) )
        {
          v89 = sub_8C4680(a2);
          v5 = sub_869D30(a1, v89);
        }
        else
        {
          *(_QWORD *)(v88 + 64) = a2;
          v109 = sub_8C4680(a2);
LABEL_184:
          v110 = sub_869D30(a1, v109);
          *(_QWORD *)(v88 + 64) = 0;
          v5 = v110;
        }
LABEL_151:
        --*(_DWORD *)(v86 + 192);
        return v5;
      case 0x74:
        return sub_89FB60(a1, a2);
      case 0x75:
        return sub_86E9B0(a1, a2);
      case 0x79:
        return sub_87E700(a1, a2);
      case 0x7E:
        v38 = *(_QWORD *)(a2 + 24);
        v39 = (_WORD *)sub_8116F0(v38);
        v40 = *v39 & 0x1FF;
        if ( v40 > 0x59u && v40 <= 0x5Eu )
        {
          v41 = sub_80FBD0((__int64)v39);
          v42 = a1->m128i_i64[0];
          v43 = a1->m128i_i64[0];
          if ( v41 == 212 )
          {
            v48 = *(_BYTE *)(v42 + 962);
            v5 = 0;
            if ( v48 )
              return v5;
            v144 = *(_QWORD *)(v42 + 24);
            v46 = *(_DWORD *)(v42 + 964);
            v145 = *(_QWORD *)(v144 + 8);
            if ( v145 && !*(_DWORD *)(v145 + 8) )
              v48 = *(_BYTE *)v144 ^ 1;
            *(_DWORD *)(v42 + 964) = 2;
            v47 = 1;
            v42 = a1->m128i_i64[0];
            v38 = *(_QWORD *)(a2 + 24);
          }
          else
          {
            v44 = *(_QWORD *)(v42 + 24);
            v45 = *(_QWORD *)(v44 + 8);
            if ( v45 )
            {
              v38 = *(_QWORD *)(a2 + 24);
              goto LABEL_82;
            }
            v46 = *(_DWORD *)(v42 + 964);
            v38 = *(_QWORD *)(a2 + 24);
            v47 = 0;
            v48 = 0;
          }
LABEL_84:
          v162 = v48;
          if ( (unsigned __int8)sub_8571E0(v38, &v176, v42) )
          {
            if ( v176.m128i_i8[0] )
              v115 = *(_QWORD *)(a2 + 32);
            else
              v115 = *(_QWORD *)(a2 + 40);
            v5 = sub_869D30(a1, v115);
            if ( (_BYTE)v5 )
            {
              if ( v47 )
              {
                if ( v162 )
                {
                  v116 = *(_QWORD *)(v43 + 24);
                  v117 = *(_QWORD *)(v116 + 8);
                  v118 = *(_DWORD *)(v117 + 8);
                  if ( v118 )
                  {
                    if ( !*(_BYTE *)v116 )
                    {
                      sub_8481D0(*(_QWORD *)v117, *(_QWORD *)v117 + 32LL * v118);
                      *(_DWORD *)(v117 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_89;
            }
          }
          else
          {
            v50 = a1->m128i_i64[0];
            v51 = *(unsigned int *)(a1->m128i_i64[0] + 48);
            if ( *(_BYTE *)(a1->m128i_i64[0] + 962) )
            {
              if ( (_DWORD)v51 )
              {
                **(_BYTE **)(v50 + 24) = 1;
                sub_86FB40(a1, a2, v51, v49, v162);
              }
            }
            else if ( (_DWORD)v51 )
            {
              v133 = *(_BYTE *)(v50 + 963);
              **(_BYTE **)(v50 + 24) |= v133;
              if ( v133 )
              {
                sub_869D30(a1, *(_QWORD *)(a2 + 32));
                sub_869D30(a1, *(_QWORD *)(a2 + 40));
              }
            }
          }
          v5 = 0;
LABEL_89:
          *(_DWORD *)(v43 + 964) = v46;
          return v5;
        }
        v42 = a1->m128i_i64[0];
        v44 = *(_QWORD *)(a1->m128i_i64[0] + 24);
        v43 = a1->m128i_i64[0];
        v45 = *(_QWORD *)(v44 + 8);
        if ( !v45 )
        {
LABEL_182:
          v46 = *(_DWORD *)(v42 + 964);
          v47 = 0;
          v48 = 0;
          goto LABEL_84;
        }
LABEL_82:
        if ( !*(_DWORD *)(v45 + 8) )
        {
          v46 = *(_DWORD *)(v42 + 964);
          v47 = 0;
          v48 = *(_BYTE *)v44 ^ 1;
          goto LABEL_84;
        }
        goto LABEL_182;
    }
  }
}

