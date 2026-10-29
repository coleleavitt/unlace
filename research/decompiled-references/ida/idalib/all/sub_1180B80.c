void __fastcall sub_1180B80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        __m128 si128)
{
  __int64 v9; // r13
  char *v10; // r12
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rsi
  void **v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  const char *v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  void **v25; // r14
  void **v26; // r12
  void *v27; // rbp
  int v28; // eax
  char *v29; // rdx
  char *v30; // rbp
  void **v31; // r15
  __int64 v32; // rax
  void *v33; // rbp
  _BYTE *v34; // rax
  void **v35; // r14
  void *v36; // r15
  void **v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // r8
  __int64 v41; // r14
  __int64 *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 (__fastcall *v46)(_QWORD *, _QWORD, _QWORD); // r15
  __int64 v47; // r15
  unsigned __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // r14
  __int64 v53; // r12
  __m128 v54; // xmm0
  __int64 v55; // r15
  void **v56; // r15
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rbx
  const __m128i *v62; // r13
  __int64 v63; // r14
  void *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rsi
  int v67; // eax
  __int64 v68; // rsi
  void **v69; // rcx
  void *v70; // rdi
  __int64 v71; // rcx
  _QWORD *v72; // rbp
  void (__fastcall *v73)(_QWORD *); // rax
  __int64 v74; // r12
  __int64 v75; // rbx
  void *v76; // rdi
  _QWORD *v77; // rdi
  _QWORD *v78; // rdi
  void **v79; // r12
  void **v80; // rbx
  void *v81; // rdi
  _QWORD *v82; // rdi
  __int64 v83; // rax
  _QWORD *v84; // r14
  __int64 v85; // r15
  void **v86; // r15
  __int64 v87; // rax
  void **v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  const char *v92; // rsi
  void **v93; // r15
  __int64 v94; // r15
  void **v95; // r14
  unsigned __int64 v96; // rbx
  __int64 v97; // rdi
  size_t v98; // rax
  size_t v99; // rax
  __int64 v100; // rax
  void **v101; // [rsp+10h] [rbp-278h] BYREF
  void **v102; // [rsp+18h] [rbp-270h]
  __int64 *v103; // [rsp+20h] [rbp-268h] BYREF
  __int64 v104; // [rsp+28h] [rbp-260h]
  __int64 *v105; // [rsp+30h] [rbp-258h]
  __int64 v106; // [rsp+38h] [rbp-250h]
  __int64 v107; // [rsp+40h] [rbp-248h]
  __int64 v108; // [rsp+48h] [rbp-240h]
  __int64 v109; // [rsp+50h] [rbp-238h]
  _DWORD *v110; // [rsp+58h] [rbp-230h]
  __int64 v111; // [rsp+60h] [rbp-228h]
  char *v112; // [rsp+68h] [rbp-220h]
  void *v113[2]; // [rsp+70h] [rbp-218h] BYREF
  _QWORD v114[2]; // [rsp+80h] [rbp-208h] BYREF
  __int16 v115; // [rsp+90h] [rbp-1F8h]
  void *v116; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-1E0h]
  _BYTE v118[128]; // [rsp+B0h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v120; // [rsp+148h] [rbp-140h] BYREF
  __int16 v121; // [rsp+150h] [rbp-138h]

  v9 = *(_QWORD *)(a1 + 24);
  v108 = a2;
  v10 = v118;
  v102 = &v116;
  v11 = *(_DWORD *)(v9 + 48);
  v117 = 0x1000000000LL;
  v12 = *(_QWORD *)(v9 + 8);
  v111 = a1;
  v13 = *(_QWORD *)(v12 + 496);
  v109 = a3;
  v105 = a4;
  v106 = a5;
  v116 = v118;
  v107 = v12;
  if ( v13 )
  {
    *(_QWORD *)&ptr[8] = 0;
    *(_QWORD *)ptr = &ptr[16];
    ptr[16] = 0;
    sub_995C30((__int64)ptr, v13 + 10);
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)&ptr[8]) <= 9 )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(ptr, "--sysroot=", 0xAu);
    sub_9EE560(ptr, *(_BYTE **)(v107 + 488), *(_QWORD *)(v107 + 496));
    v88 = (void **)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a6 + 16LL))(
                     a6,
                     *(_QWORD *)ptr,
                     *(_QWORD *)&ptr[8]);
    v89 = (unsigned int)v117;
    v90 = (unsigned int)v117 + 1LL;
    if ( v90 > HIDWORD(v117) )
    {
      v101 = v88;
      sub_2237220(v102, v118, v90, 8);
      v89 = (unsigned int)v117;
      v88 = v101;
    }
    *((_QWORD *)v116 + v89) = v88;
    v91 = (unsigned int)(v117 + 1);
    LODWORD(v117) = v117 + 1;
    if ( *(_BYTE **)ptr != &ptr[16] )
    {
      operator delete(*(void **)ptr);
      v91 = (unsigned int)v117;
    }
    if ( v91 + 1 > (unsigned __int64)HIDWORD(v117) )
    {
      sub_2237220(v102, v102 + 2, v91 + 1, 8);
      v10 = (char *)v116 + 8 * (unsigned int)v117;
    }
    else
    {
      v10 = (char *)v116 + 8 * v91;
    }
  }
  *(_QWORD *)v10 = "-Bstatic";
  LODWORD(v117) = v117 + 1;
  v110 = (_DWORD *)(v9 + 16);
  v14 = (void **)sub_11BACD0(v9 + 16, a6);
  if ( !v14 )
  {
    sub_FC70B0((__int64)ptr, *(_QWORD *)v107, 0, 67);
    sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)(v9 + 1760), *(_QWORD *)(v9 + 1768));
    sub_AEA040((__int64)ptr);
    goto LABEL_103;
  }
  v15 = (unsigned int)v117;
  v16 = (unsigned int)v117 + 1LL;
  if ( v16 > HIDWORD(v117) )
  {
    v101 = v14;
    sub_2237220(v102, v102 + 2, v16, 8);
    v15 = (unsigned int)v117;
    v14 = v101;
  }
  *((_QWORD *)v116 + v15) = "-m";
  LODWORD(v117) = v117 + 1;
  v17 = (unsigned int)v117;
  if ( (unsigned __int64)(unsigned int)v117 + 1 > HIDWORD(v117) )
  {
    v101 = v14;
    sub_2237220(v102, v102 + 2, (unsigned int)v117 + 1LL, 8);
    v17 = (unsigned int)v117;
    v14 = v101;
  }
  *((_QWORD *)v116 + v17) = v14;
  v18 = *(_DWORD *)(v9 + 1792);
  v19 = (unsigned int)(v117 + 1);
  LODWORD(v117) = v117 + 1;
  if ( (unsigned int)(v18 - 27) <= 1 )
  {
    if ( v19 + 1 > (unsigned __int64)HIDWORD(v117) )
    {
      sub_2237220(v102, v102 + 2, v19 + 1, 8);
      v19 = (unsigned int)v117;
    }
    *((_QWORD *)v116 + v19) = "-X";
    LODWORD(v117) = v117 + 1;
    if ( sub_10DCD30((__int64)a6, 0xA8Cu) )
      sub_10DC5D0((__int64)v102, (__int64)"--no-relax");
    v18 = *(_DWORD *)(v9 + 1792);
  }
  if ( (unsigned int)(v18 - 1) > 1 && (unsigned int)(v18 - 35) > 1 )
  {
    if ( (unsigned int)(v18 - 3) <= 2 )
    {
      v92 = "-EB";
      if ( v11 != 4 )
        v92 = "-EL";
      sub_10DC5D0((__int64)v102, (__int64)v92);
    }
  }
  else
  {
    v20 = "-EL";
    if ( (unsigned __int8)sub_113D610(v9 + 1760, (__int64)a6) )
    {
      v20 = "-EB";
      sub_113F900((__int64)a6, (__int64)v102, v9 + 1760);
    }
    v21 = (unsigned int)v117;
    v22 = (unsigned int)v117 + 1LL;
    if ( v22 > HIDWORD(v117) )
    {
      sub_2237220(v102, v102 + 2, v22, 8);
      v21 = (unsigned int)v117;
    }
    *((_QWORD *)v116 + v21) = v20;
    LODWORD(v117) = v117 + 1;
  }
  *(_QWORD *)ptr = 0xBEB00000BF0LL;
  v23 = sub_21B6DA0(a6, ptr, 2);
  v24 = a6[1];
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  v25 = (void **)(v24 + 8LL * (unsigned int)v23);
  v26 = (void **)(v24 + 8 * HIDWORD(v23));
  v101 = v26;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v101);
  if ( v25 == v26 )
    goto LABEL_25;
  while ( 1 )
  {
    v27 = *v25;
    if ( *v25 )
    {
      if ( (unsigned __int8)sub_21B9810(*v25, 3056) || (unsigned __int8)sub_21B9810(v27, 3051) )
        break;
    }
    *(_QWORD *)ptr = ++v25;
    if ( v26 == v25 )
      goto LABEL_25;
  }
  v101 = v26;
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v101);
  if ( v25 == v26 )
  {
LABEL_25:
    if ( sub_10DCD30((__int64)a6, 0xCA4u) )
    {
      v101 = v113;
    }
    else
    {
      v101 = v113;
      sub_112D4E0(v113, v9, "crt0.o");
      *(_QWORD *)ptr = v113;
      v121 = 260;
      v100 = sub_10DA6C0((__int64)a6, (__int64)ptr);
      sub_10DC5D0((__int64)v102, v100);
      if ( v113[0] != v114 )
        operator delete(v113[0]);
    }
    if ( *(_BYTE *)(v9 + 5016) || (unsigned __int8)sub_117E470(v107) )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 600LL))(v9, a6);
      if ( v28 )
      {
        v29 = "crtend.o";
        v30 = nullptr;
        if ( v28 == 1 )
          v30 = (char *)"crtbegin.o";
        else
          v29 = nullptr;
        v112 = v29;
      }
      else
      {
        v98 = j__strlen("crtbegin");
        v30 = (char *)sub_112D2D0(v9, (__int64)a6, (__int64)"crtbegin", v98, 0, 0);
        v99 = j__strlen("crtend");
        v112 = (char *)sub_112D2D0(v9, (__int64)a6, (__int64)"crtend", v99, 0, 0);
      }
      v31 = v101;
      sub_112D4E0(v101, v9, v30);
      *(_QWORD *)ptr = v31;
      v121 = 260;
      v32 = sub_10DA6C0((__int64)a6, (__int64)ptr);
      sub_10DC5D0((__int64)v102, v32);
      if ( v113[0] != v31 + 2 )
        operator delete(v113[0]);
      v33 = nullptr;
    }
    else
    {
      v33 = nullptr;
    }
  }
  else
  {
    do
    {
      v33 = *v25;
      v34 = *((_BYTE **)*v25 + 2);
      if ( !v34 )
        v34 = *v25;
      v35 = v25 + 1;
      v34[44] |= 1u;
      *(_QWORD *)ptr = v35;
      if ( v35 == v26 )
        break;
      while ( 1 )
      {
        v36 = *v35;
        if ( *v35 )
        {
          if ( (unsigned __int8)sub_21B9810(*v35, 3056) || (unsigned __int8)sub_21B9810(v36, 3051) )
            break;
        }
        *(_QWORD *)ptr = ++v35;
        if ( v26 == v35 )
          goto LABEL_44;
      }
      v25 = *(void ***)ptr;
    }
    while ( v26 != *(void ***)ptr );
LABEL_44:
    v101 = v113;
  }
  v37 = v102;
  *(_QWORD *)ptr = 0xD250000089CLL;
  *(_QWORD *)&ptr[8] = 0xCF90000000FLL;
  *(_QWORD *)&ptr[16] = 0xCA400000D17LL;
  sub_21B6650(a6, v102, ptr, 6);
  sub_112D940(v9, (__int64)a6, (__int64)v37, v38, v39);
  v40 = *(__int64 **)(v9 + 96);
  v41 = 4LL * *(unsigned int *)(v9 + 104);
  v103 = &v40[v41];
  if ( v40 != &v40[v41] )
  {
    v42 = v40;
    do
    {
      while ( 1 )
      {
        v43 = v42[1];
        v44 = *v42;
        *(_QWORD *)ptr = &v120;
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v115 = 1283;
        v114[1] = v43;
        v45 = *a6;
        v113[0] = (void *)"-L";
        v114[0] = v44;
        v46 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v45 + 16);
        *(__m128 *)&ptr[8] = si128;
        sub_22538C0(v101, ptr);
        v47 = v46(a6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
        if ( *(__int64 **)ptr != &v120 )
          free(*(void **)ptr);
        v48 = (unsigned int)v117 + 1LL;
        if ( v48 > HIDWORD(v117) )
          break;
        v42 += 4;
        *((_QWORD *)v116 + (unsigned int)v117) = v47;
        LODWORD(v117) = v117 + 1;
        if ( v103 == v42 )
          goto LABEL_52;
      }
      v42 += 4;
      sub_2237220(v102, v102 + 2, v48, 8);
      *((_QWORD *)v116 + (unsigned int)v117) = v47;
      LODWORD(v117) = v117 + 1;
    }
    while ( v103 != v42 );
  }
LABEL_52:
  v49 = *(_DWORD *)(v107 + 40);
  if ( v49 )
    sub_11C8A90(v9, a6, v102, v105, v106, v49 == 2);
  sub_11C3660(v9, v106, a6, v102, v109);
  if ( sub_112D7B0(v9, (__int64)a6) )
  {
    if ( sub_10DCD30((__int64)a6, 0xCE0u) && !sub_10DCD30((__int64)a6, 0xCE3u) )
    {
      v93 = v102;
      sub_10DC5D0((__int64)v102, (__int64)"-Bstatic");
      (*(void (__fastcall **)(__int64, _QWORD *, void **))(*(_QWORD *)v9 + 640LL))(v9, a6, v93);
      sub_10DC5D0((__int64)v93, (__int64)"-Bdynamic");
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD *, void **))(*(_QWORD *)v9 + 640LL))(v9, a6, v102);
    }
    sub_10DC5D0((__int64)v102, (__int64)"-lm");
  }
  *(_QWORD *)ptr = 0xBDD00000BF0LL;
  v50 = sub_21B6DA0(a6, ptr, 2);
  v51 = a6[1];
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v52 = (_QWORD *)(v51 + 8LL * (unsigned int)v50);
  v53 = v51 + 8 * HIDWORD(v50);
  v103 = (__int64 *)v53;
  v54 = _mm_loadh_ps((const double *)&v103);
  *(__m128 *)ptr = v54;
  if ( v52 == (_QWORD *)v53 )
    goto LABEL_60;
  while ( 1 )
  {
    v55 = *v52;
    if ( *v52 )
    {
      if ( (unsigned __int8)sub_21B9810(*v52, 3056) || (unsigned __int8)sub_21B9810(v55, 3037) )
        break;
    }
    *(_QWORD *)ptr = ++v52;
    if ( (_QWORD *)v53 == v52 )
      goto LABEL_60;
  }
  v103 = (__int64 *)v53;
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v54 = _mm_loadh_ps((const double *)&v103);
  *(__m128 *)ptr = v54;
  if ( (_QWORD *)v53 == v52 )
  {
LABEL_60:
    v56 = v102;
    sub_10DC5D0((__int64)v102, (__int64)"--start-group");
    sub_11BEF20(v9, v107, v56, a6);
    sub_10DC5D0((__int64)v56, (__int64)"-lc");
    if ( *(_BYTE *)(v9 + 5016) || (unsigned __int8)sub_117E470(v107) )
      sub_10DC5D0((__int64)v102, (__int64)"-lgloss");
    sub_10DC5D0((__int64)v102, (__int64)"--end-group");
  }
  else
  {
    while ( 2 )
    {
      v83 = *(_QWORD *)(*v52 + 16LL);
      if ( !v83 )
        v83 = *v52;
      v84 = v52 + 1;
      *(_BYTE *)(v83 + 44) |= 1u;
      *(_QWORD *)ptr = v84;
      if ( v84 != (_QWORD *)v53 )
      {
        while ( 1 )
        {
          v85 = *v84;
          if ( *v84 )
          {
            if ( (unsigned __int8)sub_21B9810(*v84, 3056) || (unsigned __int8)sub_21B9810(v85, 3037) )
              break;
          }
          *(_QWORD *)ptr = ++v84;
          if ( (_QWORD *)v53 == v84 )
          {
            if ( *(_BYTE *)(v9 + 5016) )
              goto LABEL_65;
            goto LABEL_117;
          }
        }
        v52 = *(_QWORD **)ptr;
        if ( v53 != *(_QWORD *)ptr )
          continue;
      }
      break;
    }
  }
  if ( !*(_BYTE *)(v9 + 5016) )
  {
LABEL_117:
    if ( !(unsigned __int8)sub_117E470(v107) || v33 )
      goto LABEL_66;
LABEL_119:
    v86 = v101;
    sub_112D4E0(v101, v9, v112);
    v121 = 260;
    *(_QWORD *)ptr = v86;
    v87 = sub_10DA6C0((__int64)a6, (__int64)ptr);
    sub_10DC5D0((__int64)v102, v87);
    if ( v113[0] != v86 + 2 )
      operator delete(v113[0]);
    goto LABEL_66;
  }
LABEL_65:
  if ( !v33 )
    goto LABEL_119;
LABEL_66:
  if ( sub_113D7A0(v110) )
    sub_10DC5D0((__int64)v102, (__int64)"--target2=rel");
  v57 = (unsigned int)v117;
  v58 = (unsigned int)v117 + 1LL;
  if ( v58 > HIDWORD(v117) )
  {
    sub_2237220(v102, v102 + 2, v58, 8);
    v57 = (unsigned int)v117;
  }
  *((_QWORD *)v116 + v57) = "-o";
  v59 = *v105;
  LODWORD(v117) = v117 + 1;
  v60 = (unsigned int)v117;
  if ( (unsigned __int64)(unsigned int)v117 + 1 > HIDWORD(v117) )
  {
    sub_2237220(v102, v102 + 2, (unsigned int)v117 + 1LL, 8);
    v60 = (unsigned int)v117;
  }
  *((_QWORD *)v116 + v60) = v59;
  LODWORD(v117) = v117 + 1;
  sub_1132E50((__m128i *)ptr, v9, nullptr);
  v61 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a6 + 16LL))(a6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  v104 = 1;
  v103 = v105;
  v62 = *(const __m128i **)v106;
  v63 = *(unsigned int *)(v106 + 8);
  v64 = (void *)operator new(0x208u);
  sub_1106AE0(
    (__int64)v64,
    v109,
    v111,
    0x100000000LL,
    (__int64)"@",
    v61,
    (__int64)v102,
    v62,
    v63,
    (__int64)v103,
    v104,
    0);
  v113[0] = v64;
  v65 = *(unsigned int *)(v108 + 160);
  v66 = v65 + 1;
  v67 = *(_DWORD *)(v108 + 160);
  if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v108 + 164) )
  {
    v94 = v108;
    v95 = v101;
    v96 = *(_QWORD *)(v108 + 152);
    v97 = v108 + 152;
    if ( v96 > (unsigned __int64)v101 )
    {
      sub_11673D0(v97, v66, v54, *(double *)si128.m128_u64);
      v65 = *(unsigned int *)(v94 + 160);
      v68 = *(_QWORD *)(v94 + 152);
      v69 = v95;
      v67 = *(_DWORD *)(v94 + 160);
    }
    else
    {
      if ( (unsigned __int64)v101 < v96 + 8 * v65 )
      {
        sub_11673D0(v97, v66, v54, *(double *)si128.m128_u64);
        v68 = *(_QWORD *)(v108 + 152);
        v65 = *(unsigned int *)(v108 + 160);
        v69 = (void **)((char *)v101 + v68 - v96);
      }
      else
      {
        sub_11673D0(v97, v66, v54, *(double *)si128.m128_u64);
        v69 = v95;
        v65 = *(unsigned int *)(v108 + 160);
        v68 = *(_QWORD *)(v108 + 152);
      }
      v67 = *(_DWORD *)(v108 + 160);
    }
  }
  else
  {
    v68 = *(_QWORD *)(v108 + 152);
    v69 = v101;
  }
  v70 = *v69;
  *v69 = nullptr;
  v71 = v108;
  *(_QWORD *)(v68 + 8 * v65) = v70;
  v72 = v113[0];
  *(_DWORD *)(v71 + 160) = v67 + 1;
  if ( v72 )
  {
    v73 = *(void (__fastcall **)(_QWORD *))(*v72 + 8LL);
    if ( v73 == sub_10D4290 )
    {
      v74 = v72[58];
      v75 = v72[57];
      *v72 = &off_2BA8F30;
      if ( v74 != v75 )
      {
        do
        {
          if ( *(_BYTE *)(v75 + 32) && *(_QWORD *)v75 != v75 + 16 )
            operator delete(*(void **)v75);
          v75 += 40;
        }
        while ( v74 != v75 );
        v75 = v72[57];
      }
      if ( v75 )
        operator delete((void *)v75);
      v76 = (void *)v72[54];
      if ( v76 )
        operator delete(v76);
      v77 = (_QWORD *)v72[50];
      if ( v77 != v72 + 52 )
        operator delete(v77);
      v78 = (_QWORD *)v72[32];
      if ( v78 != v72 + 34 )
        free(v78);
      v79 = (void **)v72[29];
      v80 = (void **)v72[28];
      if ( v79 != v80 )
      {
        do
        {
          while ( *v80 != v80 + 2 )
          {
            operator delete(*v80);
            v80 += 4;
            if ( v80 == v79 )
              goto LABEL_93;
          }
          v80 += 4;
        }
        while ( v79 != v80 );
LABEL_93:
        v80 = (void **)v72[28];
      }
      if ( v80 )
        operator delete(v80);
      v81 = (void *)v72[25];
      if ( v81 )
        operator delete(v81);
      v82 = (_QWORD *)v72[7];
      if ( v82 != v72 + 9 )
        free(v82);
      operator delete(v72, 0x208u);
    }
    else
    {
      v73(v72);
    }
  }
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
LABEL_103:
  if ( v116 != v102 + 2 )
    free(v116);
}
