char *__fastcall sub_1E06AB0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, char a4, __int64 *a5, __int64 a6)
{
  char *v6; // rbx
  __int64 *v7; // rbp
  __m128 v8; // xmm1
  __int64 v9; // r14
  unsigned int v10; // eax
  char v11; // dl
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __m128 v16; // xmm0
  __int64 v17; // rcx
  char v18; // al
  void *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // r15
  unsigned __int64 *v25; // r14
  unsigned __int128 v26; // kr10_16
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // rax
  void *v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // edi
  char ***v32; // r10
  unsigned __int64 v33; // rdi
  __int64 *v34; // rsi
  size_t v35; // r8
  __int64 v36; // r9
  char *v37; // rax
  unsigned int v38; // r11d
  __int64 *v39; // rdi
  int v40; // r9d
  void *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 *v45; // r14
  unsigned __int64 *v46; // r15
  unsigned __int64 v47; // rdx
  unsigned __int16 *v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 *v52; // rdx
  __int64 v53; // rcx
  char v54; // dl
  const void *v55; // rcx
  __int64 v56; // r8
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // r15
  unsigned __int64 *v59; // r14
  unsigned __int128 i; // kr30_16
  unsigned __int16 *v61; // rax
  unsigned __int64 v62; // rax
  void *v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 *v65; // r15
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // r14
  unsigned __int64 *v69; // rbx
  unsigned __int64 *v70; // r14
  _BYTE *v71; // rax
  signed __int64 v72; // r14
  char *v73; // r8
  signed __int64 v74; // r14
  __int64 v75; // r9
  __int64 v76; // rax
  int v77; // edx
  char ***v78; // r14
  char v79; // al
  char v80; // al
  unsigned __int64 *v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 *v83; // r15
  unsigned __int64 *v84; // r14
  unsigned __int128 v85; // kr40_16
  unsigned __int16 *v86; // rax
  unsigned __int64 v87; // rax
  void *v88; // rax
  unsigned __int64 v89; // rdx
  char v90; // dl
  const void *v91; // rcx
  __int64 v92; // r8
  char v93; // dl
  const void *v94; // rcx
  __int64 v95; // r8
  char *v96; // rdi
  unsigned __int64 *v97; // rax
  unsigned __int16 *v98; // rax
  char v99; // dl
  const void *v100; // rcx
  __int64 v101; // r8
  unsigned __int64 v102; // r14
  __int64 v103; // rax
  int v104; // [rsp+0h] [rbp-258h]
  char v105; // [rsp+7h] [rbp-251h]
  __int64 v106; // [rsp+8h] [rbp-250h]
  __m128i v107; // [rsp+10h] [rbp-248h] BYREF
  unsigned __int64 v108; // [rsp+20h] [rbp-238h]
  __int8 *v109; // [rsp+28h] [rbp-230h]
  unsigned __int64 v110; // [rsp+30h] [rbp-228h] BYREF
  char ***p_dest; // [rsp+38h] [rbp-220h]
  _QWORD *v112; // [rsp+40h] [rbp-218h]
  void *src; // [rsp+48h] [rbp-210h]
  char ***v114; // [rsp+50h] [rbp-208h]
  size_t v115; // [rsp+58h] [rbp-200h]
  __int64 *v116; // [rsp+60h] [rbp-1F8h]
  __int64 v117; // [rsp+68h] [rbp-1F0h]
  char *v118; // [rsp+70h] [rbp-1E8h]
  void *v119; // [rsp+78h] [rbp-1E0h]
  __m128i v120; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v121; // [rsp+90h] [rbp-1C8h]
  __int64 v122; // [rsp+98h] [rbp-1C0h]
  char *v123; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v124; // [rsp+A8h] [rbp-1B0h]
  void *v125; // [rsp+B0h] [rbp-1A8h] BYREF
  int v126; // [rsp+B8h] [rbp-1A0h]
  __int64 v127; // [rsp+C0h] [rbp-198h] BYREF
  void *dest; // [rsp+F0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-160h] BYREF
  void *ptr; // [rsp+130h] [rbp-128h] BYREF
  __int64 v131; // [rsp+138h] [rbp-120h]
  _BYTE v132[48]; // [rsp+140h] [rbp-118h] BYREF
  char v133; // [rsp+170h] [rbp-E8h]
  _BYTE v134[4]; // [rsp+180h] [rbp-D8h] BYREF
  unsigned int v135; // [rsp+184h] [rbp-D4h]
  unsigned int v136; // [rsp+188h] [rbp-D0h]
  unsigned int v137; // [rsp+18Ch] [rbp-CCh]
  char **v138; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+198h] [rbp-C0h]
  _BYTE v140[48]; // [rsp+1A0h] [rbp-B8h] BYREF
  char v141; // [rsp+1D0h] [rbp-88h]
  unsigned __int8 v142; // [rsp+210h] [rbp-48h]

  v6 = (char *)a1;
  *a1 = a1 + 2;
  v112 = a1 + 2;
  a1[1] = 0x600000000LL;
  v108 = a2;
  v110 = a3;
  v105 = a4;
  v106 = (__int64)&a5[a6];
  if ( a5 != (__int64 *)v106 )
  {
    v7 = a5;
    p_dest = (char ***)&dest;
    v109 = &si128.m128i_i8[8];
    v8 = _mm_loadh_ps((const double *)&v110);
    v107 = (__m128i)v8;
    while ( 2 )
    {
      v9 = *v7;
      v10 = *(_DWORD *)(*v7 + 12);
      v11 = *(_BYTE *)(*v7 + 8);
      v142 = 0;
      v134[0] = v105;
      v135 = v10;
      v12 = *(_DWORD *)(v9 + 16);
      v134[1] = v11;
      v137 = 0;
      v136 = v12;
      if ( (unsigned __int8)sub_EADB30(v9) )
        v137 = *(_DWORD *)(v9 + 20);
      v15 = *(_QWORD *)v6;
      v16 = (__m128)_mm_load_si128(&v107);
      v123 = v134;
      v124 = 0;
      v17 = *((unsigned int *)v6 + 2);
      v120 = (__m128i)v16;
      v18 = *(_BYTE *)(v9 + 8);
      v121 = v15;
      v122 = v17;
      switch ( v18 )
      {
        case 3:
          v80 = *(_BYTE *)(v9 + 32);
          switch ( v80 )
          {
            case -1:
              goto LABEL_200;
            case 0:
              v19 = (void *)sub_EB2C30(*(_QWORD **)(v108 + 248), v135, v137, *(_QWORD *)(v9 + 24), v136, v14);
              v124 = (unsigned __int64)v19;
              goto LABEL_7;
            case 1:
              v19 = (void *)sub_EB2CD0(*(_QWORD **)(v108 + 248), v135, v137, *(_QWORD *)(v9 + 24), v136, v14);
              v124 = (unsigned __int64)v19;
              goto LABEL_7;
          }
          goto LABEL_200;
        case 5:
        case 6:
        case 7:
          sub_1E05FF0((__int64)&v120, v9, v16, v8, v15, v17, v13, v14);
          v19 = (void *)v124;
          goto LABEL_7;
        case 8:
        case 9:
        case 10:
          sub_1E06800((__int64)&v120, v9, v16, v8, v15, v17, v13, v14);
          v19 = (void *)v124;
          goto LABEL_7;
        case 11:
        case 12:
        case 13:
          sub_1E06550((__int64)&v120, v9, v16, v8, v15, v17, v13, v14);
          v19 = (void *)v124;
          goto LABEL_7;
        case 14:
        case 15:
        case 16:
          sub_1E062A0((__int64)&v120, v9, v16, v8, v15, v17, v13, v14);
          v19 = (void *)v124;
          goto LABEL_7;
        case 23:
          v57 = *(unsigned __int64 **)(v9 + 24);
          v58 = &v57[*(_QWORD *)(v9 + 32)];
          dest = v109;
          si128.m128i_i64[0] = 0x600000000LL;
          if ( v57 == v58 )
          {
            src = v109;
            goto LABEL_180;
          }
          v59 = v57;
          for ( i = __PAIR128__(v110, v108); ; i = (unsigned __int128)v120 )
          {
            v61 = sub_1DF2070(i, *v59, *((unsigned __int64 *)&i + 1), v17, v13, v14, v16, v8);
            if ( (unsigned __int64)v61 > 1 )
            {
              v62 = sub_1AA8160(
                      *(__int64 **)(v120.m128i_i64[0] + 744),
                      (unsigned __int8)*v123,
                      v123[1],
                      (unsigned __int64)v61 & 0xFFFFFFFFFFFFFFFELL);
              if ( v62 > 1 )
                break;
            }
            if ( v58 == ++v59 )
              goto LABEL_89;
LABEL_83:
            ;
          }
          v17 = si128.m128i_u32[0];
          v63 = (void *)(v62 & 0xFFFFFFFFFFFFFFFELL);
          v64 = si128.m128i_u32[0] + 1LL;
          if ( v64 > si128.m128i_u32[1] )
          {
            src = v63;
            sub_2237220(p_dest, v109, v64, 8);
            v17 = si128.m128i_u32[0];
            v63 = src;
          }
          ++v59;
          *((_QWORD *)dest + v17) = v63;
          ++si128.m128i_i32[0];
          if ( v58 != v59 )
            goto LABEL_83;
LABEL_89:
          v65 = (unsigned __int64 *)dest;
          v66 = 8LL * si128.m128i_u32[0];
          src = (char *)dest + v66;
          v67 = v66 >> 3;
          v68 = v66 >> 5;
          if ( v68 )
          {
            while ( 1 )
            {
              if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, *v65) )
                goto LABEL_96;
              if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, v65[1]) )
              {
                ++v65;
                goto LABEL_96;
              }
              if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, v65[2]) )
              {
                v65 += 2;
                goto LABEL_96;
              }
              if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, v65[3]) )
                break;
              v65 += 4;
              if ( !--v68 )
              {
                v67 = ((_BYTE *)src - (_BYTE *)v65) >> 3;
                goto LABEL_173;
              }
            }
            v65 += 3;
            goto LABEL_96;
          }
LABEL_173:
          if ( v67 == 2 )
            goto LABEL_177;
          if ( v67 != 3 )
          {
            if ( v67 == 1 )
            {
LABEL_179:
              if ( (unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, *v65) )
                goto LABEL_96;
            }
LABEL_180:
            v65 = (unsigned __int64 *)src;
            goto LABEL_103;
          }
          if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, *v65) )
          {
            ++v65;
LABEL_177:
            if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, *v65) )
            {
              ++v65;
              goto LABEL_179;
            }
          }
LABEL_96:
          if ( v65 != src && v65 + 1 != src )
          {
            v118 = v6;
            v69 = v65 + 1;
            v70 = (unsigned __int64 *)src;
            do
            {
              if ( !(unsigned __int8)sub_1AA3DE0(*(__int64 **)(v120.m128i_i64[0] + 744), 23, *v69) )
                *v65++ = *v69;
              ++v69;
            }
            while ( v69 != v70 );
            v6 = v118;
          }
LABEL_103:
          v71 = dest;
          v72 = (_BYTE *)dest + 8 * si128.m128i_u32[0] - (_BYTE *)src;
          if ( (char *)dest + 8 * si128.m128i_u32[0] != src )
          {
            memmove(v65, src, (_BYTE *)dest + 8 * si128.m128i_u32[0] - (_BYTE *)src);
            v71 = dest;
          }
          v73 = v123;
          ptr = v132;
          si128.m128i_i32[0] = ((char *)v65 + v72 - v71) >> 3;
          v74 = 8LL * si128.m128i_u32[0];
          v131 = 0x600000000LL;
          v75 = v74 >> 3;
          if ( (unsigned __int64)v74 > 0x30 )
          {
            v119 = v71;
            v118 = v123;
            src = (void *)(v74 >> 3);
            sub_2237220(&ptr, v132, v74 >> 3, 8);
            v75 = (__int64)src;
            v73 = v118;
            v71 = v119;
            v96 = (char *)ptr + 8 * (unsigned int)v131;
          }
          else
          {
            if ( !v74 )
              goto LABEL_107;
            v96 = v132;
          }
          v118 = (char *)v75;
          src = v73;
          memcpy(v96, v71, v74);
          LODWORD(v75) = (_DWORD)v118;
          v73 = (char *)src;
          LODWORD(v74) = v131;
LABEL_107:
          v133 = 0;
          LODWORD(v131) = v75 + v74;
          v76 = (unsigned __int8)v73[144];
          v77 = v75 + v74;
          v78 = (char ***)(v73 + 16);
          if ( (_BYTE)v76 == 0xFF )
          {
LABEL_110:
            *((_QWORD *)v73 + 2) = v73 + 32;
            *((_QWORD *)v73 + 3) = 0x600000000LL;
            if ( v77 )
            {
              src = v73;
              sub_1576230(v78, (char ***)&ptr);
              v73 = (char *)src;
            }
            v79 = v133;
            v73[144] = 4;
            v73[80] = v79;
          }
          else
          {
            src = v73;
            if ( (_BYTE)v76 != 4 )
            {
              funcs_1576A39[v76]();
              v77 = v131;
              v73 = (char *)src;
              goto LABEL_110;
            }
            sub_1576230((char ***)v73 + 2, (char ***)&ptr);
            *((_BYTE *)src + 80) = v133;
          }
          if ( ptr != v132 )
            free(ptr);
          if ( !(unsigned __int8)sub_1AC3EF0(*(_QWORD *)(v120.m128i_i64[0] + 744), v123, 0, *(double *)v16.m128_u64) )
          {
            v99 = v123[144];
            if ( v123[1] == 41 )
            {
              if ( v99 == 7 )
              {
                v100 = *((const void **)v123 + 3);
                v101 = *((unsigned int *)v123 + 8);
LABEL_163:
                v19 = (void *)sub_EB4200(
                                *(_QWORD **)(v120.m128i_i64[0] + 248),
                                *((_DWORD *)v123 + 1),
                                *((_DWORD *)v123 + 3),
                                v100,
                                v101,
                                *((unsigned int *)v123 + 2));
                v41 = dest;
                v124 = (unsigned __int64)v19;
                if ( dest != v109 )
                  goto LABEL_164;
                goto LABEL_7;
              }
            }
            else if ( v99 == 4 )
            {
              v100 = *((const void **)v123 + 2);
              v101 = *((unsigned int *)v123 + 6);
              goto LABEL_163;
            }
LABEL_200:
            abort();
          }
          v41 = dest;
          if ( dest == v109 )
            goto LABEL_42;
LABEL_164:
          free(v41);
          v19 = (void *)v124;
LABEL_7:
          if ( v19 )
          {
            v20 = *((unsigned int *)v6 + 2);
            if ( v20 + 1 > (unsigned __int64)*((unsigned int *)v6 + 3) )
            {
              src = v19;
              sub_2237220(v6, v112, v20 + 1, 8);
              v20 = *((unsigned int *)v6 + 2);
              v19 = src;
            }
            *(_QWORD *)(*(_QWORD *)v6 + 8 * v20) = v19;
            ++*((_DWORD *)v6 + 2);
          }
          if ( v142 == 0xFF )
          {
            if ( (__int64 *)v106 == ++v7 )
              return v6;
          }
          else
          {
            ++v7;
            funcs_1576A39[v142]();
            if ( (__int64 *)v106 == v7 )
              return v6;
          }
          continue;
        case 24:
          v81 = *(unsigned __int64 **)(v9 + 24);
          v82 = *(_QWORD *)(v9 + 32);
          si128.m128i_i64[0] = 0x600000000LL;
          v83 = &v81[v82];
          dest = v109;
          if ( v81 == v83 )
          {
            v131 = 0x600000000LL;
            ptr = v132;
            goto LABEL_135;
          }
          v84 = v81;
          v85 = __PAIR128__(v110, v108);
          while ( 2 )
          {
            v86 = sub_1DF2070(v85, *v84, *((unsigned __int64 *)&v85 + 1), v82, v13, v14, v16, v8);
            if ( (unsigned __int64)v86 <= 1
              || (v87 = sub_1AA8160(
                          *(__int64 **)(v120.m128i_i64[0] + 744),
                          (unsigned __int8)*v123,
                          v123[1],
                          (unsigned __int64)v86 & 0xFFFFFFFFFFFFFFFELL),
                  v87 <= 1) )
            {
              if ( v83 == ++v84 )
              {
LABEL_133:
                ptr = v132;
                v131 = 0x600000000LL;
                if ( si128.m128i_i32[0] )
                  sub_1576230((char ***)&ptr, p_dest);
LABEL_135:
                v133 = 0;
                if ( v142 != 0xFF )
                {
                  if ( v142 == 4 )
                  {
                    sub_1576230(&v138, (char ***)&ptr);
                    v141 = v133;
                    goto LABEL_141;
                  }
                  funcs_1576A39[v142]();
                }
                v138 = (char **)v140;
                v139 = 0x600000000LL;
                if ( (_DWORD)v131 )
                  sub_1576230(&v138, (char ***)&ptr);
                v142 = 4;
                v141 = v133;
LABEL_141:
                if ( ptr != v132 )
                  free(ptr);
                if ( dest != v109 )
                  free(dest);
                if ( !(unsigned __int8)sub_1AC3EF0(
                                         *(_QWORD *)(v120.m128i_i64[0] + 744),
                                         v123,
                                         0,
                                         *(double *)v16.m128_u64) )
                {
                  v90 = v123[144];
                  if ( v123[1] == 41 )
                  {
                    if ( v90 != 7 )
                      goto LABEL_200;
                    v91 = *((const void **)v123 + 3);
                    v92 = *((unsigned int *)v123 + 8);
                  }
                  else
                  {
                    if ( v90 != 4 )
                      goto LABEL_200;
                    v91 = *((const void **)v123 + 2);
                    v92 = *((unsigned int *)v123 + 6);
                  }
                  v19 = (void *)sub_EB3E40(
                                  *(_QWORD **)(v120.m128i_i64[0] + 248),
                                  *((_DWORD *)v123 + 1),
                                  *((_DWORD *)v123 + 3),
                                  v91,
                                  v92,
                                  *((unsigned int *)v123 + 2));
                  v124 = (unsigned __int64)v19;
                  goto LABEL_7;
                }
LABEL_42:
                v19 = (void *)v124;
                goto LABEL_7;
              }
            }
            else
            {
              v82 = si128.m128i_u32[0];
              v88 = (void *)(v87 & 0xFFFFFFFFFFFFFFFELL);
              v89 = si128.m128i_u32[0] + 1LL;
              if ( v89 > si128.m128i_u32[1] )
              {
                src = v88;
                sub_2237220(p_dest, v109, v89, 8);
                v82 = si128.m128i_u32[0];
                v88 = src;
              }
              ++v84;
              *((_QWORD *)dest + v82) = v88;
              ++si128.m128i_i32[0];
              if ( v83 == v84 )
                goto LABEL_133;
            }
            v85 = (unsigned __int128)v120;
            continue;
          }
        case 25:
          v19 = (void *)sub_EB45C0(*(_QWORD **)(v108 + 248), 25, v135, v137, v9 + 32, *(unsigned int *)(v9 + 24), v136);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 26:
          v19 = (void *)sub_EB45C0(*(_QWORD **)(v108 + 248), 26, v135, v137, v9 + 32, *(unsigned int *)(v9 + 24), v136);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 29:
          v131 = 0x600000000LL;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          v31 = *(_DWORD *)(v9 + 32);
          v32 = p_dest + 3;
          dest = p_dest + 3;
          ptr = v132;
          if ( v31 )
          {
            v97 = *(unsigned __int64 **)(v9 + 24);
            src = p_dest + 3;
            v98 = sub_1DF2070(v108, *v97, v110, v17, v13, v14, v16, v8);
            if ( (unsigned __int64)v98 > 1 )
            {
              v102 = sub_1ACAAD0(
                       *(_QWORD *)(v120.m128i_i64[0] + 744),
                       v121,
                       v122,
                       *v123,
                       *(_BYTE *)(v9 + 8LL * *(unsigned int *)(v9 + 32) + 40),
                       (_WORD *)((unsigned __int64)v98 & 0xFFFFFFFFFFFFFFFELL),
                       *(double *)v16.m128_u64,
                       v104,
                       v106,
                       v107.m128i_i64[0],
                       v107.m128i_i32[2]);
              if ( v102 > 1 )
              {
                v103 = si128.m128i_i64[0];
                if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
                {
                  sub_2236E10(p_dest, src, si128.m128i_i64[0] + 1, 1);
                  v103 = si128.m128i_i64[0];
                }
                *((_BYTE *)dest + v103) = 1;
                ++si128.m128i_i64[0];
                sub_14B7B40((__int64)&ptr, v102 & 0xFFFFFFFFFFFFFFFELL);
              }
            }
            v33 = v120.m128i_i64[0];
            v37 = v123;
            v34 = (__int64 *)ptr;
            v36 = (unsigned int)v131;
            v32 = (char ***)dest;
            v35 = si128.m128i_i64[0];
            v15 = v121;
            v17 = v122;
          }
          else
          {
            v33 = v108;
            v34 = (__int64 *)v132;
            v35 = 0;
            v36 = 0;
            v37 = v134;
          }
          v38 = *((_DWORD *)v37 + 2);
          v116 = v34;
          v117 = v36;
          v39 = *(__int64 **)(v33 + 744);
          v115 = v35;
          v40 = *((_DWORD *)v37 + 3);
          v114 = v32;
          v124 = sub_1AC4620(
                   v39,
                   *v37,
                   v15,
                   v17,
                   *((_DWORD *)v37 + 1),
                   v40,
                   *(double *)v16.m128_u64,
                   v32,
                   v35,
                   v34,
                   v117,
                   v38);
          if ( ptr != v132 )
            free(ptr);
          v41 = dest;
          if ( dest != p_dest + 3 )
            goto LABEL_164;
          goto LABEL_42;
        case 34:
          v42 = v108;
          v43 = *(_QWORD *)(v9 + 24);
          src = *(void **)(v108 + 744);
          v44 = *(_QWORD *)(v9 + 32);
          dest = v109;
          v45 = (unsigned __int64 *)(v43 + 8 * v44);
          si128.m128i_i64[0] = 0x600000000LL;
          if ( (unsigned __int64 *)v43 != v45 )
          {
            v46 = (unsigned __int64 *)v43;
            v47 = v110;
            while ( 1 )
            {
              v48 = sub_1DF2070(v42, *v46, v47, v17, v43, v14, v16, v8);
              if ( (unsigned __int64)v48 <= 1
                || (v49 = sub_1AA8160(
                            *(__int64 **)(v120.m128i_i64[0] + 744),
                            (unsigned __int8)*v123,
                            v123[1],
                            (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFELL),
                    v49 <= 1) )
              {
                if ( v45 == ++v46 )
                  goto LABEL_59;
              }
              else
              {
                v17 = si128.m128i_u32[0];
                v50 = v49 & 0xFFFFFFFFFFFFFFFELL;
                v51 = si128.m128i_u32[0] + 1LL;
                if ( v51 > si128.m128i_u32[1] )
                {
                  v118 = (char *)v50;
                  sub_2237220(p_dest, v109, v51, 8);
                  v17 = si128.m128i_u32[0];
                  v50 = (unsigned __int64)v118;
                }
                ++v46;
                *((_QWORD *)dest + v17) = v50;
                ++si128.m128i_i32[0];
                if ( v45 == v46 )
                {
LABEL_59:
                  v52 = (unsigned __int64 *)dest;
                  v53 = si128.m128i_u32[0];
                  goto LABEL_60;
                }
              }
              v47 = v120.m128i_u64[1];
              v42 = v120.m128i_i64[0];
            }
          }
          v53 = 0;
          v52 = (unsigned __int64 *)v109;
LABEL_60:
          sub_1AC2210((__int64)&v125, (__int64 *)src, v52, v53, *(double *)v16.m128_u64);
          ptr = v132;
          v131 = 0x600000000LL;
          if ( v126 )
            sub_1576230((char ***)&ptr, (char ***)&v125);
          v133 = 0;
          if ( v142 == 0xFF )
            goto LABEL_65;
          if ( v142 == 4 )
          {
            sub_1576230(&v138, (char ***)&ptr);
            v141 = v133;
          }
          else
          {
            funcs_1576A39[v142]();
LABEL_65:
            v138 = (char **)v140;
            v139 = 0x600000000LL;
            if ( (_DWORD)v131 )
              sub_1576230(&v138, (char ***)&ptr);
            v142 = 4;
            v141 = v133;
          }
          if ( ptr != v132 )
            free(ptr);
          if ( v125 != &v127 )
            free(v125);
          if ( dest != v109 )
            free(dest);
          if ( (unsigned __int8)sub_1AC3EF0(*(_QWORD *)(v120.m128i_i64[0] + 744), v123, 0, *(double *)v16.m128_u64) )
            goto LABEL_42;
          v54 = v123[144];
          if ( v123[1] == 41 )
          {
            if ( v54 != 7 )
              goto LABEL_200;
            v55 = *((const void **)v123 + 3);
            v56 = *((unsigned int *)v123 + 8);
          }
          else
          {
            if ( v54 != 4 )
              goto LABEL_200;
            v55 = *((const void **)v123 + 2);
            v56 = *((unsigned int *)v123 + 6);
          }
          v19 = (void *)sub_EB3D50(
                          *(_QWORD **)(v120.m128i_i64[0] + 248),
                          *((_DWORD *)v123 + 1),
                          *((_DWORD *)v123 + 3),
                          v55,
                          v56,
                          *((unsigned int *)v123 + 2));
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 36:
          v19 = (void *)sub_EB28F0(*(_QWORD **)(v108 + 248), v135, v136, v17, v13, v14);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 39:
          v22 = *(unsigned __int64 **)(v9 + 24);
          v23 = *(_QWORD *)(v9 + 32);
          si128.m128i_i64[0] = 0x600000000LL;
          v24 = &v22[v23];
          dest = v109;
          if ( v22 == v24 )
          {
            v131 = 0x600000000LL;
            ptr = v132;
            goto LABEL_31;
          }
          v25 = v22;
          v26 = __PAIR128__(v110, v108);
          while ( 2 )
          {
            v27 = sub_1DF2070(v26, *v25, *((unsigned __int64 *)&v26 + 1), v23, v13, v14, v16, v8);
            if ( (unsigned __int64)v27 <= 1
              || (v28 = sub_1AA8160(
                          *(__int64 **)(v120.m128i_i64[0] + 744),
                          (unsigned __int8)*v123,
                          v123[1],
                          (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL),
                  v28 <= 1) )
            {
              if ( v24 == ++v25 )
              {
LABEL_29:
                ptr = v132;
                v131 = 0x600000000LL;
                if ( si128.m128i_i32[0] )
                  sub_1576230((char ***)&ptr, p_dest);
LABEL_31:
                v133 = 0;
                if ( v142 != 0xFF )
                {
                  if ( v142 == 4 )
                  {
                    sub_1576230(&v138, (char ***)&ptr);
                    v141 = v133;
                    goto LABEL_37;
                  }
                  funcs_1576A39[v142]();
                }
                v138 = (char **)v140;
                v139 = 0x600000000LL;
                if ( (_DWORD)v131 )
                  sub_1576230(&v138, (char ***)&ptr);
                v142 = 4;
                v141 = v133;
LABEL_37:
                if ( ptr != v132 )
                  free(ptr);
                if ( dest != v109 )
                  free(dest);
                if ( !(unsigned __int8)sub_1AC3EF0(
                                         *(_QWORD *)(v120.m128i_i64[0] + 744),
                                         v123,
                                         0,
                                         *(double *)v16.m128_u64) )
                {
                  v93 = v123[144];
                  if ( v123[1] == 41 )
                  {
                    if ( v93 != 7 )
                      goto LABEL_200;
                    v94 = *((const void **)v123 + 3);
                    v95 = *((unsigned int *)v123 + 8);
                  }
                  else
                  {
                    if ( v93 != 4 )
                      goto LABEL_200;
                    v94 = *((const void **)v123 + 2);
                    v95 = *((unsigned int *)v123 + 6);
                  }
                  v19 = (void *)sub_EB3A80(
                                  *(_QWORD **)(v120.m128i_i64[0] + 248),
                                  *((_DWORD *)v123 + 1),
                                  *((_DWORD *)v123 + 3),
                                  v94,
                                  v95,
                                  *((unsigned int *)v123 + 2));
                  v124 = (unsigned __int64)v19;
                  goto LABEL_7;
                }
                goto LABEL_42;
              }
            }
            else
            {
              v23 = si128.m128i_u32[0];
              v29 = (void *)(v28 & 0xFFFFFFFFFFFFFFFELL);
              v30 = si128.m128i_u32[0] + 1LL;
              if ( v30 > si128.m128i_u32[1] )
              {
                src = v29;
                sub_2237220(p_dest, v109, v30, 8);
                v23 = si128.m128i_u32[0];
                v29 = src;
              }
              ++v25;
              *((_QWORD *)dest + v23) = v29;
              ++si128.m128i_i32[0];
              if ( v24 == v25 )
                goto LABEL_29;
            }
            v26 = (unsigned __int128)v120;
            continue;
          }
        case 43:
          v19 = (void *)sub_EB2870(*(_QWORD **)(v108 + 248), v135, v136, v17, v13, v14);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 46:
          v19 = (void *)sub_EB2E40(*(_QWORD **)(v108 + 248), v135, 0, 0, v136, v14);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        case 49:
          v19 = (void *)sub_EB2D70(*(_QWORD **)(v108 + 248), v135, 0, 0, v136, v14);
          v124 = (unsigned __int64)v19;
          goto LABEL_7;
        default:
          sub_2EADCC();
      }
    }
  }
  return v6;
}
