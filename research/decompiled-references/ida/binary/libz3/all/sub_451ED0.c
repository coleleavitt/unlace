__int64 __fastcall sub_451ED0(
        _QWORD *a1,
        _QWORD *a2,
        void **a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char **exception; // rbp
  char **v12; // rbp
  char **v13; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 result; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rax
  __int64 *v28; // r14
  unsigned int v29; // esi
  __int64 *v30; // rbp
  __int64 v31; // rsi
  __int64 *v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  __int64 (__fastcall *v36)(__int64, void **); // rax
  _QWORD *v37; // r12
  __int64 (__fastcall *v38)(__int64, void **); // rdx
  _QWORD *v39; // r13
  __int64 (__fastcall *v40)(__int64, void **); // rax
  _QWORD *v41; // r14
  __int64 (__fastcall *v42)(__int64, void **); // rdx
  _QWORD *v43; // rcx
  __int64 (__fastcall *v44)(__int64, void **); // rax
  _QWORD *v45; // rdi
  int v46; // edi
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  size_t v53; // rsi
  __int64 v54; // rcx
  size_t v55; // rbp
  __m128 si128; // xmm2
  __int64 v57; // rax
  __int64 *v58; // r12
  unsigned __int64 v59; // r13
  __int64 v60; // rsi
  __int64 v61; // rsi
  __m128i v62; // xmm4
  __int64 v63; // r9
  int v64; // edi
  _QWORD *v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // edx
  _QWORD *v68; // rsi
  __int64 v69; // rdx
  _QWORD *v70; // r8
  _QWORD *i; // rdx
  _QWORD *v72; // rax
  __m128i *v73; // r12
  char *v74; // rcx
  __int64 v75; // rax
  char *v76; // rax
  __m128i v77; // xmm1
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // r13
  _QWORD *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rcx
  int v84; // eax
  _QWORD *v85; // rcx
  size_t *v86; // rbx
  __int64 v87; // r12
  unsigned __int64 v88; // rbp
  void (__fastcall ***v89)(void *, size_t); // rbx
  unsigned int v90; // ecx
  __int64 v91; // rax
  size_t v92; // rdi
  const __m128i *v93; // r14
  __int64 v94; // rax
  size_t v95; // rdi
  const __m128i *v96; // r9
  const __m128i *j; // rax
  __m128i v98; // xmm0
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 *v104; // r13
  __int64 *v105; // rbx
  size_t v106; // r14
  __int64 *v107; // rbp
  __int64 *v108; // r12
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 *v115; // rbp
  __int64 *v116; // r12
  __int64 v117; // rsi
  __int64 v118; // rdi
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdi
  int v125[4]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v126; // [rsp+10h] [rbp-158h]
  __int64 v127; // [rsp+18h] [rbp-150h]
  void **v128; // [rsp+20h] [rbp-148h]
  _QWORD *v129; // [rsp+28h] [rbp-140h]
  __m128i *v130; // [rsp+30h] [rbp-138h]
  char *v131; // [rsp+38h] [rbp-130h]
  unsigned __int64 v132; // [rsp+40h] [rbp-128h]
  int v133[2]; // [rsp+48h] [rbp-120h]
  __int64 v134; // [rsp+50h] [rbp-118h]
  __int64 v135; // [rsp+58h] [rbp-110h]
  size_t v136; // [rsp+60h] [rbp-108h]
  _QWORD *v137; // [rsp+68h] [rbp-100h]
  __m128i *v138; // [rsp+70h] [rbp-F8h]
  __int64 v139; // [rsp+78h] [rbp-F0h]
  __int64 v140; // [rsp+80h] [rbp-E8h]
  int v141; // [rsp+88h] [rbp-E0h]
  __int64 v142; // [rsp+90h] [rbp-D8h] BYREF
  void *ptr; // [rsp+98h] [rbp-D0h] BYREF
  __m128i v144; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v145; // [rsp+B0h] [rbp-B8h] BYREF
  int v146; // [rsp+B8h] [rbp-B0h]
  int v147; // [rsp+C0h] [rbp-A8h]
  int v148; // [rsp+C8h] [rbp-A0h]
  __m128i v149; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v150; // [rsp+E0h] [rbp-88h]
  __m128i v151; // [rsp+E8h] [rbp-80h] BYREF
  __m128i v152; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v153; // [rsp+108h] [rbp-60h]
  void *v154; // [rsp+110h] [rbp-58h]
  __int64 v155; // [rsp+118h] [rbp-50h]
  __int64 v156; // [rsp+120h] [rbp-48h]

  v15 = *a2;
  v16 = a2[1];
  v129 = a2;
  v17 = *(_QWORD *)(v15 + 32);
  v128 = a3;
  v142 = 0;
  sub_4031A0(v16, v17, &v142);
  result = v142;
  if ( !v142 )
    return result;
  if ( !*(_DWORD *)(v142 - 4) )
    return sub_186B220((void *)(v142 - 8));
  v19 = *a2;
  v20 = *(_QWORD *)a1[8];
  v139 = a1[8];
  (*(void (**)(void))(v20 + 192))();
  sub_E5EBF0(a1[8], v129[4]);
  v21 = *(unsigned int *)(v17 + 68);
  v22 = 0;
  if ( (_DWORD)v21 )
  {
    do
    {
      while ( 1 )
      {
        v23 = a1[1];
        v149.m128i_i64[0] = 0;
        v149.m128i_i64[1] = v23;
        sub_43D1D0(
          (unsigned __int64 *)(a1[2] + 8LL),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * v22) + 8LL),
          0,
          v22 + 1,
          v149.m128i_i64,
          1);
        sub_E5EBF0(a1[8], v149.m128i_i64[0]);
        v24 = v149.m128i_i64[0];
        if ( v149.m128i_i64[0] )
        {
          v25 = v149.m128i_i64[1];
          v26 = (*(_DWORD *)(v149.m128i_i64[0] + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( v21 == ++v22 )
          goto LABEL_9;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v21 != v22 );
  }
LABEL_9:
  sub_E5EBF0(a1[8], *(_QWORD *)(v129[1] + 248LL));
  v127 = a1[8];
  v130 = (__m128i *)v129[1];
  v125[0] = sub_62A5E0(v17);
  v27 = v130[4].m128i_u32[2];
  v28 = (__int64 *)v130[4].m128i_i64[0];
  v29 = v27 - 1;
  v27 *= 16;
  v30 = (__int64 *)((char *)v28 + v27);
  v31 = 16LL * (v125[0] & v29);
  v32 = &v28[(unsigned __int64)v31 / 8];
  if ( v31 != v27 )
  {
    v28 = (__int64 *)((char *)v28 + v31);
    do
    {
      v33 = *v28;
      if ( (unsigned __int64)*v28 <= 1 )
      {
        if ( !v33 )
          goto LABEL_140;
      }
      else if ( v125[0] == (unsigned int)sub_62A5E0(v33) && v17 == *v28 )
      {
LABEL_16:
        v34 = *(_QWORD *)(v28[1] + 48);
        goto LABEL_17;
      }
      v28 += 2;
    }
    while ( v30 != v28 );
    v28 = (__int64 *)v130[4].m128i_i64[0];
  }
  if ( v28 != v32 )
  {
    while ( 1 )
    {
      v121 = *v28;
      if ( (unsigned __int64)*v28 <= 1 )
        break;
      if ( v125[0] == (unsigned int)sub_62A5E0(v121) )
      {
        if ( v17 == *v28 )
          goto LABEL_16;
        v28 += 2;
        if ( v32 == v28 )
          goto LABEL_140;
      }
      else
      {
LABEL_135:
        v28 += 2;
        if ( v32 == v28 )
          goto LABEL_140;
      }
    }
    if ( !v121 )
      goto LABEL_140;
    goto LABEL_135;
  }
LABEL_140:
  v34 = 0;
LABEL_17:
  sub_E5EBF0(v127, v34);
  if ( (unsigned int)sub_E60CB0((std::ios_base *)a1[8], 0, 0) != 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v149.m128i_i64, "spacer: could not validate a proof step");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v149);
    sub_233E40((__int64)&v149);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v35 = (_QWORD *)a1[8];
  ptr = nullptr;
  v36 = *(__int64 (__fastcall **)(__int64, void **))(*v35 + 32LL);
  if ( (char *)v36 != (char *)sub_41C670 )
  {
    *(_QWORD *)v133 = &ptr;
    v36((__int64)v35, &ptr);
    goto LABEL_36;
  }
  v37 = (_QWORD *)v35[12];
  v38 = *(__int64 (__fastcall **)(__int64, void **))(*v37 + 32LL);
  if ( v38 != v36 )
  {
    v122 = v35[12];
    *(_QWORD *)v133 = &ptr;
    v38(v122, &ptr);
LABEL_33:
    v46 = (int)ptr;
    if ( !ptr )
      goto LABEL_143;
    goto LABEL_34;
  }
  v39 = (_QWORD *)v37[12];
  v40 = *(__int64 (__fastcall **)(__int64, void **))(*v39 + 32LL);
  if ( v40 != v38 )
  {
    v123 = v37[12];
    *(_QWORD *)v133 = &ptr;
    v40(v123, &ptr);
    goto LABEL_30;
  }
  v41 = (_QWORD *)v39[12];
  v42 = *(__int64 (__fastcall **)(__int64, void **))(*v41 + 32LL);
  if ( v42 != v40 )
  {
    v124 = v39[12];
    *(_QWORD *)v133 = &ptr;
    v42(v124, &ptr);
LABEL_27:
    v46 = (int)ptr;
    if ( !ptr )
      goto LABEL_143;
    goto LABEL_28;
  }
  v43 = (_QWORD *)v41[12];
  v44 = *(__int64 (__fastcall **)(__int64, void **))(*v43 + 32LL);
  if ( v44 == v42 )
  {
    v45 = (_QWORD *)v43[12];
    *(_QWORD *)v125 = v41[12];
    *(_QWORD *)v133 = &ptr;
    sub_39A840(v45, &ptr);
  }
  else
  {
    *(_QWORD *)v125 = v41[12];
    *(_QWORD *)v133 = &ptr;
    v44((__int64)v43, &ptr);
  }
  v46 = (int)ptr;
  v47 = *(_QWORD *)v125;
  if ( !ptr )
    goto LABEL_143;
  v48 = *(_QWORD **)(*(_QWORD *)v125 + 56LL);
  if ( v48 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v48 + 32LL))(
      *(_QWORD *)(*(_QWORD *)v125 + 56LL),
      *(_QWORD *)v133,
      *v48,
      *(_QWORD *)v125);
    goto LABEL_27;
  }
LABEL_28:
  v49 = (_QWORD *)v41[7];
  if ( !v49 )
    goto LABEL_31;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*v49 + 32LL))(v41[7], *(_QWORD *)v133, *v49, v47);
LABEL_30:
  v46 = (int)ptr;
  if ( !ptr )
    goto LABEL_143;
LABEL_31:
  v50 = (_QWORD *)v39[7];
  if ( v50 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*v50 + 32LL))(v39[7], *(_QWORD *)v133, *v50, v47);
    goto LABEL_33;
  }
LABEL_34:
  v51 = (_QWORD *)v37[7];
  if ( !v51 )
    goto LABEL_37;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*v51 + 32LL))(v37[7], *(_QWORD *)v133, *v51, v47);
LABEL_36:
  v46 = (int)ptr;
  if ( ptr )
  {
LABEL_37:
    v52 = (_QWORD *)v35[7];
    if ( v52 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*v52 + 32LL))(v35[7], *(_QWORD *)v133, *v52, v47);
      v46 = (int)ptr;
    }
    goto LABEL_39;
  }
LABEL_143:
  v46 = 0;
LABEL_39:
  v53 = 0;
  sub_137A410(
    v46,
    v125[0],
    *(void **)&v125[2],
    v126,
    v127,
    (int)v128,
    (int)v129,
    (__int64)v130,
    v131,
    v132,
    v133[0],
    v134,
    v135,
    v136,
    (int)v137,
    (int)v138,
    v139,
    v140,
    v141,
    v142,
    (int)ptr,
    v144.m128i_i32[0],
    v144.m128i_i32[2],
    v145,
    v146,
    v147,
    v148,
    v149.m128i_i32[0],
    v149.m128i_i32[2],
    v150,
    v151.m128i_i32[0],
    v151.m128i_i8[8],
    v152.m128i_i32[0],
    v152.m128i_i32[2],
    v153,
    v154);
  if ( v142 && *(_DWORD *)(v142 - 4) )
  {
    v54 = a1[1];
    v135 = *(unsigned int *)(v142 - 4);
    v55 = 0;
    v132 = 0;
    v134 = v54;
    v130 = &v144;
    *(__m128i *)v125 = _mm_move_epi64((__m128i)(unsigned __int64)v54);
    do
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)v125);
      LODWORD(v131) = v55;
      a11 = _mm_movehl_ps(a11, si128);
      if ( a11.m128_u64[0] )
      {
        v57 = *(unsigned int *)(a11.m128_u64[0] - 4);
        v127 = si128.m128_u64[0];
        v58 = (__int64 *)a11.m128_u64[0];
        v59 = a11.m128_u64[0] + 8 * v57;
        if ( a11.m128_u64[0] < v59 )
        {
          do
          {
            while ( 1 )
            {
              v60 = *v58;
              if ( *v58 )
              {
                v26 = (*(_DWORD *)(v60 + 8))-- == 1;
                if ( v26 )
                  break;
              }
              if ( (unsigned __int64)++v58 >= v59 )
                goto LABEL_49;
            }
            sub_15D7BC0(v127, v60);
            ++v58;
          }
          while ( (unsigned __int64)v58 < v59 );
        }
LABEL_49:
        *(_DWORD *)(a11.m128_u64[0] - 4) = 0;
      }
      v61 = *(_QWORD *)(v142 + 8 * v55);
      v144 = _mm_load_si128((const __m128i *)v125);
      sub_451BE0(a1, v61, (int)v131, *(_QWORD **)v133, (int)v130);
      v62 = _mm_load_si128(&v144);
      v134 = v144.m128i_i64[0];
      v63 = *(_QWORD *)(v142 + 8 * v55);
      *(__m128i *)v125 = v62;
      v132 = v144.m128i_u64[1];
      v64 = *(_DWORD *)(v63 + 12);
      v65 = *(_QWORD **)(*a1 + 264LL);
      v66 = *(unsigned int *)(*a1 + 272LL);
      v67 = v66 - 1;
      v66 *= 16;
      v68 = (_QWORD *)((char *)v65 + v66);
      v69 = 16LL * (v64 & v67);
      v70 = &v65[(unsigned __int64)v69 / 8];
      if ( v69 != v66 )
      {
        for ( i = &v65[(unsigned __int64)v69 / 8]; v68 != i; i += 2 )
        {
          v72 = (_QWORD *)*i;
          if ( *i > 1u )
          {
            if ( *((_DWORD *)v72 + 3) == v64 && (_QWORD *)v63 == v72 )
            {
              v72 = i;
              goto LABEL_57;
            }
          }
          else if ( !v72 )
          {
            goto LABEL_57;
          }
        }
      }
      if ( v65 == v70 )
      {
LABEL_89:
        v72 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v72 = (_QWORD *)*v65;
            if ( *v65 > 1u )
              break;
            if ( !v72 )
              goto LABEL_57;
            v65 += 2;
            if ( v70 == v65 )
              goto LABEL_89;
          }
          if ( *((_DWORD *)v72 + 3) == v64 && (_QWORD *)v63 == v72 )
            break;
          v65 += 2;
          if ( v70 == v65 )
            goto LABEL_89;
        }
        v72 = v65;
      }
LABEL_57:
      v53 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * v55);
      v73 = &v149;
      sub_455180(
        (unsigned int)&v149,
        v53,
        v72[1],
        (_DWORD)v130,
        (_DWORD)v70,
        v63,
        v125[0],
        v125[2],
        v126,
        v127,
        (_DWORD)v128,
        (char)v129,
        (__int64)v130);
      v74 = (char *)*v128;
      if ( *v128 )
      {
        v75 = *((unsigned int *)v74 - 1);
        if ( (_DWORD)v75 == *((_DWORD *)v74 - 2) )
        {
          LODWORD(v127) = (unsigned int)(3 * v75 + 1) >> 1;
          v92 = (unsigned int)(88 * v127 + 8);
          if ( 88 * (int)v75 + 8 >= (unsigned int)v92 || (unsigned int)v75 >= (unsigned int)(3 * v75 + 1) >> 1 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v145, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, &v145);
            sub_233E40((__int64)&v145);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v53 = sub_186B270(v92);
          v74 = (char *)(v53 + 8);
          v93 = (const __m128i *)*v128;
          if ( *v128 )
          {
            v94 = v93[-1].m128i_u32[3];
            *(_DWORD *)(v53 + 4) = v94;
            v95 = v53 + 8;
            v96 = (const __m128i *)((char *)v93 + 88 * v94);
            for ( j = v93; v96 != j; *(_QWORD *)(v95 - 8) = v102 )
            {
              v98 = _mm_loadu_si128(j);
              j = (const __m128i *)((char *)j + 88);
              v95 += 88LL;
              *(__m128i *)(v95 - 88) = v98;
              *(_QWORD *)(v95 - 72) = j[-5].m128i_i64[1];
              v99 = j[-4].m128i_i64[0];
              j[-4].m128i_i64[0] = 0;
              *(_QWORD *)(v95 - 64) = v99;
              *(_QWORD *)(v95 - 48) = j[-3].m128i_i64[0];
              v100 = j[-4].m128i_i64[1];
              j[-4].m128i_i64[1] = 0;
              *(_QWORD *)(v95 - 56) = v100;
              *(_QWORD *)(v95 - 32) = j[-2].m128i_i64[0];
              v101 = j[-3].m128i_i64[1];
              j[-3].m128i_i64[1] = 0;
              *(_QWORD *)(v95 - 40) = v101;
              *(_DWORD *)(v95 - 24) = j[-2].m128i_i32[2];
              *(_QWORD *)(v95 - 16) = j[-1].m128i_i64[0];
              v102 = j[-1].m128i_i64[1];
              j[-1].m128i_i64[1] = 0;
            }
            v103 = v93[-1].m128i_u32[3];
            if ( (_DWORD)v103 )
            {
              v131 = (char *)(v53 + 8);
              v136 = v55;
              v138 = &v149;
              v104 = &v93->m128i_i64[11 * v103];
              v137 = a1;
              v105 = (__int64 *)v93;
              v106 = v53;
              do
              {
                v107 = (__int64 *)v105[10];
                if ( v107 )
                {
                  v108 = &v107[*((unsigned int *)v107 - 1)];
                  if ( v107 >= v108 )
                    goto LABEL_108;
                  do
                  {
                    while ( 1 )
                    {
                      v109 = *v107;
                      if ( *v107 )
                      {
                        v110 = v105[9];
                        v26 = (*(_DWORD *)(v109 + 8))-- == 1;
                        if ( v26 )
                          break;
                      }
                      if ( ++v107 >= v108 )
                        goto LABEL_107;
                    }
                    sub_15D7BC0(v110, v109);
                    ++v107;
                  }
                  while ( v107 < v108 );
LABEL_107:
                  v107 = (__int64 *)v105[10];
                  if ( v107 )
LABEL_108:
                    sub_186B220(v107 - 1);
                }
                v111 = v105[6];
                if ( v111 )
                {
                  v112 = v105[7];
                  v26 = (*(_DWORD *)(v111 + 8))-- == 1;
                  if ( v26 )
                    sub_15D7BC0(v112, v111);
                }
                v113 = v105[4];
                if ( v113 )
                {
                  v114 = v105[5];
                  v26 = (*(_DWORD *)(v113 + 8))-- == 1;
                  if ( v26 )
                    sub_15D7BC0(v114, v113);
                }
                v115 = (__int64 *)v105[3];
                if ( v115 )
                {
                  v116 = &v115[*((unsigned int *)v115 - 1)];
                  if ( v115 >= v116 )
                    goto LABEL_123;
                  do
                  {
                    while ( 1 )
                    {
                      v117 = *v115;
                      if ( *v115 )
                      {
                        v118 = v105[2];
                        v26 = (*(_DWORD *)(v117 + 8))-- == 1;
                        if ( v26 )
                          break;
                      }
                      if ( ++v115 >= v116 )
                        goto LABEL_122;
                    }
                    sub_15D7BC0(v118, v117);
                    ++v115;
                  }
                  while ( v115 < v116 );
LABEL_122:
                  v115 = (__int64 *)v105[3];
                  if ( v115 )
LABEL_123:
                    sub_186B220(v115 - 1);
                }
                v105 += 11;
              }
              while ( v105 != v104 );
              v53 = v106;
              v74 = v131;
              v55 = v136;
              a1 = v137;
              v73 = v138;
              v93 = (const __m128i *)*v128;
            }
            v136 = v53;
            v131 = v74;
            sub_186B220(&v93[-1].m128i_u64[1]);
            v53 = v136;
            v74 = v131;
            v76 = &v131[88 * *(unsigned int *)(v136 + 4)];
          }
          else
          {
            *(_DWORD *)(v53 + 4) = 0;
            v76 = (char *)(v53 + 8);
          }
          *v128 = v74;
          *(_DWORD *)v53 = v127;
        }
        else
        {
          v76 = &v74[88 * v75];
        }
      }
      else
      {
        v119 = (_QWORD *)sub_186B270(0xB8u);
        v74 = (char *)(v119 + 1);
        *v119 = 2;
        *v128 = v119 + 1;
        v76 = (char *)(v119 + 1);
      }
      *(__m128i *)v76 = _mm_load_si128(&v149);
      *((_QWORD *)v76 + 2) = v150;
      v77 = _mm_loadu_si128(&v151);
      v78 = _mm_loadu_si128(&v152);
      *((_QWORD *)v76 + 7) = v153;
      *(__m128i *)(v76 + 24) = v77;
      *(__m128i *)(v76 + 40) = v78;
      *((_DWORD *)v76 + 16) = (_DWORD)v154;
      *((_QWORD *)v76 + 9) = v155;
      *((_QWORD *)v76 + 10) = v156;
      v79 = *((unsigned int *)v74 - 1);
      *((_DWORD *)v74 - 1) = v79 + 1;
      v80 = *(_QWORD *)&v74[88 * v79 + 48];
      if ( v80 )
        ++*(_DWORD *)(v80 + 8);
      v81 = (_QWORD *)v129[10];
      if ( v81 )
      {
        v82 = *((_DWORD *)v81 - 1);
        if ( v82 == *((_DWORD *)v81 - 2) )
        {
          v90 = (3 * v82 + 1) >> 1;
          v53 = 8 * v90 + 8;
          if ( 8 * v82 + 8 >= (unsigned int)v53 || v82 >= v90 )
          {
            v13 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73->m128i_i64, "Overflow encountered when expanding vector");
            *v13 = (char *)off_1C63128;
            sub_2333C0(v13 + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v127) = (3 * v82 + 1) >> 1;
          v91 = sub_186B300(v81 - 1, v53);
          v81 = (_QWORD *)(v91 + 8);
          v129[10] = v91 + 8;
          *(_DWORD *)v91 = v127;
          LODWORD(v91) = *(_DWORD *)(v91 + 4);
          v85 = &v81[(unsigned int)v91];
          v84 = v91 + 1;
        }
        else
        {
          v83 = v82;
          v84 = v82 + 1;
          v85 = &v81[v83];
        }
      }
      else
      {
        v120 = (_QWORD *)sub_186B270(0x18u);
        v81 = v120 + 1;
        *v120 = 2;
        v85 = v120 + 1;
        v129[10] = v120 + 1;
        v84 = 1;
      }
      *v85 = v80;
      ++v55;
      *((_DWORD *)v81 - 1) = v84;
    }
    while ( v135 != v55 );
    v86 = (size_t *)v132;
    if ( v132 )
    {
      v87 = v134;
      v88 = v132 + 8LL * *(unsigned int *)(v132 - 4);
      if ( v132 < v88 )
      {
        do
        {
          while ( 1 )
          {
            v53 = *v86;
            if ( *v86 )
            {
              v26 = (*(_DWORD *)(v53 + 8))-- == 1;
              if ( v26 )
                break;
            }
            if ( (unsigned __int64)++v86 >= v88 )
              goto LABEL_73;
          }
          ++v86;
          sub_15D7BC0(v87, v53);
        }
        while ( (unsigned __int64)v86 < v88 );
      }
LABEL_73:
      sub_186B220((void *)(v132 - 8));
    }
  }
  v89 = (void (__fastcall ***)(void *, size_t))ptr;
  if ( ptr )
  {
    v26 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v26 )
    {
      (**v89)(v89, v53);
      sub_186B220(v89);
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v139 + 200LL))(v139, 1);
  result = v142;
  if ( v142 )
    return sub_186B220((void *)(v142 - 8));
  return result;
}

