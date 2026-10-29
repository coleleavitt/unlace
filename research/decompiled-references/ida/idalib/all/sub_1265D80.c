__int64 __fastcall sub_1265D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  unsigned __int64 v8; // rcx
  int v9; // edi
  size_t v13; // r9
  __int64 (__fastcall *v14)(__int64, __m128i *); // r11
  char v15; // al
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64, __m128i *); // rax
  char v18; // r12
  const char *v19; // rsi
  __int64 v21; // rcx
  __m128i *v22; // rax
  __m128i v23; // xmm0
  __m128i *v24; // rax
  __m128i v25; // xmm0
  bool v26; // zf
  _QWORD *v27; // rdi
  const char *v28; // rsi
  char *v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm6
  __m128i v32; // xmm5
  __m128i *v33; // rax
  __m128i si128; // xmm0
  __m128i *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r13
  __int64 (__fastcall *v38)(__int64, __m128i *); // r14
  char v39; // r12
  char *v40; // rax
  const char *v41; // rsi
  void *v42; // r14
  char *v43; // r9
  unsigned __int64 v44; // rdx
  char *v45; // rax
  __int64 v46; // r14
  unsigned __int64 v47; // rax
  char *v48; // rsi
  __m128i *v49; // rdx
  char *v50; // r9
  unsigned __int64 v51; // rcx
  _QWORD *v52; // rdx
  unsigned __int64 v53; // rcx
  char *v54; // rdx
  char *v55; // rdi
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // rsi
  __int64 (__fastcall *v60)(__int64, __m128i *); // r11
  char v61; // al
  char *v62; // r14
  const char *v63; // rsi
  size_t v64; // rax
  size_t v65; // r9
  unsigned __int64 v66; // rcx
  char *v67; // rdx
  unsigned __int64 v68; // rax
  size_t v69; // rsi
  __m128i *v70; // rdx
  unsigned __int64 v71; // rcx
  _QWORD *v72; // rdx
  unsigned __int64 v73; // rcx
  char *v74; // rdx
  char *v75; // r14
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // edx
  __int64 v79; // rsi
  __int64 v80; // r13
  char v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  __m128i v84; // xmm1
  __m128i v85; // xmm3
  char *v86; // rcx
  char *s; // [rsp+0h] [rbp-1A8h]
  size_t v88; // [rsp+8h] [rbp-1A0h]
  __int64 v89; // [rsp+8h] [rbp-1A0h]
  size_t v90; // [rsp+8h] [rbp-1A0h]
  __m128i *v91; // [rsp+10h] [rbp-198h]
  __m128i *v92; // [rsp+10h] [rbp-198h]
  char *v93; // [rsp+10h] [rbp-198h]
  char *v94; // [rsp+10h] [rbp-198h]
  size_t v95; // [rsp+10h] [rbp-198h]
  char *v96; // [rsp+28h] [rbp-180h]
  size_t v97; // [rsp+28h] [rbp-180h]
  __int64 (__fastcall *v98)(__int64, __m128i *); // [rsp+30h] [rbp-178h]
  char v99; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v100)(__int64, __m128i *); // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v101)(__int64, __m128i *); // [rsp+30h] [rbp-178h]
  char v102; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v103)(__int64, __m128i *); // [rsp+30h] [rbp-178h]
  __int64 v104; // [rsp+38h] [rbp-170h]
  __int64 v105; // [rsp+38h] [rbp-170h]
  void *v106; // [rsp+40h] [rbp-168h] BYREF
  size_t v107; // [rsp+48h] [rbp-160h]
  __m128i v108; // [rsp+50h] [rbp-158h] BYREF
  void *v109[2]; // [rsp+60h] [rbp-148h] BYREF
  _BYTE v110[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v111[4]; // [rsp+80h] [rbp-128h] BYREF
  __int16 v112; // [rsp+A0h] [rbp-108h]
  void *v113; // [rsp+B0h] [rbp-F8h] BYREF
  size_t v114; // [rsp+B8h] [rbp-F0h]
  __m128i v115; // [rsp+C0h] [rbp-E8h] BYREF
  __int16 v116; // [rsp+D0h] [rbp-D8h]
  __m128i *v117; // [rsp+E0h] [rbp-C8h] BYREF
  size_t v118; // [rsp+E8h] [rbp-C0h]
  __m128i v119; // [rsp+F0h] [rbp-B8h] BYREF
  __int16 v120; // [rsp+100h] [rbp-A8h]
  void *v121[2]; // [rsp+110h] [rbp-98h] BYREF
  __m128i v122; // [rsp+120h] [rbp-88h] BYREF
  __int64 v123; // [rsp+130h] [rbp-78h]
  __m128i v124; // [rsp+140h] [rbp-68h] BYREF
  __m128i v125; // [rsp+150h] [rbp-58h] BYREF
  __int64 v126; // [rsp+160h] [rbp-48h]

  v8 = *(unsigned int *)(a4 + 48);
  v9 = *(_DWORD *)(a4 + 36);
  switch ( *(_DWORD *)(a4 + 32) )
  {
    case 1:
    case 0x23:
      if ( (_DWORD)v8 == 17 )
      {
        sub_1264990((_QWORD *)a1, "arm-linux-androideabi");
      }
      else if ( (unsigned int)v8 <= 0x16 && (v83 = 4259968, _bittest64(&v83, v8)) )
      {
        sub_1264990((_QWORD *)a1, "arm-linux-gnueabihf");
      }
      else
      {
        sub_1264990((_QWORD *)a1, "arm-linux-gnueabi");
      }
      return a1;
    case 2:
    case 0x24:
      if ( (unsigned int)v8 <= 0x16 && (v82 = 4259968, _bittest64(&v82, v8)) )
        sub_1264990((_QWORD *)a1, "armeb-linux-gnueabihf");
      else
        sub_1264990((_QWORD *)a1, "armeb-linux-gnueabi");
      return a1;
    case 3:
      if ( (_DWORD)v8 == 17 )
      {
        sub_1264990((_QWORD *)a1, "aarch64-linux-android");
      }
      else if ( *(_QWORD *)(a2 + 1768) && *(_DWORD *)(a2 + 1808) == 51 )
      {
        sub_1264990((_QWORD *)a1, "aarch64-linux-pauthtest");
      }
      else
      {
        sub_1264990((_QWORD *)a1, "aarch64-linux-gnu");
      }
      return a1;
    case 4:
      *(_QWORD *)a1 = a1 + 16;
      v33 = (__m128i *)operator new(0x15u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9D30);
      *(_QWORD *)(a1 + 16) = 20;
      *(_QWORD *)a1 = v33;
      *v33 = si128;
      strcpy(v33[1].m128i_i8, "-gnu");
      *(_QWORD *)(a1 + 8) = 20;
      return a1;
    case 0xE:
      if ( (unsigned int)(v8 - 1) <= 0xB )
      {
        v29 = "gnu";
      }
      else
      {
        if ( (unsigned int)(v8 - 18) > 7 && (_DWORD)v8 != 49 && *(_DWORD *)(a4 + 44) != 39 )
          goto LABEL_15;
        v29 = (char *)"musl";
        if ( (unsigned int)v8 > 0x18 )
          goto LABEL_15;
      }
      v30 = 1LL << v8;
      if ( ((1LL << v8) & 0x40402) != 0 )
      {
        v122.m128i_i64[0] = (__int64)v29;
        v31 = _mm_load_si128(&v122);
        v121[0] = "loongarch64-linux-";
        v32 = _mm_load_si128((const __m128i *)v121);
        LOWORD(v123) = 771;
        v124 = v32;
        v126 = v123;
        v125 = v31;
LABEL_42:
        sub_2253560(a1, &v124);
        return a1;
      }
      if ( (v30 & 0x1000800) != 0 )
      {
        v86 = "sf";
        goto LABEL_132;
      }
      if ( (v30 & 0x800200) != 0 )
      {
        v86 = (char *)"f32";
LABEL_132:
        v122.m128i_i64[0] = (__int64)v29;
        v121[0] = "loongarch64-linux-";
        v125.m128i_i64[0] = (__int64)v86;
        LOWORD(v123) = 771;
        v124 = (__m128i)(unsigned __int64)v121;
        LOWORD(v126) = 770;
        goto LABEL_42;
      }
      goto LABEL_15;
    case 0xF:
      *(_QWORD *)a1 = a1 + 16;
      strcpy((char *)(a1 + 16), "m68k-linux-gnu");
      *(_QWORD *)(a1 + 8) = 14;
      return a1;
    case 0x10:
      v26 = v9 == 40;
      v27 = (_QWORD *)a1;
      v28 = "mipsisa32r6-linux-gnu";
      if ( !v26 )
        v28 = "mips-linux-gnu";
      goto LABEL_31;
    case 0x11:
      v26 = v9 == 40;
      v27 = (_QWORD *)a1;
      v28 = "mipsisa32r6el-linux-gnu";
      if ( !v26 )
        v28 = "mipsel-linux-gnu";
LABEL_31:
      sub_1264990(v27, v28);
      return a1;
    case 0x12:
      v62 = "gnuabin32";
      if ( (_DWORD)v8 != 3 )
        v62 = "gnuabi64";
      v63 = "mipsisa64r6";
      if ( v9 != 40 )
        v63 = "mips64";
      sub_1264990(&v113, v63);
      v64 = v114;
      if ( 0x7FFFFFFFFFFFFFFFLL - v114 <= 6 )
        goto LABEL_143;
      v65 = v114 + 7;
      if ( v113 == &v115 )
        v66 = 15;
      else
        v66 = v115.m128i_i64[0];
      if ( v65 > v66 )
      {
        v95 = v114 + 7;
        v90 = v114;
        sub_998B30((__int64)&v113, v114, 0, "-linux-", 7u);
        v65 = v95;
        v64 = v90;
      }
      else
      {
        v67 = (char *)v113 + v114;
        *(_DWORD *)v67 = 1852402733;
        *((_WORD *)v67 + 2) = 30837;
        v67[6] = 45;
      }
      v114 = v65;
      *((_BYTE *)v113 + v64 + 7) = 0;
      v117 = &v119;
      if ( v113 == &v115 )
      {
        v69 = v114;
        v84 = _mm_load_si128(&v115);
        v114 = 0;
        v118 = v69;
        v119 = v84;
        v115.m128i_i8[0] = 0;
        v68 = strlen(v62);
        if ( v68 <= 0x7FFFFFFFFFFFFFFFLL - v69 )
        {
          v13 = v68 + v69;
          v70 = &v119;
          v71 = 15;
          goto LABEL_99;
        }
      }
      else
      {
        v117 = (__m128i *)v113;
        v118 = v114;
        v97 = v114;
        v92 = (__m128i *)v113;
        v119.m128i_i64[0] = v115.m128i_i64[0];
        v89 = v115.m128i_i64[0];
        v113 = &v115;
        v114 = 0;
        v115.m128i_i8[0] = 0;
        v68 = strlen(v62);
        v69 = v97;
        if ( 0x7FFFFFFFFFFFFFFFLL - v97 >= v68 )
        {
          v70 = v92;
          v13 = v97 + v68;
          v71 = v89;
          if ( v92 == &v119 )
            v71 = 15;
LABEL_99:
          if ( v13 > v71 )
          {
            v88 = v13;
            sub_998B30((__int64)&v117, v69, 0, v62, v68);
            v13 = v88;
          }
          else
          {
            v72 = (__int64 *)((char *)v70->m128i_i64 + v69);
            *v72 = *(_QWORD *)v62;
            *(_QWORD *)((char *)v72 + (unsigned int)v68 - 8) = *(_QWORD *)&v62[(unsigned int)v68 - 8];
            v73 = (unsigned __int64)(v72 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v74 = (char *)v72 - v73;
            v75 = (char *)(v62 - v74);
            v76 = ((_DWORD)v74 + v68) & 0xFFFFFFF8;
            if ( v76 >= 8 )
            {
              v77 = v76 & 0xFFFFFFF8;
              v78 = 0;
              do
              {
                v79 = v78;
                v78 += 8;
                *(_QWORD *)(v73 + v79) = *(_QWORD *)&v75[v79];
              }
              while ( v78 < v77 );
            }
          }
          v118 = v13;
          v117->m128i_i8[v13] = 0;
          v106 = &v108;
          if ( v117 == &v119 )
          {
            v108 = _mm_load_si128(&v119);
          }
          else
          {
            v106 = v117;
            v108.m128i_i64[0] = v119.m128i_i64[0];
          }
          v107 = v118;
          if ( v113 != &v115 )
            operator delete(v113);
          v104 = *(_QWORD *)(a3 + 8);
          v14 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v104 + 96LL);
          LOWORD(v123) = 257;
          v120 = 257;
          v116 = 260;
          v98 = v14;
          v113 = &v106;
          v111[0] = "/lib";
          v112 = 259;
          sub_1130220(v109, a5, a6, (__int64)v111, (__int64)&v113, (__int64)&v117, (__int64)v121);
          v124.m128i_i64[0] = (__int64)v109;
          LOWORD(v126) = 260;
          v15 = v98(v104, &v124);
          if ( v109[0] != v110 )
          {
            v99 = v15;
            operator delete(v109[0]);
            v15 = v99;
          }
          if ( !v15 )
          {
            v16 = *(_QWORD *)(a3 + 8);
            v17 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v16 + 96LL);
            LOWORD(v123) = 257;
            v120 = 257;
            v100 = v17;
            v116 = 257;
            v111[0] = "/lib/mips64-linux-gnu";
            v112 = 259;
            sub_1130220(v109, a5, a6, (__int64)v111, (__int64)&v113, (__int64)&v117, (__int64)v121);
            LOWORD(v126) = 260;
            v124.m128i_i64[0] = (__int64)v109;
            v18 = v100(v16, &v124);
            if ( v109[0] != v110 )
              operator delete(v109[0]);
            v19 = "mips64-linux-gnu";
            if ( !v18 )
              goto LABEL_13;
LABEL_109:
            sub_1264990((_QWORD *)a1, v19);
            if ( v106 != &v108 )
              operator delete(v106);
            return a1;
          }
LABEL_83:
          *(_QWORD *)a1 = a1 + 16;
          if ( v106 == &v108 )
          {
            *(__m128i *)(a1 + 16) = _mm_load_si128(&v108);
          }
          else
          {
            *(_QWORD *)a1 = v106;
            *(_QWORD *)(a1 + 16) = v108.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 8) = v107;
          return a1;
        }
      }
      goto LABEL_143;
    case 0x13:
      v40 = "gnuabi64";
      if ( (_DWORD)v8 == 3 )
        v40 = "gnuabin32";
      v41 = "mipsisa64r6el";
      s = v40;
      if ( v9 != 40 )
        v41 = "mips64el";
      sub_1264990(v121, v41);
      v42 = v121[1];
      if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v121[1] <= 6 )
        goto LABEL_143;
      v43 = (char *)v121[1] + 7;
      if ( v121[0] == &v122 )
        v44 = 15;
      else
        v44 = v122.m128i_i64[0];
      if ( (unsigned __int64)v43 > v44 )
      {
        v94 = (char *)v121[1] + 7;
        sub_998B30((__int64)v121, (size_t)v121[1], 0, "-linux-", 7u);
        v43 = v94;
      }
      else
      {
        v45 = (char *)v121[1] + (unsigned __int64)v121[0];
        *(_DWORD *)v45 = 1852402733;
        *((_WORD *)v45 + 2) = 30837;
        v45[6] = 45;
      }
      v121[1] = v43;
      *((_BYTE *)v121[0] + (unsigned __int64)v42 + 7) = 0;
      v124.m128i_i64[0] = (__int64)&v125;
      if ( v121[0] == &v122 )
      {
        v48 = (char *)v121[1];
        v121[1] = nullptr;
        v85 = _mm_load_si128(&v122);
        v122.m128i_i8[0] = 0;
        v124.m128i_i64[1] = (__int64)v48;
        v125 = v85;
        v47 = strlen(s);
        if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v48 >= v47 )
        {
          v50 = &v48[v47];
          v49 = &v125;
          v51 = 15;
          goto LABEL_72;
        }
LABEL_143:
        std::__throw_length_error("basic_string::append");
      }
      v46 = v122.m128i_i64[0];
      v124 = *(__m128i *)v121;
      v91 = (__m128i *)v121[0];
      v96 = (char *)v121[1];
      v125.m128i_i64[0] = v122.m128i_i64[0];
      v121[0] = &v122;
      v121[1] = nullptr;
      v122.m128i_i8[0] = 0;
      v47 = strlen(s);
      v48 = v96;
      if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v96 < v47 )
        goto LABEL_143;
      v49 = v91;
      v50 = &v96[v47];
      v51 = 15;
      if ( v91 != &v125 )
        v51 = v46;
LABEL_72:
      if ( v51 < (unsigned __int64)v50 )
      {
        v93 = v50;
        sub_998B30((__int64)&v124, (size_t)v48, 0, s, v47);
        v50 = v93;
      }
      else
      {
        v52 = (__int64 *)((char *)v49->m128i_i64 + (_QWORD)v48);
        *v52 = *(_QWORD *)s;
        *(_QWORD *)((char *)v52 + (unsigned int)v47 - 8) = *(_QWORD *)&s[(unsigned int)v47 - 8];
        v53 = (unsigned __int64)(v52 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v54 = (char *)v52 - v53;
        v55 = (char *)(s - v54);
        v56 = ((_DWORD)v54 + v47) & 0xFFFFFFF8;
        if ( v56 >= 8 )
        {
          v57 = v56 & 0xFFFFFFF8;
          v58 = 0;
          do
          {
            v59 = v58;
            v58 += 8;
            *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
          }
          while ( v58 < v57 );
        }
      }
      v124.m128i_i64[1] = (__int64)v50;
      v50[v124.m128i_i64[0]] = 0;
      v106 = &v108;
      if ( (__m128i *)v124.m128i_i64[0] == &v125 )
      {
        v108 = _mm_load_si128(&v125);
      }
      else
      {
        v106 = (void *)v124.m128i_i64[0];
        v108.m128i_i64[0] = v125.m128i_i64[0];
      }
      v107 = v124.m128i_u64[1];
      if ( v121[0] != &v122 )
        operator delete(v121[0]);
      v105 = *(_QWORD *)(a3 + 8);
      v60 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v105 + 96LL);
      LOWORD(v123) = 257;
      v113 = &v106;
      v116 = 260;
      v111[0] = "/lib";
      v112 = 259;
      v120 = 257;
      v101 = v60;
      sub_1130220(v109, a5, a6, (__int64)v111, (__int64)&v113, (__int64)&v117, (__int64)v121);
      v124.m128i_i64[0] = (__int64)v109;
      LOWORD(v126) = 260;
      v61 = v101(v105, &v124);
      if ( v109[0] != v110 )
      {
        v102 = v61;
        operator delete(v109[0]);
        v61 = v102;
      }
      if ( v61 )
        goto LABEL_83;
      v80 = *(_QWORD *)(a3 + 8);
      v103 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v80 + 96LL);
      LOWORD(v123) = 257;
      v120 = 257;
      v116 = 257;
      v111[0] = "/lib/mips64el-linux-gnu";
      v112 = 259;
      sub_1130220(v109, a5, a6, (__int64)v111, (__int64)&v113, (__int64)&v117, (__int64)v121);
      LOWORD(v126) = 260;
      v124.m128i_i64[0] = (__int64)v109;
      v81 = v103(v80, &v124);
      if ( v109[0] != v110 )
        operator delete(v109[0]);
      if ( v81 )
      {
        v19 = "mips64el-linux-gnu";
        goto LABEL_109;
      }
LABEL_13:
      if ( v106 != &v108 )
        operator delete(v106);
LABEL_15:
      *(_QWORD *)a1 = a1 + 16;
      sub_1264810((_QWORD *)a1, *(_BYTE **)a4, *(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
      return a1;
    case 0x15:
      v37 = *(_QWORD *)(a3 + 8);
      v38 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v37 + 96LL);
      LOWORD(v123) = 257;
      v120 = 257;
      v116 = 257;
      v111[0] = "/lib/powerpc-linux-gnuspe";
      v112 = 259;
      sub_1130220(v109, a5, a6, (__int64)v111, (__int64)&v113, (__int64)&v117, (__int64)v121);
      v124.m128i_i64[0] = (__int64)v109;
      LOWORD(v126) = 260;
      v39 = v38(v37, &v124);
      if ( v109[0] != v110 )
        operator delete(v109[0]);
      if ( v39 )
        sub_1264990((_QWORD *)a1, "powerpc-linux-gnuspe");
      else
        sub_1264990((_QWORD *)a1, "powerpc-linux-gnu");
      return a1;
    case 0x16:
      *(_QWORD *)a1 = a1 + 16;
      v35 = (__m128i *)operator new(0x14u);
      *(_QWORD *)(a1 + 16) = 19;
      v36 = _mm_load_si128((const __m128i *)&xmmword_23A9D40);
      *(_QWORD *)a1 = v35;
      goto LABEL_54;
    case 0x17:
      *(_QWORD *)a1 = a1 + 16;
      v35 = (__m128i *)operator new(0x14u);
      *(_QWORD *)(a1 + 16) = 19;
      v36 = _mm_load_si128((const __m128i *)&xmmword_23A9D50);
      *(_QWORD *)a1 = v35;
LABEL_54:
      *v35 = v36;
      v35[1].m128i_i16[0] = 28263;
      v35[1].m128i_i8[2] = 117;
      *(_QWORD *)(a1 + 8) = 19;
      v35[1].m128i_i8[3] = 0;
      return a1;
    case 0x18:
      *(_QWORD *)a1 = a1 + 16;
      v24 = (__m128i *)operator new(0x16u);
      v25 = _mm_load_si128((const __m128i *)&xmmword_23A9D60);
      *(_QWORD *)(a1 + 16) = 21;
      *(_QWORD *)a1 = v24;
      *v24 = v25;
      v24[1].m128i_i32[0] = 1852255608;
      v24[1].m128i_i8[4] = 117;
      *(_QWORD *)(a1 + 8) = 21;
      v24[1].m128i_i8[5] = 0;
      return a1;
    case 0x1C:
      if ( (_DWORD)v8 == 17 )
        sub_1264990((_QWORD *)a1, "riscv64-linux-android");
      else
        sub_1264990((_QWORD *)a1, "riscv64-linux-gnu");
      return a1;
    case 0x1D:
      v21 = 0x696C2D6372617073LL;
      *(_QWORD *)a1 = a1 + 16;
      goto LABEL_23;
    case 0x1E:
      *(_QWORD *)a1 = a1 + 16;
      v22 = (__m128i *)operator new(0x12u);
      v23 = _mm_load_si128((const __m128i *)&xmmword_23A9D70);
      *(_QWORD *)(a1 + 16) = 17;
      *(_QWORD *)a1 = v22;
      *v22 = v23;
      v22[1].m128i_i8[0] = 117;
      *(_QWORD *)(a1 + 8) = 17;
      v22[1].m128i_i8[1] = 0;
      return a1;
    case 0x20:
      v21 = 0x696C2D7830393373LL;
      *(_QWORD *)a1 = a1 + 16;
LABEL_23:
      *(_QWORD *)(a1 + 16) = v21;
      *(_DWORD *)(a1 + 24) = 762869102;
      *(_WORD *)(a1 + 28) = 28263;
      *(_BYTE *)(a1 + 30) = 117;
      *(_QWORD *)(a1 + 8) = 15;
      *(_BYTE *)(a1 + 31) = 0;
      return a1;
    case 0x25:
      if ( (_DWORD)v8 == 17 )
        sub_1264990((_QWORD *)a1, "i686-linux-android");
      else
        sub_1264990((_QWORD *)a1, "i386-linux-gnu");
      return a1;
    case 0x26:
      if ( (_DWORD)v8 == 17 )
      {
        sub_1264990((_QWORD *)a1, "x86_64-linux-android");
      }
      else if ( (_DWORD)v8 == 12 )
      {
        sub_1264990((_QWORD *)a1, "x86_64-linux-gnux32");
      }
      else
      {
        sub_1264990((_QWORD *)a1, "x86_64-linux-gnu");
      }
      return a1;
    default:
      goto LABEL_15;
  }
}
