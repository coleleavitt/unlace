__int64 __fastcall sub_784AE0(__m128i **a1, const __m128i **a2, __int64 a3, double a4)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _DWORD *v10; // rax
  const __m128i *v11; // rsi
  __m128i *v12; // rcx
  __int64 v13; // rax
  char v14; // al
  const __m128i *v15; // rbx
  const __m128i *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  const __m128i *v26; // rcx
  __int64 v27; // rsi
  char i; // dl
  unsigned int v29; // edx
  int v30; // edx
  __int64 *v31; // rax
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int v34; // r15d
  unsigned int *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  __m128i *v38; // rdi
  void (*v39)(); // rax
  unsigned __int64 *v40; // rcx
  unsigned __int64 *v41; // rbx
  unsigned __int64 *v42; // r15
  int v43; // eax
  __int64 (__fastcall *v44)(__m128i *, unsigned int); // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __m128i *v47; // rbx
  __int64 v48; // rsi
  char *v49; // rbx
  __int64 v50; // rdx
  char *v51; // r15
  _QWORD *v52; // rax
  unsigned int *v53; // rax
  char *v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rsi
  const __m128i *v58; // r8
  const __m128i *v59; // r13
  __int64 v60; // rax
  __int64 v61; // rbx
  void (__fastcall ***v62)(void *); // r15
  bool v63; // zf
  void (__fastcall ***v64)(_QWORD); // rbx
  const __m128i *v65; // r14
  unsigned int v66; // edx
  unsigned int v67; // ebx
  __int64 v68; // r13
  __int64 *v69; // rbx
  unsigned __int64 v70; // r13
  __int64 v71; // rsi
  unsigned int v73; // ecx
  size_t v74; // rsi
  unsigned int *v75; // rax
  __m128i *v76; // rbx
  __int64 v77; // rax
  __m128i *v78; // rax
  __int64 v79; // r10
  char *v80; // rbx
  __m128i *v81; // r15
  char *v82; // r10
  __int64 v83; // r8
  unsigned int v84; // r11d
  __int32 v85; // r9d
  __m128i *v86; // rcx
  __int64 v87; // rax
  __m128i *v88; // rsi
  __m128i *v89; // rax
  __m128i *v90; // rdx
  __int32 v91; // edi
  __int64 *v92; // rax
  const __m128i *v93; // rbx
  _QWORD *v94; // rax
  const __m128i *v95; // r15
  const char *v96; // rsi
  size_t v97; // rax
  size_t v98; // rbx
  _QWORD *v99; // rax
  unsigned __int64 *v100; // rax
  size_t v101; // rdx
  unsigned __int64 v102; // r8
  __int64 v103; // rbx
  _QWORD *v104; // rdi
  __int64 v105; // rax
  _DWORD *v106; // rbx
  _DWORD *v107; // rbx
  unsigned int *v108; // r15
  __int64 v109; // rcx
  unsigned int *v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rsi
  _DWORD *v113; // rax
  int v114; // eax
  __int32 v115; // edi
  __int64 v116; // rax
  unsigned int v117; // r8d
  int v118; // esi
  __int64 v119; // rax
  __m128i *v120; // rdi
  unsigned int *v121; // r11
  __m128i *v122; // rax
  __int32 v123; // edx
  __int64 v124; // rax
  unsigned int v125; // r8d
  _QWORD *v126; // rax
  __m128i *v127; // rax
  __int64 v128; // r11
  __m128i *v129; // rdx
  const __m128i *v130; // r11
  const __m128i *v131; // rax
  __int64 v132; // rdx
  __m128i *v133; // rsi
  unsigned int *v134; // rdi
  __m128i *v135; // rdx
  __m128i v136; // xmm0
  __int32 v137; // edx
  __int64 v138; // r8
  unsigned __int64 v139; // rdi
  unsigned __int64 *v140; // rdi
  __int64 v141; // r8
  _QWORD *v142; // rdi
  __int64 j; // rax
  char v144; // al
  const __m128i *v145; // rbx
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // r13
  void (__fastcall ***v149)(void *); // r15
  void (__fastcall ***v150)(_QWORD); // rbx
  _QWORD *v151; // r15
  __int64 v152; // rsi
  __m128i *v153; // rdi
  char **exception; // r14
  __int64 v155; // rdx
  char **v156; // r13
  __int64 v157; // rdx
  __int64 v158; // [rsp+20h] [rbp-130h]
  __m128i *v159; // [rsp+20h] [rbp-130h]
  __int32 v160; // [rsp+28h] [rbp-128h]
  __int64 v161; // [rsp+28h] [rbp-128h]
  char *v162; // [rsp+30h] [rbp-120h]
  __int32 v163; // [rsp+30h] [rbp-120h]
  __m128i *v164; // [rsp+38h] [rbp-118h]
  unsigned __int64 *v165; // [rsp+38h] [rbp-118h]
  size_t nb; // [rsp+40h] [rbp-110h]
  __int64 n; // [rsp+40h] [rbp-110h]
  size_t nc; // [rsp+40h] [rbp-110h]
  size_t na; // [rsp+40h] [rbp-110h]
  __m128i *v170; // [rsp+48h] [rbp-108h]
  __int8 v171; // [rsp+50h] [rbp-100h]
  int v172; // [rsp+50h] [rbp-100h]
  __m128i *v173; // [rsp+50h] [rbp-100h]
  void *v174; // [rsp+50h] [rbp-100h]
  void *v175; // [rsp+50h] [rbp-100h]
  __int64 v176; // [rsp+58h] [rbp-F8h]
  int v177; // [rsp+58h] [rbp-F8h]
  size_t v178; // [rsp+58h] [rbp-F8h]
  unsigned int v179; // [rsp+58h] [rbp-F8h]
  __m128i *v180; // [rsp+58h] [rbp-F8h]
  _QWORD *v181; // [rsp+58h] [rbp-F8h]
  _QWORD *v182; // [rsp+60h] [rbp-F0h]
  unsigned int v183; // [rsp+60h] [rbp-F0h]
  unsigned int v184; // [rsp+60h] [rbp-F0h]
  _DWORD *v185; // [rsp+60h] [rbp-F0h]
  char v186; // [rsp+68h] [rbp-E8h]
  __int64 v187; // [rsp+68h] [rbp-E8h]
  __int64 v188; // [rsp+68h] [rbp-E8h]
  unsigned int v190; // [rsp+80h] [rbp-D0h]
  int v191; // [rsp+80h] [rbp-D0h]
  __m128i *v192; // [rsp+80h] [rbp-D0h]
  unsigned int v193; // [rsp+80h] [rbp-D0h]
  __int64 v194; // [rsp+80h] [rbp-D0h]
  __int64 v195; // [rsp+80h] [rbp-D0h]
  __int64 v196; // [rsp+88h] [rbp-C8h]
  unsigned int *v197; // [rsp+88h] [rbp-C8h]
  void *v198; // [rsp+98h] [rbp-B8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v200; // [rsp+A8h] [rbp-A8h]
  int v201; // [rsp+B0h] [rbp-A0h]
  _BYTE v202[16]; // [rsp+C0h] [rbp-90h] BYREF
  unsigned int *v203; // [rsp+D0h] [rbp-80h]
  void *src; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v205; // [rsp+F8h] [rbp-58h]
  _QWORD v206[10]; // [rsp+100h] [rbp-50h] BYREF

  sub_EE4F60("sat");
  v171 = (*a2)[7].m128i_i8[11];
  v186 = v171 & 0x10;
  sub_EDC6C0((unsigned int)*a2, (_DWORD)a2, v6, v7, v8, v9);
  sub_16234C0(v202, *a1);
  v10 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  v11 = *a2;
  v10[2] = -2;
  v12 = a1[4];
  *((_QWORD *)v10 + 2) = 0;
  v10[6] = -2;
  *((_QWORD *)v10 + 4) = 0;
  v10[10] = -2;
  *((_QWORD *)v10 + 6) = 0;
  v10[14] = -2;
  *((_QWORD *)v10 + 8) = 0;
  v10[18] = -2;
  *((_QWORD *)v10 + 10) = 0;
  v10[22] = -2;
  *((_QWORD *)v10 + 12) = 0;
  v10[26] = -2;
  *((_QWORD *)v10 + 14) = 0;
  v10[30] = -2;
  ptr = v10;
  v200 = 8;
  v201 = 0;
  v182 = a1 + 1;
  v176 = (__int64)(a1 + 5);
  sub_787FA0((_DWORD)a1 + 8, (_DWORD)v11, (_DWORD)a1 + 40, (_DWORD)v12, (unsigned int)v202, (unsigned int)&ptr, 0);
  v170 = *a1;
  v13 = sub_17F9BB0();
  v14 = sub_1859610(v13, "model_validate", 0);
  v15 = *a2;
  v16 = *a2;
  if ( !v14 || (v17 = v15[4].m128i_i64[1]) == 0 )
  {
    v19 = nullptr;
    goto LABEL_30;
  }
  v18 = v15->m128i_i64[0];
  v19 = nullptr;
  v20 = 0;
  while ( 2 )
  {
    v27 = v17;
    for ( i = *(_BYTE *)(v17 + 3) >> 6; !i; i = *(_BYTE *)(v27 + 3) >> 6 )
      v27 = *(_QWORD *)(v27 + 16);
    if ( i == 1 )
    {
      v29 = *(_DWORD *)(v27 + 4) + 1;
    }
    else
    {
      if ( i == 2 )
      {
        if ( v20 >= *(_DWORD *)(v27 + 4) - 1 )
          break;
        goto LABEL_17;
      }
      v29 = *(_DWORD *)(v27 + 4);
    }
    if ( v20 >= v29 )
      break;
LABEL_17:
    if ( (v16[7].m128i_i8[11] & 0x20) != 0 )
    {
      v21 = *(_QWORD *)(v18 + 864);
      v196 = v21;
      goto LABEL_5;
    }
    v30 = 17;
    while ( 1 )
    {
      if ( *(char *)(v17 + 3) < 0 )
      {
        if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
        {
          v31 = (__int64 *)(*(_QWORD *)(v17 + 16) + 8LL * v20);
          goto LABEL_22;
        }
        goto LABEL_24;
      }
      if ( v20 == *(_DWORD *)(v17 + 4) )
        break;
LABEL_24:
      v17 = *(_QWORD *)(v17 + 16);
      if ( !--v30 )
      {
        sub_233F80((__int64 *)(v18 + 616), &v16[4].m128i_i32[2]);
        v31 = (__int64 *)(*(_QWORD *)(v16[4].m128i_i64[1] + 16) + 8LL * v20);
        goto LABEL_22;
      }
    }
    v31 = (__int64 *)(v17 + 8);
LABEL_22:
    v21 = *v31;
    v196 = v21;
LABEL_5:
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    if ( v19 )
    {
      v22 = *((_DWORD *)v19 - 1);
      if ( v22 == *((_DWORD *)v19 - 2) )
      {
        v32 = (3 * v22 + 1) >> 1;
        v33 = 8 * v32 + 8;
        v34 = v32;
        if ( 8 * v22 + 8 >= (unsigned int)v33 || v22 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_10FA3E((__int64 *)&src, "Overflow encountered when expanding vector", v155);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &src);
          sub_233E40((__int64)&src);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v19 - 1, v33);
        v36 = v35[1];
        v19 = v35 + 2;
        *v35 = v34;
        LODWORD(v35) = v36;
        v25 = &v19[v36];
        v24 = (_DWORD)v35 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v19[v23];
      }
    }
    else
    {
      v94 = (_QWORD *)sub_186B270(0x18u);
      v25 = v94 + 1;
      *v94 = 2;
      v24 = 1;
      v19 = v25;
    }
    v26 = *a2;
    ++v20;
    *v25 = v196;
    v16 = v26;
    *((_DWORD *)v19 - 1) = v24;
    v17 = v26[4].m128i_i64[1];
    if ( v17 )
    {
      v18 = v26->m128i_i64[0];
      continue;
    }
    break;
  }
LABEL_30:
  sub_ED2DA0(v16);
  sub_15D6D90((*a2)->m128i_i64[0]);
  v37 = (unsigned __int64)a1[6];
  v38 = (__m128i *)(*a2)->m128i_i64[1];
  if ( v38 )
  {
    v39 = *(void (**)())(v38->m128i_i64[0] + 72);
    if ( v39 != nullsub_175 )
    {
      ((void (__fastcall *)(__m128i *, unsigned __int64))v39)(v38, v37);
      v37 = (unsigned __int64)a1[6];
    }
  }
  v40 = *(unsigned __int64 **)v37;
  if ( *(_QWORD *)v37 )
  {
    v41 = &v40[4 * *((unsigned int *)v40 - 1)];
    if ( v40 != v41 )
    {
      v42 = *(unsigned __int64 **)v37;
      do
      {
        v37 = *v42;
        v38 = *a1;
        if ( (unsigned __int8)sub_15D2CB0(*a1, *v42) )
        {
          v37 = *v42;
          v38 = (__m128i *)v202;
          v43 = sub_7E6C80(v202);
          if ( v43 != 0x7FFFFFFF )
          {
            v38 = a1[4];
            v44 = *(__int64 (__fastcall **)(__m128i *, unsigned int))(v38->m128i_i64[0] + 48);
            v37 = (unsigned int)((*a1)[54].m128i_i64[0] == v42[2]) + 2 * v43;
            if ( (char *)v44 == (char *)sub_784580 )
            {
              v45 = v38[206].m128i_i64[0];
              v46 = (unsigned int)v37 >> 1;
              if ( v45 && (unsigned int)v46 < *(_DWORD *)(v45 - 4) )
              {
                v37 = !(v37 & 1);
                *(_BYTE *)(v38[215].m128i_i64[1] + v46) = v37;
                *(_BYTE *)(v38[216].m128i_i64[0] + v46) = v37;
              }
            }
            else
            {
              v44(v38, v37);
            }
          }
        }
        v42 += 4;
      }
      while ( v41 != v42 );
    }
  }
  if ( (unsigned int)sub_180B130(v38) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v47 = a1[4];
      v48 = sub_180B150(v38, v37);
      sub_11B8B90(v47, v48);
      sub_186A500(v47, v48);
    }
    else
    {
      v76 = a1[4];
      v77 = sub_180B150(v38, v37);
      sub_11B8B90(v76, v77);
    }
  }
  v49 = (char *)ptr;
  v50 = 16LL * (unsigned int)v200;
  v51 = (char *)ptr + v50;
  if ( ptr == (char *)ptr + v50 )
    goto LABEL_229;
  while ( *(_QWORD *)v49 <= 1u )
  {
    v49 += 16;
    if ( v51 == v49 )
      goto LABEL_229;
  }
  if ( v51 == v49 )
  {
LABEL_229:
    v197 = nullptr;
    v153 = a1[4];
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0x10u);
    *v52 = 2;
    v53 = (unsigned int *)(v52 + 1);
    v197 = v53;
    while ( 1 )
    {
      *v53 = *((_DWORD *)v49 + 2);
      v54 = v49 + 16;
      ++*(v197 - 1);
      if ( v51 == v49 + 16 )
      {
        v153 = a1[4];
        goto LABEL_63;
      }
      while ( 1 )
      {
        v49 = v54;
        if ( *(_QWORD *)v54 > 1u )
          break;
        v54 += 16;
        if ( v51 == v54 )
        {
          v153 = a1[4];
          goto LABEL_63;
        }
      }
      if ( v51 == v54 )
        break;
      v55 = *(v197 - 1);
      if ( (_DWORD)v55 == *(v197 - 2) )
      {
        v73 = (unsigned int)(3 * v55 + 1) >> 1;
        v74 = 4 * v73 + 8;
        if ( 4 * (int)v55 + 8 >= (unsigned int)v74 || (unsigned int)v55 >= v73 )
        {
          v156 = (char **)__cxa_allocate_exception(0x28u);
          sub_10FA3E((__int64 *)&src, "Overflow encountered when expanding vector", v157);
          *v156 = (char *)off_1C63128;
          sub_2333C0(v156 + 1, &src);
          sub_233E40((__int64)&src);
          __cxa_throw(v156, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v190 = (unsigned int)(3 * v55 + 1) >> 1;
        v75 = (unsigned int *)sub_186B300(v197 - 2, v74);
        v197 = v75 + 2;
        *v75 = v190;
        v53 = &v75[v75[1] + 2];
      }
      else
      {
        v53 = &v197[v55];
      }
    }
    v153 = a1[4];
  }
LABEL_63:
  v56 = sub_11CC760((int)v153);
  if ( !v56 )
  {
    v95 = *a2;
    v96 = (const char *)a1[4][237].m128i_i64[1];
    src = v206;
    if ( !v96 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v97 = strlen(v96);
    v98 = v97;
    if ( v97 > 0xF )
    {
      src = (void *)operator new(v97 + 1);
      v142 = src;
      v206[0] = v98;
    }
    else
    {
      if ( v97 == 1 )
      {
        LOBYTE(v206[0]) = *v96;
        goto LABEL_130;
      }
      if ( !v97 )
      {
LABEL_130:
        v99 = v206;
        goto LABEL_131;
      }
      v142 = v206;
    }
    memcpy(v142, v96, v98);
    v99 = src;
LABEL_131:
    v205 = v98;
    *((_BYTE *)v99 + v98) = 0;
    if ( &src == (void **)&v95[2].m128i_u64[1] )
      goto LABEL_136;
    v100 = (unsigned __int64 *)v95[2].m128i_i64[1];
    v101 = v205;
    if ( v100 == &v95[3].m128i_u64[1] )
    {
      if ( (unsigned __int64)v205 <= 0xF )
      {
LABEL_134:
        if ( !v205 )
        {
LABEL_135:
          v95[3].m128i_i64[0] = v101;
          *((_BYTE *)v100 + v101) = 0;
LABEL_136:
          if ( src != v206 )
            operator delete(src, v206[0] + 1LL);
          goto LABEL_67;
        }
LABEL_236:
        if ( v101 == 1 )
        {
          *(_BYTE *)v100 = *(_BYTE *)src;
          v100 = (unsigned __int64 *)v95[2].m128i_i64[1];
        }
        else
        {
          v175 = (void *)v101;
          memcpy(v100, src, v101);
          v100 = (unsigned __int64 *)v95[2].m128i_i64[1];
          v101 = (size_t)v175;
        }
        goto LABEL_135;
      }
      if ( v205 >= 0 )
      {
        if ( (unsigned __int64)v205 <= 0x1D )
        {
          v139 = 31;
          v138 = 30;
          goto LABEL_233;
        }
        goto LABEL_232;
      }
    }
    else
    {
      v102 = v95[3].m128i_u64[1];
      if ( v102 >= v205 )
        goto LABEL_134;
      if ( v205 >= 0 )
      {
        v138 = 2 * v102;
        if ( v205 < (unsigned __int64)v138 )
        {
          v139 = v138 + 1;
          if ( v138 >= 0 )
            goto LABEL_233;
          goto LABEL_247;
        }
LABEL_232:
        v138 = v205;
        v139 = v205 + 1;
        if ( v205 + 1 >= 0 )
        {
LABEL_233:
          na = v205;
          v174 = (void *)v138;
          v100 = (unsigned __int64 *)operator new(v139);
          v140 = (unsigned __int64 *)v95[2].m128i_i64[1];
          v141 = (__int64)v174;
          v101 = na;
          if ( &v95[3].m128i_u64[1] != v140 )
          {
            v165 = v100;
            operator delete(v140, v95[3].m128i_i64[1] + 1);
            v100 = v165;
            v101 = na;
            v141 = (__int64)v174;
          }
          v95[2].m128i_i64[1] = (__int64)v100;
          v95[3].m128i_i64[1] = v141;
          goto LABEL_236;
        }
LABEL_247:
        std::__throw_bad_alloc();
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v56 != -1 )
  {
    if ( v56 == 1 && !(unsigned __int8)sub_786790(v182) )
    {
      if ( (v171 & 4) != 0 )
      {
        v107 = (_DWORD *)sub_186B270(0xA0u);
        sub_1373200(v107, *a1);
        v108 = v203;
        ++v107[4];
        v198 = v107;
        if ( v108 )
        {
          v109 = 4LL * *(v108 - 1);
          v110 = &v108[v109];
          if ( &v108[v109] != v108 )
          {
            v192 = a1[4];
            do
            {
              v111 = *(_QWORD *)v108;
              if ( !*(_WORD *)(*(_QWORD *)v108 + 4LL) && !*(_DWORD *)(v111 + 24) )
              {
                v112 = *(_QWORD *)(v111 + 16);
                v113 = *(_DWORD **)(v112 + 24);
                if ( !v113 || *v113 == -1 )
                {
                  v114 = *(_DWORD *)(v192[149].m128i_i64[0] + 4LL * v108[2]);
                  if ( v114 == -1 )
                  {
                    sub_135F9B0(v198, v112, (*a1)[54].m128i_i64[0]);
                  }
                  else if ( v114 == 1 )
                  {
                    sub_135F9B0(v198, v112, (*a1)[53].m128i_i64[1]);
                  }
                }
              }
              v108 += 4;
            }
            while ( v110 != v108 );
          }
        }
        v144 = sub_786800(v182);
        if ( v19 )
        {
          v181 = &v19[*((unsigned int *)v19 - 1)];
          if ( v181 != v19 && !v144 )
          {
            v151 = v19;
            do
            {
              v188 = *v151;
              v152 = *v151;
              if ( (unsigned __int8)sub_13742D0(v198, *v151) )
              {
                sub_180B130(v198);
                if ( (unsigned __int8)sub_186A530(a4) )
                {
                  sub_186A4C0(a4);
                  v195 = sub_180B150(v198, v152);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(&src, v188, *a1, 0, 0, 0);
                  sub_160E8B0(v195, &src);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_18572D0(v206);
                  sub_186A500(v206, "\n");
                }
                else
                {
                  v194 = sub_180B150(v198, v152);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(&src, v188, *a1, 0, 0, 0);
                  sub_160E8B0(v194, &src);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_18572D0(v206);
                }
              }
              ++v151;
            }
            while ( v181 != v151 );
          }
        }
        sub_786820(v182, &v198);
        v145 = *a2;
        v146 = sub_1336B20(v198);
        v147 = sub_1336AB0(v145->m128i_i64[1], v146);
        v148 = v147;
        if ( v147 )
          ++*(_DWORD *)(v147 + 8);
        v149 = (void (__fastcall ***)(void *))v145->m128i_i64[1];
        if ( v149 )
        {
          v63 = (*((_DWORD *)v149 + 2))-- == 1;
          if ( v63 )
          {
            (**v149)(v149);
            sub_186B220(v149);
          }
        }
        v145->m128i_i64[1] = v148;
        v150 = (void (__fastcall ***)(_QWORD))v198;
        if ( v198 )
        {
          v63 = (*((_DWORD *)v198 + 4))-- == 1;
          if ( v63 )
          {
            (**v150)(v150);
            sub_186B220(v150);
          }
        }
      }
      goto LABEL_77;
    }
LABEL_67:
    sub_11C7890(a1[4]);
    v57 = (__int64)a1[4];
    v58 = *a2;
    src = nullptr;
    sub_782860(a1 + 3, v57, (__int64)v202, v176, v58, (__int64)&src);
    v59 = *a2;
    v60 = sub_1336AB0((*a2)->m128i_i64[1], src);
    v61 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    v62 = (void (__fastcall ***)(void *))v59->m128i_i64[1];
    if ( v62 )
    {
      v63 = (*((_DWORD *)v62 + 2))-- == 1;
      if ( v63 )
      {
        (**v62)(v62);
        sub_186B220(v62);
      }
    }
    v59->m128i_i64[1] = v61;
    if ( v186 || (unsigned __int8)sub_786790(v182) )
    {
      v93 = *a2;
      v93[7].m128i_i8[11] = ((unsigned __int8)sub_ED2900((unsigned __int8)(*a2)[7].m128i_i8[11] >> 6, 2) << 6)
                          | v93[7].m128i_i8[11] & 0x3F;
    }
    v64 = (void (__fastcall ***)(_QWORD))src;
    if ( src )
    {
      v63 = (*((_DWORD *)src + 2))-- == 1;
      if ( v63 )
      {
        (**v64)(v64);
        sub_186B220(v64);
      }
    }
    goto LABEL_77;
  }
  if ( !v186 )
  {
    v106 = nullptr;
    goto LABEL_150;
  }
  v164 = a1[4];
  v78 = (__m128i *)sub_186B270(0xC0u);
  v79 = (unsigned int)v200;
  v80 = (char *)ptr;
  v78->m128i_i64[0] = 0;
  v81 = v78;
  v78[1].m128i_i64[1] = 0;
  v78[3].m128i_i64[0] = 0;
  v82 = &v80[16 * v79];
  v78[4].m128i_i64[1] = 0;
  v78[6].m128i_i64[0] = 0;
  v78[7].m128i_i64[1] = 0;
  v78[9].m128i_i64[0] = 0;
  v78[10].m128i_i64[1] = 0;
  if ( v80 == v82 )
  {
    v106 = (_DWORD *)v164[248].m128i_i64[0];
    if ( v106 )
    {
      v191 = 7;
      v86 = v78 + 12;
      v116 = v164[248].m128i_i64[0];
      v187 = 192;
      goto LABEL_180;
    }
LABEL_196:
    sub_186B220(v81);
    goto LABEL_150;
  }
  while ( *(_QWORD *)v80 <= 1u )
  {
    v80 += 16;
    if ( v82 == v80 )
      goto LABEL_241;
  }
  if ( v82 == v80 )
  {
LABEL_241:
    v116 = v164[248].m128i_i64[0];
    if ( v116 )
    {
      v191 = 7;
      v86 = v81 + 12;
      v187 = 192;
      goto LABEL_180;
    }
    v106 = nullptr;
    goto LABEL_196;
  }
  v177 = 0;
  v83 = *(_QWORD *)v80;
  v84 = 8;
  v172 = 0;
  while ( 2 )
  {
    v85 = *((_DWORD *)v80 + 2);
    v183 = 2 * v84;
    if ( 3 * v84 >= 4 * (v177 + v172) )
    {
      v191 = v84 - 1;
      v187 = 24LL * v84;
      v86 = (__m128i *)((char *)v81 + v187);
      goto LABEL_108;
    }
    v158 = v83;
    v160 = *((_DWORD *)v80 + 2);
    v162 = v82;
    v193 = v84;
    n = 24LL * v183;
    v187 = n;
    v127 = (__m128i *)sub_186B270(n);
    v180 = v127;
    v128 = v193;
    v82 = v162;
    v85 = v160;
    v83 = v158;
    if ( v183 )
    {
      v129 = &v127[3 * (v193 & 0x7FFFFFFE)];
      do
      {
        v127->m128i_i64[0] = 0;
        v127 += 3;
        v127[-2].m128i_i64[1] = 0;
      }
      while ( v127 != v129 );
      v191 = v183 - 1;
      v130 = (__m128i *)((char *)v81 + 24 * v128);
      v86 = (__m128i *)((char *)v180 + n);
      goto LABEL_203;
    }
    v191 = -1;
    v86 = v127;
    v130 = (__m128i *)((char *)v81 + 24 * v128);
    if ( v81 != v130 )
    {
LABEL_203:
      v131 = v81;
      do
      {
        while ( v131->m128i_i32[1] != 2 )
        {
          v131 = (const __m128i *)((char *)v131 + 24);
          if ( v131 == v130 )
            goto LABEL_211;
        }
        v132 = 24LL * (v131->m128i_i32[0] & (unsigned int)v191);
        v133 = (__m128i *)((char *)v180 + v132);
        if ( n == v132 )
        {
LABEL_222:
          v135 = v180;
          if ( v180 == v133 )
          {
LABEL_228:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v134 = v197;
          while ( v135->m128i_i32[1] )
          {
            v135 = (__m128i *)((char *)v135 + 24);
            if ( v133 == v135 )
              goto LABEL_228;
          }
        }
        else
        {
          v134 = v197;
          v135 = (__m128i *)((char *)v180 + v132);
          while ( v135->m128i_i32[1] )
          {
            v135 = (__m128i *)((char *)v135 + 24);
            if ( v135 == v86 )
              goto LABEL_222;
          }
        }
        v136 = _mm_loadu_si128(v131);
        v197 = v134;
        v131 = (const __m128i *)((char *)v131 + 24);
        *v135 = v136;
        v135[1].m128i_i64[0] = v131[-1].m128i_i64[1];
      }
      while ( v131 != v130 );
    }
LABEL_211:
    if ( v81 )
    {
      v159 = v86;
      v161 = v83;
      v163 = v85;
      nc = (size_t)v82;
      sub_186B220(v81);
      v86 = v159;
      v83 = v161;
      v85 = v163;
      v82 = (char *)nc;
    }
    v81 = v180;
    v84 = v183;
    v177 = 0;
LABEL_108:
    v87 = 24LL * (v85 & (unsigned int)v191);
    v88 = (__m128i *)((char *)v81 + v87);
    if ( v87 == v187 )
    {
      v90 = nullptr;
LABEL_166:
      if ( v88 == v81 )
      {
LABEL_175:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v89 = v81;
      while ( 1 )
      {
        v115 = v89->m128i_i32[1];
        if ( v115 != 2 )
          break;
        if ( v85 == v89->m128i_i32[0] )
        {
          if ( v85 == v89->m128i_i32[2] )
            goto LABEL_116;
          v89 = (__m128i *)((char *)v89 + 24);
          if ( v88 == v89 )
            goto LABEL_175;
        }
        else
        {
LABEL_170:
          v89 = (__m128i *)((char *)v89 + 24);
          if ( v88 == v89 )
            goto LABEL_175;
        }
      }
      if ( !v115 )
        goto LABEL_176;
      v90 = v89;
      goto LABEL_170;
    }
    v89 = (__m128i *)((char *)v81 + v87);
    v90 = nullptr;
    while ( 1 )
    {
      v91 = v89->m128i_i32[1];
      if ( v91 != 2 )
        break;
      if ( v85 == v89->m128i_i32[0] && v85 == v89->m128i_i32[2] )
      {
LABEL_116:
        v89->m128i_i32[2] = v85;
        v89[1].m128i_i64[0] = v83;
        v89->m128i_i32[1] = 2;
        goto LABEL_117;
      }
LABEL_112:
      v89 = (__m128i *)((char *)v89 + 24);
      if ( v89 == v86 )
        goto LABEL_166;
    }
    if ( v91 )
    {
      v90 = v89;
      goto LABEL_112;
    }
LABEL_176:
    if ( v90 )
      --v177;
    else
      v90 = v89;
    v90->m128i_i32[2] = v85;
    v90[1].m128i_i64[0] = v83;
    v90->m128i_i32[1] = 2;
    v90->m128i_i32[0] = v85;
    ++v172;
LABEL_117:
    v92 = (__int64 *)(v80 + 16);
    if ( v82 != v80 + 16 )
    {
      while ( 1 )
      {
        v83 = *v92;
        v80 = (char *)v92;
        if ( (unsigned __int64)*v92 > 1 )
          break;
        v92 += 2;
        if ( v82 == (char *)v92 )
          goto LABEL_179;
      }
      if ( v82 != (char *)v92 )
        continue;
    }
    break;
  }
LABEL_179:
  v116 = v164[248].m128i_i64[0];
  if ( !v116 )
  {
    v106 = nullptr;
    goto LABEL_195;
  }
LABEL_180:
  v117 = 0;
  v106 = nullptr;
  while ( v117 < *(_DWORD *)(v116 - 4) )
  {
    v118 = *(_DWORD *)(v116 + 4LL * v117);
    v119 = 24LL * (v118 & (unsigned int)v191);
    v120 = (__m128i *)((char *)v81 + v119);
    if ( v119 == v187 )
    {
LABEL_214:
      if ( v120 != v81 )
      {
        v121 = v197;
        v122 = v81;
        while ( 1 )
        {
          v137 = v122->m128i_i32[1];
          if ( v137 == 2 )
          {
            if ( v118 == v122->m128i_i32[0] && v118 == v122->m128i_i32[2] )
              goto LABEL_189;
          }
          else if ( !v137 )
          {
            goto LABEL_197;
          }
          v122 = (__m128i *)((char *)v122 + 24);
          if ( v120 == v122 )
            goto LABEL_197;
        }
      }
      goto LABEL_198;
    }
    v121 = v197;
    v122 = (__m128i *)((char *)v81 + v119);
    while ( 2 )
    {
      v123 = v122->m128i_i32[1];
      if ( v123 == 2 )
      {
        if ( v118 == v122->m128i_i32[0] && v118 == v122->m128i_i32[2] )
        {
LABEL_189:
          v197 = v121;
          goto LABEL_190;
        }
        goto LABEL_185;
      }
      if ( v123 )
      {
LABEL_185:
        v122 = (__m128i *)((char *)v122 + 24);
        if ( v122 == v86 )
          goto LABEL_214;
        continue;
      }
      break;
    }
LABEL_197:
    v197 = v121;
LABEL_198:
    v122 = nullptr;
LABEL_190:
    v178 = (size_t)v86;
    v184 = v117;
    v173 = *a1;
    v124 = sub_15D3210(*a1, v122[1].m128i_i64[0]);
    v125 = v184;
    v86 = (__m128i *)v178;
    if ( v106 )
    {
      if ( v124 )
      {
        v185 = (_DWORD *)v124;
        if ( (_DWORD *)v124 != v106 )
        {
          nb = v178;
          v179 = v125;
          v126 = (_QWORD *)sub_17E9C90(v173[41].m128i_i64[0], 24);
          v125 = v179;
          v86 = (__m128i *)nb;
          *v106 = (*v106 + 1) & 0x3FFFFFFF | *v106 & 0xC0000000;
          *v185 = (*v185 + 1) & 0x3FFFFFFF | *v185 & 0xC0000000;
          *v126 = 0;
          v126[2] = v185;
          v126[1] = v106;
          v106 = v126;
        }
      }
    }
    else
    {
      v106 = (_DWORD *)v124;
    }
    v117 = v125 + 1;
    v116 = v164[248].m128i_i64[0];
    if ( v116 )
      continue;
    break;
  }
LABEL_195:
  if ( v81 )
    goto LABEL_196;
LABEL_150:
  sub_EDB570(*a2, (*a1)[54].m128i_i64[0], 0, v106);
LABEL_77:
  (*a2)[7].m128i_i32[2] = ((*a2)[7].m128i_i32[2] + 1) & 0x3FFFFFF | (*a2)[7].m128i_i32[2] & 0xFC000000;
  v65 = *a2;
  if ( v65 )
    ++v65[2].m128i_i32[0];
  v66 = *(_DWORD *)(a3 + 8);
  v67 = *(_DWORD *)(a3 + 12);
  if ( v66 >= v67 )
  {
    v103 = 2 * v67;
    v68 = sub_186B270(8 * v103);
    v66 = *(_DWORD *)(a3 + 8);
    v104 = *(_QWORD **)a3;
    if ( v66 )
    {
      if ( v66 - 1 <= 2 || (_QWORD *)v68 == v104 + 1 )
      {
        for ( j = 0; j != v66; ++j )
          *(_QWORD *)(v68 + j * 8) = v104[j];
      }
      else
      {
        v105 = 0;
        do
        {
          *(__m128i *)(v68 + v105 * 8) = _mm_loadu_si128((const __m128i *)&v104[v105]);
          v105 += 2;
        }
        while ( v105 != 2LL * (v66 >> 1) );
        if ( (v66 & 1) != 0 )
          *(_QWORD *)(v68 + 8LL * (v66 & 0xFFFFFFFE)) = v104[v66 & 0xFFFFFFFE];
      }
    }
    if ( v104 != (_QWORD *)(a3 + 16) && v104 )
    {
      sub_186B220(v104);
      v66 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v68;
    *(_DWORD *)(a3 + 12) = v103;
  }
  else
  {
    v68 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v68 + 8LL * v66) = v65;
  *(_DWORD *)(a3 + 8) = v66 + 1;
  if ( v19 )
  {
    v69 = v19;
    v70 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v70 )
    {
      do
      {
        while ( 1 )
        {
          v71 = *v69;
          if ( *v69 )
          {
            v63 = (*(_DWORD *)(v71 + 8))-- == 1;
            if ( v63 )
              break;
          }
          if ( (unsigned __int64)++v69 >= v70 )
            goto LABEL_88;
        }
        ++v69;
        sub_15D7BC0(v170, v71);
      }
      while ( (unsigned __int64)v69 < v70 );
    }
LABEL_88:
    sub_186B220(v19 - 1);
  }
  if ( v197 )
    sub_186B220(v197 - 2);
  if ( ptr )
    sub_186B220(ptr);
  return sub_16234F0(v202);
}

