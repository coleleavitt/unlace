__int64 *__fastcall sub_1DEFAD0(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        void **a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        int a10)
{
  unsigned __int64 v11; // r13
  __int64 *v12; // rbx
  __int64 v13; // rdi
  char v14; // r10
  __int64 v15; // rbp
  __int64 v16; // r12
  void **v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rsi
  char v20; // al
  __m128 si128; // xmm0
  void **v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  void **v27; // rdx
  signed __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbp
  _DWORD *v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rbx
  size_t v34; // r12
  __int64 *v35; // rax
  void **v36; // rbp
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  _QWORD *v42; // r8
  __int64 v43; // rsi
  _QWORD *v44; // rsi
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __m128 v47; // xmm0
  __m128 v48; // xmm0
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  char v52; // cl
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // r13
  char v56; // di
  __int64 v57; // r13
  __m128i *v58; // rcx
  __int64 v59; // r12
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  void **v63; // r14
  char v64; // dl
  int v65; // edx
  __int64 v66; // rbp
  __int64 v67; // rbp
  unsigned int v68; // eax
  __int64 v69; // r8
  __int64 v70; // r9
  char *v71; // rdi
  __int64 v72; // r13
  __int64 v73; // r12
  void **v74; // r14
  signed __int64 v75; // rax
  char v76; // al
  int v77; // eax
  __int64 v78; // rbp
  char *v79; // rbp
  unsigned int v80; // eax
  __int64 v81; // rdx
  unsigned __int64 v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  char v88; // cl
  __int64 v89; // r13
  char v90; // al
  unsigned __int64 v91; // r13
  char v92; // r12
  unsigned __int64 v93; // rax
  _BYTE *v94; // rbp
  _BYTE *v95; // rdx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rax
  char v99; // si
  __int64 v100; // rax
  char v101; // cl
  int v102; // edx
  __int64 v103; // rdx
  __int64 v104; // rax
  _DWORD *v105; // rdx
  _DWORD *v106; // rcx
  int v107; // edi
  int v108; // esi
  int v109; // eax
  __int64 v110; // rsi
  unsigned __int64 v111; // rax
  int v112; // r14d
  __int64 v113; // rbp
  __int64 v114; // r12
  int v115; // eax
  void *v116; // rbp
  __m128 v117; // xmm0
  unsigned __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  void *v121; // r14
  __int64 *v122; // r15
  _QWORD *v123; // rbx
  int v124; // eax
  unsigned __int64 v125; // rsi
  unsigned __int16 *v126; // rax
  _QWORD *v127; // r12
  unsigned __int64 v128; // rbx
  char *v129; // rax
  __int64 v130; // rdx
  unsigned __int16 v131; // ax
  void *v132; // rbx
  __int64 v133; // rsi
  __int64 v134; // r8
  _QWORD *v135; // rsi
  _QWORD *v136; // r8
  _QWORD *v137; // rdi
  __int64 v138; // [rsp-8h] [rbp-3E0h]
  __m128 v139; // [rsp+0h] [rbp-3D8h] BYREF
  _QWORD *v140; // [rsp+10h] [rbp-3C8h]
  void **p_ptr; // [rsp+18h] [rbp-3C0h] BYREF
  void **v142; // [rsp+20h] [rbp-3B8h]
  void **v143; // [rsp+28h] [rbp-3B0h]
  _QWORD *v144; // [rsp+30h] [rbp-3A8h]
  __int64 *v145; // [rsp+38h] [rbp-3A0h]
  __m128i *v146; // [rsp+40h] [rbp-398h]
  __int64 *v147; // [rsp+48h] [rbp-390h]
  _QWORD *v148; // [rsp+50h] [rbp-388h]
  void **v149; // [rsp+58h] [rbp-380h]
  __m128 *v150; // [rsp+60h] [rbp-378h]
  _QWORD *v151; // [rsp+68h] [rbp-370h]
  void **v152; // [rsp+70h] [rbp-368h]
  signed __int64 v153; // [rsp+78h] [rbp-360h]
  __m128 v154; // [rsp+80h] [rbp-358h] BYREF
  __m128i v155; // [rsp+90h] [rbp-348h] BYREF
  __m128i v156; // [rsp+A0h] [rbp-338h] BYREF
  void *v157; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v158; // [rsp+B8h] [rbp-320h]
  char v159; // [rsp+C0h] [rbp-318h] BYREF
  void *v160[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  char v161; // [rsp+F0h] [rbp-2E8h] BYREF
  void *ptr; // [rsp+110h] [rbp-2C8h] BYREF
  __m128 v163; // [rsp+118h] [rbp-2C0h]
  char v164; // [rsp+128h] [rbp-2B0h] BYREF
  char v165; // [rsp+138h] [rbp-2A0h]
  void *v166; // [rsp+140h] [rbp-298h] BYREF
  __int64 v167; // [rsp+148h] [rbp-290h]
  _QWORD v168[4]; // [rsp+150h] [rbp-288h] BYREF
  _QWORD *v169; // [rsp+170h] [rbp-268h] BYREF
  __int64 v170; // [rsp+178h] [rbp-260h]
  __int64 v171; // [rsp+180h] [rbp-258h]
  unsigned int v172; // [rsp+188h] [rbp-250h]
  __int64 v173; // [rsp+190h] [rbp-248h]
  int v174; // [rsp+198h] [rbp-240h]
  void **v175; // [rsp+1A0h] [rbp-238h]
  char v176; // [rsp+1A8h] [rbp-230h]
  __int16 v177; // [rsp+1A9h] [rbp-22Fh]
  void *v178; // [rsp+1B0h] [rbp-228h] BYREF
  __m128i v179; // [rsp+1B8h] [rbp-220h]
  _DWORD v180[9]; // [rsp+1C8h] [rbp-210h] BYREF
  char v181; // [rsp+1ECh] [rbp-1ECh]
  __m128 v182[4]; // [rsp+1F0h] [rbp-1E8h] BYREF
  _BYTE *v183; // [rsp+238h] [rbp-1A0h]
  _BYTE *v184; // [rsp+248h] [rbp-190h]
  void *v185; // [rsp+250h] [rbp-188h]
  _QWORD *v186; // [rsp+258h] [rbp-180h]
  __int64 v187; // [rsp+260h] [rbp-178h]
  void *v188[18]; // [rsp+270h] [rbp-168h] BYREF
  _QWORD v189[27]; // [rsp+300h] [rbp-D8h] BYREF

  v11 = (unsigned __int64)(a2 + 1);
  v12 = a2;
  v140 = a1;
  v13 = *a2;
  v139.m128_u64[0] = a6;
  v14 = a10;
  v15 = v13;
  v16 = v13;
  v17 = (void **)v13;
  v18 = v13 & 7;
  v19 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_BYTE *)(v19 + 17);
  if ( (v20 & 2) == 0 && (v20 & 8) == 0 )
  {
    if ( v18 | (v13 >> 3) & 1 )
      return v12;
    v38 = v11;
    if ( *(_BYTE *)(v19 + 16) == 40 )
    {
      LODWORD(v143) = a10;
      v142 = a5;
      LODWORD(p_ptr) = a4;
      v75 = sub_F6D010(v13, v11);
      a4 = (int)p_ptr;
      a5 = v142;
      v16 = v75;
      v15 = v75;
      v14 = a10;
      if ( v75 & 7 | (v75 >> 3) & 1 )
        return v12;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return v12;
    if ( !v16 )
      return v12;
    v39 = v38 + 16;
    if ( *(_BYTE *)(v16 + 16) == 25 )
      return v12;
    v40 = v39 + 8LL * *(unsigned __int16 *)(v16 + 22);
    if ( v39 == v40 )
      return v12;
    v41 = v38 + 24;
    if ( !*(_QWORD *)(v38 + 16) )
    {
      do
      {
        if ( v40 == v41 )
          return v12;
        v41 += 8LL;
      }
      while ( !*(_QWORD *)(v41 - 8) );
    }
    v15 = *v12;
    v16 = *v12;
    v17 = (void **)*v12;
    v18 = *v12 & 7;
  }
  p_ptr = v17;
  v173 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v22 = &v178;
  v169 = v140;
  v175 = a5;
  v170 = 0;
  v171 = 0;
  v172 = 0;
  v174 = a4;
  v177 = 0;
  v176 = v14;
  v178 = v180;
  v179 = (__m128i)si128;
  v180[8] = 0;
  v181 = 0;
  v23 = sub_F6C560(v15);
  v26 = (__int64)p_ptr;
  if ( (unsigned __int64)v23 > v179.m128i_i64[0] )
  {
    sub_1EA60C0(&v178);
    v26 = (__int64)p_ptr;
  }
  if ( v18 | (v26 >> 3) & 1
    || (v27 = (void **)v11, v28 = v16, *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40)
    && (v28 = sub_F6D010(v16, v11), v15 = v28, v28 & 7 | (v28 >> 3) & 1)
    || *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
    || !v28 )
  {
    v139.m128_u64[0] = v11;
    v139 = _mm_loadh_ps((const double *)v139.m128_u64);
    v30 = sub_1DCE820(
            (__int64 *)&v169,
            (__int64)&v178,
            v139.m128_i64[0],
            (const __m128i *)v139.m128_u64[1],
            si128,
            v139,
            v24,
            v25);
    v33 = v30 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_10;
  }
  v42 = v169;
  v144 = v189;
  memset(v189, 0, 0x98u);
  v43 = v169[1410];
  if ( !v43 || !*(_BYTE *)(v43 + 114) )
  {
    v189[0] = v169;
    v189[1] = 1;
    v44 = v144 + 10;
    v45 = v144 + 2;
    do
    {
      *v45 = -4096;
      v45 += 2;
    }
    while ( v45 != v44 );
    v46 = v42[1410];
    BYTE2(v189[14]) = 0;
    LOWORD(v189[14]) = 256;
    v189[13] = v46;
    v189[10] = v144 + 12;
    v189[11] = 0x100000000LL;
    v189[15] = 0;
    v42[1410] = v144;
    LOBYTE(v189[18]) = 1;
  }
  p_ptr = v27;
  v142 = &v157;
  v157 = &v159;
  v47 = _mm_loadh_ps((const double *)&p_ptr);
  v158 = 0x400000000LL;
  v154 = v47;
  v48 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v160[1] = (void *)0x400000000LL;
  p_ptr = &ptr;
  ptr = &v164;
  v163 = v48;
  v165 = 0;
  v49 = *(_QWORD *)(v28 + 16);
  v143 = v160;
  v160[0] = &v161;
  if ( (v49 & 0x100000000LL) == 0 )
  {
    v76 = *(_BYTE *)(v28 + 16);
    if ( v76 == 26 )
    {
      v77 = ((*(_BYTE *)(v28 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v78 = 16;
      if ( v76 == 25 )
        goto LABEL_82;
      v77 = 15;
    }
    v78 = 8 * ((v77 + 8 * (unsigned int)*(unsigned __int16 *)(v28 + 22)) >> 3) + 8;
LABEL_82:
    v79 = (char *)v27 + v78;
    v80 = sub_F6C520(*(_QWORD *)(v28 + 24));
    v81 = *(_QWORD *)(v154.m128_u64[0] + 24);
    v82 = (unsigned __int64)&v169;
    v145 = (__int64 *)&v169;
    v139.m128_u64[0] = sub_1DCE820(
                         (__int64 *)&v169,
                         (__int64)&v178,
                         v81,
                         (const __m128i *)(v80 * ((unsigned __int64)&v79[-(v79 != nullptr)] / v80 + (v79 != nullptr))),
                         v48,
                         a8,
                         v83,
                         v84);
    if ( (v139.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v85 = *(_QWORD *)(v28 + 16) >> 24;
      if ( (v85 & 0x20) != 0 )
      {
        v86 = (v85 & 0x40) != 0;
        v87 = 8LL * *(unsigned __int16 *)(v28 + 22) + 48;
        v88 = *(_BYTE *)(v28 + 19);
        if ( (v88 & 0x40) != 0 )
        {
          v82 = (*(_BYTE *)(((v28 + v87 + ((v88 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
          v86 += v82;
        }
        v89 = ((v28 + v87 + (((char)BYTE3(*(_QWORD *)(v28 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v86;
        v90 = ((unsigned __int8)v88 >> 1) & 0xF;
        if ( v90 == 2 )
        {
          v89 += 8LL * (*(_WORD *)((v28 + v87 + ((v88 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        }
        else
        {
          switch ( v90 )
          {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 11:
              switch ( v90 )
              {
                case 6:
                case 7:
                case 8:
                  v89 += 8;
                  goto LABEL_146;
                case 9:
                  goto LABEL_144;
                case 10:
                  goto LABEL_143;
                default:
LABEL_146:
                  switch ( v90 )
                  {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                      goto LABEL_139;
                    case 9:
                      goto LABEL_144;
                    case 10:
                      goto LABEL_143;
                    default:
                      goto LABEL_186;
                  }
              }
            case 9:
LABEL_144:
              v89 += 8;
              break;
            case 10:
LABEL_143:
              v89 += 16;
              break;
            default:
LABEL_186:
              sub_2EAD22(v82);
          }
        }
      }
      else
      {
        v89 = 0;
      }
LABEL_139:
      v112 = 0;
      v113 = v154.m128_u64[0] + 48;
      v114 = v154.m128_u64[1] + 16;
      if ( *(_BYTE *)(v154.m128_u64[0] + 16) != 25 )
        v112 = *(unsigned __int16 *)(v154.m128_u64[0] + 22);
      v147 = (__int64 *)&v154;
      v115 = sub_F6CCB0((__int64 *)&v154, v48);
      if ( !(unsigned __int8)sub_1DE36B0(
                               (__int64)v145,
                               v115,
                               v114,
                               v112,
                               v113,
                               v89,
                               v48,
                               a8,
                               (__int64)v142,
                               (__int64)v143,
                               (__int64)p_ptr,
                               nullptr) )
      {
        v63 = v188;
        goto LABEL_90;
      }
    }
LABEL_76:
    v33 = 0;
    v30 = 0;
    goto LABEL_52;
  }
  v50 = v49 >> 24;
  if ( (v50 & 0x20) != 0 )
  {
    v51 = 8LL * *(unsigned __int16 *)(v28 + 22) + 48;
    v52 = *(_BYTE *)(v28 + 19);
    v53 = (v28 + v51 + (((char)v50 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v54 = (v50 & 0x40) != 0;
    if ( (v52 & 0x40) != 0 )
      v54 += (*(_BYTE *)(((v28 + v51 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v55 = v53 + 8 * v54;
    v56 = ((unsigned __int8)v52 >> 1) & 0xF;
    if ( v56 != 2 )
      __asm { jmp     rax }
    v57 = v55 + 8LL * (*(_WORD *)((v28 + ((v52 >> 5) & 4) + v51 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v57 = 0;
  }
  v58 = nullptr;
  v59 = (__int64)(v27 + 2);
  if ( *(_BYTE *)(v28 + 16) != 25 )
    v58 = (__m128i *)*(unsigned __int16 *)(v28 + 22);
  v146 = v58;
  v147 = (__int64 *)&v154;
  v60 = sub_F6CCB0((__int64 *)&v154, v48);
  v145 = (__int64 *)&v169;
  if ( (unsigned __int8)sub_1DE36B0(
                          (__int64)&v169,
                          v60,
                          v59,
                          (int)v146,
                          v28 + 48,
                          v57,
                          v48,
                          a8,
                          (__int64)v142,
                          (__int64)v143,
                          (__int64)p_ptr,
                          nullptr) )
    goto LABEL_76;
  v61 = v169[379];
  v62 = v139.m128_u64[0];
  if ( !v61 )
    v61 = v169[68];
  if ( (*(_BYTE *)(v61 + 8) & 0x7Fu) - 59 <= 2 )
  {
    v62 = v61 - 64;
    if ( v139.m128_u64[0] || v61 == 64 )
      v62 = v139.m128_u64[0];
  }
  v63 = v188;
  sub_19A2CD0((__int64)v188, (__int64)v169, v62, a9, 1, v32);
  v64 = *(_BYTE *)(v154.m128_u64[0] + 16);
  if ( v64 == 26 )
  {
    v65 = ((*(_BYTE *)(v154.m128_u64[0] + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v66 = 16;
    if ( v64 == 25 )
      goto LABEL_50;
    v65 = 15;
  }
  v66 = 8 * ((v65 + 8 * (unsigned int)*(unsigned __int16 *)(v154.m128_u64[0] + 22)) >> 3) + 8;
LABEL_50:
  v67 = v154.m128_u64[1] + v66;
  v68 = sub_F6C520(*(_QWORD *)(v154.m128_u64[0] + 24));
  v139.m128_u64[0] = sub_1DCE820(
                       v145,
                       (__int64)&v178,
                       *(_QWORD *)(v154.m128_u64[0] + 24),
                       (const __m128i *)(v68 * ((v67 - (unsigned __int64)(v67 != 0)) / v68 + (v67 != 0))),
                       v48,
                       a8,
                       v69,
                       v70);
  v30 = v139.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v139.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    sub_19A2DA0((__int64 *)v188);
    v33 = 0;
    goto LABEL_52;
  }
  sub_19A2DA0((__int64 *)v188);
LABEL_90:
  v150 = v182;
  sub_A5E110(v182, v28);
  v91 = (unsigned int)v158;
  v92 = v165;
  if ( !v165 )
  {
    v95 = v183;
LABEL_150:
    v92 = 0;
    if ( v95 )
    {
      v183 = nullptr;
      v92 = 1;
    }
    goto LABEL_110;
  }
  v93 = v163.m128_u64[0];
  if ( (unsigned int)v158 == v163.m128_u64[0] )
    goto LABEL_136;
  if ( (unsigned int)v158 < v163.m128_u64[0] )
  {
    v163.m128_u64[0] = (unsigned int)v158;
LABEL_136:
    v94 = ptr;
    goto LABEL_98;
  }
  if ( (unsigned int)v158 > v163.m128_u64[1] )
  {
    sub_2236E10(p_ptr, p_ptr + 3, (unsigned int)v158, 1);
    v93 = v163.m128_u64[0];
  }
  v94 = ptr;
  if ( (char *)ptr + v93 != (char *)ptr + v91 )
    memset((char *)ptr + v93, 0, v91 - v93);
  v163.m128_u64[0] = v91;
LABEL_98:
  v95 = v183;
  if ( !v94 )
    goto LABEL_150;
  if ( !v183 )
    goto LABEL_109;
  if ( *(_BYTE *)(v154.m128_u64[0] + 16) == 25 )
  {
    v97 = 0;
    v96 = 0;
  }
  else
  {
    v96 = *(unsigned __int16 *)(v154.m128_u64[0] + 22);
    v97 = *(unsigned __int16 *)(v154.m128_u64[0] + 22);
  }
  if ( (_DWORD)v158 != v96 )
    goto LABEL_109;
  if ( v183 == &v183[v97] )
    goto LABEL_108;
  if ( *v94 == *v183 )
  {
    v98 = 1;
    while ( v97 != v98 )
    {
      v99 = v183[v98++];
      if ( v99 != v94[v98 - 1] )
        goto LABEL_109;
    }
LABEL_108:
    v92 = 0;
  }
LABEL_109:
  v183 = v94;
LABEL_110:
  memset(v188, 0, 0x88u);
  v148 = v169;
  if ( !v187 )
    goto LABEL_111;
  v188[0] = &v188[3];
  v116 = nullptr;
  v117 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  v188[8] = &v188[10];
  v188[9] = (void *)0x600000000LL;
  *(__m128 *)&v188[1] = v117;
  LOBYTE(v188[16]) = 1;
  sub_18C74E0((__int64)v169, 4, 0, 4);
  if ( !v185 )
    goto LABEL_184;
  v149 = v188;
  v121 = v185;
  v146 = &v156;
  v152 = &v178;
  v122 = v147;
  v151 = v168;
  v153 = v28;
  do
  {
    if ( v187 )
    {
      v125 = v186[(_QWORD)v116];
      v156.m128i_i8[0] = *((_BYTE *)v116 + (_QWORD)v184);
      v156.m128i_i64[1] = v125;
      v155 = _mm_load_si128(&v156);
      if ( v125 )
      {
        v126 = sub_1DC71F0(v145, v125, (unsigned __int64)v186, v118, v119, v120, v117, a8);
        if ( v126 == (unsigned __int16 *)((char *)&dword_0 + 1)
          || (v127 = v169,
              v128 = (unsigned __int64)v126 & 0xFFFFFFFFFFFFFFFELL,
              v129 = sub_F5ED10(v146->m128i_i8),
              v131 = sub_1E72620(v127, v128, v129, v130),
              !HIBYTE(v131)) )
        {
          v63 = v149;
          v33 = 0;
          v30 = 0;
          v22 = v152;
          sub_190D5E0((__int64)v148, v117);
          goto LABEL_128;
        }
        switch ( (_BYTE)v131 )
        {
          case 2:
            goto LABEL_165;
          case 3:
            v155.m128i_i64[1] = v128;
            break;
          case 1:
            v155.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)v146);
LABEL_165:
            v155.m128i_i64[1] = 0;
            break;
        }
      }
    }
    else
    {
      v156.m128i_i8[0] = *((_BYTE *)v116 + (_QWORD)v184);
      v156.m128i_i64[1] = 0;
      v155 = _mm_load_si128(&v156);
    }
    v123 = v169;
    v124 = sub_F6CCB0(v122, v117);
    v166 = v188[0];
    v168[1] = LODWORD(v188[9]);
    v167 = (__int64)v188[1];
    v168[0] = v188[8];
    if ( !(unsigned __int8)sub_19EE280((__int64)v123, &v166, v155.m128i_i8, v124) )
    {
      v132 = v151;
      v166 = v151;
      v167 = 0x100000000LL;
      sub_F5EEE0((__int64 *)v149, &v155, (__int64)&v166);
      if ( v166 != v132 )
        free(v166);
    }
    v116 = (char *)v116 + 1;
  }
  while ( v121 != v116 );
  v28 = v153;
  v63 = v149;
  v22 = v152;
LABEL_184:
  v92 = 1;
  v184 = v188[0];
  v185 = v188[1];
  v186 = v188[8];
  v187 = LODWORD(v188[9]);
  sub_190D5E0((__int64)v148, v117);
  v148 = v169;
LABEL_111:
  if ( *((_DWORD *)v148 + 3158) )
    goto LABEL_113;
  v100 = v154.m128_u64[0];
  if ( v139.m128_u64[0] != *(_QWORD *)(v28 + 24) )
    goto LABEL_113;
  v133 = *(unsigned __int16 *)(v28 + 22);
  v134 = 8 * v133;
  if ( v133 != (unsigned int)v158 )
    goto LABEL_113;
  v135 = (_QWORD *)(v28 + 48);
  v136 = (_QWORD *)(v28 + 48 + v134);
  if ( (_QWORD *)(v28 + 48) == v136 )
    goto LABEL_179;
  if ( *(_QWORD *)v157 != *(_QWORD *)(v28 + 48) )
    goto LABEL_113;
  v137 = v157;
  while ( 1 )
  {
    ++v135;
    ++v137;
    if ( v136 == v135 )
      break;
    if ( *v135 != *v137 )
      goto LABEL_113;
  }
LABEL_179:
  if ( !v92 )
  {
    v30 = v154.m128_u64[0];
    v33 = v154.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL;
LABEL_115:
    v101 = *(_BYTE *)(v100 + 16);
    if ( v101 == 26 )
    {
      v102 = ((*(_BYTE *)(v100 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
      goto LABEL_117;
    }
    v103 = 16;
    if ( v101 != 25 )
    {
      v102 = 15;
LABEL_117:
      v103 = 8 * ((v102 + 8 * (unsigned int)*(unsigned __int16 *)(v100 + 22)) >> 3) + 8;
    }
    v104 = sub_1EA6140(v22, v30, v103, 8);
    v106 = (_DWORD *)v154.m128_u64[1];
    *v105 = *(_DWORD *)v154.m128_u64[1];
    v105[1] = v106[1];
    v105[2] = v106[2];
    if ( *(_BYTE *)(v154.m128_u64[0] + 16) == 26 && (*(_BYTE *)(v154.m128_u64[0] + 19) & 0x1E) != 0 )
    {
      v107 = v106[2 * *(unsigned __int16 *)(v154.m128_u64[0] + 22) + 4];
      v108 = v106[2 * *(unsigned __int16 *)(v154.m128_u64[0] + 22) + 5];
    }
    else
    {
      v108 = 0;
      v107 = 0;
    }
    if ( *(_BYTE *)(v104 + 16) == 26 && (*(_BYTE *)(v104 + 19) & 0x1E) != 0 )
    {
      v31 = &v105[2 * *(unsigned __int16 *)(v104 + 22) + 4];
      *v31 = v107;
      v31[1] = v108;
    }
    v29 = (unsigned int)v106[3];
    v105[3] = v29;
    if ( *(_BYTE *)(v104 + 16) != 25 )
    {
      v109 = *(unsigned __int16 *)(v104 + 22);
      if ( v109 )
      {
        v110 = 8LL * (unsigned int)(v109 - 1) + 8;
        v111 = 0;
        do
        {
          v29 = *(_QWORD *)((char *)v160[0] + v111);
          *(_QWORD *)&v105[v111 / 4 + 4] = v29;
          v111 += 8LL;
        }
        while ( v110 != v111 );
      }
    }
  }
  else
  {
LABEL_113:
    v33 = 0;
    v100 = sub_1E6A200((_DWORD)v148, v139.m128_i32[0], (_DWORD)v157, v158, v174, (_DWORD)v175, (__int64)v150);
    v29 = v138;
    v30 = v100 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v100 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v33 = v100 & 0xFFFFFFFFFFFFFFF0LL;
      v30 = v100;
      goto LABEL_115;
    }
  }
LABEL_128:
  if ( LOBYTE(v188[16]) )
  {
    if ( v188[8] != v63 + 10 )
      free(v188[8]);
    if ( v188[0] != v63 + 3 )
      free(v188[0]);
  }
LABEL_52:
  if ( ptr != p_ptr + 3 )
    free(ptr);
  if ( v160[0] != v143 + 2 )
    free(v160[0]);
  if ( v157 != v142 + 2 )
    free(v157);
  if ( LOBYTE(v189[18]) )
  {
    v71 = (char *)v189[10];
    if ( !LOBYTE(v189[14]) )
    {
      if ( LODWORD(v189[11]) )
      {
        v72 = 0;
        v73 = 8LL * (unsigned int)(LODWORD(v189[11]) - 1) + 8;
        do
        {
          v74 = *(void ***)&v71[v72];
          if ( v74 )
          {
            if ( *v74 != v74 + 2 )
              free(*v74);
            operator delete(v74, 0x30u);
            v71 = (char *)v189[10];
          }
          v72 += 8;
        }
        while ( v73 != v72 );
      }
      LOBYTE(v189[14]) = 1;
      *(_QWORD *)(v189[0] + 11280LL) = v189[13];
    }
    if ( v71 != (char *)(v144 + 12) )
      free(v71);
    if ( (v189[1] & 1) == 0 )
      operator delete(v189[2], 16LL * LODWORD(v189[3]), 8);
  }
LABEL_10:
  if ( v33
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
     - 25 <= 1 )
  {
    v34 = v179.m128i_i64[0] - v179.m128i_i64[1];
    v35 = sub_A81BC0((_QWORD *)v140[31], v30, v179.m128i_i32[0] - v179.m128i_i32[2], v29, (__int64)v31, v32);
    v36 = (void **)v178;
    v12 = v35;
    memcpy(v35 + 1, (char *)v178 + v179.m128i_i64[1], v34);
  }
  else
  {
    v36 = (void **)v178;
    v12 = nullptr;
  }
  if ( v36 != v22 + 3 && v36 )
    operator delete[](v36);
  operator delete(v170, 16LL * v172, 8);
  return v12;
}
