__int64 __fastcall sub_E5CBE0(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v4; // rbx
  _OWORD *v5; // rax
  unsigned int v6; // r14d
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  int private_2_high; // esi
  int v13; // edx
  int v14; // r13d
  __int64 *v15; // r15
  __int64 v16; // rax
  void (***v17)(void); // rdi
  bool v18; // zf
  _QWORD *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  char *v22; // r8
  unsigned int v23; // eax
  char *v24; // r14
  _QWORD *v25; // r10
  __int64 v26; // r15
  int v27; // esi
  __int64 v28; // rax
  _QWORD *v29; // r9
  _QWORD *k; // rdx
  _QWORD *v31; // rax
  unsigned int *v32; // rax
  unsigned int *v33; // rdx
  __int64 v34; // r9
  int v35; // eax
  unsigned __int64 v36; // r13
  __int64 *v37; // r14
  __int64 v38; // rsi
  unsigned int *v39; // rcx
  __int64 *v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  void (__fastcall ***v45)(void *); // r12
  __int64 v46; // rax
  void (__fastcall ***v47)(void *); // r13
  __int64 v48; // rax
  void (__fastcall ***v49)(void *); // r12
  __int64 *v50; // r15
  __int64 v51; // rax
  __int64 v52; // r13
  void (__fastcall ***v53)(void *); // r14
  void (__fastcall ***v54)(_QWORD); // r12
  __int64 *v55; // r13
  __int64 *v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // r14d
  __int64 v59; // r12
  __int64 result; // rax
  __int64 *v61; // rbx
  unsigned __int64 v62; // r12
  __int64 v63; // rsi
  __int64 *v64; // r13
  _QWORD *(__fastcall *v65)(void **, __int64); // rax
  void (__fastcall ***v66)(void *); // r12
  __int64 v67; // rax
  void (__fastcall ***v68)(void *); // r14
  __int64 *v69; // r15
  __int64 v70; // rax
  __int64 v71; // r12
  void (__fastcall ***v72)(void *); // r13
  __int64 v73; // rax
  int v74; // r15d
  unsigned int v75; // r12d
  __int64 *v76; // r13
  int v77; // esi
  __int64 *v78; // r15
  size_t v79; // r14
  size_t v80; // rax
  unsigned int v81; // r14d
  __int64 v82; // r14
  _QWORD *v83; // rdi
  __int64 v84; // rax
  __int64 *v85; // r13
  unsigned int v86; // edx
  unsigned int v87; // r14d
  __int64 v88; // r12
  __int64 *v89; // r14
  __int64 v90; // rax
  __int64 v91; // r12
  void (__fastcall ***v92)(void *); // r13
  unsigned int *v93; // r12
  _QWORD *v94; // r13
  unsigned int v95; // eax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // r14
  unsigned int *v101; // r15
  unsigned int v102; // edx
  unsigned int *v103; // r15
  unsigned int v104; // r12d
  unsigned int v105; // r12d
  __int64 v106; // rax
  _QWORD *v107; // rcx
  unsigned int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rsi
  int v111; // edi
  __int64 v112; // rsi
  __int64 v113; // r11
  unsigned int v114; // edx
  unsigned int *v115; // r8
  unsigned int v116; // esi
  unsigned int *v117; // r10
  unsigned int v118; // eax
  size_t v119; // rdx
  unsigned __int64 v120; // rdi
  __int64 v121; // rax
  __int64 *v122; // rdi
  __int64 v123; // rdx
  __int64 v124; // r14
  _QWORD *v125; // rdi
  __int64 v126; // rax
  unsigned int v127; // r10d
  unsigned int v128; // edi
  __int64 v129; // rax
  _DWORD *v130; // rsi
  __int64 v131; // r10
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rax
  void (__fastcall ***v135)(void *); // r12
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 i; // rax
  __int64 m; // rax
  _QWORD *v141; // rax
  unsigned int v142; // edx
  __int64 v143; // rsi
  int v144; // edx
  unsigned int **v145; // rsi
  __int64 j; // rax
  __int64 v147; // rax
  unsigned int v148; // edx
  __int64 v149; // rax
  __int64 v150; // rsi
  unsigned int v151; // r14d
  unsigned int v152; // ecx
  unsigned int *v153; // rdx
  __int64 v154; // rsi
  __int64 v155; // rsi
  __int64 v156; // rdi
  unsigned int v157; // r8d
  size_t v158; // rsi
  unsigned int *v159; // rdx
  __int64 v160; // rsi
  unsigned int v161; // r10d
  size_t v162; // rsi
  __int64 v163; // rax
  _DWORD *v164; // rdx
  _QWORD *v165; // rax
  _QWORD *v166; // rdx
  unsigned int v167; // edx
  _DWORD *v168; // rax
  int v169; // edx
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rax
  unsigned int v173; // r12d
  size_t v174; // rsi
  unsigned int *v175; // rdx
  unsigned int v176; // ecx
  unsigned int v177; // edx
  unsigned int *v178; // rdx
  _QWORD *v179; // rax
  char **v180; // rbx
  __int64 v181; // rdx
  char **exception; // r13
  __int64 v183; // rdx
  char **v184; // r13
  __int64 v185; // rdx
  char **v186; // r13
  __int64 v187; // rdx
  _Unwind_Exception *v188; // [rsp+0h] [rbp-148h]
  __int64 **v189; // [rsp+8h] [rbp-140h]
  int v190; // [rsp+8h] [rbp-140h]
  unsigned int v191; // [rsp+8h] [rbp-140h]
  _QWORD *ptr; // [rsp+10h] [rbp-138h]
  __int64 v193; // [rsp+18h] [rbp-130h]
  __int64 v194; // [rsp+20h] [rbp-128h]
  void (__fastcall ***v195)(void *); // [rsp+28h] [rbp-120h]
  char *v196; // [rsp+30h] [rbp-118h]
  void *v197; // [rsp+30h] [rbp-118h]
  __int64 v198; // [rsp+38h] [rbp-110h]
  __int64 v199; // [rsp+38h] [rbp-110h]
  unsigned int v200; // [rsp+44h] [rbp-104h]
  unsigned int *v201; // [rsp+48h] [rbp-100h]
  _QWORD *v202; // [rsp+48h] [rbp-100h]
  __int64 v203; // [rsp+48h] [rbp-100h]
  __int64 v204; // [rsp+48h] [rbp-100h]
  __int64 v205; // [rsp+48h] [rbp-100h]
  unsigned int v206; // [rsp+48h] [rbp-100h]
  unsigned int v207; // [rsp+48h] [rbp-100h]
  __int64 v208; // [rsp+48h] [rbp-100h]
  unsigned int *v209; // [rsp+50h] [rbp-F8h]
  __int64 v210; // [rsp+50h] [rbp-F8h]
  _QWORD *v211; // [rsp+50h] [rbp-F8h]
  _QWORD *v212; // [rsp+50h] [rbp-F8h]
  _QWORD *v213; // [rsp+50h] [rbp-F8h]
  __int64 v214; // [rsp+50h] [rbp-F8h]
  unsigned int *v215; // [rsp+50h] [rbp-F8h]
  _QWORD *v216; // [rsp+50h] [rbp-F8h]
  __int64 v217; // [rsp+58h] [rbp-F0h]
  unsigned int v218; // [rsp+70h] [rbp-D8h]
  unsigned int *v219; // [rsp+70h] [rbp-D8h]
  __int64 v220; // [rsp+70h] [rbp-D8h]
  _QWORD *v221; // [rsp+70h] [rbp-D8h]
  __int64 v222; // [rsp+70h] [rbp-D8h]
  __int64 v223; // [rsp+70h] [rbp-D8h]
  unsigned int *v224; // [rsp+78h] [rbp-D0h]
  __int64 v225; // [rsp+78h] [rbp-D0h]
  _QWORD *v226; // [rsp+78h] [rbp-D0h]
  unsigned int *v227; // [rsp+78h] [rbp-D0h]
  unsigned int *v228; // [rsp+88h] [rbp-C0h]
  __int64 v229; // [rsp+88h] [rbp-C0h]
  _Unwind_Exception *v230; // [rsp+90h] [rbp-B8h] BYREF
  void (__fastcall ***v231)(void *); // [rsp+98h] [rbp-B0h] BYREF
  __int64 v232; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD *v233; // [rsp+A8h] [rbp-A0h]
  unsigned int *v234; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD *v235; // [rsp+B8h] [rbp-90h]
  _QWORD *v236; // [rsp+C0h] [rbp-88h] BYREF
  char *v237; // [rsp+C8h] [rbp-80h]
  int v238[2]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v239; // [rsp+D8h] [rbp-70h]
  int v240; // [rsp+E0h] [rbp-68h]
  void *src; // [rsp+F0h] [rbp-58h] BYREF
  size_t n; // [rsp+F8h] [rbp-50h]
  __int64 v243; // [rsp+100h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v189 = a2;
  v193 = a3;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)v238 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v240 = 0;
  v232 = v4;
  v233 = nullptr;
  v230 = nullptr;
  v239 = 8;
  v231 = nullptr;
  sub_E5B080(a2, (__int64)&v232, &v230, (__int64)v238, (int)&v231);
  v6 = v239;
  v7 = v233;
  v194 = v232;
  v195 = v231;
  ptr = *(_QWORD **)v238;
  v188 = v230;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         a1 + 32);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 48);
  if ( v7 )
  {
    v10 = &v7[*((unsigned int *)v7 - 1)];
    if ( v10 != v7 )
    {
      v11 = v7;
      do
        sub_E5EBF0(v9, *v11++);
      while ( v10 != v11 );
    }
  }
  if ( v188 )
  {
    private_2_high = HIDWORD(v188[-1].private_2);
    v13 = (int)v188;
  }
  else
  {
    v13 = 0;
    private_2_high = 0;
  }
  v14 = sub_E60CB0((std::ios_base *)v9, private_2_high, v13);
  v217 = sub_E39670((_QWORD *)v9);
  if ( v217 )
  {
    v15 = *v189;
    v16 = sub_132F960(*(_QWORD *)(a1 + 16), v217);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (void (***)(void))v15[2];
    if ( v17 )
    {
      v18 = (*((_DWORD *)v17 + 2))-- == 1;
      if ( v18 )
      {
        v199 = v16;
        (**v17)();
        sub_186B220(v17);
        v16 = v199;
      }
    }
    v15[2] = v16;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a1 + 40);
  if ( !v14 )
  {
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 16)) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_1824A6((__int64 *)&src, (const char *)off_1C7E180, v183);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &src);
      sub_233E40((__int64)&src);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v64 = *v189;
    if ( (*((_BYTE *)*v189 + 123) & 0x10) != 0 )
    {
LABEL_113:
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v9 + 48LL))(&src, v9);
      if ( &src == (void **)(v64 + 5) )
        goto LABEL_118;
      v78 = (__int64 *)v64[5];
      v79 = n;
      if ( v78 == v64 + 7 )
      {
        if ( n <= 0xF )
        {
LABEL_116:
          if ( !n )
          {
LABEL_117:
            v64[6] = v79;
            *((_BYTE *)v78 + v79) = 0;
LABEL_118:
            if ( src != &v243 )
              operator delete(src, v243 + 1);
            v55 = *v189;
            if ( *v189 )
              ++*((_DWORD *)v55 + 8);
            v56 = (__int64 *)v193;
            v57 = *(_DWORD *)(v193 + 8);
            v81 = *(_DWORD *)(v193 + 12);
            if ( v57 < v81 )
              goto LABEL_74;
            v82 = 2 * v81;
            v59 = sub_186B270(8 * v82);
            v57 = *(_DWORD *)(v193 + 8);
            v83 = *(_QWORD **)v193;
            if ( v57 )
            {
              if ( v57 - 1 > 2 && (_QWORD *)v59 != v83 + 1 )
              {
                v84 = 0;
                do
                {
                  *(__m128i *)(v59 + v84 * 8) = _mm_loadu_si128((const __m128i *)&v83[v84]);
                  v84 += 2;
                }
                while ( 2LL * (v57 >> 1) != v84 );
LABEL_128:
                if ( (v57 & 1) != 0 )
                  *(_QWORD *)(v59 + 8LL * (v57 & 0xFFFFFFFE)) = v83[v57 & 0xFFFFFFFE];
                goto LABEL_130;
              }
              for ( i = 0; i != v57; ++i )
                *(_QWORD *)(v59 + i * 8) = v83[i];
            }
LABEL_130:
            if ( v83 != (_QWORD *)(v193 + 16) && v83 )
            {
              sub_186B220(v83);
              v57 = *(_DWORD *)(v193 + 8);
            }
            *(_QWORD *)v193 = v59;
            *(_DWORD *)(v193 + 12) = v82;
            goto LABEL_75;
          }
LABEL_192:
          if ( v79 == 1 )
            *(_BYTE *)v78 = *(_BYTE *)src;
          else
            memcpy(v78, src, v79);
          v78 = (__int64 *)v64[5];
          goto LABEL_117;
        }
        if ( (n & 0x8000000000000000LL) == 0LL )
        {
          if ( n <= 0x1D )
          {
            v120 = 31;
            v119 = 30;
            goto LABEL_189;
          }
          goto LABEL_188;
        }
      }
      else
      {
        v80 = v64[7];
        if ( v80 >= n )
          goto LABEL_116;
        if ( (n & 0x8000000000000000LL) == 0LL )
        {
          v119 = 2 * v80;
          if ( n < 2 * v80 )
          {
            v120 = v119 + 1;
            if ( (v80 & 0x4000000000000000LL) != 0 )
LABEL_216:
              std::__throw_bad_alloc();
LABEL_189:
            v197 = (void *)v119;
            v121 = operator new(v120);
            v122 = (__int64 *)v64[5];
            v78 = (__int64 *)v121;
            v123 = (__int64)v197;
            if ( v64 + 7 != v122 )
            {
              operator delete(v122, v64[7] + 1);
              v123 = (__int64)v197;
            }
            v64[5] = (__int64)v78;
            v64[7] = v123;
            goto LABEL_192;
          }
LABEL_188:
          v119 = n;
          v120 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            goto LABEL_216;
          goto LABEL_189;
        }
      }
      std::__throw_length_error("basic_string::_M_create");
    }
    v65 = *(_QWORD *(__fastcall **)(void **, __int64))(*(_QWORD *)v9 + 336LL);
    if ( (char *)v65 == (char *)sub_2B1E10 )
    {
      v66 = *(void (__fastcall ****)(void *))(v9 + 56);
      if ( !v66 )
      {
        v137 = sub_1336AB0(v195, 0);
        v68 = (void (__fastcall ***)(void *))v137;
        if ( v137 )
          ++*(_DWORD *)(v137 + 8);
        goto LABEL_102;
      }
      ++*((_DWORD *)v66 + 2);
      v67 = sub_1336AB0(v195, v66);
      v68 = (void (__fastcall ***)(void *))v67;
      if ( v67 )
        ++*(_DWORD *)(v67 + 8);
    }
    else
    {
      v65(&src, v9);
      v66 = (void (__fastcall ***)(void *))src;
      v138 = sub_1336AB0(v195, src);
      v68 = (void (__fastcall ***)(void *))v138;
      if ( v138 )
        ++*(_DWORD *)(v138 + 8);
      if ( !v66 )
        goto LABEL_102;
    }
    v18 = (*((_DWORD *)v66 + 2))-- == 1;
    if ( v18 )
    {
      (**v66)(v66);
      sub_186B220(v66);
    }
LABEL_102:
    sub_ED2DA0(*v189);
    v69 = *v189;
    v70 = sub_1336AB0((*v189)[1], v68);
    v71 = v70;
    if ( v70 )
      ++*(_DWORD *)(v70 + 8);
    v72 = (void (__fastcall ***)(void *))v69[1];
    if ( v72 )
    {
      v18 = (*((_DWORD *)v72 + 2))-- == 1;
      if ( v18 )
      {
        (**v72)(v72);
        sub_186B220(v72);
      }
    }
    v73 = *(_QWORD *)v9;
    v69[1] = v71;
    v74 = (*(__int64 (__fastcall **)(__int64))(v73 + 232))(v9);
    v75 = 0;
    if ( v74 )
    {
      do
      {
        v76 = *v189;
        v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 240LL))(v9, v75);
        sub_EDBA20((int)v76, v77, 0, v188, (int)v189, (int)ptr, v193, v194);
        ++v75;
      }
      while ( v74 != v75 );
    }
    if ( v68 )
    {
      v18 = (*((_DWORD *)v68 + 2))-- == 1;
      if ( v18 )
      {
        (**v68)(v68);
        sub_186B220(v68);
      }
    }
    v64 = *v189;
    goto LABEL_113;
  }
  if ( v14 == 1 )
  {
    v40 = *v189;
    if ( (*((_BYTE *)*v189 + 123) & 4) == 0 )
      goto LABEL_71;
    v41 = *(_QWORD *)v9;
    src = nullptr;
    (*(void (__fastcall **)(__int64, void **))(v41 + 32))(v9, &src);
    v42 = src;
    if ( src )
    {
      v43 = *(_QWORD *)(v9 + 56);
      if ( v43 )
      {
        (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v43 + 32LL))(*(_QWORD *)(v9 + 56), &src);
        v42 = src;
      }
    }
    v44 = sub_1336B20(v42);
    v45 = (void (__fastcall ***)(void *))v44;
    if ( v44 )
    {
      ++*(_DWORD *)(v44 + 8);
      v46 = sub_1336AB0(v195, v44);
      v47 = (void (__fastcall ***)(void *))v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v18 = (*((_DWORD *)v45 + 2))-- == 1;
      if ( v18 )
      {
        (**v45)(v45);
        sub_186B220(v45);
      }
      v48 = sub_1336AB0(*(_QWORD *)(v9 + 56), v47);
      v49 = (void (__fastcall ***)(void *))v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      if ( !v47 )
        goto LABEL_59;
    }
    else
    {
      v134 = sub_1336AB0(v195, 0);
      v135 = (void (__fastcall ***)(void *))v134;
      if ( !v134 )
      {
        v172 = sub_1336AB0(*(_QWORD *)(v9 + 56), 0);
        v49 = (void (__fastcall ***)(void *))v172;
        if ( v172 )
          ++*(_DWORD *)(v172 + 8);
        goto LABEL_59;
      }
      ++*(_DWORD *)(v134 + 8);
      v136 = sub_1336AB0(*(_QWORD *)(v9 + 56), v134);
      if ( v136 )
        ++*(_DWORD *)(v136 + 8);
      v47 = v135;
      v49 = (void (__fastcall ***)(void *))v136;
    }
    v18 = (*((_DWORD *)v47 + 2))-- == 1;
    if ( v18 )
    {
      (**v47)(v47);
      sub_186B220(v47);
    }
LABEL_59:
    v50 = *v189;
    v51 = sub_1336AB0((*v189)[1], v49);
    v52 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v53 = (void (__fastcall ***)(void *))v50[1];
    if ( v53 )
    {
      v18 = (*((_DWORD *)v53 + 2))-- == 1;
      if ( v18 )
      {
        (**v53)(v53);
        sub_186B220(v53);
      }
    }
    v50[1] = v52;
    if ( v49 )
    {
      v18 = (*((_DWORD *)v49 + 2))-- == 1;
      if ( v18 )
      {
        (**v49)(v49);
        sub_186B220(v49);
      }
    }
    v54 = (void (__fastcall ***)(_QWORD))src;
    if ( src )
    {
      v18 = (*((_DWORD *)src + 4))-- == 1;
      if ( v18 )
      {
        (**v54)(v54);
        sub_186B220(v54);
      }
    }
    v40 = *v189;
LABEL_71:
    sub_ED2DA0(v40);
    v55 = *v189;
    if ( *v189 )
      ++*((_DWORD *)v55 + 8);
    v56 = (__int64 *)v193;
    v57 = *(_DWORD *)(v193 + 8);
    v58 = *(_DWORD *)(v193 + 12);
    if ( v57 < v58 )
    {
LABEL_74:
      v59 = *v56;
LABEL_75:
      *(_QWORD *)(v59 + 8LL * v57) = v55;
      *(_DWORD *)(v193 + 8) = v57 + 1;
      goto LABEL_76;
    }
    v82 = 2 * v58;
    v59 = sub_186B270(8 * v82);
    v57 = *(_DWORD *)(v193 + 8);
    v83 = *(_QWORD **)v193;
    if ( v57 )
    {
      if ( v57 - 1 > 2 && (_QWORD *)v59 != v83 + 1 )
      {
        v106 = 0;
        do
        {
          *(__m128i *)(v59 + v106 * 8) = _mm_loadu_si128((const __m128i *)&v83[v106]);
          v106 += 2;
        }
        while ( 2LL * (v57 >> 1) != v106 );
        goto LABEL_128;
      }
      for ( j = 0; j != v57; ++j )
        *(_QWORD *)(v59 + j * 8) = v83[j];
    }
    goto LABEL_130;
  }
  if ( v14 != -1 )
    goto LABEL_76;
  sub_ED2DA0(*v189);
  v19 = *(_QWORD **)(a1 + 16);
  v20 = *v189;
  v234 = nullptr;
  v235 = v19;
  if ( (*((_BYTE *)v20 + 123) & 0x10) == 0 )
  {
    v39 = nullptr;
    goto LABEL_135;
  }
  v236 = v19;
  v21 = *(_QWORD *)v9;
  v237 = nullptr;
  (*(void (__fastcall **)(__int64, _QWORD **))(v21 + 24))(v9, &v236);
  v22 = v237;
  if ( !v237 )
    goto LABEL_44;
  v196 = &v237[8 * *((unsigned int *)v237 - 1)];
  if ( v196 == v237 )
    goto LABEL_43;
  v198 = 16LL * v6;
  v23 = v6 - 1;
  v24 = v237;
  v200 = v23;
  do
  {
    v25 = *(_QWORD **)v24;
    v26 = *(_QWORD *)(a1 + 16);
    v27 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
    v28 = 16LL * (v27 & v200);
    v29 = &ptr[(unsigned __int64)v28 / 8];
    if ( v28 != v198 )
    {
      for ( k = &ptr[(unsigned __int64)v28 / 8]; &ptr[(unsigned __int64)v198 / 8] != k; k += 2 )
      {
        v31 = (_QWORD *)*k;
        if ( *k > 1u )
        {
          if ( *((_DWORD *)v31 + 3) == v27 && v25 == v31 )
          {
LABEL_186:
            v31 = k;
            goto LABEL_30;
          }
        }
        else if ( !v31 )
        {
          goto LABEL_30;
        }
      }
    }
    if ( ptr != v29 )
    {
      k = ptr;
      do
      {
        while ( 1 )
        {
          v31 = (_QWORD *)*k;
          if ( *k <= 1u )
            break;
          if ( *((_DWORD *)v31 + 3) == v27 && v25 == v31 )
            goto LABEL_186;
          k += 2;
          if ( v29 == k )
            goto LABEL_171;
        }
        if ( !v31 )
          goto LABEL_30;
        k += 2;
      }
      while ( v29 != k );
    }
LABEL_171:
    v31 = nullptr;
LABEL_30:
    v32 = (unsigned int *)sub_15D3210(*(_QWORD *)(a1 + 16), v31[1]);
    v33 = v234;
    if ( v234 )
    {
      if ( !v32 || v32 == v234 )
      {
        v34 = (__int64)v234;
        *v234 = (*v234 + 1) & 0x3FFFFFFF | *v234 & 0xC0000000;
      }
      else
      {
        v209 = v234;
        v201 = v32;
        v34 = sub_17E9C90(*(_QWORD *)(v26 + 656), 24);
        *v209 = (*v209 + 1) & 0x3FFFFFFF | *v209 & 0xC0000000;
        *v201 = (*v201 + 1) & 0x3FFFFFFF | *v201 & 0xC0000000;
        *(_QWORD *)v34 = 0;
        v35 = *(_DWORD *)v34;
        v33 = v234;
        *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v209, (__m128i)(unsigned __int64)v201);
        *(_DWORD *)v34 = v35 & 0xC0000000 | 1;
        if ( !v33 )
          goto LABEL_34;
      }
      v107 = v235;
      v108 = (*v33 + 0x3FFFFFFF) & 0x3FFFFFFF | *v33 & 0xC0000000;
      *v33 = v108;
      if ( (v108 & 0x3FFFFFFF) == 0 )
      {
        v109 = v107[83];
        if ( v109 )
        {
          v110 = *(unsigned int *)(v109 - 4);
          if ( (_DWORD)v110 == *(_DWORD *)(v109 - 8) )
          {
            v127 = (unsigned int)(3 * v110 + 1) >> 1;
            v128 = 8 * v127 + 8;
            if ( 8 * (int)v110 + 8 >= v128 || (unsigned int)v110 >= v127 )
            {
              v186 = (char **)__cxa_allocate_exception(0x28u);
              sub_1824A6((__int64 *)&src, "Overflow encountered when expanding vector", v187);
              *v186 = (char *)off_1C63128;
              sub_2333C0(v186 + 1, &src);
              sub_233E40((__int64)&src);
              __cxa_throw(v186, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v224 = v33;
            v218 = (unsigned int)(3 * v110 + 1) >> 1;
            v211 = v107;
            v203 = v34;
            v129 = sub_186B300((void *)(v109 - 8), v128);
            v107 = v211;
            v130 = (_DWORD *)v129;
            v109 = v129 + 8;
            v34 = v203;
            v211[83] = v109;
            *v130 = v218;
            v131 = (unsigned int)v130[1];
            v111 = v131 + 1;
            *(_QWORD *)(v109 + 8 * v131) = v224;
            v130[1] = v131 + 1;
          }
          else
          {
            v111 = v110 + 1;
            *(_QWORD *)(v109 + 8 * v110) = v33;
            *(_DWORD *)(v109 - 4) = v110 + 1;
          }
        }
        else
        {
          v219 = v33;
          v212 = v107;
          v204 = v34;
          v149 = sub_186B270(0x18u);
          v107 = v212;
          v150 = v149;
          v109 = v149 + 8;
          *(_QWORD *)(v109 - 8) = 2;
          v34 = v204;
          v111 = 1;
          v212[83] = v109;
          *(_QWORD *)(v150 + 8) = v219;
          *(_DWORD *)(v150 + 4) = 1;
        }
        while ( v111 )
        {
          v112 = (unsigned int)(v111 - 1);
          v113 = *(_QWORD *)(v109 + 8 * v112);
          v114 = v111 - 1;
          *(_DWORD *)(v109 - 4) = v112;
          if ( *(char *)(v113 + 3) < 0 )
          {
            v132 = *(_QWORD *)(v113 + 8);
            if ( v132 )
            {
              v133 = v107[81];
              v18 = (*(_DWORD *)(v132 + 8))-- == 1;
              if ( v18 )
              {
                v220 = v113;
                v213 = v107;
                v205 = v34;
                sub_15D7BC0(v133, v132);
                v113 = v220;
                v107 = v213;
                v34 = v205;
              }
            }
            v210 = v34;
            v202 = v107;
            sub_17E9C40(v107[82], 16, v113);
          }
          else
          {
            v115 = *(unsigned int **)(v113 + 8);
            v116 = (*v115 + 0x3FFFFFFF) & 0x3FFFFFFF | *v115 & 0xC0000000;
            *v115 = v116;
            if ( (v116 & 0x3FFFFFFF) == 0 )
            {
              if ( v114 == *(_DWORD *)(v109 - 8) )
              {
                v226 = v107;
                v229 = v113;
                v161 = (3 * v114 + 1) >> 1;
                v162 = 8 * v161 + 8;
                v222 = v34;
                v215 = v115;
                if ( 8 * v111 >= (unsigned int)v162 || (v207 = (3 * v114 + 1) >> 1, v114 >= v161) )
                {
LABEL_283:
                  v184 = (char **)__cxa_allocate_exception(0x28u);
                  sub_1824A6((__int64 *)&src, "Overflow encountered when expanding vector", v185);
                  *v184 = (char *)off_1C63128;
                  sub_2333C0(v184 + 1, &src);
                  sub_233E40((__int64)&src);
                  __cxa_throw(v184, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v163 = sub_186B300((void *)(v109 - 8), v162);
                v107 = v226;
                v164 = (_DWORD *)v163;
                v147 = v163 + 8;
                v115 = v215;
                v34 = v222;
                v226[83] = v147;
                v113 = v229;
                *v164 = v207;
              }
              else
              {
                v147 = v107[83];
              }
              v148 = *(_DWORD *)(v147 - 4);
              *(_QWORD *)(v147 + 8LL * v148) = v115;
              *(_DWORD *)(v147 - 4) = v148 + 1;
            }
            v117 = *(unsigned int **)(v113 + 16);
            v118 = (*v117 + 0x3FFFFFFF) & 0x3FFFFFFF | *v117 & 0xC0000000;
            *v117 = v118;
            if ( (v118 & 0x3FFFFFFF) == 0 )
            {
              v141 = (_QWORD *)v107[83];
              if ( v141 )
              {
                v142 = *((_DWORD *)v141 - 1);
                if ( v142 == *((_DWORD *)v141 - 2) )
                {
                  v225 = v113;
                  v228 = v117;
                  v157 = (3 * v142 + 1) >> 1;
                  v158 = 8 * v157 + 8;
                  v221 = v107;
                  v214 = v34;
                  if ( 8 * v142 + 8 >= (unsigned int)v158 )
                    goto LABEL_283;
                  v206 = (3 * v142 + 1) >> 1;
                  if ( v142 >= v157 )
                    goto LABEL_283;
                  v159 = (unsigned int *)sub_186B300(v141 - 1, v158);
                  v107 = v221;
                  v141 = v159 + 2;
                  v160 = v159[1];
                  v34 = v214;
                  v221[83] = v159 + 2;
                  v113 = v225;
                  *v159 = v206;
                  LODWORD(v159) = v160;
                  v117 = v228;
                  v145 = (unsigned int **)&v141[v160];
                  v144 = (_DWORD)v159 + 1;
                }
                else
                {
                  v143 = v142;
                  v144 = v142 + 1;
                  v145 = (unsigned int **)&v141[v143];
                }
              }
              else
              {
                v227 = v117;
                v223 = v113;
                v216 = v107;
                v208 = v34;
                v171 = (_QWORD *)sub_186B270(0x18u);
                v107 = v216;
                *v171 = 2;
                v141 = v171 + 1;
                v144 = 1;
                v34 = v208;
                v113 = v223;
                v145 = (unsigned int **)v141;
                v216[83] = v141;
                v117 = v227;
              }
              *v145 = v117;
              *((_DWORD *)v141 - 1) = v144;
            }
            v210 = v34;
            v202 = v107;
            sub_17E9C40(v107[82], 24, v113);
          }
          v107 = v202;
          v34 = v210;
          v109 = v202[83];
          if ( !v109 )
            break;
          v111 = *(_DWORD *)(v109 - 4);
        }
      }
    }
    else
    {
      v34 = 0;
      if ( v32 )
      {
        v34 = (__int64)v32;
        *v32 = (*v32 + 1) & 0x3FFFFFFF | *v32 & 0xC0000000;
      }
    }
LABEL_34:
    v234 = (unsigned int *)v34;
    v24 += 8;
  }
  while ( v196 != v24 );
  v22 = v237;
  if ( v237 )
  {
    v36 = (unsigned __int64)&v237[8 * *((unsigned int *)v237 - 1)];
    if ( (unsigned __int64)v237 >= v36 )
      goto LABEL_43;
    v37 = (__int64 *)v237;
    do
    {
      while ( 1 )
      {
        v38 = *v37;
        if ( *v37 )
        {
          v18 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v37 >= v36 )
          goto LABEL_42;
      }
      sub_15D7BC0(v236, v38);
      ++v37;
    }
    while ( (unsigned __int64)v37 < v36 );
LABEL_42:
    v22 = v237;
    if ( v237 )
LABEL_43:
      sub_186B220(v22 - 8);
  }
LABEL_44:
  v19 = *(_QWORD **)(a1 + 16);
  v39 = v234;
  v20 = *v189;
LABEL_135:
  sub_EDB570(v20, v19[108], v217, v39);
  v85 = *v189;
  if ( *v189 )
    ++*((_DWORD *)v85 + 8);
  v86 = *(_DWORD *)(v193 + 8);
  v87 = *(_DWORD *)(v193 + 12);
  if ( v86 >= v87 )
  {
    v124 = 2 * v87;
    v88 = sub_186B270(8 * v124);
    v86 = *(_DWORD *)(v193 + 8);
    v125 = *(_QWORD **)v193;
    if ( v86 )
    {
      if ( v86 - 1 <= 2 || (_QWORD *)v88 == v125 + 1 )
      {
        for ( m = 0; m != v86; ++m )
          *(_QWORD *)(v88 + m * 8) = v125[m];
      }
      else
      {
        v126 = 0;
        do
        {
          *(__m128i *)(v88 + v126 * 8) = _mm_loadu_si128((const __m128i *)&v125[v126]);
          v126 += 2;
        }
        while ( v126 != 2LL * (v86 >> 1) );
        if ( (v86 & 1) != 0 )
          *(_QWORD *)(v88 + 8LL * (v86 & 0xFFFFFFFE)) = v125[v86 & 0xFFFFFFFE];
      }
    }
    if ( v125 && v125 != (_QWORD *)(v193 + 16) )
    {
      sub_186B220(v125);
      v86 = *(_DWORD *)(v193 + 8);
    }
    *(_QWORD *)v193 = v88;
    *(_DWORD *)(v193 + 12) = v124;
  }
  else
  {
    v88 = *(_QWORD *)v193;
  }
  *(_QWORD *)(v88 + 8LL * v86) = v85;
  *(_DWORD *)(v193 + 8) = v86 + 1;
  v89 = *v189;
  v90 = sub_EE1DE0(&v234);
  v91 = v90;
  if ( v90 )
    ++*(_DWORD *)(v90 + 8);
  v92 = (void (__fastcall ***)(void *))v89[3];
  if ( v92 )
  {
    v18 = (*((_DWORD *)v92 + 2))-- == 1;
    if ( v18 )
    {
      (**v92)(v92);
      sub_186B220(v92);
    }
  }
  v89[3] = v91;
  v93 = v234;
  if ( v234 )
  {
    v94 = v235;
    v95 = (*v234 + 0x3FFFFFFF) & 0x3FFFFFFF | *v234 & 0xC0000000;
    *v234 = v95;
    if ( (v95 & 0x3FFFFFFF) == 0 )
    {
      v96 = (_QWORD *)v94[83];
      if ( v96 )
      {
        v97 = *((unsigned int *)v96 - 1);
        if ( (_DWORD)v97 == *((_DWORD *)v96 - 2) )
        {
          v151 = (unsigned int)(3 * v97 + 1) >> 1;
          v152 = 8 * v151 + 8;
          if ( 8 * (int)v97 + 8 >= v152 || (unsigned int)v97 >= v151 )
          {
LABEL_279:
            v180 = (char **)__cxa_allocate_exception(0x28u);
            sub_1824A6((__int64 *)&src, "Overflow encountered when expanding vector", v181);
            *v180 = (char *)off_1C63128;
            sub_2333C0(v180 + 1, &src);
            sub_233E40((__int64)&src);
            __cxa_throw(v180, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v153 = (unsigned int *)sub_186B300(v96 - 1, v152);
          v96 = v153 + 2;
          v154 = v153[1];
          v94[83] = v153 + 2;
          *v153 = v151;
          v98 = v154 + 1;
          *(_QWORD *)&v153[2 * v154 + 2] = v93;
          v153[1] = v154 + 1;
        }
        else
        {
          v98 = v97 + 1;
          v96[v97] = v93;
          *((_DWORD *)v96 - 1) = v97 + 1;
        }
      }
      else
      {
        v165 = (_QWORD *)sub_186B270(0x18u);
        v98 = 1;
        *v165 = 2;
        v166 = v165;
        v96 = v165 + 1;
        v94[83] = v96;
        v166[1] = v93;
        *((_DWORD *)v166 + 1) = 1;
      }
      if ( v98 )
      {
        while ( 1 )
        {
          v99 = (unsigned int)(v98 - 1);
          v100 = v96[v99];
          *((_DWORD *)v96 - 1) = v99;
          if ( *(char *)(v100 + 3) < 0 )
          {
            v155 = *(_QWORD *)(v100 + 8);
            if ( v155 )
            {
              v156 = v94[81];
              v18 = (*(_DWORD *)(v155 + 8))-- == 1;
              if ( v18 )
                sub_15D7BC0(v156, v155);
            }
            sub_17E9C40(v94[82], 16, v100);
          }
          else
          {
            v101 = *(unsigned int **)(v100 + 8);
            v102 = (*v101 + 0x3FFFFFFF) & 0x3FFFFFFF | *v101 & 0xC0000000;
            *v101 = v102;
            if ( (v102 & 0x3FFFFFFF) == 0 )
            {
              v167 = *((_DWORD *)v96 - 2);
              if ( v167 == v98 - 1 )
              {
                v173 = (3 * v167 + 1) >> 1;
                v174 = 8 * v173 + 8;
                if ( 8 * v98 >= (unsigned int)v174 || v167 >= v173 )
                  goto LABEL_279;
                v175 = (unsigned int *)sub_186B300(v96 - 1, v174);
                v168 = v175 + 2;
                v94[83] = v175 + 2;
                *v175 = v173;
              }
              else
              {
                v168 = (_DWORD *)v94[83];
              }
              v169 = *(v168 - 1);
              *(_QWORD *)&v168[2 * v169] = v101;
              *(v168 - 1) = v169 + 1;
            }
            v103 = *(unsigned int **)(v100 + 16);
            v104 = (*v103 + 0x3FFFFFFF) & 0x3FFFFFFF | *v103 & 0xC0000000;
            *v103 = v104;
            v105 = v104 & 0x3FFFFFFF;
            if ( !v105 )
            {
              v170 = (_QWORD *)v94[83];
              if ( v170 )
              {
                v105 = *((_DWORD *)v170 - 1);
                if ( v105 == *((_DWORD *)v170 - 2) )
                {
                  v176 = (3 * v105 + 1) >> 1;
                  v177 = 8 * v176 + 8;
                  if ( 8 * v105 + 8 >= v177 )
                    goto LABEL_279;
                  v191 = (3 * v105 + 1) >> 1;
                  if ( v105 >= v176 )
                    goto LABEL_279;
                  v178 = (unsigned int *)sub_186B300(v170 - 1, v177);
                  v170 = v178 + 2;
                  v94[83] = v178 + 2;
                  v105 = v178[1];
                  *v178 = v191;
                }
              }
              else
              {
                v179 = (_QWORD *)sub_186B270(0x18u);
                *v179 = 2;
                v170 = v179 + 1;
                v94[83] = v170;
              }
              v170[v105] = v103;
              *((_DWORD *)v170 - 1) = v105 + 1;
            }
            sub_17E9C40(v94[82], 24, v100);
          }
          v96 = (_QWORD *)v94[83];
          if ( v96 )
          {
            v98 = *((_DWORD *)v96 - 1);
            if ( v98 )
              continue;
          }
          break;
        }
      }
    }
  }
LABEL_76:
  v18 = (*(_DWORD *)(v9 + 48))-- == 1;
  if ( v18 )
  {
    (**(void (__fastcall ***)(__int64))v9)(v9);
    sub_186B220((void *)v9);
  }
  if ( v195 )
  {
    v190 = *((_DWORD *)v195 + 2);
    *((_DWORD *)v195 + 2) = v190 - 1;
    if ( v190 == 1 )
    {
      (**v195)(v195);
      sub_186B220(v195);
    }
  }
  if ( v188 )
    sub_186B220(&v188[-1].private_2);
  result = (__int64)ptr;
  if ( ptr )
    result = sub_186B220(ptr);
  if ( v7 )
  {
    v61 = v7;
    v62 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 < v62 )
    {
      do
      {
        while ( 1 )
        {
          v63 = *v61;
          if ( *v61 )
          {
            v18 = (*(_DWORD *)(v63 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v61 >= v62 )
            return sub_186B220(v7 - 1);
        }
        ++v61;
        sub_15D7BC0(v194, v63);
      }
      while ( (unsigned __int64)v61 < v62 );
    }
    return sub_186B220(v7 - 1);
  }
  return result;
}

