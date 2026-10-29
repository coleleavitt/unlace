_QWORD *__fastcall sub_9CE6E0(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 *v18; // rbp
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 *v22; // rdi
  __int64 v23; // rdx
  void *v25; // r12
  void **v26; // rbp
  void **v27; // rbx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  bool v33; // zf
  unsigned __int64 v34; // rax
  size_t v35; // rax
  void *v36; // rsi
  __int64 (__fastcall *v37)(__int64); // rax
  __int64 v38; // rdi
  __int64 v39; // rbp
  unsigned int v40; // eax
  char v41; // bp
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rdi
  int v49; // edx
  __int32 v50; // edx
  unsigned __int64 v51; // rax
  void (__fastcall *v52)(void **, __int64, _QWORD, const char *, size_t); // rbp
  size_t v53; // rbx
  unsigned int v54; // eax
  size_t v55; // rax
  _BYTE *v56; // r12
  void *v57; // rbp
  int v58; // eax
  size_t v59; // rax
  _QWORD *v60; // rbp
  __int64 v61; // rbp
  unsigned int v62; // eax
  unsigned __int64 v63; // r15
  double v64; // xmm0_8
  int v65; // eax
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  _BYTE *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rbx
  unsigned int v71; // ebp
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  void (__fastcall *v74)(void **, __int64, _QWORD, const char *, void *); // r12
  unsigned int v75; // eax
  size_t v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  _QWORD *v79; // rdx
  void *v80; // rax
  _QWORD *v81; // rax
  char v82; // cl
  unsigned int v83; // eax
  unsigned int v84; // edx
  unsigned int v85; // ebp
  void *v86; // rcx
  __int64 v87; // rax
  unsigned int v88; // eax
  __int64 v89; // rax
  unsigned __int64 v90; // r12
  int v91; // eax
  __int64 v92; // r9
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 *v95; // rax
  __int64 v96; // rdx
  void *v97; // rax
  __int64 v98; // rax
  __int64 *v99; // rdx
  unsigned __int64 v100; // rcx
  __int64 *v101; // rax
  __int64 *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned int *v105; // rax
  __int64 v106; // rdx
  _BYTE *v107; // rax
  size_t v108; // rax
  size_t v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rcx
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rdx
  __int64 v116; // [rsp+8h] [rbp-410h]
  __int64 v117; // [rsp+10h] [rbp-408h]
  void *srcb; // [rsp+18h] [rbp-400h]
  void *src; // [rsp+18h] [rbp-400h]
  unsigned __int64 srca; // [rsp+18h] [rbp-400h]
  unsigned int v121; // [rsp+20h] [rbp-3F8h]
  __int64 v122; // [rsp+20h] [rbp-3F8h]
  int v123; // [rsp+20h] [rbp-3F8h]
  int v124; // [rsp+28h] [rbp-3F0h]
  char v126; // [rsp+38h] [rbp-3E0h]
  char *v127; // [rsp+40h] [rbp-3D8h]
  int v128; // [rsp+40h] [rbp-3D8h]
  char v129; // [rsp+50h] [rbp-3C8h]
  _QWORD *v130; // [rsp+58h] [rbp-3C0h] BYREF
  unsigned __int64 v131; // [rsp+60h] [rbp-3B8h]
  __int64 v132; // [rsp+68h] [rbp-3B0h]
  __m128i *v133; // [rsp+70h] [rbp-3A8h]
  size_t v134; // [rsp+78h] [rbp-3A0h]
  void *v135[2]; // [rsp+80h] [rbp-398h]
  _BYTE *v136[2]; // [rsp+A0h] [rbp-378h] BYREF
  char v137; // [rsp+B0h] [rbp-368h]
  void *v138; // [rsp+C0h] [rbp-358h] BYREF
  void *v139; // [rsp+C8h] [rbp-350h]
  __m128i v140; // [rsp+D0h] [rbp-348h] BYREF
  char *v141; // [rsp+E0h] [rbp-338h]
  char *v142; // [rsp+100h] [rbp-318h]
  void *v143[2]; // [rsp+110h] [rbp-308h] BYREF
  __m128i v144; // [rsp+120h] [rbp-2F8h] BYREF
  char v145; // [rsp+130h] [rbp-2E8h]
  __m128i v146; // [rsp+140h] [rbp-2D8h] BYREF
  _QWORD v147[32]; // [rsp+150h] [rbp-2C8h] BYREF
  __m128i v148; // [rsp+250h] [rbp-1C8h] BYREF
  __int64 v149; // [rsp+260h] [rbp-1B8h] BYREF
  void *v150; // [rsp+268h] [rbp-1B0h]
  char v151; // [rsp+270h] [rbp-1A8h]
  _BYTE v152[416]; // [rsp+278h] [rbp-1A0h] BYREF

  v7 = a3[2];
  v132 = a5;
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) != 0 )
    v8 = (_QWORD *)*v8;
  v9 = sub_B70930(v8, a3[5]);
  if ( !v9 || (v9 & 4) != 0 )
  {
    *((_BYTE *)a1 + 272) = 0;
    return a1;
  }
  v117 = *(_QWORD *)(a4 + 2312);
  v116 = *(_QWORD *)(a4 + 2320);
  sub_B52330(a3);
  v11 = v10;
  v121 = v10;
  *(_OWORD *)v135 = 0;
  if ( !v10 )
  {
    memset(a1, 0, 0x118u);
    goto LABEL_33;
  }
  v12 = 4LL * v10;
  v13 = (_QWORD *)operator new(v12 * 8);
  v14 = v11;
  v135[0] = v13;
  v15 = v13;
  do
  {
    v16 = v13 + 2;
    v13[1] = 0;
    v13 += 4;
    *(v13 - 4) = v16;
    *((_BYTE *)v13 - 16) = 0;
    --v14;
  }
  while ( v14 );
  v135[1] = &v15[v12];
  v17 = 8 * ((unsigned __int64)(v11 + 63) >> 6);
  v127 = (char *)operator new(v17);
  v142 = &v127[v17];
  v141 = v127;
  memset(v127, 0, v17);
  if ( !v121 )
    goto LABEL_208;
  v18 = v15 + 2;
  v19 = 0;
  v126 = 0;
  do
  {
    v21 = *(_QWORD *)(a3[15] + 8 * v19);
    if ( !(unsigned int)sub_9CB330(a2, v21) )
      goto LABEL_18;
    if ( (unsigned int)sub_9CB330(a2, v21) != 1
      || (*(_OWORD *)v143 = 0, sub_991190(&v148, v21, v117, v116, (__int64)v143), (v126 = v151) == 0) )
    {
      *((_BYTE *)a1 + 272) = 0;
      goto LABEL_42;
    }
    sub_9CBF30(&v146, v148.m128i_i64[0], v148.m128i_i64[1], (__int64)v143[0], (__int64)v143[1]);
    v22 = (__int64 *)*(v18 - 2);
    if ( (_QWORD *)v146.m128i_i64[0] == v147 )
    {
      v23 = v146.m128i_i64[1];
      if ( v146.m128i_i64[1] )
      {
        if ( v146.m128i_i64[1] == 1 )
          *(_BYTE *)v22 = v147[0];
        else
          memcpy(v22, v147, v146.m128i_u64[1]);
        v23 = v146.m128i_i64[1];
        v22 = (__int64 *)*(v18 - 2);
      }
      *(v18 - 1) = v23;
      *((_BYTE *)v22 + v23) = 0;
      v22 = (__int64 *)v146.m128i_i64[0];
      goto LABEL_13;
    }
    if ( v22 == v18 )
    {
      v130 = (_QWORD *)v147[0];
      *(v18 - 2) = v146.m128i_i64[0];
      *(__m128 *)(v18 - 1) = _mm_loadh_ps((const double *)&v130);
LABEL_31:
      v146.m128i_i64[0] = (__int64)v147;
      v22 = v147;
      goto LABEL_13;
    }
    v130 = (_QWORD *)v147[0];
    v20 = *v18;
    *(v18 - 2) = v146.m128i_i64[0];
    *(__m128 *)(v18 - 1) = _mm_loadh_ps((const double *)&v130);
    if ( !v22 )
      goto LABEL_31;
    v146.m128i_i64[0] = (__int64)v22;
    v147[0] = v20;
LABEL_13:
    v146.m128i_i64[1] = 0;
    *(_BYTE *)v22 = 0;
    if ( (_QWORD *)v146.m128i_i64[0] != v147 )
      operator delete((void *)v146.m128i_i64[0]);
    *(_QWORD *)&v127[8 * (v19 >> 6)] |= 1LL << v19;
    if ( v151 && (__int64 *)v148.m128i_i64[0] != &v149 )
      operator delete((void *)v148.m128i_i64[0]);
LABEL_18:
    ++v19;
    v18 += 4;
  }
  while ( v121 > (unsigned int)v19 );
  if ( !v126 )
  {
LABEL_208:
    memset(a1, 0, 0x118u);
    goto LABEL_42;
  }
  v129 = 0;
  v28 = (unsigned __int64)a3;
  v146.m128i_i64[0] = (__int64)v147;
  v146.m128i_i64[1] = 0x400000000LL;
  v130 = a3;
  do
  {
    v29 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v28 + 16LL))(v28);
    v30 = sub_13B8320(HIDWORD(v29), 0, v117, v116);
    if ( !v30 )
    {
LABEL_46:
      memset(a1, 0, 0x118u);
      goto LABEL_47;
    }
    v32 = v30 | v131 & 0xFFFFFFFF00000000LL;
    v33 = (*(_BYTE *)(v28 + 82) & 0x40) == 0;
    v34 = *(_QWORD *)(v28 + 80);
    v128 = v32;
    v131 = v32;
    if ( (v33 || (v34 & 0x2000000) != 0)
      && (v34 & 0x2000000) == 0
      && ((*(_BYTE *)(v28 + 83) & 8) != 0 || (*(_BYTE *)(v28 + 128) & 1) == 0 && !*(_QWORD *)(v28 + 128))
      && (*(_BYTE *)(v28 + 83) & 0x40) == 0 )
    {
      v51 = HIDWORD(v34);
      if ( (v51 & 0x20) == 0
        && (v51 & 0x40) == 0
        && !(unsigned __int8)sub_B69240(v28, 0, *(_BYTE *)(v28 + 83) & 0x40, v31) )
      {
        if ( (*(_BYTE *)(v28 + 29) & 1) != 0 )
        {
          v98 = sub_B68690(v28);
          v99 = *(__int64 **)v98;
          v100 = *(_QWORD *)v98 + 8LL * *(unsigned int *)(v98 + 8);
          if ( *(_QWORD *)v98 >= v100 )
          {
            if ( v99 != (__int64 *)v100 )
            {
              if ( *(_WORD *)(*(_QWORD *)v100 + 36LL) == 388 )
                goto LABEL_96;
              v102 = (__int64 *)(v100 + 8);
              while ( v99 != v102 )
              {
                v103 = *v102++;
                if ( *(_WORD *)(v103 + 36) == 388 )
                  goto LABEL_96;
              }
            }
          }
          else
          {
            v101 = *(__int64 **)v98;
            while ( *(_WORD *)(*v101 + 36) != 388 )
            {
              if ( (__int64 *)v100 == ++v101 )
                goto LABEL_90;
            }
            if ( (__int64 *)v100 != v101 )
            {
LABEL_96:
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
              j__strlen(";");
              std::__ostream_insert<char,std::char_traits<char>>();
              v59 = j__strlen("\n");
              v143[0] = &v144;
              sub_9C77B0(v143, "\n", (__int64)&aSubcommands[v59 + 13]);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v143[0] != &v144 )
                operator delete(v143[0]);
              v60 = *(_QWORD **)(v28 + 120);
              sub_B52330(v28);
              v61 = (unsigned int)sub_B4F350(*v60);
              v62 = sub_B4F350(v28);
              sub_990F20((__int64)&v138, (v61 << 32) | v62, v117, v116);
              if ( !v140.m128i_i8[0] )
                goto LABEL_60;
              if ( v138 )
              {
                v143[0] = &v144;
                sub_9C77B0(v143, v138, (__int64)v139 + (_QWORD)v138);
              }
              else
              {
                v144.m128i_i8[0] = 0;
                v143[0] = &v144;
                v143[1] = nullptr;
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v143[0] != &v144 )
                operator delete(v143[0]);
              v63 = 0;
              v64 = sub_B52330(v28);
              v124 = v65 - 1;
              v122 = (unsigned int)(v65 - 1);
              if ( v65 )
              {
                while ( 1 )
                {
                  v70 = *(_QWORD *)(*(_QWORD *)(v28 + 120) + 8 * v63);
                  if ( (*(_BYTE *)(v70 + 29) & 2) != 0 )
                    goto LABEL_113;
                  if ( ((1LL << v63) & *(_QWORD *)&v141[8 * (v63 >> 6)]) == 0 )
                    break;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v66 = *(_QWORD *)(v70 + 40);
                  if ( (v66 & 7) == 0 )
                  {
                    v67 = v66 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v66 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      LOBYTE(v143[0]) = 32;
                      std::__ostream_insert<char,std::char_traits<char>>();
                      v68 = (_BYTE *)(*(_QWORD *)(v67 + 16) + 16LL);
                      if ( *(_QWORD *)(v67 + 16) == -16 )
                      {
                        v144.m128i_i8[0] = 0;
                        v143[0] = &v144;
                        v143[1] = nullptr;
                      }
                      else
                      {
                        v69 = **(_QWORD **)(v67 + 16);
                        v143[0] = &v144;
                        sub_9C77B0(v143, v68, (__int64)&v68[(unsigned int)v69]);
                      }
LABEL_109:
                      std::__ostream_insert<char,std::char_traits<char>>();
                      if ( v143[0] != &v144 )
                        operator delete(v143[0]);
                    }
                  }
                  if ( v124 != (_DWORD)v63 )
                  {
                    j__strlen(", ");
                    std::__ostream_insert<char,std::char_traits<char>>();
                  }
LABEL_113:
                  if ( v122 == v63 )
                    goto LABEL_164;
                  ++v63;
                }
                v71 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v70 + 16LL))(v70, v64);
                v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                v73 = sub_13B8320(HIDWORD(v72), 0, v117, v116);
                sub_990F20((__int64)&v138, (v73 << 32) | v71, v117, v116);
                if ( !v140.m128i_i8[0] )
                  goto LABEL_60;
                if ( v138 )
                {
                  v143[0] = &v144;
                  sub_9C77B0(v143, v138, (__int64)v139 + (_QWORD)v138);
                }
                else
                {
                  v144.m128i_i8[0] = 0;
                  v143[0] = &v144;
                  v143[1] = nullptr;
                }
                goto LABEL_109;
              }
LABEL_164:
              j__strlen(")");
              std::__ostream_insert<char,std::char_traits<char>>();
              std::stringbuf::str();
              v143[0] = &v144;
              v97 = v138;
              if ( v138 == &v140 )
                goto LABEL_196;
              goto LABEL_165;
            }
          }
        }
LABEL_90:
        v52 = *(void (__fastcall **)(void **, __int64, _QWORD, const char *, size_t))(*(_QWORD *)v132 + 72LL);
        v53 = j__strlen(" ");
        v54 = sub_B4F350(v28);
        if ( (char *)v52 == (char *)sub_9C8580 )
        {
          v143[0] = &v144;
          v55 = j__strlen(&byte_22CD811);
          sub_9C77B0(v143, &byte_22CD811, (__int64)(&byte_22CD811 + v55));
        }
        else
        {
          v52(v143, v132, v54, " ", v53);
        }
        v56 = v143[0];
        v57 = v143[1];
        v58 = sub_B4F350(v28);
        sub_9C8A00((__int64)&v148, v58, v56, (__int64)v57, 0);
        sub_9CBBD0((__int64)&v146, (__int64)&v148);
        if ( v150 != v152 )
          operator delete(v150);
        if ( v143[0] != &v144 )
          operator delete(v143[0]);
        goto LABEL_96;
      }
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
    v35 = j__strlen("\n");
    v143[0] = &v144;
    sub_9C77B0(v143, "\n", (__int64)&aSubcommands[v35 + 13]);
    v36 = v143[0];
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v143[0] != &v144 )
      operator delete(v143[0]);
    v37 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL);
    if ( v37 == sub_6CEBD0 )
      v38 = sub_B5BA10(v28, v143);
    else
      v38 = ((__int64 (__fastcall *)(unsigned __int64, void *))v37)(v28, v36);
    v39 = (unsigned int)sub_EC7AA0(v38);
    v40 = sub_B4F350(v28);
    sub_990F20((__int64)v136, (v39 << 32) | v40, v117, v116);
    v41 = v137;
    if ( !v137 )
      goto LABEL_60;
    v74 = *(void (__fastcall **)(void **, __int64, _QWORD, const char *, void *))(*(_QWORD *)v132 + 72LL);
    src = (void *)j__strlen(" ");
    v75 = sub_B4F350(v28);
    if ( (char *)v74 == (char *)sub_9C8580 )
    {
      v143[0] = &v144;
      v76 = j__strlen(&byte_22CD811);
      sub_9C77B0(v143, &byte_22CD811, (__int64)(&byte_22CD811 + v76));
    }
    else
    {
      v74(v143, v132, v75, " ", src);
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v136[0] )
    {
      v138 = &v140;
      sub_9C77B0(&v138, v136[0], (__int64)&v136[0][(unsigned __int64)v136[1]]);
    }
    else
    {
      v139 = nullptr;
      v138 = &v140;
      v140.m128i_i8[0] = 0;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    j__strlen("{");
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v138 != &v140 )
      operator delete(v138);
    if ( v143[0] != &v144 )
      operator delete(v143[0]);
    v77 = *(_QWORD *)(v28 + 56);
    if ( (v77 & 4) != 0 && (v78 = v77 & 0xFFFFFFFFFFFFFFF8LL, (v79 = *(_QWORD **)v78) != nullptr) )
    {
      v80 = *(void **)(v78 + 8);
      v143[0] = v79;
      v143[1] = v80;
      v81 = (_QWORD *)(v79[1] & 0xFFFFFFFFFFFFFFF8LL);
      if ( v81 )
      {
        v143[0] = (void *)(v79[1] & 0xFFFFFFFFFFFFFFF8LL);
        v82 = 0;
        while ( (v81[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v82 = v41;
          v81 = (_QWORD *)(v81[1] & 0xFFFFFFFFFFFFFFF8LL);
        }
        if ( v82 )
          v143[0] = v81;
      }
      v83 = sub_E6C7F0(v143);
      v84 = *(_DWORD *)(v28 + 24);
      v85 = v83;
    }
    else
    {
      v85 = *(_DWORD *)(v28 + 24);
      v84 = v85;
    }
    v86 = *(void **)(v28 + 40);
    v87 = *(_QWORD *)(v28 + 160);
    LODWORD(v143[1]) = v84;
    v143[0] = v86;
    v144.m128i_i64[0] = v87;
    v88 = sub_B61CD0(v143, "{");
    if ( !v88 )
      v88 = (unsigned int)v143[1];
    v89 = sub_13B8320(v88, 0, v117, v116);
    sub_990F20((__int64)&v138, (v89 << 32) | v85, v117, v116);
    if ( !v140.m128i_i8[0] )
    {
LABEL_60:
      v145 = 0;
      goto LABEL_61;
    }
    j__strlen("return ");
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v138 )
    {
      v143[0] = &v144;
      sub_9C77B0(v143, v138, (__int64)v139 + (_QWORD)v138);
    }
    else
    {
      v144.m128i_i8[0] = 0;
      v143[0] = &v144;
      v143[1] = nullptr;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::operator<<<std::char_traits<char>>();
    if ( v143[0] != &v144 )
      operator delete(v143[0]);
    v90 = 0;
    sub_B52330(v28);
    v123 = v91 - 1;
    srca = (unsigned int)(v91 - 1);
    if ( v91 )
    {
      while ( 1 )
      {
        v92 = *(_QWORD *)(*(_QWORD *)(v28 + 120) + 8 * v90);
        if ( (*(_BYTE *)(v92 + 29) & 2) == 0 )
        {
          v93 = *(_QWORD *)(v92 + 40);
          if ( (v93 & 7) != 0 )
            goto LABEL_60;
          v94 = v93 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v94 )
            goto LABEL_60;
          if ( ((1LL << v90) & *(_QWORD *)&v141[8 * (v90 >> 6)]) != 0 )
          {
            v133 = *(__m128i **)(*(_QWORD *)(v28 + 120) + 8 * v90);
            std::__ostream_insert<char,std::char_traits<char>>();
            j__strlen("(");
            std::__ostream_insert<char,std::char_traits<char>>();
            v104 = v133[2].m128i_i64[1];
            if ( (v104 & 7) != 0 )
              BUG();
            v105 = *(unsigned int **)((v104 & 0xFFFFFFFFFFFFFFF8LL) + 16);
            v106 = *v105;
            v107 = v105 + 4;
            if ( v107 )
            {
              v143[0] = &v144;
              sub_9C77B0(v143, v107, (__int64)&v107[v106]);
            }
            else
            {
              v144.m128i_i8[0] = 0;
              v143[0] = &v144;
              v143[1] = nullptr;
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            j__strlen(", ");
            std::__ostream_insert<char,std::char_traits<char>>();
            v134 = j__strlen("size");
            v133 = &v140;
            v138 = &v140;
            v108 = j__strlen("<# ");
            sub_9C77B0(&v138, "<# ", (__int64)&asc_22BE1AC[v108]);
            if ( v134 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v139 )
              std::__throw_length_error("basic_string::append");
            sub_9CA820(&v138, "size", v134);
            sub_9CAA80(&v138, " #>");
            std::__ostream_insert<char,std::char_traits<char>>();
            std::operator<<<std::char_traits<char>>();
            if ( v138 != v133 )
              operator delete(v138);
          }
          else
          {
            v95 = *(__int64 **)(v94 + 16);
            if ( v95 == (__int64 *)-16LL )
            {
              v144.m128i_i8[0] = 0;
              v143[0] = &v144;
              v143[1] = nullptr;
            }
            else
            {
              v96 = *v95;
              v143[0] = &v144;
              sub_9C77B0(v143, (_BYTE *)v95 + 16, (__int64)v95 + (unsigned int)v96 + 16);
            }
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          if ( v143[0] != &v144 )
            operator delete(v143[0]);
          if ( (_DWORD)v90 != v123 )
            std::operator<<<std::char_traits<char>>();
        }
        if ( v90 == srca )
          break;
        ++v90;
      }
    }
    j__strlen(");}");
    std::__ostream_insert<char,std::char_traits<char>>();
    v109 = j__strlen("\n");
    v143[0] = &v144;
    sub_9C77B0(v143, "\n", (__int64)&aSubcommands[v109 + 13]);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v143[0] != &v144 )
      operator delete(v143[0]);
    std::stringbuf::str();
    v143[0] = &v144;
    v97 = v138;
    if ( v138 == &v140 )
    {
LABEL_196:
      v144 = _mm_load_si128(&v140);
      goto LABEL_166;
    }
LABEL_165:
    v143[0] = v97;
    v144.m128i_i64[0] = v140.m128i_i64[0];
LABEL_166:
    v145 = 1;
    v143[1] = v139;
LABEL_61:
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
    if ( !v145 )
      goto LABEL_46;
    sub_9C8A00((__int64)&v148, v128, (_BYTE *)v143[0], (__int64)v143[1], 0);
    sub_9CBBD0((__int64)&v146, (__int64)&v148);
    if ( v150 != v152 )
      operator delete(v150);
    if ( v145 && v143[0] != &v144 )
      operator delete(v143[0]);
    v44 = *(_QWORD *)(v28 + 104);
    if ( (v44 & 1) != 0 )
    {
      if ( v129 )
        break;
      v46 = v44 & 0xFFFFFFFFFFFFFFFELL;
LABEL_75:
      v47 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      v129 = 1;
      v45 = v47;
      if ( v46 && (v46 & 4) != 0 && v47 )
      {
        v48 = *(_QWORD **)v47;
        v49 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
        if ( *(_DWORD *)(v47 + 8) != v49 )
        {
          *(_DWORD *)(v47 + 8) = v49;
          srcb = (void *)v47;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, unsigned __int64))(*v48 + 152LL))(
            v48,
            v28,
            *v48,
            v47);
          v47 = (unsigned __int64)srcb;
        }
        v45 = *(_QWORD *)(v47 + 16);
        v129 = 1;
      }
      goto LABEL_70;
    }
    if ( (v44 & 2) != 0 )
    {
      if ( v129 )
        break;
      v110 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v110 )
      {
        v129 = 1;
LABEL_198:
        v45 = 0;
        goto LABEL_70;
      }
      v111 = v110[2295];
      if ( v111 )
      {
        v112 = v110[294];
        v110[304] += 24LL;
        v113 = (v112 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v110[295] >= v113 + 24 && v112 )
        {
          v110[294] = v113 + 24;
          v114 = (v112 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v114 = sub_962430((__int64)(v110 + 294), 24, 24, 3, v42, v43);
          v113 = v114 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v114 = v111;
        v115 = v113 | 4;
        *(_DWORD *)(v114 + 8) = 0;
        *(_QWORD *)(v114 + 16) = v28;
      }
      else
      {
        v115 = v28 & 0xFFFFFFFFFFFFFFFBLL;
      }
      v46 = v115 & 0xFFFFFFFFFFFFFFFELL;
      v44 = v46 | 1;
      *(_QWORD *)(v28 + 104) = v46 | 1;
      goto LABEL_75;
    }
    v45 = v44 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v44 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_198;
LABEL_70:
    if ( v130 == (_QWORD *)v45 )
      break;
    v28 = v45;
  }
  while ( v45 );
  v50 = v146.m128i_i32[2];
  *a1 = a1 + 2;
  a1[1] = 0x400000000LL;
  if ( v50 )
    sub_9CCB40((__int64)a1, (__int64)&v146);
  *((_BYTE *)a1 + 272) = 1;
LABEL_47:
  sub_9C9400((__int64)&v146);
  v127 = v141;
  if ( v141 )
LABEL_42:
    operator delete(v127);
LABEL_33:
  v25 = v135[0];
  v26 = (void **)v135[1];
  v27 = (void **)v135[0];
  if ( v135[1] == v135[0] )
  {
LABEL_36:
    if ( !v25 )
      return a1;
LABEL_37:
    operator delete(v25);
    return a1;
  }
  do
  {
    while ( *v27 != v27 + 2 )
    {
      operator delete(*v27);
      v27 += 4;
      if ( v26 == v27 )
        goto LABEL_36;
    }
    v27 += 4;
  }
  while ( v26 != v27 );
  if ( v25 )
    goto LABEL_37;
  return a1;
}

