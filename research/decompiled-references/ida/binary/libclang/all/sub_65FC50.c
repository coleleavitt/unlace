void __fastcall sub_65FC50(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r13
  const char *v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // esi
  int v18; // eax
  __int64 v19; // rax
  _BYTE *v20; // rbp
  _BYTE *v21; // rsi
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // r12
  size_t v29; // r14
  __int64 *v30; // rdi
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rdi
  char *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  const void *v40; // r14
  size_t v41; // r15
  __int8 *v42; // rdi
  __int8 *v43; // rax
  __int64 *v44; // r12
  unsigned __int64 v45; // r13
  void *v46; // rax
  void *v47; // rdx
  void *v48; // rbx
  void *v49; // r14
  __m128i v50; // xmm0
  unsigned int *v51; // rax
  __int64 v52; // rax
  char v53; // al
  char *v54; // rax
  __int64 *v55; // r12
  int v56; // ebx
  unsigned __int64 v57; // rax
  __int64 v58; // r15
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int64 v61; // rdx
  __int64 v62; // r12
  __int64 v63; // r13
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  void **v66; // rdi
  __m128i v67; // xmm0
  __m128i v68; // xmm5
  __m128i v69; // xmm0
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  void *v74; // rax
  __m128i v75; // xmm6
  __int16 v76; // ax
  __m128 v77; // xmm4
  __m128i v78; // xmm0
  unsigned __int64 v79; // xmm3_8
  __int64 v80; // r13
  __m128i v81; // xmm0
  unsigned __int64 v82; // r14
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // rax
  void **v89; // rsi
  bool v90; // al
  _QWORD *v91; // rdx
  __int64 v92; // rax
  void (__fastcall ***v93)(_QWORD); // rdi
  __int64 v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  int v97; // eax
  char *v98; // rdi
  unsigned int v99; // eax
  unsigned int v100; // eax
  unsigned int v101; // edx
  __int64 v102; // rsi
  __int64 v103; // rax
  unsigned __int64 v104; // rdi
  char *v105; // rdx
  char *v106; // r8
  unsigned int v107; // eax
  unsigned int v108; // edx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // [rsp+8h] [rbp-720h]
  _BYTE *v112; // [rsp+10h] [rbp-718h]
  char v113; // [rsp+18h] [rbp-710h]
  int v114; // [rsp+20h] [rbp-708h]
  int v115; // [rsp+28h] [rbp-700h]
  __int64 v116; // [rsp+48h] [rbp-6E0h]
  __m128i v117; // [rsp+60h] [rbp-6C8h] BYREF
  _BYTE *v118; // [rsp+70h] [rbp-6B8h]
  unsigned __int64 v119; // [rsp+78h] [rbp-6B0h]
  double v120; // [rsp+80h] [rbp-6A8h]
  _QWORD *v121; // [rsp+88h] [rbp-6A0h]
  double v122; // [rsp+90h] [rbp-698h]
  _QWORD *v123; // [rsp+98h] [rbp-690h]
  _BYTE *v124; // [rsp+A0h] [rbp-688h]
  bool v125; // [rsp+AEh] [rbp-67Ah]
  char v126; // [rsp+AFh] [rbp-679h]
  __m128 v127; // [rsp+B0h] [rbp-678h] BYREF
  __int64 *v128; // [rsp+C0h] [rbp-668h]
  __int64 v129; // [rsp+C8h] [rbp-660h]
  _BYTE *v130; // [rsp+D0h] [rbp-658h]
  _BYTE *v131; // [rsp+D8h] [rbp-650h]
  _BYTE *v132; // [rsp+E0h] [rbp-648h]
  void **v133; // [rsp+E8h] [rbp-640h]
  double v134[4]; // [rsp+F0h] [rbp-638h] BYREF
  __m128i v135; // [rsp+110h] [rbp-618h] BYREF
  __int64 v136; // [rsp+120h] [rbp-608h]
  __int64 v137[4]; // [rsp+130h] [rbp-5F8h] BYREF
  __int64 v138[4]; // [rsp+150h] [rbp-5D8h] BYREF
  __int64 v139; // [rsp+170h] [rbp-5B8h] BYREF
  char v140; // [rsp+180h] [rbp-5A8h]
  __int64 v141[4]; // [rsp+190h] [rbp-598h] BYREF
  __int64 v142[4]; // [rsp+1B0h] [rbp-578h] BYREF
  __int64 v143[4]; // [rsp+1D0h] [rbp-558h] BYREF
  __int64 v144[4]; // [rsp+1F0h] [rbp-538h] BYREF
  __int64 v145[4]; // [rsp+210h] [rbp-518h] BYREF
  __int64 v146[4]; // [rsp+230h] [rbp-4F8h] BYREF
  void *v147; // [rsp+250h] [rbp-4D8h]
  __int64 v148; // [rsp+258h] [rbp-4D0h]
  char v149[16]; // [rsp+260h] [rbp-4C8h] BYREF
  _QWORD v150[6]; // [rsp+270h] [rbp-4B8h] BYREF
  void *ptr; // [rsp+2B0h] [rbp-478h] BYREF
  __m128 v152; // [rsp+2B8h] [rbp-470h] BYREF
  char v153; // [rsp+2C8h] [rbp-460h] BYREF
  __m128i v154; // [rsp+2E8h] [rbp-440h] BYREF
  __m128i v155; // [rsp+2F8h] [rbp-430h] BYREF
  __m128i v156; // [rsp+308h] [rbp-420h] BYREF
  __int16 v157; // [rsp+318h] [rbp-410h]
  char v158; // [rsp+31Ah] [rbp-40Eh]
  void *v159; // [rsp+320h] [rbp-408h] BYREF
  __m128i v160; // [rsp+328h] [rbp-400h] BYREF
  _BYTE v161[32]; // [rsp+338h] [rbp-3F0h] BYREF
  __m128i v162; // [rsp+358h] [rbp-3D0h] BYREF
  __m128i v163; // [rsp+368h] [rbp-3C0h] BYREF
  __m128i v164; // [rsp+378h] [rbp-3B0h] BYREF
  __int16 v165; // [rsp+388h] [rbp-3A0h]
  char v166; // [rsp+38Ah] [rbp-39Eh]
  void *v167; // [rsp+390h] [rbp-398h] BYREF
  __m128i v168; // [rsp+398h] [rbp-390h] BYREF
  _BYTE v169[32]; // [rsp+3A8h] [rbp-380h] BYREF
  __m128i v170; // [rsp+3C8h] [rbp-360h] BYREF
  __m128i v171; // [rsp+3D8h] [rbp-350h] BYREF
  __m128i v172; // [rsp+3E8h] [rbp-340h] BYREF
  __int16 v173; // [rsp+3F8h] [rbp-330h]
  char v174; // [rsp+3FAh] [rbp-32Eh]
  void *v175; // [rsp+400h] [rbp-328h] BYREF
  __m128i v176; // [rsp+408h] [rbp-320h] BYREF
  _BYTE v177[32]; // [rsp+418h] [rbp-310h] BYREF
  __m128i v178; // [rsp+438h] [rbp-2F0h] BYREF
  __m128i v179; // [rsp+448h] [rbp-2E0h] BYREF
  __m128i v180; // [rsp+458h] [rbp-2D0h] BYREF
  __int16 v181; // [rsp+468h] [rbp-2C0h]
  char v182; // [rsp+46Ah] [rbp-2BEh]
  void *v183; // [rsp+470h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+478h] [rbp-2B0h]
  _BYTE v185[136]; // [rsp+488h] [rbp-2A0h] BYREF
  void *v186[2]; // [rsp+510h] [rbp-218h] BYREF
  _QWORD v187[10]; // [rsp+520h] [rbp-208h] BYREF
  char *v188; // [rsp+570h] [rbp-1B8h] BYREF
  __int64 v189; // [rsp+578h] [rbp-1B0h]
  char v190; // [rsp+580h] [rbp-1A8h] BYREF
  void *v191[2]; // [rsp+600h] [rbp-128h] BYREF
  __int64 v192[10]; // [rsp+610h] [rbp-118h] BYREF
  char *v193; // [rsp+660h] [rbp-C8h] BYREF
  __int64 v194; // [rsp+668h] [rbp-C0h]
  char v195; // [rsp+670h] [rbp-B8h] BYREF

  v6 = a1;
  v7 = a2;
  v8 = &byte_3B9466E;
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v11;
    if ( v11 )
    {
      v51 = *(unsigned int **)(v11 + 16);
      v9 = *v51;
      v8 = (const char *)(v51 + 4);
    }
  }
  v118 = v185;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v183 = v185;
  sub_11240B0(a2, &v183);
  sub_CAE550(v134, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
  v12 = sub_790090(a2);
  v13 = *a1;
  v136 = 0;
  v126 = v12;
  v14 = sub_6B37C0(v13);
  if ( v14
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v52 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v52) != 0)
    && (v53 = *(_BYTE *)(v52 + 74), (v53 & 4) != 0)
    && (v53 & 1) != 0
    && (v14 = sub_6B37C0(*v6)) != 0
    || (a2 = v7, (v14 = sub_6F4910(*v6, v7, 0)) != 0) )
  {
    v15 = sub_6BB140(*v6, a2);
    sub_AA92F0(v186, v14, *(_QWORD *)(*v6 + 2152LL), v15);
    a6 = (__m128)_mm_load_si128((const __m128i *)v186);
    v192[0] = 0;
    v136 = v187[0];
    v117 = (__m128i)a6;
    v187[0] = 0;
    *(_OWORD *)v191 = 0;
    *(_OWORD *)v186 = 0;
    sub_646A80((__int64 *)v191);
    sub_646A80((__int64 *)v186);
  }
  else
  {
    v117 = 0;
  }
  sub_FD6980(v137, v7);
  sub_FCD270(v138, v7);
  v16 = v6[1];
  v17 = *(_DWORD *)(v7 + 24);
  v125 = 0;
  v116 = v16;
  if ( v17 )
  {
    v18 = sub_CAE830(*(_QWORD *)(*v6 + 2152LL));
    v125 = v18 != 3 && v18 != 0;
  }
  v186[0] = v187;
  v186[1] = (void *)0x100000000LL;
  v188 = &v190;
  v189 = 0x100000000LL;
  v19 = *(_QWORD *)(v7 + 144);
  v20 = (_BYTE *)(v19 + 24);
  v21 = (_BYTE *)(v19 + (unsigned int)(8 * *(_DWORD *)(v19 + 20)) + 24);
  v112 = v21;
  if ( 8 * *(_DWORD *)(v19 + 20) )
  {
    v119 = v9;
    v120 = *(double *)&v8;
    v121 = v6;
    v122 = *(double *)&v7;
    v123 = v187;
    while ( 1 )
    {
      v22 = *(_QWORD *)v20;
      if ( (*(_BYTE *)(*(_QWORD *)v20 + 28LL) & 0x7F) == 0x41 )
        break;
LABEL_41:
      v20 += 8;
      if ( v112 == v20 )
      {
        v9 = v119;
        v8 = *(const char **)&v120;
        v6 = v121;
        v7 = *(_QWORD *)&v122;
        goto LABEL_43;
      }
    }
    v152.m128_i8[8] = 0;
    v152.m128_u64[0] = 0;
    ptr = &v152.m128_u16[4];
    v23 = *(_BYTE *)(v22 + 60);
    if ( (v23 & 2) == 0 )
    {
      v21 = nullptr;
      std::string::_M_replace();
      goto LABEL_24;
    }
    if ( (v23 & 4) == 0 )
      BUG();
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 88) + 56LL) + 40LL);
    if ( (v24 & 7) != 0 || (v25 = v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v191[0] = v192;
    }
    else
    {
      v26 = *(_QWORD **)(v25 + 16);
      v27 = *v26;
      v28 = v26 + 2;
      v191[0] = v192;
      v29 = (unsigned int)v27;
      v175 = (void *)(unsigned int)v27;
      if ( (v27 & 0xFFFFFFF0) != 0 )
      {
        v191[0] = (void *)std::string::_M_create();
        v30 = (__int64 *)v191[0];
        v192[0] = (__int64)v175;
LABEL_17:
        v21 = v28;
        memcpy(v30, v28, v29);
        v29 = (size_t)v175;
        v31 = (__int64 *)((char *)v175 + (unsigned __int64)v191[0]);
        goto LABEL_18;
      }
      if ( (unsigned int)v27 == 1 )
      {
        LOBYTE(v192[0]) = *((_BYTE *)v26 + 16);
        v31 = (__int64 *)((char *)v192 + 1);
LABEL_18:
        v191[1] = (void *)v29;
        *(_BYTE *)v31 = 0;
        v32 = (__int64 *)ptr;
        v33 = (__int64 *)ptr;
        if ( ptr == &v152.m128_u16[4] )
        {
          if ( v191[0] != v192 )
          {
            v50 = _mm_loadu_si128((const __m128i *)&v191[1]);
            ptr = v191[0];
            v152 = (__m128)v50;
LABEL_58:
            v191[0] = v192;
            v32 = v192;
            goto LABEL_22;
          }
          v34 = (char *)v191[1];
          v21 = v191[1];
        }
        else
        {
          v34 = (char *)v191[1];
          v21 = v191[1];
          if ( v191[0] != v192 )
          {
            ptr = v191[0];
            v35 = v152.m128_i64[1];
            v152 = _mm_loadh_ps((const double *)v192);
            if ( v32 )
            {
              v191[0] = v32;
              v192[0] = v35;
              goto LABEL_22;
            }
            goto LABEL_58;
          }
        }
        if ( !v34 )
        {
LABEL_82:
          v152.m128_u64[0] = (unsigned __int64)v21;
          v21[(_QWORD)v32] = 0;
          v32 = (__int64 *)v191[0];
LABEL_22:
          v191[1] = nullptr;
          *(_BYTE *)v32 = 0;
          if ( v191[0] != v192 )
          {
            v21 = (_BYTE *)(v192[0] + 1);
            operator delete(v191[0], v192[0] + 1);
          }
LABEL_24:
          v113 = sub_7D53F0(v22, v21);
          v114 = sub_7D53B0(v22);
          v115 = sub_7D53D0(v22);
          v36 = *(_QWORD *)(v22 + 40);
          if ( (v36 & 7) != 0 || (v37 = v36 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v167 = &v168.m128i_u64[1];
          }
          else
          {
            v38 = *(_QWORD **)(v37 + 16);
            v39 = *v38;
            v40 = v38 + 2;
            v167 = &v168.m128i_u64[1];
            v41 = (unsigned int)v39;
            v191[0] = (void *)(unsigned int)v39;
            if ( (v39 & 0xFFFFFFF0) != 0 )
            {
              v167 = (void *)std::string::_M_create();
              v42 = (__int8 *)v167;
              v168.m128i_i64[1] = (__int64)v191[0];
LABEL_28:
              memcpy(v42, v40, v41);
              v41 = (size_t)v191[0];
              v43 = (char *)v191[0] + (unsigned __int64)v167;
LABEL_29:
              v168.m128i_i64[0] = v41;
              *v43 = 0;
              v159 = &v160.m128i_u64[1];
              sub_63E170((__int64 *)&v159, ptr, (__int64)ptr + v152.m128_u64[0]);
              if ( LODWORD(v186[1]) >= (unsigned __int64)HIDWORD(v186[1]) )
              {
                v128 = (__int64 *)v186;
                v54 = (char *)sub_25D5F70(v186, v123, 0, 80, v150);
                v175 = &v176.m128i_u64[1];
                v124 = v54;
                v55 = (__int64 *)&v54[80 * LODWORD(v186[1])];
                sub_63E170((__int64 *)&v175, v167, (__int64)v167 + v168.m128i_i64[0]);
                v191[0] = v192;
                sub_63E170((__int64 *)v191, v159, (__int64)v159 + v160.m128i_i64[0]);
                *v55 = (__int64)(v55 + 2);
                sub_63E170(v55, (_BYTE *)v191[0], (__int64)v191[0] + (unsigned __int64)v191[1]);
                v55[4] = (__int64)(v55 + 6);
                sub_63E170(v55 + 4, v175, (__int64)v175 + v176.m128i_i64[0]);
                *((_DWORD *)v55 + 16) = v115;
                *((_DWORD *)v55 + 17) = v114;
                *((_BYTE *)v55 + 72) = v113;
                if ( v191[0] != v192 )
                  operator delete(v191[0], v192[0] + 1);
                if ( v175 != &v176.m128i_u64[1] )
                  operator delete(v175, v176.m128i_i64[1] + 1);
                v21 = v124;
                sub_648CA0(v128, (__int64)v124);
                v56 = v150[0];
                if ( v186[0] != v123 )
                  free(v186[0]);
                ++LODWORD(v186[1]);
                HIDWORD(v186[1]) = v56;
                v186[0] = v124;
              }
              else
              {
                v175 = &v176.m128i_u64[1];
                v44 = (__int64 *)((char *)v186[0] + 80 * LODWORD(v186[1]));
                sub_63E170((__int64 *)&v175, v167, (__int64)v167 + v168.m128i_i64[0]);
                v191[0] = v192;
                sub_63E170((__int64 *)v191, v159, (__int64)v159 + v160.m128i_i64[0]);
                *v44 = (__int64)(v44 + 2);
                sub_63E170(v44, (_BYTE *)v191[0], (__int64)v191[0] + (unsigned __int64)v191[1]);
                v44[4] = (__int64)(v44 + 6);
                v21 = v175;
                sub_63E170(v44 + 4, v175, (__int64)v175 + v176.m128i_i64[0]);
                *((_DWORD *)v44 + 16) = v115;
                *((_DWORD *)v44 + 17) = v114;
                *((_BYTE *)v44 + 72) = v113;
                if ( v191[0] != v192 )
                {
                  v21 = (_BYTE *)(v192[0] + 1);
                  operator delete(v191[0], v192[0] + 1);
                }
                if ( v175 != &v176.m128i_u64[1] )
                {
                  v21 = (_BYTE *)(v176.m128i_i64[1] + 1);
                  operator delete(v175, v176.m128i_i64[1] + 1);
                }
                ++LODWORD(v186[1]);
              }
              if ( v159 != &v160.m128i_u64[1] )
              {
                v21 = (_BYTE *)(v160.m128i_i64[1] + 1);
                operator delete(v159, v160.m128i_i64[1] + 1);
              }
              if ( v167 != &v168.m128i_u64[1] )
              {
                v21 = (_BYTE *)(v168.m128i_i64[1] + 1);
                operator delete(v167, v168.m128i_i64[1] + 1);
              }
              if ( ptr != &v152.m128_u16[4] )
              {
                v21 = (_BYTE *)(v152.m128_u64[1] + 1);
                operator delete(ptr, v152.m128_u64[1] + 1);
              }
              goto LABEL_41;
            }
            if ( (unsigned int)v39 == 1 )
            {
              v168.m128i_i8[8] = *((_BYTE *)v38 + 16);
              v43 = &v168.m128i_i8[9];
              goto LABEL_29;
            }
            v42 = &v168.m128i_i8[8];
            if ( (_DWORD)v39 )
              goto LABEL_28;
          }
          v43 = &v168.m128i_i8[8];
          v41 = 0;
          goto LABEL_29;
        }
        if ( v34 == (_BYTE *)&dword_0 + 1 )
        {
          *(_BYTE *)ptr = v192[0];
          v21 = v191[1];
          v32 = (__int64 *)ptr;
          goto LABEL_82;
        }
        if ( (unsigned int)v34 >= 8 )
        {
          *(_QWORD *)ptr = v192[0];
          *(__int64 *)((char *)v33 + (unsigned int)v34 - 8) = *(__int64 *)((char *)&v191[1] + (unsigned int)v34);
          v96 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v97 = (_DWORD)v33 - v96;
          v98 = (char *)((char *)v192 - ((char *)v33 - v96));
          v99 = ((_DWORD)v34 + v97) & 0xFFFFFFF8;
          if ( v99 >= 8 )
          {
            v100 = v99 & 0xFFFFFFF8;
            v101 = 0;
            do
            {
              v102 = v101;
              v101 += 8;
              *(_QWORD *)(v96 + v102) = *(_QWORD *)&v98[v102];
            }
            while ( v101 < v100 );
          }
        }
        else
        {
          if ( ((unsigned __int8)v34 & 4) != 0 )
          {
            *(_DWORD *)ptr = v192[0];
            *(_DWORD *)((char *)v33 + (unsigned int)v34 - 4) = *(_DWORD *)((char *)&v191[1] + (unsigned int)v34 + 4);
            v33 = (__int64 *)ptr;
            v34 = (char *)v191[1];
            goto LABEL_81;
          }
          if ( !(_DWORD)v34 )
          {
LABEL_81:
            v21 = v34;
            v32 = v33;
            goto LABEL_82;
          }
          *(_BYTE *)ptr = v192[0];
          if ( ((unsigned __int8)v34 & 2) != 0 )
          {
            *(_WORD *)((char *)v33 + (unsigned int)v34 - 2) = *(_WORD *)((char *)&v191[1] + (unsigned int)v34 + 6);
            v33 = (__int64 *)ptr;
            v34 = (char *)v191[1];
            goto LABEL_81;
          }
        }
        v33 = (__int64 *)ptr;
        v34 = (char *)v191[1];
        goto LABEL_81;
      }
      v30 = v192;
      if ( (_DWORD)v27 )
        goto LABEL_17;
    }
    v31 = v192;
    v29 = 0;
    goto LABEL_18;
  }
LABEL_43:
  sub_766420(&ptr, v7);
  sub_63E5A0((__int64)v150, (__int64)v6, v7);
  v45 = v9;
  v46 = (void *)sub_FC8E80(v116, v183, si128.m128i_i64[0]);
  v191[1] = v47;
  v48 = v47;
  v49 = v46;
  v191[0] = v46;
  v192[0] = 0;
  sub_64F120((__int64)&v139, v116 + 160, (__m128i *)v191, v192);
  v111 = v139;
  if ( v192[0] )
    (**(void (__fastcall ***)(__int64))v192[0])(v192[0]);
  if ( v140 )
  {
    v57 = sub_63DDF0(v116, 632, 4);
    v191[0] = v192;
    v58 = v57;
    v191[1] = (void *)0x100000000LL;
    if ( LODWORD(v186[1]) )
      sub_649B50((__int64)v191, (__int64)v186);
    v193 = &v195;
    v194 = 0x100000000LL;
    if ( (_DWORD)v189 )
      sub_64AB70((__int64)&v193, (__int64)&v188);
    sub_644390((__int64)v141, v138);
    sub_644390((__int64)v142, v137);
    v130 = v161;
    v159 = v161;
    v160 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v152.m128_u64[0] )
      sub_63DE60((__int64)&v159, (unsigned __int8 **)&ptr);
    v162 = _mm_loadu_si128(&v154);
    v59 = _mm_loadu_si128(&v155);
    v165 = v157;
    v163 = v59;
    v60 = _mm_loadu_si128(&v156);
    v166 = v158;
    v164 = v60;
    v129 = sub_FC8E80(v116, v8, v45);
    v62 = v61;
    v63 = v150[0];
    v119 = v150[1];
    v127 = _mm_loadh_ps(v134);
    v121 = (_QWORD *)v150[2];
    v123 = (_QWORD *)v150[3];
    v124 = (_BYTE *)v150[4];
    v128 = (__int64 *)v150[5];
    v122 = v134[1];
    v120 = v134[2];
    sub_644390((__int64)v144, v141);
    sub_644390((__int64)v143, v142);
    v131 = v169;
    v167 = v169;
    v168 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v160.m128i_i64[0] )
      sub_63DE60((__int64)&v167, (unsigned __int8 **)&v159);
    strcpy(v149, "public");
    v64 = _mm_loadu_si128(&v162);
    v173 = v165;
    v170 = v64;
    v65 = _mm_loadu_si128(&v163);
    v174 = v166;
    v147 = v149;
    v171 = v65;
    v172 = _mm_loadu_si128(&v164);
    v148 = 6;
    sub_644390((__int64)v146, v144);
    v66 = (void **)v145;
    sub_644390((__int64)v145, v143);
    v132 = v177;
    v175 = v177;
    v176 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v168.m128i_i64[0] )
    {
      v66 = &v175;
      v133 = &v175;
      sub_63DE60((__int64)&v175, (unsigned __int8 **)&v167);
    }
    v67 = _mm_loadu_si128(&v170);
    v68 = _mm_load_si128((const __m128i *)&v127);
    v181 = v173;
    v178 = v67;
    v69 = _mm_loadu_si128(&v171);
    v182 = v174;
    v179 = v69;
    v180 = _mm_loadu_si128(&v172);
    *(_QWORD *)v58 = &off_49F4B08;
    v70 = v129;
    *(_QWORD *)(v58 + 8) = v49;
    *(_QWORD *)(v58 + 24) = v70;
    v71 = v119;
    *(_QWORD *)(v58 + 16) = v48;
    *(_QWORD *)(v58 + 48) = v71;
    v72 = v121;
    *(_QWORD *)(v58 + 32) = v62;
    *(_QWORD *)(v58 + 56) = v72;
    v73 = v123;
    *(_QWORD *)(v58 + 40) = v63;
    *(_QWORD *)(v58 + 64) = v73;
    v74 = v124;
    *(__m128i *)(v58 + 88) = v68;
    *(_QWORD *)(v58 + 72) = v74;
    *(_QWORD *)(v58 + 80) = v128;
    *(double *)(v58 + 104) = v122;
    v75 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(double *)(v58 + 112) = v120;
    *(_QWORD *)(v58 + 120) = v58 + 144;
    *(__m128i *)(v58 + 128) = v75;
    if ( v176.m128i_i64[0] )
    {
      v66 = (void **)(v58 + 120);
      sub_63DE60(v58 + 120, (unsigned __int8 **)&v175);
    }
    v76 = v181;
    v77 = (__m128)_mm_load_si128(&v117);
    *(__m128i *)(v58 + 176) = _mm_loadu_si128(&v178);
    v78 = _mm_loadu_si128(&v179);
    *(_WORD *)(v58 + 224) = v76;
    v79 = _mm_movehl_ps(a6, v77).m128_u64[0];
    LOBYTE(v76) = v182;
    v80 = v77.m128_u64[0];
    *(__m128i *)(v58 + 192) = v78;
    v81 = _mm_loadu_si128(&v180);
    *(_BYTE *)(v58 + 226) = v76;
    LOBYTE(v76) = v126;
    *(__m128i *)(v58 + 208) = v81;
    *(_BYTE *)(v58 + 232) = v76;
    *(_QWORD *)(v58 + 256) = 0;
    *(_OWORD *)(v58 + 240) = 0;
    v82 = v79 - v77.m128_u64[0];
    if ( v79 == v77.m128_u64[0] )
    {
      v83 = 0;
    }
    else
    {
      if ( v82 > 0x7FFFFFFFFFFFFFD0LL )
        sub_555886(v66);
      v83 = operator new(v79 - v77.m128_u64[0]);
    }
    *(_QWORD *)(v58 + 256) = v83 + v82;
    *(__m128i *)(v58 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v83, (__m128i)(unsigned __int64)v83);
    if ( v79 != v80 )
    {
      do
      {
        v84 = v83 + 16;
        v85 = (__int64 *)v83;
        v80 += 80;
        v83 += 80;
        *(_QWORD *)(v83 - 80) = v84;
        sub_63E170(v85, *(_BYTE **)(v80 - 80), *(_QWORD *)(v80 - 80) + *(_QWORD *)(v80 - 72));
        v86 = *(_QWORD *)(v80 - 32);
        *(__m128i *)(v83 - 48) = _mm_loadu_si128((const __m128i *)(v80 - 48));
        v87 = _mm_loadu_si128((const __m128i *)(v80 - 24));
        *(_QWORD *)(v83 - 32) = v86;
        v88 = *(_QWORD *)(v80 - 8);
        *(__m128i *)(v83 - 24) = v87;
        *(_QWORD *)(v83 - 8) = v88;
      }
      while ( v79 != v80 );
      *(_QWORD *)(v58 + 248) = v83;
    }
    sub_644390(v58 + 264, v145);
    v89 = (void **)v146;
    sub_644390(v58 + 288, v146);
    v90 = v125;
    v91 = (_QWORD *)(v58 + 336);
    *(_QWORD *)(v58 + 320) = v58 + 336;
    *(_BYTE *)(v58 + 312) = v90;
    if ( v147 == v149 )
    {
      v92 = v148;
      v89 = (void **)(v148 + 1);
      if ( (unsigned int)(v148 + 1) >= 8 )
      {
        *v91 = *(_QWORD *)v149;
        *(_QWORD *)((char *)v91 + (unsigned int)v89 - 8) = *(_QWORD *)&v149[(unsigned int)v89 - 8];
        v104 = (v58 + 344) & 0xFFFFFFFFFFFFFFF8LL;
        v105 = (char *)v91 - v104;
        v106 = (char *)(v149 - v105);
        if ( (((_DWORD)v89 + (_DWORD)v105) & 0xFFFFFFF8) >= 8 )
        {
          v107 = ((_DWORD)v89 + (_DWORD)v105) & 0xFFFFFFF8;
          v108 = 0;
          do
          {
            v109 = v108;
            v108 += 8;
            v89 = *(void ***)&v106[v109];
            *(_QWORD *)(v104 + v109) = v89;
          }
          while ( v108 < v107 );
        }
        v92 = v148;
      }
      else if ( ((unsigned __int8)v89 & 4) != 0 )
      {
        *(_DWORD *)v91 = *(_DWORD *)v149;
        v110 = (unsigned int)v89;
        v89 = (void **)*(unsigned int *)&v149[(unsigned int)v89 - 4];
        *(_DWORD *)((char *)v91 + v110 - 4) = (_DWORD)v89;
        v92 = v148;
      }
      else if ( (_DWORD)v148 != -1 )
      {
        *(_BYTE *)v91 = v149[0];
        v92 = v148;
        if ( ((unsigned __int8)v89 & 2) != 0 )
        {
          v103 = (unsigned int)v89;
          v89 = (void **)*(unsigned __int16 *)&v149[(unsigned int)v89 - 2];
          *(_WORD *)((char *)v91 + v103 - 2) = (_WORD)v89;
          v92 = v148;
        }
      }
    }
    else
    {
      *(_QWORD *)(v58 + 320) = v147;
      *(_QWORD *)(v58 + 336) = *(_QWORD *)v149;
      v92 = v148;
    }
    *(_QWORD *)(v58 + 328) = v92;
    *(_QWORD *)(v58 + 360) = 0;
    v147 = v149;
    v148 = 0;
    *(_QWORD *)(v58 + 352) = 0x1500000015LL;
    v149[0] = 0;
    if ( v175 != v132 )
      free(v175);
    sub_6441A0(v145);
    sub_6441A0(v146);
    if ( v147 != v149 )
    {
      v89 = (void **)(*(_QWORD *)v149 + 1LL);
      operator delete(v147, *(_QWORD *)v149 + 1LL);
    }
    *(_DWORD *)(v58 + 368) = 21;
    *(_OWORD *)(v58 + 376) = 0;
    *(_QWORD *)v58 = &off_4992FF0;
    if ( v167 != v131 )
      free(v167);
    sub_6441A0(v143);
    sub_6441A0(v144);
    *(_QWORD *)v58 = &off_49F4BC8;
    *(_QWORD *)(v58 + 392) = v58 + 408;
    *(_QWORD *)(v58 + 400) = 0x100000000LL;
    if ( LODWORD(v191[1]) )
    {
      v89 = v191;
      sub_64A2B0(v58 + 392, (__int64)v191);
    }
    *(_QWORD *)(v58 + 488) = v58 + 504;
    *(_QWORD *)(v58 + 496) = 0x100000000LL;
    if ( (_DWORD)v194 )
    {
      v89 = (void **)&v193;
      sub_64B430(v58 + 488, (__int64 *)&v193);
    }
    if ( v159 != v130 )
      free(v159);
    sub_6441A0(v142);
    sub_6441A0(v141);
    sub_6469C0((__int64)&v193);
    sub_646940((__int64)v191);
    v93 = *(void (__fastcall ****)(_QWORD))(v111 + 16);
    *(_QWORD *)(v111 + 16) = v58;
    if ( v93 )
      (**v93)(v93);
    v94 = *(_QWORD *)(v58 + 88);
    if ( v94 && (unsigned int)(*(_DWORD *)(v94 + 356) - 2) <= 0x13 && (v95 = sub_FC8C50(v94, v89)) != 0 )
      sub_FC8D50(v95, v58);
    else
      sub_64B900(v116 + 184, v58);
  }
  if ( ptr != &v153 )
    free(ptr);
  sub_6469C0((__int64)&v188);
  sub_646940((__int64)v186);
  sub_6441A0(v138);
  sub_6441A0(v137);
  v135 = _mm_load_si128(&v117);
  sub_646A80(v135.m128i_i64);
  if ( v183 != v118 )
    free(v183);
}

