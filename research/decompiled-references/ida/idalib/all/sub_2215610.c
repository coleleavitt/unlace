_QWORD *__fastcall sub_2215610(_QWORD *a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rcx
  void **v9; // r12
  void **i; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  void **v13; // rdx
  _BYTE *v14; // r14
  char *v15; // r12
  __int64 v16; // rsi
  void (__fastcall *v17)(__m128i *, __int64, __m128i *); // rax
  unsigned __int32 v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rdi
  void *v29; // rdi
  void **v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE *v35; // rsi
  size_t v36; // rdx
  const void *v37; // rcx
  _QWORD *v38; // rax
  __m128i v39; // xmm3
  __int64 v40; // rax
  char *v41; // rbp
  char *v42; // rbx
  __int64 v43; // rsi
  void (__fastcall *v44)(__m128i *, __int64, __m128i *); // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // rbp
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // r15
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  size_t v61; // rax
  char *v62; // rax
  char *v63; // rcx
  __int64 v64; // rdx
  size_t v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __m128i *v68; // rax
  __m128i *v69; // rdx
  __m128i *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rdx
  int v74; // eax
  char *v75; // rdx
  __int64 v76; // rdx
  void **v77; // r12
  const __m128i *v78; // rdx
  unsigned __int64 v79; // rdi
  __m128i *v80; // rcx
  __int64 v81; // rsi
  const __m128i *v82; // rsi
  void **v83; // rdx
  void **v84; // rbx
  __m128i *v85; // r13
  __int32 v86; // r12d
  _BYTE *v87; // rdi
  __int64 v89; // [rsp+8h] [rbp-420h]
  __int64 v90; // [rsp+10h] [rbp-418h]
  __int64 v91; // [rsp+10h] [rbp-418h]
  void *src; // [rsp+20h] [rbp-408h]
  void *srca; // [rsp+20h] [rbp-408h]
  char v95; // [rsp+40h] [rbp-3E8h]
  __int64 v96; // [rsp+40h] [rbp-3E8h]
  __m128i *v97; // [rsp+40h] [rbp-3E8h]
  bool v98; // [rsp+4Fh] [rbp-3D9h]
  unsigned int n; // [rsp+50h] [rbp-3D8h]
  size_t nb; // [rsp+50h] [rbp-3D8h]
  size_t na; // [rsp+50h] [rbp-3D8h]
  __int64 v102; // [rsp+60h] [rbp-3C8h]
  __int64 v103; // [rsp+68h] [rbp-3C0h]
  void *v104[2]; // [rsp+70h] [rbp-3B8h] BYREF
  __int64 v105; // [rsp+80h] [rbp-3A8h] BYREF
  void *v106[2]; // [rsp+90h] [rbp-398h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-388h] BYREF
  __m128i v108[2]; // [rsp+B0h] [rbp-378h] BYREF
  __int16 v109; // [rsp+D0h] [rbp-358h]
  __m128i v110[2]; // [rsp+E0h] [rbp-348h] BYREF
  __int16 v111; // [rsp+100h] [rbp-328h]
  __m128i v112[2]; // [rsp+110h] [rbp-318h] BYREF
  __int16 v113; // [rsp+130h] [rbp-2F8h]
  __m128i v114[2]; // [rsp+140h] [rbp-2E8h] BYREF
  __int16 v115; // [rsp+160h] [rbp-2C8h]
  __m128i v116; // [rsp+170h] [rbp-2B8h] BYREF
  _BYTE v117[16]; // [rsp+180h] [rbp-2A8h] BYREF
  __int16 v118; // [rsp+190h] [rbp-298h]
  __m128i v119; // [rsp+1A0h] [rbp-288h] BYREF
  _BYTE v120[16]; // [rsp+1B0h] [rbp-278h] BYREF
  __m128i v121; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v122; // [rsp+1D0h] [rbp-258h]
  __int64 v123; // [rsp+1D8h] [rbp-250h]
  __int64 v124; // [rsp+1E0h] [rbp-248h]
  __int64 v125; // [rsp+1E8h] [rbp-240h]
  char v126; // [rsp+1F0h] [rbp-238h]
  char v127; // [rsp+1F8h] [rbp-230h]
  __m128i v128; // [rsp+200h] [rbp-228h] BYREF
  _QWORD v129[2]; // [rsp+210h] [rbp-218h] BYREF
  __m128i v130; // [rsp+220h] [rbp-208h]
  __int64 v131; // [rsp+230h] [rbp-1F8h]
  __int64 v132; // [rsp+238h] [rbp-1F0h]
  __int64 v133; // [rsp+240h] [rbp-1E8h]
  __int64 v134; // [rsp+248h] [rbp-1E0h]
  char v135; // [rsp+250h] [rbp-1D8h]
  __int64 v136; // [rsp+258h] [rbp-1D0h]
  __m128i v137; // [rsp+260h] [rbp-1C8h] BYREF
  _BYTE v138[16]; // [rsp+270h] [rbp-1B8h] BYREF
  __int64 v139; // [rsp+280h] [rbp-1A8h]
  char v140; // [rsp+2B8h] [rbp-170h]
  void *v141; // [rsp+2C0h] [rbp-168h] BYREF
  __int64 v142; // [rsp+2C8h] [rbp-160h]
  _QWORD v143[2]; // [rsp+2D0h] [rbp-158h] BYREF
  __m128i v144; // [rsp+2E0h] [rbp-148h] BYREF
  __int64 v145; // [rsp+2F0h] [rbp-138h]
  void *ptr; // [rsp+350h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+358h] [rbp-D0h] BYREF
  __int64 v148; // [rsp+368h] [rbp-C0h] BYREF
  __int64 v149; // [rsp+370h] [rbp-B8h]

  v141 = v143;
  v142 = 0x300000000LL;
  ptr = &si128.m128i_u64[1];
  v4 = j__strlen(&byte_22F0C30);
  sub_2210320(&ptr, &byte_22F0C30, (__int64)(&byte_22F0C30 + v4));
  v149 = *(unsigned int *)(a3 + 8);
  v143[0] = &v144;
  if ( ptr == &si128.m128i_u64[1] )
  {
    v144 = _mm_loadu_si128((const __m128i *)&si128.m128i_u64[1]);
  }
  else
  {
    v143[0] = ptr;
    v144.m128i_i64[0] = si128.m128i_i64[1];
  }
  v143[1] = si128.m128i_i64[0];
  ptr = &si128.m128i_u64[1];
  si128.m128i_i64[0] = 0;
  si128.m128i_i8[8] = 0;
  v145 = v149;
  LODWORD(v142) = v142 + 1;
  v5 = v142;
  v6 = 0;
  v7 = 0;
  v8 = (unsigned int)v142;
  v9 = (void **)v141;
  for ( i = (void **)v141; ; i = (void **)v141 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = 5 * v8;
        v12 = 5 * v8;
        if ( v6 == *(_DWORD *)(a3 + 8) )
        {
          *a1 = 0;
          goto LABEL_32;
        }
        while ( (void *)v7 == v9[v11 - 1] )
        {
          while ( 1 )
          {
            LODWORD(v142) = --v5;
            v8 = v5;
            v11 = 5LL * v5;
            v13 = &v9[v11];
            if ( *v13 == v13 + 2 )
              break;
            operator delete(*v13);
            v8 = (unsigned int)v142;
            v9 = (void **)v141;
            v5 = v142;
            i = (void **)v141;
            if ( v7 != *((_QWORD *)v141 + 5 * (unsigned int)v142 - 1) )
              goto LABEL_8;
          }
          i = v9;
        }
LABEL_8:
        v90 = 8 * v7;
        v14 = *(_BYTE **)(*(_QWORD *)a3 + 8 * v7);
        if ( v14 )
        {
          if ( *v14 == 64 )
            break;
        }
        v7 = ++v6;
      }
      v15 = v14 + 1;
      LOWORD(v139) = 257;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = &v148;
      if ( v14[1] )
      {
        v137.m128i_i64[0] = (__int64)(v14 + 1);
        LOBYTE(v139) = 3;
      }
      if ( (unsigned __int8)sub_228B190(&v137, 0) )
      {
        v32 = *(_QWORD *)(a2 + 32);
        if ( v32 )
        {
          v35 = *(_BYTE **)(a2 + 24);
          si128.m128i_i64[0] = 0;
          sub_A1FE50(&ptr, v35, &v35[v32]);
        }
        else
        {
          (*(void (__fastcall **)(__m128i *))(**(_QWORD **)(a2 + 16) + 80LL))(&v116);
          if ( (v118 & 1) != 0 )
          {
            v130.m128i_i16[0] = 257;
            if ( v14[1] )
            {
              v128.m128i_i64[0] = (__int64)(v14 + 1);
              v130.m128i_i8[0] = 3;
            }
            v119.m128i_i64[0] = (__int64)"cannot get absolute path for: ";
            v121.m128i_i16[0] = 259;
            sub_A41580(&v137, &v119, &v128, v33, v34, 259);
            if ( (v118 & 1) != 0 )
            {
              v50 = v116.m128i_i32[0];
              v51 = v116.m128i_i64[1];
            }
            else
            {
              v51 = std::_V2::system_category((std::_V2 *)&v137);
              v50 = 0;
            }
            sub_111DF60((__int64)a1, v50, v51, (__int64)&v137);
            if ( (v118 & 1) != 0 )
              goto LABEL_29;
            v29 = (void *)v116.m128i_i64[0];
            if ( (_BYTE *)v116.m128i_i64[0] == v117 )
              goto LABEL_29;
LABEL_28:
            operator delete(v29);
            goto LABEL_29;
          }
          si128.m128i_i64[0] = 0;
          sub_A1FE50(&ptr, v116.m128i_i64[0], (_BYTE *)(v116.m128i_i64[0] + v116.m128i_i64[1]));
          if ( (v118 & 1) == 0 && (_BYTE *)v116.m128i_i64[0] != v117 )
            operator delete((void *)v116.m128i_i64[0]);
        }
        LOWORD(v139) = 257;
        v130.m128i_i16[0] = 257;
        v121.m128i_i16[0] = 257;
        v118 = 257;
        if ( v14[1] )
        {
          v116.m128i_i64[0] = (__int64)(v14 + 1);
          LOBYTE(v118) = 3;
        }
        sub_228A3B0(&ptr, &v116, &v119, &v128, &v137);
        sub_FC8050(&ptr, 0);
        v15 = (char *)ptr;
        --si128.m128i_i64[0];
      }
      v16 = *(_QWORD *)(a2 + 16);
      v17 = *(void (__fastcall **)(__m128i *, __int64, __m128i *))(*(_QWORD *)v16 + 40LL);
      LOWORD(v139) = 257;
      if ( *v15 )
      {
        v137.m128i_i64[0] = (__int64)v15;
        LOBYTE(v139) = 3;
      }
      v17(&v119, v16, &v137);
      if ( (v127 & 1) != 0 )
        goto LABEL_16;
      v95 = sub_225AEE0(&v119);
      if ( !v95 )
        break;
      v36 = v119.m128i_u64[1];
      v37 = (const void *)v119.m128i_i64[0];
      v128.m128i_i64[0] = (__int64)v129;
      v98 = v119.m128i_i64[0] == 0 && v119.m128i_i64[1] + v119.m128i_i64[0] != 0;
      if ( v98 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v137.m128i_i64[0] = v119.m128i_i64[1];
      if ( v119.m128i_i64[1] > 0xFuLL )
      {
        nb = v119.m128i_u64[1];
        src = (void *)v119.m128i_i64[0];
        v55 = (_QWORD *)sub_22101C0(v137.m128i_i64, 0);
        v37 = src;
        v36 = nb;
        v56 = v137.m128i_i64[0];
        v128.m128i_i64[0] = (__int64)v55;
        v129[0] = v137.m128i_i64[0];
      }
      else
      {
        if ( v119.m128i_i64[1] == 1 )
        {
          LOBYTE(v129[0]) = *(_BYTE *)v119.m128i_i64[0];
          v38 = v129;
          goto LABEL_71;
        }
        if ( !v119.m128i_i64[1] )
        {
          v38 = v129;
          goto LABEL_71;
        }
        v56 = v119.m128i_i64[1];
        v55 = v129;
      }
      srca = (void *)v56;
      memcpy(v55, v37, v36);
      v38 = (_QWORD *)v128.m128i_i64[0];
      v36 = (size_t)srca;
LABEL_71:
      v128.m128i_i64[1] = v36;
      *((_BYTE *)v38 + v36) = 0;
      v39 = _mm_load_si128(&v121);
      v131 = v122;
      v130 = v39;
      v132 = v123;
      v133 = v124;
      v134 = v125;
      v135 = v126;
      v136 = a2;
      if ( (char *)v141 + 40 * (unsigned int)v142 != (char *)v141 + 40 )
      {
        v102 = a3;
        v40 = a2;
        n = v6;
        v41 = (char *)v141 + 40 * (unsigned int)v142;
        v103 = v7;
        v42 = (char *)v141 + 40;
        while ( 1 )
        {
          v43 = *(_QWORD *)(v40 + 16);
          v44 = *(void (__fastcall **)(__m128i *, __int64, __m128i *))(*(_QWORD *)v43 + 40LL);
          v116.m128i_i64[0] = (__int64)v42;
          v118 = 260;
          v44(&v137, v43, &v116);
          if ( (v140 & 1) != 0 )
          {
            v47 = (__int64)v42;
            v48 = v137.m128i_i32[0];
            v49 = v137.m128i_i64[1];
            v118 = 260;
            v115 = 259;
            v116.m128i_i64[0] = v47;
            v114[0].m128i_i64[0] = (__int64)"cannot open file: ";
            sub_A41580(&v137, v114, &v116, v47, v45, v46);
            sub_111DF60((__int64)a1, v48, v49, (__int64)&v137);
            goto LABEL_75;
          }
          v54 = sub_225AEB0(&v128, &v137);
          if ( (v140 & 1) == 0 && (_BYTE *)v137.m128i_i64[0] != v138 )
            operator delete((void *)v137.m128i_i64[0]);
          if ( v54 )
          {
            v112[0].m128i_i64[0] = (__int64)v42;
            v116.m128i_i64[0] = (__int64)"'";
            v118 = 259;
            v113 = 260;
            v111 = 259;
            v110[0].m128i_i64[0] = (__int64)"recursive expansion of: '";
            sub_A41580(v114, v110, v112, 259, v52, v53);
            sub_A41580(&v137, v114, &v116, v57, v58, v59);
            v60 = std::_V2::system_category((std::_V2 *)&v137);
            sub_111DF60((__int64)a1, 0, v60, (__int64)&v137);
            goto LABEL_75;
          }
          v42 += 40;
          if ( v41 == v42 )
            break;
          v40 = v136;
        }
        v6 = n;
        a3 = v102;
        v7 = v103;
      }
      v116.m128i_i64[1] = 0;
      v116.m128i_i64[0] = (__int64)v117;
      v61 = j__strlen(v15);
      sub_2214C50(&v137, a2, v15, v61, (__int64)&v116);
      if ( v137.m128i_i64[0] )
      {
        v87 = (_BYTE *)v116.m128i_i64[0];
        *a1 = v137.m128i_i64[0];
        if ( v87 != v117 )
          free(v87);
LABEL_75:
        v28 = (void *)v128.m128i_i64[0];
        if ( (_QWORD *)v128.m128i_i64[0] == v129 )
          goto LABEL_26;
LABEL_25:
        operator delete(v28);
        goto LABEL_26;
      }
      v62 = (char *)v141;
      v63 = (char *)v141 + 40 * (unsigned int)v142;
      if ( v141 != v63 )
      {
        v64 = v116.m128i_u32[2] - 1LL;
        do
        {
          *((_QWORD *)v62 + 4) += v64;
          v62 += 40;
        }
        while ( v62 != v63 );
      }
      v137.m128i_i64[0] = (__int64)v138;
      v65 = j__strlen(v15);
      sub_2210320(&v137, v15, (__int64)&v15[v65]);
      v66 = (unsigned int)v142;
      v67 = (unsigned int)v142 + 1LL;
      v139 = v7 + v116.m128i_u32[2];
      if ( v67 > HIDWORD(v142) )
      {
        na = -1;
        if ( v141 <= &v137 && &v137 < (__m128i *)((char *)v141 + 40 * (unsigned int)v142) )
        {
          na = 0xCCCCCCCCCCCCCCCDLL * (((char *)&v137 - (_BYTE *)v141) >> 3);
          v98 = v95;
        }
        v68 = (__m128i *)sub_2237400(&v141, v143, v67, 40, v114);
        v76 = (unsigned int)v142;
        v77 = (void **)v141;
        if ( v141 != (char *)v141 + 40 * (unsigned int)v142 )
        {
          v78 = (const __m128i *)((char *)v141 + 16);
          v79 = (unsigned __int64)&v68[2].m128i_u64[((40 * (unsigned __int64)(unsigned int)v142 - 40) >> 3) + 1];
          v80 = v68;
          do
          {
            v80->m128i_i64[0] = (__int64)v80[1].m128i_i64;
            v82 = (const __m128i *)v78[-1].m128i_i64[0];
            if ( v82 == v78 )
            {
              v80[1] = _mm_loadu_si128(v78);
            }
            else
            {
              v80->m128i_i64[0] = (__int64)v82;
              v80[1].m128i_i64[0] = v78->m128i_i64[0];
            }
            v80 = (__m128i *)((char *)v80 + 40);
            v80[-2].m128i_i64[0] = v78[-1].m128i_i64[1];
            v81 = v78[1].m128i_i64[0];
            v78[-1].m128i_i64[0] = (__int64)v78;
            v78 = (const __m128i *)((char *)v78 + 40);
            v78[-3].m128i_i64[0] = 0;
            v78[-3].m128i_i8[8] = 0;
            v80[-1].m128i_i64[1] = v81;
          }
          while ( v80 != (__m128i *)v79 );
          v76 = (unsigned int)v142;
          v77 = (void **)v141;
        }
        v83 = &v77[5 * v76];
        if ( v77 != v83 )
        {
          v96 = v7;
          v84 = v83;
          v85 = v68;
          do
          {
            while ( 1 )
            {
              v84 -= 5;
              if ( *v84 == v84 + 2 )
                break;
              operator delete(*v84);
              if ( v77 == v84 )
                goto LABEL_134;
            }
          }
          while ( v77 != v84 );
LABEL_134:
          v68 = v85;
          v7 = v96;
        }
        v86 = v114[0].m128i_i32[0];
        if ( v141 != v143 )
        {
          v97 = v68;
          free(v141);
          v68 = v97;
        }
        v141 = v68;
        v69 = &v137;
        HIDWORD(v142) = v86;
        v66 = (unsigned int)v142;
        if ( v98 )
          v69 = (__m128i *)((char *)v68 + 40 * na);
      }
      else
      {
        v68 = (__m128i *)v141;
        v69 = &v137;
      }
      v70 = (__m128i *)((char *)v68 + 40 * v66);
      v70->m128i_i64[0] = (__int64)v70[1].m128i_i64;
      if ( (__m128i *)v69->m128i_i64[0] == &v69[1] )
      {
        v70[1] = _mm_loadu_si128(v69 + 1);
      }
      else
      {
        v70->m128i_i64[0] = v69->m128i_i64[0];
        v70[1].m128i_i64[0] = v69[1].m128i_i64[0];
      }
      v70->m128i_i64[1] = v69->m128i_i64[1];
      v69->m128i_i64[0] = (__int64)v69[1].m128i_i64;
      v69->m128i_i64[1] = 0;
      v69[1].m128i_i8[0] = 0;
      v71 = v69[2].m128i_i64[0];
      LODWORD(v142) = v142 + 1;
      v70[2].m128i_i64[0] = v71;
      if ( (_BYTE *)v137.m128i_i64[0] != v138 )
        operator delete((void *)v137.m128i_i64[0]);
      v72 = *(_QWORD *)a3 + v90;
      v73 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
      v74 = *(_DWORD *)(a3 + 8);
      if ( v73 != v72 + 8 )
      {
        memmove((void *)v72, (const void *)(v72 + 8), v73 - (v72 + 8));
        v74 = *(_DWORD *)(a3 + 8);
        v72 = v90 + *(_QWORD *)a3;
      }
      v75 = (char *)v116.m128i_i64[0];
      *(_DWORD *)(a3 + 8) = v74 - 1;
      sub_2214320((__int64 *)a3, (char *)v72, v75, &v75[8 * v116.m128i_u32[2]]);
      if ( (_BYTE *)v116.m128i_i64[0] != v117 )
        free((void *)v116.m128i_i64[0]);
      if ( (_QWORD *)v128.m128i_i64[0] != v129 )
        operator delete((void *)v128.m128i_i64[0]);
      if ( (v127 & 1) == 0 && (_BYTE *)v119.m128i_i64[0] != v120 )
        operator delete((void *)v119.m128i_i64[0]);
      if ( ptr != &v148 )
        free(ptr);
      v8 = (unsigned int)v142;
      v9 = (void **)v141;
      v5 = v142;
      i = (void **)v141;
    }
    if ( (v127 & 1) == 0 )
    {
      if ( *(_BYTE *)(a2 + 58) )
        goto LABEL_60;
      ++v6;
      if ( (_BYTE *)v119.m128i_i64[0] != v120 )
        operator delete((void *)v119.m128i_i64[0]);
      goto LABEL_56;
    }
LABEL_16:
    v18 = v119.m128i_i32[0];
    v19 = v119.m128i_i64[1];
    if ( *(_BYTE *)(a2 + 58) )
      break;
    v91 = v119.m128i_i64[1];
    if ( v119.m128i_i32[0] )
    {
      v20 = std::_V2::generic_category((std::_V2 *)&v119);
      v19 = v91;
      if ( v20 != v91 || v18 != 2 )
        goto LABEL_20;
    }
    ++v6;
LABEL_56:
    if ( ptr != &v148 )
      free(ptr);
    v8 = (unsigned int)v142;
    v9 = (void **)v141;
    v7 = v6;
    v5 = v142;
  }
  if ( !v119.m128i_i32[0] )
  {
LABEL_60:
    v18 = 2;
    v19 = std::_V2::generic_category((std::_V2 *)&v119);
  }
LABEL_20:
  v89 = v19;
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v104, v19, v18);
  v128.m128i_i64[0] = (__int64)v104;
  v130.m128i_i16[0] = 260;
  v114[0].m128i_i64[0] = (__int64)"': ";
  v115 = 259;
  v111 = 257;
  if ( *v15 )
  {
    v110[0].m128i_i64[0] = (__int64)v15;
    LOBYTE(v111) = 3;
  }
  v108[0].m128i_i64[0] = (__int64)"cannot not open file '";
  v109 = 259;
  sub_A41580(v112, v108, v110, v89, v21, 259);
  sub_A41580(&v116, v112, v114, v22, v23, v24);
  sub_A41580(&v137, &v116, &v128, v25, v26, v27);
  sub_2253560(v106, &v137);
  sub_22205D0(a1, v106, v18, v89);
  if ( v106[0] != &v107 )
    operator delete(v106[0]);
  v28 = v104[0];
  if ( v104[0] != &v105 )
    goto LABEL_25;
LABEL_26:
  if ( (v127 & 1) == 0 )
  {
    v29 = (void *)v119.m128i_i64[0];
    if ( (_BYTE *)v119.m128i_i64[0] != v120 )
      goto LABEL_28;
  }
LABEL_29:
  if ( ptr != &v148 )
    free(ptr);
  i = (void **)v141;
  v12 = 5LL * (unsigned int)v142;
LABEL_32:
  v30 = &i[v12];
  if ( &i[v12] != i )
  {
    do
    {
      while ( 1 )
      {
        v30 -= 5;
        if ( *v30 == v30 + 2 )
          break;
        operator delete(*v30);
        if ( v30 == i )
          goto LABEL_35;
      }
    }
    while ( v30 != i );
LABEL_35:
    i = (void **)v141;
  }
  if ( i != v143 )
    free(i);
  return a1;
}
