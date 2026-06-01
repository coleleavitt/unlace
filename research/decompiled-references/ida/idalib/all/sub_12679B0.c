__m128i *__fastcall sub_12679B0(__m128i *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // r12
  __int64 v6; // rax
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  char v10; // r13
  __m128i *v11; // r9
  unsigned int v12; // ebp
  char v13; // al
  void **v14; // r14
  void **v15; // rbp
  void **v16; // r14
  void **v17; // rbp
  void **v18; // r14
  void **v19; // rbp
  void **v20; // r14
  void **v21; // rbp
  void **v22; // r14
  void **v23; // rbp
  __m128i *v24; // r14
  __m128i *v25; // rax
  __m128i si128; // xmm0
  const char *v28; // rbp
  char v29; // al
  size_t v30; // r12
  _QWORD *v31; // rax
  unsigned __int64 v32; // rsi
  char *v33; // rax
  unsigned int v34; // edx
  const char *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE *v39; // rax
  __int64 v40; // rdx
  __m128i *v41; // r9
  __m128i *v42; // rdi
  size_t v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r12
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  size_t *v49; // rdi
  _BYTE *v50; // rax
  __int64 v51; // rdx
  __m128i *v52; // rdi
  __int64 v53; // rdx
  size_t v54; // r12
  size_t v55; // rdx
  char v56; // al
  __int64 v57; // rdx
  __int64 v58; // r12
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __m128i *v61; // r9
  __m128i *v62; // rdi
  size_t v63; // rsi
  unsigned __int64 v64; // rax
  size_t v65; // r8
  unsigned __int64 v66; // r12
  __int8 *v67; // rcx
  __int8 *v68; // rdi
  __m128i *v69; // rdi
  size_t v70; // r8
  char *v71; // rcx
  __int64 v72; // rbp
  unsigned __int64 v73; // rdx
  __m128i *v74; // r9
  __m128i *v75; // rdi
  size_t v76; // rsi
  unsigned __int64 v77; // rax
  size_t v78; // r8
  unsigned __int64 v79; // rbp
  __int8 *v80; // rcx
  __int8 *v81; // rdi
  char *v82; // rcx
  __m128i v83; // rax
  __int64 v84; // r9
  size_t *v85; // rdi
  size_t v86; // rdx
  void *v87; // rdi
  char v88; // bp
  __m128i *v89; // rax
  __m128i *v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdx
  char *v93; // rsi
  void **v94; // rdi
  size_t v95; // r8
  char *v96; // rcx
  __int64 v97; // r14
  __int64 v98; // rdx
  __int64 v99; // rbp
  char *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _BYTE *v106; // rdi
  size_t v107; // rdx
  char *v108; // rsi
  void **v109; // rdi
  __m128i v110; // xmm2
  __m128i v111; // xmm4
  size_t v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  int v115; // ebp
  __int64 v116; // rdx
  size_t v117; // rdx
  char v118; // al
  __m128i *v119; // [rsp+8h] [rbp-310h] BYREF
  void **p_src; // [rsp+10h] [rbp-308h]
  double v121[2]; // [rsp+18h] [rbp-300h] BYREF
  int v122; // [rsp+2Ch] [rbp-2ECh] BYREF
  void *dest; // [rsp+30h] [rbp-2E8h] BYREF
  __m128 v124; // [rsp+38h] [rbp-2E0h] BYREF
  void *src; // [rsp+50h] [rbp-2C8h] BYREF
  __m128 n; // [rsp+58h] [rbp-2C0h] BYREF
  void *v127; // [rsp+70h] [rbp-2A8h] BYREF
  size_t v128; // [rsp+78h] [rbp-2A0h]
  _QWORD v129[2]; // [rsp+80h] [rbp-298h] BYREF
  _QWORD v130[4]; // [rsp+90h] [rbp-288h] BYREF
  __int16 v131; // [rsp+B0h] [rbp-268h]
  __m128i v132; // [rsp+C0h] [rbp-258h] BYREF
  char *v133; // [rsp+D0h] [rbp-248h]
  __int16 v134; // [rsp+E0h] [rbp-238h]
  void *v135; // [rsp+F0h] [rbp-228h] BYREF
  __m128 v136; // [rsp+F8h] [rbp-220h] BYREF
  __int16 v137; // [rsp+110h] [rbp-208h]
  __m128i v138; // [rsp+120h] [rbp-1F8h] BYREF
  __m128i v139; // [rsp+130h] [rbp-1E8h] BYREF
  __int16 v140; // [rsp+140h] [rbp-1D8h]
  __m128i v141; // [rsp+150h] [rbp-1C8h] BYREF
  __m128i v142; // [rsp+160h] [rbp-1B8h] BYREF
  __int16 v143; // [rsp+170h] [rbp-1A8h]
  __m128i v144; // [rsp+180h] [rbp-198h] BYREF
  __m128i v145[3]; // [rsp+190h] [rbp-188h] BYREF
  void *v146; // [rsp+1C0h] [rbp-158h]
  void *v147; // [rsp+1E8h] [rbp-130h]
  void **v148; // [rsp+1F0h] [rbp-128h]
  void *v149; // [rsp+200h] [rbp-118h]
  void **v150; // [rsp+208h] [rbp-110h]
  void *v151; // [rsp+218h] [rbp-100h]
  void **v152; // [rsp+220h] [rbp-F8h]
  void *v153; // [rsp+230h] [rbp-E8h]
  void **v154; // [rsp+238h] [rbp-E0h]
  void *v155; // [rsp+248h] [rbp-D0h]
  void **v156; // [rsp+250h] [rbp-C8h]
  void *v157; // [rsp+290h] [rbp-88h]
  void *v158; // [rsp+2C0h] [rbp-58h]

  v4 = (_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 48);
  v119 = (__m128i *)a3;
  sub_10D7FD0(&v122, *(_QWORD *)(v6 + 8), a2 + 16);
  v8 = *(_DWORD *)(a2 + 64);
  if ( v8 != 17 )
  {
    if ( (unsigned int)(v8 - 18) > 7 && v8 != 49 && *(_DWORD *)(a2 + 60) != 39 )
    {
      v124.m128_u64[0] = 0;
      p_src = &src;
      dest = &v124.m128_u16[4];
      src = &n.m128_u16[4];
      v124.m128_i8[8] = 0;
      n.m128_i8[8] = 0;
      n.m128_u64[0] = 0;
      switch ( v7 )
      {
        case 0u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xBu:
        case 0xCu:
        case 0x14u:
        case 0x19u:
        case 0x1Au:
        case 0x21u:
        case 0x22u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
          sub_1264990(a1, "/opt/nec/ve/lib/ld-linux-ve.so.1");
          goto LABEL_137;
        case 1u:
        case 2u:
        case 0x23u:
        case 0x24u:
          if ( (unsigned int)(v8 - 7) <= 1 )
          {
            sub_99BDC0(&dest, 0, 0, "lib", 3u);
LABEL_184:
            v70 = 19;
            v71 = "ld-linux-armhf.so.3";
            goto LABEL_142;
          }
          v115 = sub_113F460(a2, (__int64)v119);
          sub_99BDC0(&dest, 0, v124.m128_u64[0], "lib", 3u);
          v70 = 13;
          v71 = "ld-linux.so.3";
          if ( v115 == 3 )
            goto LABEL_184;
LABEL_142:
          sub_99BDC0(p_src, 0, n.m128_u64[0], v71, v70);
          if ( v122 != 14 )
            goto LABEL_143;
LABEL_119:
          if ( (*(_DWORD *)(a2 + 56) & 0xFFFFFFFD) != 0 )
          {
LABEL_143:
            sub_C05100((__int64)&v141, "/", (__int64)&dest);
            v72 = v141.m128i_i64[1];
            if ( v141.m128i_i64[1] != 0x7FFFFFFFFFFFFFFFLL )
            {
              if ( (__m128i *)v141.m128i_i64[0] == &v142 )
                v73 = 15;
              else
                v73 = v142.m128i_i64[0];
              if ( v141.m128i_i64[1] + 1 > v73 )
                sub_998B30((__int64)&v141, v141.m128i_u64[1], 0, "/", 1u);
              else
                *(_BYTE *)(v141.m128i_i64[0] + v141.m128i_i64[1]) = 47;
              v141.m128i_i64[1] = v72 + 1;
              v74 = &v144;
              *(_BYTE *)(v141.m128i_i64[0] + v72 + 1) = 0;
              v75 = (__m128i *)v141.m128i_i64[0];
              v144.m128i_i64[0] = (__int64)v145;
              if ( (__m128i *)v141.m128i_i64[0] == &v142 )
              {
                v76 = v141.m128i_u64[1];
                v78 = n.m128_u64[0];
                v75 = v145;
                v141.m128i_i64[1] = 0;
                v110 = _mm_load_si128(&v142);
                v80 = (__int8 *)src;
                v142.m128i_i8[0] = 0;
                v77 = 15;
                v144.m128i_i64[1] = v76;
                v79 = n.m128_u64[0] + v76;
                v145[0] = v110;
              }
              else
              {
                v76 = v141.m128i_u64[1];
                v77 = v142.m128i_i64[0];
                v144.m128i_i64[0] = v141.m128i_i64[0];
                v78 = n.m128_u64[0];
                v141.m128i_i64[1] = 0;
                v144.m128i_i64[1] = v76;
                v142.m128i_i8[0] = 0;
                v79 = n.m128_u64[0] + v76;
                v145[0].m128i_i64[0] = v77;
                if ( (__m128i *)v141.m128i_i64[0] == v145 )
                  v77 = 15;
                v141.m128i_i64[0] = (__int64)&v142;
                v80 = (__int8 *)src;
              }
              if ( v79 > v77 )
              {
                v119 = &v144;
                sub_998B30((__int64)&v144, v76, 0, v80, v78);
                v75 = (__m128i *)v144.m128i_i64[0];
                v74 = v119;
              }
              else if ( v78 )
              {
                v81 = &v75->m128i_i8[v76];
                if ( v78 == 1 )
                {
                  *v81 = *v80;
                  v75 = (__m128i *)v144.m128i_i64[0];
                }
                else
                {
                  v119 = &v144;
                  memcpy(v81, v80, v78);
                  v75 = (__m128i *)v144.m128i_i64[0];
                  v74 = v119;
                }
              }
              v144.m128i_i64[1] = v79;
              v75->m128i_i8[v79] = 0;
              a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
              if ( (__m128i *)v144.m128i_i64[0] == &v74[1] )
              {
                a1[1] = _mm_load_si128(v145);
              }
              else
              {
                a1->m128i_i64[0] = v144.m128i_i64[0];
                a1[1].m128i_i64[0] = v145[0].m128i_i64[0];
              }
              v69 = (__m128i *)v141.m128i_i64[0];
              a1->m128i_i64[1] = v144.m128i_i64[1];
              if ( v69 != &v142 )
LABEL_136:
                operator delete(v69);
LABEL_137:
              if ( src != p_src + 2 )
                operator delete(src);
              v49 = (size_t *)dest;
              if ( dest == &v124.m128_u16[4] )
                return a1;
LABEL_82:
              operator delete(v49);
              return a1;
            }
          }
          else
          {
            sub_C05100((__int64)&v138, "/usr/", (__int64)v4);
            v58 = v138.m128i_i64[1];
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v138.m128i_i64[1]) > 4 )
            {
              if ( (__m128i *)v138.m128i_i64[0] == &v139 )
                v59 = 15;
              else
                v59 = v139.m128i_i64[0];
              if ( v138.m128i_i64[1] + 5 > v59 )
              {
                sub_998B30((__int64)&v138, v138.m128i_u64[1], 0, "/lib/", 5u);
              }
              else
              {
                v60 = v138.m128i_i64[1] + v138.m128i_i64[0];
                *(_DWORD *)v60 = 1651076143;
                *(_BYTE *)(v60 + 4) = 47;
              }
              v138.m128i_i64[1] = v58 + 5;
              v61 = &v144;
              *(_BYTE *)(v138.m128i_i64[0] + v58 + 5) = 0;
              v62 = (__m128i *)v138.m128i_i64[0];
              v144.m128i_i64[0] = (__int64)v145;
              if ( (__m128i *)v138.m128i_i64[0] == &v139 )
              {
                v63 = v138.m128i_u64[1];
                v65 = n.m128_u64[0];
                v62 = v145;
                v138.m128i_i64[1] = 0;
                v111 = _mm_load_si128(&v139);
                v67 = (__int8 *)src;
                v139.m128i_i8[0] = 0;
                v64 = 15;
                v144.m128i_i64[1] = v63;
                v66 = v63 + n.m128_u64[0];
                v145[0] = v111;
              }
              else
              {
                v63 = v138.m128i_u64[1];
                v64 = v139.m128i_i64[0];
                v144.m128i_i64[0] = v138.m128i_i64[0];
                v65 = n.m128_u64[0];
                v138.m128i_i64[1] = 0;
                v144.m128i_i64[1] = v63;
                v139.m128i_i8[0] = 0;
                v66 = n.m128_u64[0] + v63;
                v145[0].m128i_i64[0] = v64;
                if ( (__m128i *)v138.m128i_i64[0] == v145 )
                  v64 = 15;
                v138.m128i_i64[0] = (__int64)&v139;
                v67 = (__int8 *)src;
              }
              if ( v66 > v64 )
              {
                v119 = &v144;
                sub_998B30((__int64)&v144, v63, 0, v67, v65);
                v62 = (__m128i *)v144.m128i_i64[0];
                v61 = v119;
              }
              else if ( v65 )
              {
                v68 = &v62->m128i_i8[v63];
                if ( v65 == 1 )
                {
                  *v68 = *v67;
                  v62 = (__m128i *)v144.m128i_i64[0];
                }
                else
                {
                  v119 = &v144;
                  memcpy(v68, v67, v65);
                  v62 = (__m128i *)v144.m128i_i64[0];
                  v61 = v119;
                }
              }
              v144.m128i_i64[1] = v66;
              v62->m128i_i8[v66] = 0;
              a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
              if ( (__m128i *)v144.m128i_i64[0] == &v61[1] )
              {
                a1[1] = _mm_load_si128(v145);
              }
              else
              {
                a1->m128i_i64[0] = v144.m128i_i64[0];
                a1[1].m128i_i64[0] = v145[0].m128i_i64[0];
              }
              v69 = (__m128i *)v138.m128i_i64[0];
              a1->m128i_i64[1] = v144.m128i_i64[1];
              if ( v69 != &v139 )
                goto LABEL_136;
              goto LABEL_137;
            }
          }
          break;
        case 3u:
          sub_99BDC0(&dest, 0, 0, "lib", 3u);
          sub_99BDC0(p_src, 0, n.m128_u64[0], "ld-linux-aarch64.so.1", 0x15u);
          goto LABEL_118;
        case 4u:
          sub_99BDC0(&dest, 0, 0, "lib", 3u);
          sub_99BDC0(p_src, 0, n.m128_u64[0], "ld-linux-aarch64_be.so.1", 0x18u);
          goto LABEL_118;
        case 0xAu:
        case 0xFu:
          sub_99BDC0(&dest, 0, 0, "lib", 3u);
          v70 = 7;
          v71 = "ld.so.1";
          goto LABEL_142;
        case 0xDu:
          v82 = "lib32";
          goto LABEL_161;
        case 0xEu:
          v82 = (char *)"lib64";
LABEL_161:
          sub_99BDC0(&dest, 0, 0, v82, 5u);
          v141.m128i_i64[0] = (__int64)".so.1";
          v143 = 259;
          v83.m128i_i64[0] = (__int64)sub_114B080(*(__int64 **)(a2 + 8), (__int64)v119, v4);
          v139 = v83;
          v140 = 1283;
          v138.m128i_i64[0] = (__int64)"ld-linux-loongarch-";
          sub_A41580(&v144, &v138, &v141, (__int64)"ld-linux-loongarch-", 1283, v84);
          sub_2253560(&v135, &v144);
          v85 = (size_t *)src;
          if ( v135 == &v136.m128_u16[4] )
          {
            v112 = v136.m128_u64[0];
            if ( v136.m128_u64[0] )
            {
              if ( v136.m128_u64[0] == 1 )
                *(_BYTE *)src = v136.m128_i8[8];
              else
                memcpy(src, v135, v136.m128_u64[0]);
              v112 = v136.m128_u64[0];
              v85 = (size_t *)src;
            }
            n.m128_u64[0] = v112;
            *((_BYTE *)v85 + v112) = 0;
            v85 = (size_t *)v135;
          }
          else
          {
            if ( src == p_src + 2 )
            {
              v119 = (__m128i *)v136.m128_u64[1];
              src = v135;
              n = _mm_loadh_ps((const double *)&v119);
            }
            else
            {
              v119 = (__m128i *)v136.m128_u64[1];
              v86 = n.m128_u64[1];
              src = v135;
              n = _mm_loadh_ps((const double *)&v119);
              if ( v85 )
              {
                v135 = v85;
                v136.m128_u64[1] = v86;
                goto LABEL_165;
              }
            }
            v85 = &v136.m128_u64[1];
            v135 = &v136.m128_u16[4];
          }
LABEL_165:
          v136.m128_u64[0] = 0;
          *(_BYTE *)v85 = 0;
          v87 = v135;
          if ( v135 != &v136.m128_u16[4] )
            goto LABEL_166;
          goto LABEL_118;
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
          v88 = sub_1154600(*(_QWORD *)(a2 + 8), (__int64)v119, (__int64)v4);
          sub_1153700(&v141, (__int64)v119, v4);
          v89 = (__m128i *)sub_99BDC0(&v141, 0, 0, "lib", 3u);
          v144.m128i_i64[0] = (__int64)v145;
          if ( (__m128i *)v89->m128i_i64[0] == &v89[1] )
          {
            v145[0] = _mm_loadu_si128(v89 + 1);
          }
          else
          {
            v144.m128i_i64[0] = v89->m128i_i64[0];
            v145[0].m128i_i64[0] = v89[1].m128i_i64[0];
          }
          v144.m128i_i64[1] = v89->m128i_i64[1];
          v89->m128i_i64[0] = (__int64)v89[1].m128i_i64;
          v90 = (__m128i *)dest;
          v89->m128i_i64[1] = 0;
          v89[1].m128i_i8[0] = 0;
          v91 = v144.m128i_i64[0];
          if ( (__m128i *)v144.m128i_i64[0] == v145 )
          {
            v116 = v144.m128i_i64[1];
            if ( v144.m128i_i64[1] )
            {
              if ( v144.m128i_i64[1] == 1 )
              {
                v90->m128i_i8[0] = v145[0].m128i_i8[0];
                v116 = v144.m128i_i64[1];
                v90 = (__m128i *)dest;
              }
              else
              {
                *(_QWORD *)&v121[0] = &v144;
                memcpy(v90, (const void *)v144.m128i_i64[0], v144.m128i_u64[1]);
                v90 = (__m128i *)dest;
                v116 = v144.m128i_i64[1];
              }
            }
            v124.m128_u64[0] = v116;
            v90->m128i_i8[v116] = 0;
            v90 = (__m128i *)v144.m128i_i64[0];
          }
          else
          {
            if ( v90 == (__m128i *)&v124.m128_u16[4] )
            {
              v121[0] = *(double *)v145[0].m128i_i64;
              dest = (void *)v144.m128i_i64[0];
              v124 = _mm_loadh_ps(v121);
            }
            else
            {
              v121[0] = *(double *)v145[0].m128i_i64;
              v92 = v124.m128_i64[1];
              dest = (void *)v144.m128i_i64[0];
              v124 = _mm_loadh_ps(v121);
              if ( v90 )
              {
                v144.m128i_i64[0] = (__int64)v90;
                v145[0].m128i_i64[0] = v92;
                goto LABEL_173;
              }
            }
            v90 = v145;
            v144.m128i_i64[0] = (__int64)v145;
          }
LABEL_173:
          v144.m128i_i64[1] = 0;
          v90->m128i_i8[0] = 0;
          if ( (__m128i *)v144.m128i_i64[0] != v145 )
            operator delete((void *)v144.m128i_i64[0]);
          if ( (__m128i *)v141.m128i_i64[0] != &v142 )
            operator delete((void *)v141.m128i_i64[0]);
          if ( (unsigned __int8)sub_1154520((__int64)v119) )
          {
            v93 = "ld-uClibc-mipsn8.so.0";
            v94 = p_src;
            if ( !v88 )
              v93 = "ld-uClibc.so.0";
          }
          else
          {
            sub_22B76B0(v4);
            if ( !v114 && *(_DWORD *)(a2 + 56) == 7 )
            {
              v118 = sub_22B7F00(v4, v91, 0, v113);
              v93 = "ld-musl-mipsel.so.1";
              v94 = p_src;
              if ( !v118 )
                v93 = "ld-musl-mips.so.1";
            }
            else
            {
              v93 = "ld-linux-mipsn8.so.1";
              v94 = p_src;
              if ( !v88 )
                v93 = "ld.so.1";
            }
          }
          sub_E3D120(v94, v93);
          goto LABEL_118;
        case 0x15u:
        case 0x16u:
          sub_99BDC0(&dest, 0, 0, "lib", 3u);
          sub_E3D120(p_src, "ld.so.1");
          goto LABEL_118;
        case 0x17u:
          sub_99BDC0(&dest, 0, 0, "lib64", 5u);
          v108 = "ld64.so.2";
          v109 = p_src;
          if ( !(unsigned __int8)sub_1157870((__int64)v119, "elfv2") )
            v108 = "ld64.so.1";
          goto LABEL_198;
        case 0x18u:
          sub_99BDC0(&dest, 0, 0, "lib64", 5u);
          v108 = "ld64.so.1";
          v109 = p_src;
          if ( !(unsigned __int8)sub_1157870((__int64)v119, "elfv1") )
            v108 = "ld64.so.2";
LABEL_198:
          sub_E3D120(v109, v108);
          goto LABEL_118;
        case 0x1Bu:
        case 0x1Cu:
          v97 = sub_22B5820(v7);
          v99 = v98;
          v100 = sub_115A2B0((__int64)v119, v4);
          v119 = (__m128i *)v101;
          *(_QWORD *)&v121[0] = v100;
          sub_99BDC0(&dest, 0, v124.m128_u64[0], "lib", 3u);
          v141.m128i_i64[0] = (__int64)".so.1";
          v130[3] = v99;
          v143 = 259;
          v130[0] = "ld-linux-";
          v137 = 261;
          v130[2] = v97;
          v132.m128i_i64[0] = (__int64)v130;
          v134 = 770;
          v133 = "-";
          v135 = *(void **)&v121[0];
          v136.m128_u64[0] = (unsigned __int64)v119;
          v131 = 1283;
          sub_A41580(&v138, &v132, (const __m128i *)&v135, 1283, v102, (__int64)v119);
          sub_A41580(&v144, &v138, &v141, v103, v104, v105);
          sub_2253560(&v127, &v144);
          v106 = src;
          if ( v127 == v129 )
          {
            v117 = v128;
            if ( v128 )
            {
              if ( v128 == 1 )
                *(_BYTE *)src = v129[0];
              else
                memcpy(src, v127, v128);
              v117 = v128;
              v106 = src;
            }
            n.m128_u64[0] = v117;
            v106[v117] = 0;
            v106 = v127;
          }
          else
          {
            if ( src == p_src + 2 )
            {
              v119 = (__m128i *)v129[0];
              src = v127;
              n = _mm_loadh_ps((const double *)&v119);
            }
            else
            {
              v119 = (__m128i *)v129[0];
              v107 = n.m128_u64[1];
              src = v127;
              n = _mm_loadh_ps((const double *)&v119);
              if ( v106 )
              {
                v127 = v106;
                v129[0] = v107;
                goto LABEL_194;
              }
            }
            v106 = v129;
            v127 = v129;
          }
LABEL_194:
          v128 = 0;
          *v106 = 0;
          v87 = v127;
          if ( v127 != v129 )
LABEL_166:
            operator delete(v87);
LABEL_118:
          if ( v122 == 14 )
            goto LABEL_119;
          goto LABEL_143;
        case 0x1Du:
        case 0x1Fu:
          sub_E3D120(&dest, "lib");
          sub_E3D120(p_src, "ld-linux.so.2");
          goto LABEL_118;
        case 0x1Eu:
          v95 = 5;
          v96 = (char *)"lib64";
          goto LABEL_186;
        case 0x20u:
          sub_99BDC0(&dest, 0, 0, "lib", 3u);
          sub_99BDC0(p_src, 0, n.m128_u64[0], "ld64.so.1", 9u);
          goto LABEL_118;
        case 0x25u:
          v95 = 3;
          v96 = "lib";
LABEL_186:
          sub_99BDC0(&dest, 0, 0, v96, v95);
          v70 = 13;
          v71 = "ld-linux.so.2";
          goto LABEL_142;
        case 0x26u:
          if ( v8 == 12 )
          {
            sub_99BDC0(&dest, 0, 0, "libx32", 6u);
            v70 = 17;
            v71 = "ld-linux-x32.so.2";
          }
          else
          {
            sub_99BDC0(&dest, 0, 0, "lib64", 5u);
            v70 = 20;
            v71 = "ld-linux-x86-64.so.2";
          }
          goto LABEL_142;
      }
LABEL_261:
      std::__throw_length_error("basic_string::append");
    }
    v136.m128_i8[8] = 0;
    v136.m128_u64[0] = 0;
    v135 = &v136.m128_u16[4];
    switch ( v7 )
    {
      case 1u:
      case 0x23u:
        sub_99BDC0(&v135, 0, 0, "arm", 3u);
        goto LABEL_84;
      case 2u:
      case 0x24u:
        sub_99BDC0(&v135, 0, 0, "armeb", 5u);
LABEL_84:
        if ( *(_DWORD *)(a2 + 64) != 22 && (unsigned int)sub_113F460(a2, (__int64)v119) != 3 )
          goto LABEL_86;
        v54 = v136.m128_u64[0];
        if ( v136.m128_u64[0] == 0x7FFFFFFFFFFFFFFFLL || v136.m128_u64[0] == 9223372036854775806LL )
          goto LABEL_261;
        if ( v135 == &v136.m128_u16[4] )
          v55 = 15;
        else
          v55 = v136.m128_u64[1];
        if ( v136.m128_u64[0] + 2 > v55 )
          sub_998B30((__int64)&v135, v136.m128_u64[0], 0, "hf", 2u);
        else
          *(_WORD *)((char *)v135 + v136.m128_u64[0]) = 26216;
        v136.m128_u64[0] = v54 + 2;
        *((_BYTE *)v135 + v54 + 2) = 0;
LABEL_86:
        v41 = &v144;
        goto LABEL_87;
      case 0x25u:
        sub_99BDC0(&v135, 0, 0, "i386", 4u);
        v41 = &v144;
        goto LABEL_74;
      case 0x26u:
        if ( v8 == 12 || v8 == 25 )
        {
          v43 = 3;
          v42 = (__m128i *)&v136.m128_u16[4];
          v145[0].m128i_i32[0] = 3289976;
          v144.m128i_i64[0] = (__int64)v145;
          v144.m128i_i64[1] = 3;
        }
        else
        {
          v39 = (_BYTE *)sub_22B7480(v4);
          v41 = &v144;
          if ( !v39 )
          {
            v145[0].m128i_i8[0] = 0;
            v42 = (__m128i *)v135;
            v43 = 0;
            v144.m128i_i64[0] = (__int64)v145;
            goto LABEL_111;
          }
          v144.m128i_i64[0] = (__int64)v145;
          sub_12648D0(&v144, v39, (__int64)&v39[v40]);
          v41 = &v144;
          v42 = (__m128i *)v135;
          v43 = v144.m128i_u64[1];
          if ( (__m128i *)v144.m128i_i64[0] != v145 )
          {
            if ( v135 == &v136.m128_u16[4] )
            {
              v119 = (__m128i *)v145[0].m128i_i64[0];
              v135 = (void *)v144.m128i_i64[0];
              v136 = _mm_loadh_ps((const double *)&v119);
            }
            else
            {
              v119 = (__m128i *)v145[0].m128i_i64[0];
              v44 = v136.m128_i64[1];
              v135 = (void *)v144.m128i_i64[0];
              v136 = _mm_loadh_ps((const double *)&v119);
              if ( v42 )
              {
                v144.m128i_i64[0] = (__int64)v42;
                v145[0].m128i_i64[0] = v44;
                goto LABEL_71;
              }
            }
            v42 = v145;
            v144.m128i_i64[0] = (__int64)v145;
LABEL_71:
            v144.m128i_i64[1] = 0;
            v42->m128i_i8[0] = 0;
            if ( (__m128i *)v144.m128i_i64[0] != v145 )
            {
              v119 = &v144;
              operator delete((void *)v144.m128i_i64[0]);
              v41 = v119;
            }
            goto LABEL_74;
          }
          if ( !v144.m128i_i64[1] )
          {
LABEL_111:
            v136.m128_u64[0] = v43;
            v42->m128i_i8[v43] = 0;
            v42 = (__m128i *)v144.m128i_i64[0];
            goto LABEL_71;
          }
          if ( v144.m128i_i64[1] == 1 )
          {
            *(_BYTE *)v135 = v145[0].m128i_i8[0];
            v43 = v144.m128i_u64[1];
            v42 = (__m128i *)v135;
            goto LABEL_111;
          }
        }
        memcpy(v42, v145, v43);
        v43 = v144.m128i_u64[1];
        v41 = &v144;
        v42 = (__m128i *)v135;
        goto LABEL_111;
      default:
        v50 = (_BYTE *)sub_22B7480(v4);
        v41 = &v144;
        if ( v50 )
        {
          v119 = &v144;
          v144.m128i_i64[0] = (__int64)v145;
          sub_12648D0(&v144, v50, (__int64)&v50[v51]);
          v41 = &v144;
          v52 = (__m128i *)v135;
          if ( (__m128i *)v144.m128i_i64[0] != v145 )
          {
            if ( v135 == &v136.m128_u16[4] )
            {
              v119 = (__m128i *)v145[0].m128i_i64[0];
              v135 = (void *)v144.m128i_i64[0];
              v136 = _mm_loadh_ps((const double *)&v119);
            }
            else
            {
              v119 = (__m128i *)v145[0].m128i_i64[0];
              v53 = v136.m128_i64[1];
              v135 = (void *)v144.m128i_i64[0];
              v136 = _mm_loadh_ps((const double *)&v119);
              if ( v52 )
              {
                v144.m128i_i64[0] = (__int64)v52;
                v145[0].m128i_i64[0] = v53;
                goto LABEL_96;
              }
            }
            v52 = v145;
            v144.m128i_i64[0] = (__int64)v145;
LABEL_96:
            v144.m128i_i64[1] = 0;
            v52->m128i_i8[0] = 0;
            if ( (__m128i *)v144.m128i_i64[0] != &v41[1] )
            {
              v119 = v41;
              operator delete((void *)v144.m128i_i64[0]);
              v41 = v119;
            }
LABEL_87:
            if ( v7 == 21 && *(_DWORD *)(a2 + 52) == 41 )
            {
              v119 = v41;
              sub_99BDC0(&v135, 0, v136.m128_u64[0], "powerpc-sf", 0xAu);
              v41 = v119;
            }
LABEL_74:
            v119 = v41;
            sub_C05100((__int64)v41, "/lib/ld-musl-", (__int64)&v135);
            v45 = v144.m128i_i64[1];
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v144.m128i_i64[1]) > 4 )
            {
              v46 = (__int64)v119;
              if ( (__m128i *)v144.m128i_i64[0] == &v119[1] )
                v47 = 15;
              else
                v47 = v145[0].m128i_i64[0];
              if ( v144.m128i_i64[1] + 5 > v47 )
              {
                sub_998B30((__int64)v119, v144.m128i_u64[1], 0, ".so.1", 5u);
                v46 = (__int64)v119;
              }
              else
              {
                v48 = v144.m128i_i64[1] + v144.m128i_i64[0];
                *(_DWORD *)v48 = 779055918;
                *(_BYTE *)(v48 + 4) = 49;
              }
              v144.m128i_i64[1] = v45 + 5;
              *(_BYTE *)(v144.m128i_i64[0] + v45 + 5) = 0;
              a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
              if ( v144.m128i_i64[0] == v46 + 16 )
              {
                a1[1] = _mm_load_si128(v145);
              }
              else
              {
                a1->m128i_i64[0] = v144.m128i_i64[0];
                a1[1].m128i_i64[0] = v145[0].m128i_i64[0];
              }
              v49 = (size_t *)v135;
              a1->m128i_i64[1] = v144.m128i_i64[1];
              if ( v49 == (size_t *)&v136.m128_u16[4] )
                return a1;
              goto LABEL_82;
            }
            goto LABEL_261;
          }
          v57 = v144.m128i_i64[1];
          if ( v144.m128i_i64[1] )
          {
            if ( v144.m128i_i64[1] == 1 )
            {
              *(_BYTE *)v135 = v145[0].m128i_i8[0];
              v57 = v144.m128i_i64[1];
            }
            else
            {
              memcpy(v135, (const void *)v144.m128i_i64[0], v144.m128i_u64[1]);
              v57 = v144.m128i_i64[1];
              v41 = v119;
            }
            v52 = (__m128i *)v135;
          }
        }
        else
        {
          v145[0].m128i_i8[0] = 0;
          v52 = (__m128i *)v135;
          v57 = 0;
          v144.m128i_i64[0] = (__int64)v145;
        }
        v136.m128_u64[0] = v57;
        v52->m128i_i8[v57] = 0;
        v52 = (__m128i *)v144.m128i_i64[0];
        goto LABEL_96;
    }
  }
  v9 = (__int64)v119;
  v10 = 0;
  v119 = &v144;
  sub_112C5F0((__int64)&v144, a2, v9);
  v11 = &v144;
  if ( (v144.m128i_i8[0] & 0x10) != 0 )
  {
    v12 = sub_22B7A20(v4);
    v13 = sub_22B7EA0(v4);
    v11 = v119;
    if ( !v13 || v12 > 0x14 )
    {
      v10 = 0;
      if ( v12 > 0x21 )
      {
        v56 = sub_22B7EA0(v4);
        v11 = v119;
        v10 = v56;
      }
    }
  }
  if ( v158 != &v11[21] )
  {
    v119 = v11;
    operator delete(v158);
    v11 = v119;
  }
  if ( v157 != &v11[18] )
    operator delete(v157);
  v14 = v156;
  v15 = (void **)v155;
  if ( v156 != v155 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v14 == v15 )
          goto LABEL_17;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_17:
    v15 = (void **)v155;
  }
  if ( v15 )
    operator delete(v15);
  v16 = v154;
  v17 = (void **)v153;
  if ( v154 != v153 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v16 == v17 )
          goto LABEL_23;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_23:
    v17 = (void **)v153;
  }
  if ( v17 )
    operator delete(v17);
  v18 = v152;
  v19 = (void **)v151;
  if ( v152 != v151 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_29;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_29:
    v19 = (void **)v151;
  }
  if ( v19 )
    operator delete(v19);
  v20 = v150;
  v21 = (void **)v149;
  if ( v150 != v149 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v21 == v20 )
          goto LABEL_35;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_35:
    v21 = (void **)v149;
  }
  if ( v21 )
    operator delete(v21);
  v22 = v148;
  v23 = (void **)v147;
  if ( v148 != v147 )
  {
    do
    {
      while ( *v23 != v23 + 2 )
      {
        operator delete(*v23);
        v23 += 4;
        if ( v22 == v23 )
          goto LABEL_41;
      }
      v23 += 4;
    }
    while ( v22 != v23 );
LABEL_41:
    v23 = (void **)v147;
  }
  if ( v23 )
    operator delete(v23);
  if ( v146 )
    operator delete(v146);
  v24 = a1 + 1;
  if ( v10 )
  {
    a1->m128i_i64[0] = (__int64)v24;
    v25 = (__m128i *)operator new(0x1Cu);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9D80);
    a1->m128i_i64[0] = (__int64)v25;
    a1[1].m128i_i64[0] = 27;
    strcpy(v25[1].m128i_i8, "er_hwasan64");
    a1->m128i_i64[1] = 27;
    *v25 = si128;
  }
  else
  {
    v28 = "/system/bin/linker64";
    v29 = sub_22B7EA0(v4);
    a1->m128i_i64[0] = (__int64)v24;
    if ( !v29 )
      v28 = "/system/bin/linker";
    v30 = strlen(v28);
    v31 = (_QWORD *)operator new(v30 + 1);
    a1[1].m128i_i64[0] = v30;
    a1->m128i_i64[0] = (__int64)v31;
    v32 = (unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v31 = *(_QWORD *)v28;
    *(_QWORD *)((char *)v31 + (unsigned int)v30 - 8) = *(_QWORD *)&v28[(unsigned int)v30 - 8];
    v33 = (char *)v31 - v32;
    v34 = 0;
    v35 = (const char *)(v28 - v33);
    v36 = (v30 + (_DWORD)v33) & 0xFFFFFFF8;
    do
    {
      v37 = v34;
      v34 += 8;
      *(_QWORD *)(v32 + v37) = *(_QWORD *)&v35[v37];
    }
    while ( v34 < v36 );
    v38 = a1->m128i_i64[0];
    a1->m128i_i64[1] = v30;
    *(_BYTE *)(v38 + v30) = 0;
  }
  return a1;
}
