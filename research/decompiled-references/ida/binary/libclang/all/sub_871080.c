__int64 __fastcall sub_871080(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __m128i *v6; // r14
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  __int64 v9; // kr00_8
  __int64 v10; // kr08_8
  __int64 v11; // rsi
  __m128i *v12; // rdi
  __int64 v13; // rax
  char v14; // cl
  char v15; // dl
  _BYTE *v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __m128i v21; // xmm0
  unsigned __int8 **v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // bl
  const __m128i *v29; // r12
  __m128i *v30; // rbx
  __int8 v31; // al
  __int8 v32; // al
  __int8 v33; // al
  __int8 v34; // al
  __int64 v35; // r12
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rbx
  unsigned int *v42; // rax
  __int64 v43; // rax
  _WORD *v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rdi
  unsigned __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // ebx
  char v54; // r15
  char v55; // r13
  __int64 v56; // rax
  char v57; // dl
  int v58; // ecx
  char v59; // al
  char v60; // cl
  _BYTE *v61; // r8
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned int v64; // r12d
  int v65; // ecx
  unsigned __int8 v66; // al
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // r13
  char v70; // al
  unsigned int v71; // ebx
  __int64 v72; // rax
  int v73; // esi
  _QWORD *v74; // r15
  __int64 v75; // rax
  __int64 v76; // r12
  _QWORD *v77; // rax
  __int64 v78; // rsi
  int v79; // eax
  __int64 v80; // rbx
  unsigned int v81; // eax
  unsigned __int8 v82; // al
  __int64 v83; // rbx
  int v84; // esi
  __int64 v85; // r12
  __int64 v86; // rax
  int v87; // esi
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // r12
  __int64 v91; // rax
  _QWORD *v92; // r13
  __int64 v93; // rbx
  char *v94; // r12
  __int64 v95; // rax
  __int64 v96; // rbx
  unsigned __int64 v97; // r12
  _QWORD *v98; // rdi
  unsigned __int64 v99; // rsi
  __int8 v100; // al
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rbp
  int v104; // eax
  __int64 v105; // rdx
  _QWORD *v106; // rdx
  unsigned __int64 *v107; // r13
  __int64 v108; // rbx
  __int64 v109; // r11
  __int64 v110; // rdx
  __int64 v111; // rax
  unsigned __int64 v112; // r15
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int8 **v115; // rdi
  unsigned __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rbp
  unsigned int v122; // edx
  char v123; // dl
  unsigned __int8 **v124; // rdi
  __int64 v125; // rax
  __int64 v126; // rdi
  unsigned __int8 **v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rbx
  unsigned int v131; // eax
  int v132; // [rsp+0h] [rbp-138h]
  unsigned __int8 v133; // [rsp+0h] [rbp-138h]
  unsigned __int8 v134; // [rsp+0h] [rbp-138h]
  unsigned __int8 v135; // [rsp+0h] [rbp-138h]
  unsigned __int64 v136; // [rsp+0h] [rbp-138h]
  unsigned __int8 v137; // [rsp+0h] [rbp-138h]
  char v138; // [rsp+0h] [rbp-138h]
  __int64 v139; // [rsp+0h] [rbp-138h]
  unsigned __int8 v140; // [rsp+0h] [rbp-138h]
  int v141; // [rsp+8h] [rbp-130h]
  __int64 v142; // [rsp+8h] [rbp-130h]
  unsigned __int8 v143; // [rsp+8h] [rbp-130h]
  unsigned __int64 v144; // [rsp+8h] [rbp-130h]
  int v145; // [rsp+10h] [rbp-128h]
  _QWORD *v146; // [rsp+10h] [rbp-128h]
  __int64 v147; // [rsp+10h] [rbp-128h]
  int v148; // [rsp+18h] [rbp-120h]
  void *v149; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v150; // [rsp+28h] [rbp-110h]
  __m128i v151; // [rsp+30h] [rbp-108h] BYREF
  int v152; // [rsp+40h] [rbp-F8h]
  int v153; // [rsp+48h] [rbp-F0h]
  int v154; // [rsp+50h] [rbp-E8h]
  int v155; // [rsp+58h] [rbp-E0h]
  int v156; // [rsp+60h] [rbp-D8h]
  int v157; // [rsp+68h] [rbp-D0h]
  void *v158[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v159; // [rsp+80h] [rbp-B8h] BYREF
  int v160; // [rsp+88h] [rbp-B0h]
  int v161; // [rsp+90h] [rbp-A8h]
  __int64 v162; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v164; // [rsp+A8h] [rbp-90h]
  int v165[16]; // [rsp+B0h] [rbp-88h] BYREF
  int v166; // [rsp+F0h] [rbp-48h]
  int v167; // [rsp+F8h] [rbp-40h]
  int v168; // [rsp+100h] [rbp-38h]
  int v169; // [rsp+108h] [rbp-30h]
  int v170; // [rsp+110h] [rbp-28h]
  void *v171; // [rsp+118h] [rbp-20h]

  v6 = (__m128i *)a1;
  v7 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *(_WORD *)v7 & 0x1FF;
      if ( v8 <= 0x76u )
      {
        if ( v8 == 4 )
        {
          a3 = (__int64 *)*(unsigned __int8 *)(v7 + 2);
          if ( (unsigned __int8)a3 <= 0x6Fu )
          {
            switch ( *(_BYTE *)(v7 + 2) >> 3 )
            {
              case 0:
              case 1:
                v18 = sub_A2CB40(v6->m128i_i64[0]);
                v19 = v6->m128i_i64[0];
                if ( (*(_BYTE *)(v18 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v19 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v19 + 962), *(unsigned __int8 *)(v19 + 963))) )
                {
                  sub_827AF0(v19, v7, 110);
                  return 0;
                }
                LOBYTE(v160) = v160 | 1;
                v158[0] = nullptr;
                v158[1] = nullptr;
                v159 = 0;
                v162 = 0;
                ptr = v165;
                v164 = 0x800000000LL;
                BYTE1(v166) = 0;
                v23 = *(_QWORD *)(v7 + 16);
                v151.m128i_i64[0] = v19;
                v151.m128i_i64[1] = (__int64)v158;
                LOBYTE(v152) = 0;
                result = sub_869D30(&v151, v23);
                if ( (_BYTE)result )
                {
                  v151.m128i_i8[4] &= ~1u;
                  v151.m128i_i32[0] = 0;
                  result = sub_84D690(
                             v6->m128i_i64[0],
                             (_DWORD *)v7,
                             (__m128i *)v158,
                             *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL),
                             ((*(_BYTE *)(v7 + 2) >> 3) & 0x1D) == 0,
                             (__int64)&v151);
                  if ( (_BYTE)result )
                  {
                    v133 = result;
                    sub_824D00(v6->m128i_i64[1], *(_QWORD **)(v6->m128i_i64[0] + 16), (__int64)&v151);
                    result = v133;
                  }
                  if ( v151.m128i_i32[0] > 1u )
                  {
                    v134 = result;
                    sub_69F740((__int64)&v151);
                    result = v134;
                  }
                }
                if ( ptr != v165 )
                {
                  v135 = result;
                  free(ptr);
                  result = v135;
                }
                break;
              case 2:
              case 3:
              case 5:
              case 7:
              case 8:
              case 9:
              case 10:
              case 11:
              case 13:
                goto LABEL_13;
              case 4:
                v20 = *(_QWORD *)(v7 + 16);
                v21 = _mm_loadu_si128(v6);
                LOBYTE(v159) = v6[1].m128i_i8[0];
                *(__m128i *)v158 = v21;
                return sub_869D30((__m128i *)v158, v20);
              case 6:
              case 12:
LABEL_19:
                v7 = *(_QWORD *)(v7 + 16);
                continue;
            }
            return result;
          }
LABEL_13:
          sub_827AF0(v6->m128i_i64[0], v7, 110);
          return 0;
        }
      }
      else if ( v8 <= 0x78u )
      {
        v9 = a1;
        v10 = a2;
        v11 = v7;
        v12 = v6;
        switch ( (*(_WORD *)(v7 + 2) >> 3) & 0x3F )
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
          case 0x15:
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
          case 0x20:
            return sub_89F4B0(v12, v11);
          default:
            a3 = (__int64 *)((*(_WORD *)(v7 + 2) >> 3) & 0x3F);
            a2 = v10;
            a1 = v9;
            goto LABEL_16;
        }
      }
      break;
    }
LABEL_16:
    switch ( (v8 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 0xA:
      case 0xB:
      case 0xD:
      case 0xE:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
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
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4C:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x61:
      case 0x64:
      case 0x65:
      case 0x67:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6F:
      case 0x70:
      case 0x71:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
        goto LABEL_13;
      case 1:
      case 0x7F:
        return sub_874F10(v6, v7);
      case 6:
      case 0x63:
        goto LABEL_19;
      case 8:
        v69 = v6->m128i_i64[0];
        v70 = *(_BYTE *)(v6->m128i_i64[0] + 963);
        *(_BYTE *)(v6->m128i_i64[0] + 963) = 0;
        v138 = v70;
        result = 1;
        v142 = *(_QWORD *)(v7 + 16);
        if ( !*(_DWORD *)(v142 + 4) )
          goto LABEL_104;
        v71 = *(_DWORD *)(v6->m128i_i64[0] + 320);
        v146 = (_QWORD *)v6->m128i_i64[0];
        v149 = v146;
        v72 = v146[4];
        v150 = v71;
        v73 = *(_DWORD *)(v72 + 208) + 1;
        *(_DWORD *)(v72 + 208) = v73;
        sub_847EC0(v72 + 184, v73);
        v74 = (_QWORD *)(v142 + 24);
        v75 = 8LL * *(unsigned int *)(v142 + 4);
        v76 = v142 + v75 + 16;
        if ( v75 == 8 )
        {
          v74 = (_QWORD *)(v142 + 16);
LABEL_100:
          if ( ((*(_WORD *)*v74 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_871080(v6, *v74) )
            {
              v82 = sub_8931F0(v146, 1, v71);
              v150 = -1;
LABEL_103:
              v143 = v82;
              sub_893480(&v149);
              result = v143;
LABEL_104:
              *(_BYTE *)(v69 + 963) = v138;
              return result;
            }
          }
          else
          {
            v80 = v6->m128i_i64[0];
            v81 = sub_AC6DA0(*v74);
            sub_A2E1A0(v80, v81, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            BYTE4(v158[0]) &= ~1u;
            v78 = v6->m128i_i64[0];
            LODWORD(v158[0]) = 0;
            v151 = (__m128i)(unsigned __int64)v158;
            v79 = sub_88E980(&v151, v78, *(v74 - 1), 0);
            if ( v79 != 2 )
              break;
            if ( LODWORD(v158[0]) <= 1 )
            {
              v77 = v74 + 1;
              if ( (_QWORD *)v76 == v74 + 1 )
                goto LABEL_100;
            }
            else
            {
              sub_69F740((__int64)v158);
              v77 = v74 + 1;
              if ( v74 + 1 == (_QWORD *)v76 )
                goto LABEL_100;
            }
            v74 = v77;
          }
          if ( v79 )
          {
            v130 = v6->m128i_i64[0];
            v131 = sub_AC6DA0(*(v74 - 1));
            sub_A2E1A0(v130, v131, 2283, 0);
          }
          if ( LODWORD(v158[0]) > 1 )
            sub_69F740((__int64)v158);
        }
        v82 = 0;
        goto LABEL_103;
      case 9:
        sub_80D480(
          (int)v158,
          v7,
          *(_QWORD *)(v6->m128i_i64[0] + 16),
          *(_QWORD *)(*(_QWORD *)(v6->m128i_i64[0] + 32) + 64LL),
          a5,
          a6,
          v132,
          v141,
          v145,
          v148,
          (int)v149,
          v150,
          v151.m128i_i32[0],
          v151.m128i_i32[2],
          v152,
          v153,
          v154,
          v155,
          v156,
          v157,
          (int)v158[0],
          (int)v158[1],
          v159,
          v160,
          v161,
          v162,
          (int)ptr,
          v164,
          v165[0],
          v165[2],
          v165[4],
          v165[6],
          v165[8],
          v165[10],
          v165[12],
          v165[14],
          v166,
          v167,
          v168,
          v169,
          v170,
          v171);
        goto LABEL_151;
      case 0xC:
        sub_806330((__int64)v158, v7, *(_QWORD *)(v6->m128i_i64[0] + 16));
        v92 = *(_QWORD **)(v6->m128i_i64[0] + 16);
        v93 = v92[2311];
        v94 = (char *)v158[1] + 1;
        v95 = sub_6CABB0(v92);
        v96 = v93 | 1;
        v150 = sub_6F6DE0((__int64)v92, *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v150 > 0x40 )
          sub_2585A50(&v149, v94, 0);
        else
          v149 = v94;
        v97 = sub_6C55D0(*(_QWORD *)(v6->m128i_i64[0] + 16), v96, (__int64)&v149, 0, 0, 0);
        v98 = *(_QWORD **)(v6->m128i_i64[0] + 16);
        v151.m128i_i32[0] = *(_DWORD *)(v7 + 16);
        v99 = sub_8095B0(v98, v158[0], (size_t)v158[1], 0, 0, v97, &v151, 1u);
        v100 = v6[1].m128i_i8[0];
        v151 = _mm_loadu_si128(v6);
        LOBYTE(v152) = v100;
        sub_869D30(&v151, v99);
        v101 = v6->m128i_i64[1];
        if ( (*(_BYTE *)(v101 + 24) & 1) == 0 )
        {
          if ( sub_820300(v101 + 24) )
          {
            v124 = (unsigned __int8 **)sub_A2E240(v6->m128i_i64[0], v7, 2264, 0);
            if ( v124 )
              sub_823450(v124, 3);
            *(_BYTE *)(v101 + 24) |= 1u;
            *(_DWORD *)(v101 + 56) = 0;
          }
          else
          {
            v102 = *(unsigned int *)(v101 + 56);
            v103 = *(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(unsigned int *)(v101 + 60) < (unsigned __int64)(v102 + 1) )
            {
              sub_25D6060(v101 + 48, v101 + 64, v102 + 1, 8);
              v102 = *(unsigned int *)(v101 + 56);
            }
            *(_QWORD *)(*(_QWORD *)(v101 + 48) + 8 * v102) = 0;
            v104 = *(_DWORD *)(v101 + 56) + 1;
            *(_DWORD *)(v101 + 56) = v104;
            v105 = *(_QWORD *)(v103 + 32);
            *(_BYTE *)(v101 + 24) |= 8u;
            *(_QWORD *)(v101 + 40) = v105;
            v106 = *(_QWORD **)(v103 + 40);
            if ( (*(_BYTE *)(v103 + 19) & 2) != 0 )
            {
              if ( *((_DWORD *)v106 + 2) <= 0x40u )
                v106 = (_QWORD *)*v106;
              else
                v106 = *(_QWORD **)*v106;
            }
            *(_QWORD *)(v101 + 32) = v106;
            *(_DWORD *)(v101 + 24) = *(_DWORD *)(v101 + 24) & 0xF | (16 * v104);
          }
        }
        if ( v150 > 0x40 && v149 )
          operator delete[](v149);
        if ( v158[0] != &v159 )
          operator delete(v158[0], v159 + 1);
        return 1;
      case 0xF:
        v107 = (unsigned __int64 *)(v7 + 24);
        v139 = v7 + 8LL * *(unsigned __int16 *)(v7 + 4) + 16;
        if ( v7 + 24 == v139 )
          return 1;
        while ( 2 )
        {
          v112 = *v107;
          v113 = *(unsigned __int16 *)(v7 + 6);
          if ( (*(_WORD *)*v107 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v113 && v112 == *(_QWORD *)(v7 + 8 * v113 + 16) )
            {
              if ( !(unsigned __int8)sub_871080(v6, *v107) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(v6->m128i_i64[0], *v107) )
            {
              return 0;
            }
LABEL_137:
            if ( (unsigned __int64 *)v139 == ++v107 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v113 || v112 != *(_QWORD *)(v7 + 8 * v113 + 16) )
        {
          if ( (*(_BYTE *)(v112 + 2) & 8) == 0 )
          {
            v108 = v6->m128i_i64[0];
            v158[0] = nullptr;
            LOBYTE(v160) = v160 | 1;
            v158[1] = nullptr;
            v159 = 0;
            v162 = 0;
            ptr = v165;
            v164 = 0x800000000LL;
            BYTE1(v166) = 0;
            v109 = *(_QWORD *)(v108 + 32);
            v144 = *(_QWORD *)(v112 + 16);
            if ( (*(_BYTE *)(v112 + 1) & 6) != 0 )
            {
              v147 = *(_QWORD *)(v108 + 32);
              v116 = sub_6C4DA0(*(_QWORD *)(v108 + 16), *(_QWORD *)(v112 + 8), 1u);
              v109 = v147;
              v110 = v116;
            }
            else
            {
              v110 = *(_QWORD *)(v112 + 8);
            }
            v111 = sub_823B90(v109, v112, v110, (__m128i *)v158);
            if ( !(unsigned __int8)sub_856400(v111, v108, v144) )
            {
              if ( ptr != v165 )
                free(ptr);
              return 0;
            }
            if ( ptr != v165 )
              free(ptr);
          }
          goto LABEL_137;
        }
        sub_827AF0(v6->m128i_i64[0], v7, 110);
        return 0;
      case 0x10:
        if ( *(char *)(v7 + 2) < 0 )
          goto LABEL_19;
        v7 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_39;
      case 0x13:
        a1 = v7;
        v7 = sub_83DE90(v7);
        continue;
      case 0x18:
        v41 = v6->m128i_i64[0];
        a2 = v7;
        a1 = *(_QWORD *)(v6->m128i_i64[0] + 32);
        v42 = (unsigned int *)sub_821340(a1, v7);
        if ( !v42 || (a1 = *v42, !(_DWORD)a1) )
        {
          v43 = *(_QWORD *)(v7 + 16);
          if ( !v43 || v7 == v43 )
          {
            sub_827AF0(v41, v7, 110);
            return 0;
          }
          v7 = *(_QWORD *)(v7 + 16);
          continue;
        }
        sub_824D00(v6->m128i_i64[1], *(_QWORD **)(v41 + 16), (__int64)v42);
        return 1;
      case 0x1B:
      case 0x7D:
        sub_823800((__m128i *)v6->m128i_i64[1], v7);
        return 1;
      case 0x25:
        if ( !*(_QWORD *)(v7 + 24) && *(_QWORD *)(v7 + 16) )
          goto LABEL_91;
        v13 = v6->m128i_i64[0];
        if ( !*(_DWORD *)(v6->m128i_i64[0] + 48) )
          goto LABEL_13;
        v14 = *(_BYTE *)(v13 + 962);
        v15 = *(_BYTE *)(v13 + 963);
        v16 = *(_BYTE **)(v13 + 24);
        if ( v14 )
        {
          *v16 = 1;
LABEL_12:
          sub_857160(v6->m128i_i64[0], *(_QWORD *)(v7 + 16));
          goto LABEL_13;
        }
        *v16 |= v15;
        if ( v15 )
          goto LABEL_12;
        goto LABEL_13;
      case 0x2C:
        return sub_8598A0(v6->m128i_i64, v7);
      case 0x33:
        a3 = *(__int64 **)(v7 + 16);
        v114 = (__int64)(*(_QWORD *)(v7 + 24) - (_QWORD)a3) >> 3;
        if ( !(_DWORD)v114 )
          goto LABEL_36;
        if ( (_DWORD)v114 != 1 )
          goto LABEL_13;
        v7 = *a3;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
LABEL_36:
        sub_823870((__m128i *)v6->m128i_i64[1], *(_QWORD *)(v6->m128i_i64[0] + 16), *(_QWORD *)(v7 + 8));
        return 1;
      case 0x37:
        a3 = (__int64 *)((*(_DWORD *)(v7 + 16) >> 15) & 0x7FFF);
        v7 = *(_QWORD *)(v7 + 8LL * ((unsigned int)a3 + ((*(_BYTE *)(v7 + 19) & 0x40) != 0)) + 32);
        continue;
      case 0x3A:
        v62 = v6->m128i_i64[0];
        v63 = *(_QWORD *)(v6->m128i_i64[0] + 32);
        v64 = *(_DWORD *)(v6->m128i_i64[0] + 320);
        v158[0] = (void *)v6->m128i_i64[0];
        v65 = *(_DWORD *)(v63 + 208);
        LODWORD(v158[1]) = v64;
        *(_DWORD *)(v63 + 208) = v65 + 1;
        sub_847EC0(v63 + 184, v65 + 1);
        v66 = sub_871080(v6, *(_QWORD *)(v7 + 16));
        if ( v66 )
        {
          v66 = sub_8941C0(v62, 1, v64);
          LODWORD(v158[1]) = -1;
        }
        v137 = v66;
        sub_894600(v158);
        return v137;
      case 0x3B:
        if ( (*(_WORD *)(v7 + 2) & 0x1E0) == 0 )
          goto LABEL_19;
        sub_805700((__int64)v158, v7);
LABEL_151:
        sub_824D00(v6->m128i_i64[1], *(_QWORD **)(v6->m128i_i64[0] + 16), (__int64)v158);
        if ( LODWORD(v158[0]) > 1 )
          sub_69F740((__int64)v158);
        return 1;
      case 0x3E:
        return sub_859DC0(v6->m128i_i64, v7);
      case 0x40:
        sub_25AA9C0("Not yet implemented for ExprConstant.cpp", 1, a3, a4);
      case 0x4A:
        goto LABEL_41;
      case 0x4B:
        if ( *(_BYTE *)(v7 + 48) )
LABEL_39:
          v7 = *(_QWORD *)(v7 + 24);
        else
LABEL_41:
          v7 = *(_QWORD *)(v7 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        return sub_8BA710(v6, v7);
      case 0x50:
        v22 = (unsigned __int8 **)sub_A2E240(v6->m128i_i64[0], v7, 2215, 0);
        if ( v22 )
          sub_823450(v22, 0);
        return sub_8BA710(v6, v7);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v6->m128i_i64[0] + 16) + 2160LL) + 1LL) >= 0 )
        {
          v115 = (unsigned __int8 **)sub_A2E240(v6->m128i_i64[0], v7, 2215, 0);
          if ( v115 )
            sub_823450(v115, 1);
        }
        return sub_8BA710(v6, v7);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8A51B0(v6, v7);
      case 0x60:
        v24 = v6->m128i_i64[0];
        if ( *(_BYTE *)(v6->m128i_i64[0] + 962) )
          return 0;
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 24LL);
        if ( !v25 || (*(_BYTE *)(v25 + 80) & 0x7Fu) - 33 > 3 )
          goto LABEL_51;
        v26 = sub_79A330(v25 + 72);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 64);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 10) & 0x20) != 0 && (unsigned int)sub_780B80(v25) == 42 )
            {
              v28 = sub_7A55C0((_DWORD *)v25);
              if ( v28 )
                goto LABEL_53;
            }
          }
        }
        v24 = v6->m128i_i64[0];
LABEL_51:
        v29 = *(const __m128i **)(*(_QWORD *)(v24 + 32) + 32LL);
        if ( !v29 )
          goto LABEL_201;
        v30 = (__m128i *)v6->m128i_i64[1];
        *v30 = _mm_loadu_si128(v29);
        v30[1].m128i_i64[0] = v29[1].m128i_i64[0];
        v31 = v29[1].m128i_i8[8] & 1 | v30[1].m128i_i8[8] & 0xFE;
        v30[1].m128i_i8[8] = v31;
        v32 = v29[1].m128i_i8[8] & 2 | v31 & 0xFD;
        v30[1].m128i_i8[8] = v32;
        v33 = v29[1].m128i_i8[8] & 4 | v32 & 0xFB;
        v30[1].m128i_i8[8] = v33;
        v30[1].m128i_i8[8] = v29[1].m128i_i8[8] & 8 | v33 & 0xF7;
        v30[1].m128i_i32[2] = v29[1].m128i_i32[2] & 0xFFFFFFF0 | v30[1].m128i_i32[2] & 0xF;
        v30[2].m128i_i64[0] = v29[2].m128i_i64[0];
        v30[2].m128i_i64[1] = v29[2].m128i_i64[1];
        sub_820650((__int64)v30[3].m128i_i64, (__int64)v29[3].m128i_i64);
        v34 = v29[8].m128i_i8[0] & 1 | v30[8].m128i_i8[0] & 0xFE;
        v30[8].m128i_i8[0] = v34;
        v30[8].m128i_i8[0] = v29[8].m128i_i8[0] & 2 | v34 & 0xFD;
        v30[8].m128i_i8[1] = v29[8].m128i_i8[1];
        v28 = 0;
LABEL_53:
        v35 = *(_QWORD *)(*(_QWORD *)(v6->m128i_i64[0] + 32) + 24LL);
        if ( !v35 || (*(_BYTE *)(v35 + 80) & 0x7Fu) - 33 > 3 )
          return 1;
        v36 = *(_QWORD *)(sub_79A2E0(v35 + 72) + 16);
        v37 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v36 & 4) != 0 )
          v37 = (_QWORD *)*v37;
        if ( !v37 )
          return 1;
        v38 = v37[8];
        if ( !v38 || (*(_BYTE *)(v38 + 10) & 0x20) == 0 || (unsigned int)sub_780B80(v35) != 42 )
          return 1;
        v24 = v6->m128i_i64[0];
        v39 = *(__int64 **)(v6->m128i_i64[0] + 32);
        v40 = v39[30];
        if ( v40 )
          return sub_867340(
                   v24,
                   (_DWORD *)v7,
                   v6->m128i_i64[1],
                   v39[3],
                   v40,
                   *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 41);
        if ( !v28 || v39[4] )
          return 1;
LABEL_201:
        v125 = sub_A2CB40(v24);
        v126 = v6->m128i_i64[0];
        if ( (*(_BYTE *)(v125 + 1) & 0x10) != 0 )
        {
          v127 = (unsigned __int8 **)sub_A2E130(v126, v7, 2286, 0);
          if ( v127 )
            sub_823450(v127, (*(_BYTE *)(v7 + 2) & 8) != 0);
        }
        else
        {
          sub_A2E130(v126, v7, 110, 0);
        }
        return 0;
      case 0x68:
        return sub_89A7A0(v6, v7);
      case 0x6D:
        v83 = *(_QWORD *)(v6->m128i_i64[0] + 32);
        v87 = *(_DWORD *)(v83 + 208) + 1;
        *(_DWORD *)(v83 + 208) = v87;
        sub_847EC0(v83 + 184, v87);
        v88 = sub_8C4900(v7);
        v89 = v6->m128i_i64[0];
        if ( v88 )
        {
          v90 = *(_QWORD *)(v89 + 32);
          if ( *(_QWORD *)(v90 + 64) )
          {
            v91 = sub_8C4900(v7);
            result = sub_871080(v6, v91);
          }
          else
          {
            *(_QWORD *)(v90 + 64) = v7;
            v118 = sub_8C4900(v7);
            result = sub_871080(v6, v118);
            *(_QWORD *)(v90 + 64) = 0;
          }
        }
        else
        {
          sub_827AF0(v89, v7, 110);
          result = 0;
        }
        goto LABEL_108;
      case 0x6E:
        v83 = *(_QWORD *)(v6->m128i_i64[0] + 32);
        v84 = *(_DWORD *)(v83 + 208) + 1;
        *(_DWORD *)(v83 + 208) = v84;
        sub_847EC0(v83 + 184, v84);
        v85 = *(_QWORD *)(v6->m128i_i64[0] + 32);
        if ( *(_QWORD *)(v85 + 64) )
        {
          v86 = sub_8C4680(v7);
          result = sub_871080(v6, v86);
        }
        else
        {
          *(_QWORD *)(v85 + 64) = v7;
          v117 = sub_8C4680(v7);
          result = sub_871080(v6, v117);
          *(_QWORD *)(v85 + 64) = 0;
        }
LABEL_108:
        --*(_DWORD *)(v83 + 192);
        return result;
      case 0x73:
        v67 = *(_QWORD *)(v7 + 16);
        if ( *(_DWORD *)(v67 + 112) || (*(_BYTE *)(v67 + 49) & 0x40) != 0 )
          goto LABEL_13;
LABEL_91:
        v68 = v6->m128i_i64[1];
        sub_69F1F0((__int64)v158, v7, 0, 0);
        sub_823790(v68, (__int64)v158[0], (__int64)v158[1], 0);
        return 1;
      case 0x74:
      case 0x75:
        v11 = v7;
        v12 = v6;
        return sub_89F4B0(v12, v11);
      case 0x7E:
        v136 = *(_QWORD *)(v7 + 24);
        v44 = (_WORD *)sub_8116F0(v136);
        v45 = v136;
        v46 = (__int64)v44;
        v47 = *v44 & 0x1FF;
        if ( v47 > 0x59u && v47 <= 0x5Eu )
        {
          v48 = sub_80FBD0(v46);
          v49 = v6->m128i_i64[0];
          v50 = v6->m128i_i64[0];
          if ( v48 == 212 )
          {
            v55 = *(_BYTE *)(v49 + 962);
            result = 0;
            if ( v55 )
              return result;
            v128 = *(_QWORD *)(v49 + 24);
            v53 = *(_DWORD *)(v49 + 964);
            v129 = *(_QWORD *)(v128 + 8);
            if ( v129 && !*(_DWORD *)(v129 + 8) )
              v55 = *(_BYTE *)v128 ^ 1;
            *(_DWORD *)(v49 + 964) = 2;
            v54 = 1;
            v49 = v6->m128i_i64[0];
            v45 = *(_QWORD *)(v7 + 24);
          }
          else
          {
            v51 = *(_QWORD *)(v49 + 24);
            v52 = *(_QWORD *)(v51 + 8);
            if ( v52 )
            {
              v45 = *(_QWORD *)(v7 + 24);
              goto LABEL_76;
            }
            v53 = *(_DWORD *)(v49 + 964);
            v45 = *(_QWORD *)(v7 + 24);
            v55 = 0;
            v54 = 0;
          }
LABEL_78:
          if ( (unsigned __int8)sub_8571E0(v45, v158, v49) )
          {
            if ( LOBYTE(v158[0]) )
              v119 = *(_QWORD *)(v7 + 32);
            else
              v119 = *(_QWORD *)(v7 + 40);
            result = sub_871080(v6, v119);
            if ( (_BYTE)result )
            {
              if ( v54 )
              {
                if ( v55 )
                {
                  v120 = *(_QWORD *)(v50 + 24);
                  v121 = *(_QWORD *)(v120 + 8);
                  v122 = *(_DWORD *)(v121 + 8);
                  if ( v122 )
                  {
                    if ( !*(_BYTE *)v120 )
                    {
                      v140 = result;
                      sub_8481D0(*(_QWORD *)v121, *(_QWORD *)v121 + 32LL * v122);
                      result = v140;
                      *(_DWORD *)(v121 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_84;
            }
          }
          else
          {
            v56 = v6->m128i_i64[0];
            v57 = *(_BYTE *)(v6->m128i_i64[0] + 962);
            v58 = *(_DWORD *)(v6->m128i_i64[0] + 48);
            if ( !v57 )
            {
              if ( !v58 )
                goto LABEL_83;
              goto LABEL_188;
            }
            if ( v58 )
            {
              v59 = sub_820420(1u, *(unsigned __int8 *)(v56 + 963));
              *v61 = v59 | v60;
              if ( v59 )
              {
                sub_8749D0(v6, v7);
                goto LABEL_83;
              }
              v56 = v6->m128i_i64[0];
              if ( !*(_DWORD *)(v6->m128i_i64[0] + 48) )
                goto LABEL_83;
              v57 = *(_BYTE *)(v56 + 962);
LABEL_188:
              v123 = *(_BYTE *)(v56 + 963) | v57;
              **(_BYTE **)(v56 + 24) |= v123;
              if ( v123 )
              {
                sub_871080(v6, *(_QWORD *)(v7 + 32));
                sub_871080(v6, *(_QWORD *)(v7 + 40));
              }
            }
          }
LABEL_83:
          result = 0;
LABEL_84:
          *(_DWORD *)(v50 + 964) = v53;
          return result;
        }
        v49 = v6->m128i_i64[0];
        v51 = *(_QWORD *)(v6->m128i_i64[0] + 24);
        v50 = v6->m128i_i64[0];
        v52 = *(_QWORD *)(v51 + 8);
        if ( !v52 )
        {
LABEL_162:
          v53 = *(_DWORD *)(v49 + 964);
          v55 = 0;
          v54 = 0;
          goto LABEL_78;
        }
LABEL_76:
        if ( !*(_DWORD *)(v52 + 8) )
        {
          v53 = *(_DWORD *)(v49 + 964);
          v54 = 0;
          v55 = *(_BYTE *)v51 ^ 1;
          goto LABEL_78;
        }
        goto LABEL_162;
    }
  }
}

