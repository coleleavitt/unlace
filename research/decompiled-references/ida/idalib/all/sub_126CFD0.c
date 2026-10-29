void __fastcall sub_126CFD0(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __int64 v7; // rbx
  void (__fastcall *v8)(void **, __int64, __int64); // rax
  void **v9; // rbp
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v14; // rax
  void (__fastcall *v15)(void **, __int64, __int64); // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r14
  __m128i v33; // xmm0
  _BYTE *v34; // rsi
  signed __int64 v35; // r15
  __int64 v36; // r12
  _BYTE *v37; // rax
  _BYTE *v38; // rsi
  __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // r15
  __int64 v42; // r14
  void *v43; // rdi
  void *v44; // rdi
  void **v45; // rdi
  __int64 v46; // rax
  void **v47; // r12
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  __int64 v51; // r14
  unsigned __int64 v52; // r15
  signed __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  _QWORD *v55; // r12
  __m128i v56; // xmm0
  _QWORD *v57; // r9
  _BYTE *v58; // rsi
  size_t v59; // r8
  __int64 v60; // rbp
  char *v61; // rbx
  size_t v62; // r15
  _BYTE *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void **v67; // r15
  void **v68; // r14
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r15
  int v72; // eax
  __int64 v73; // rdx
  char *v74; // rsi
  char v75; // al
  __int64 v76; // r15
  void *v77; // rdi
  int v78; // r12d
  __int64 v79; // rax
  _BYTE *v80; // rsi
  __int64 v81; // rdx
  _BYTE *v82; // rsi
  int v83; // eax
  __m128i v84; // [rsp+0h] [rbp-268h] BYREF
  void *v85; // [rsp+10h] [rbp-258h]
  __int64 *v86; // [rsp+18h] [rbp-250h]
  void **v87; // [rsp+20h] [rbp-248h]
  __m128i *v88; // [rsp+28h] [rbp-240h]
  void *v89; // [rsp+30h] [rbp-238h] BYREF
  __int64 v90; // [rsp+38h] [rbp-230h]
  _BYTE v91[16]; // [rsp+40h] [rbp-228h] BYREF
  void *v92[2]; // [rsp+50h] [rbp-218h] BYREF
  _BYTE v93[16]; // [rsp+60h] [rbp-208h] BYREF
  __m128i v94[2]; // [rsp+70h] [rbp-1F8h] BYREF
  void *v95[2]; // [rsp+90h] [rbp-1D8h] BYREF
  _BYTE v96[16]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v97[4]; // [rsp+B0h] [rbp-1B8h] BYREF
  __int16 v98; // [rsp+D0h] [rbp-198h]
  _QWORD v99[4]; // [rsp+E0h] [rbp-188h] BYREF
  __int16 v100; // [rsp+100h] [rbp-168h]
  _QWORD v101[4]; // [rsp+110h] [rbp-158h] BYREF
  __int16 v102; // [rsp+130h] [rbp-138h]
  _DWORD v103[8]; // [rsp+140h] [rbp-128h] BYREF
  __int16 v104; // [rsp+160h] [rbp-108h]
  void *v105[2]; // [rsp+170h] [rbp-F8h] BYREF
  void (__fastcall *v106)(_QWORD, _QWORD, _QWORD); // [rsp+180h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+188h] [rbp-E0h]
  void *v108[2]; // [rsp+190h] [rbp-D8h] BYREF
  __int64 v109; // [rsp+1A0h] [rbp-C8h] BYREF
  void *v110[2]; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 v111; // [rsp+1C0h] [rbp-A8h] BYREF
  void *v112[2]; // [rsp+1D0h] [rbp-98h]
  char *v113; // [rsp+1E0h] [rbp-88h]
  void *v114[2]; // [rsp+1E8h] [rbp-80h] BYREF
  __int64 v115; // [rsp+1F8h] [rbp-70h] BYREF
  void *v116[2]; // [rsp+208h] [rbp-60h] BYREF
  __int64 v117; // [rsp+218h] [rbp-50h] BYREF
  char v118; // [rsp+228h] [rbp-40h]

  v7 = a1;
  v86 = (__int64 *)a3;
  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_OWORD *)(a1 + 4984) = 0;
  *(_QWORD *)a1 = off_2C3D318;
  *(_QWORD *)(a1 + 5000) = 0;
  sub_122CEF0(a1 + 2384, (__int64)a3, a4);
  sub_117F8A0((__int64 *)(v7 + 1840), (__int64 *)(v7 + 3104));
  sub_1180210(v7 + 1864, v7 + 3128);
  sub_1180630(v7 + 1936, v7 + 3200);
  v8 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3392);
  v106 = nullptr;
  if ( v8 )
  {
    v9 = v105;
    v8(v105, a1 + 3376, 2);
    v10 = *(_QWORD *)(a1 + 3400);
    v8 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3392);
  }
  else
  {
    v10 = v107;
    v9 = v105;
  }
  si128 = _mm_load_si128((const __m128i *)v105);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 2112));
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 2128);
  *(_QWORD *)(a1 + 2128) = v8;
  v14 = *(_QWORD *)(a1 + 2136);
  *(__m128i *)v105 = v12;
  *(__m128i *)(a1 + 2112) = si128;
  v106 = v13;
  v107 = v14;
  *(_QWORD *)(a1 + 2136) = v10;
  if ( v13 )
    v13(v105, v105, 3);
  v15 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3424);
  v16 = v107;
  v106 = nullptr;
  if ( v15 )
  {
    v15(v105, a1 + 3408, 2);
    v16 = *(_QWORD *)(a1 + 3432);
    v15 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3424);
  }
  v17 = _mm_load_si128((const __m128i *)v105);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 2144));
  v19 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 2160);
  *(_QWORD *)(a1 + 2160) = v15;
  v20 = *(_QWORD *)(a1 + 2168);
  *(__m128i *)v105 = v18;
  *(__m128i *)(a1 + 2144) = v17;
  v106 = v19;
  v107 = v20;
  *(_QWORD *)(a1 + 2168) = v16;
  if ( v19 )
    v19(v105, v105, 3);
  v21 = *(_BYTE **)(a1 + 2520);
  v22 = *(_QWORD *)(a1 + 2528);
  v105[0] = &v106;
  sub_126BE20(v105, v21, (__int64)&v21[v22]);
  v23 = *(_BYTE **)(a1 + 2552);
  v24 = *(_QWORD *)(a1 + 2560);
  v108[0] = &v109;
  sub_126BE20(v108, v23, (__int64)&v23[v24]);
  v25 = *(_BYTE **)(a1 + 2584);
  v26 = *(_QWORD *)(a1 + 2592);
  v110[0] = &v111;
  sub_126BE20(v110, v25, (__int64)&v25[v26]);
  v27 = *(_QWORD *)(a1 + 2624);
  v28 = *(_QWORD *)(a1 + 2616);
  *(_OWORD *)v112 = 0;
  v84.m128i_i64[0] = v27;
  v113 = nullptr;
  v29 = v27 - v28;
  v30 = (v27 - v28) >> 5;
  if ( v30 )
  {
    if ( v30 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_134;
    v31 = (_QWORD *)operator new(v29);
    v28 = *(_QWORD *)(a1 + 2616);
    v32 = v31;
    v84.m128i_i64[0] = *(_QWORD *)(a1 + 2624);
  }
  else
  {
    v32 = nullptr;
  }
  v84.m128i_i64[1] = (__int64)v32;
  v33 = _mm_loadl_epi64((const __m128i *)&v84.m128i_u64[1]);
  v113 = (char *)v32 + v29;
  *(__m128i *)v112 = _mm_unpacklo_epi64(v33, v33);
  if ( v28 != v84.m128i_i64[0] )
  {
    *v32 = v32 + 2;
    v34 = *(_BYTE **)v28;
    v35 = *(_QWORD *)(v28 + 8);
    if ( !(v35 + *(_QWORD *)v28) || v34 )
    {
      v36 = v28 + 32;
      while ( (unsigned __int64)v35 <= 0xF )
      {
        v37 = (_BYTE *)*v32;
        if ( v35 != 1 )
        {
          if ( !v35 )
            goto LABEL_19;
          goto LABEL_25;
        }
        *v37 = *v34;
        v37 = (_BYTE *)*v32;
LABEL_19:
        v32[1] = v35;
        v32 += 4;
        v37[v35] = 0;
        if ( v36 == v84.m128i_i64[0] )
          goto LABEL_28;
        v36 += 32;
        *v32 = v32 + 2;
        v34 = *(_BYTE **)(v36 - 32);
        v35 = *(_QWORD *)(v36 - 24);
        if ( &v34[v35] && !v34 )
          goto LABEL_22;
      }
      if ( v35 < 0 )
LABEL_133:
        std::__throw_length_error("basic_string::_M_create");
      v84.m128i_i64[1] = (__int64)v34;
      v37 = (_BYTE *)operator new(v35 + 1);
      v32[2] = v35;
      v34 = (_BYTE *)v84.m128i_i64[1];
      *v32 = v37;
LABEL_25:
      memcpy(v37, v34, v35);
      v37 = (_BYTE *)*v32;
      goto LABEL_19;
    }
LABEL_22:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_28:
  v38 = *(_BYTE **)(a1 + 2640);
  v39 = *(_QWORD *)(a1 + 2648);
  v112[1] = v32;
  v114[0] = &v115;
  sub_126BE20(v114, v38, (__int64)&v38[v39]);
  v40 = *(_BYTE *)(a1 + 2704) == 0;
  v118 = 0;
  if ( !v40 )
  {
    v80 = *(_BYTE **)(a1 + 2672);
    v81 = *(_QWORD *)(a1 + 2680);
    v116[0] = &v117;
    sub_126BE20(v116, v80, (__int64)&v80[v81]);
    v118 = 1;
  }
  v41 = *(_QWORD *)(a1 + 2176);
  v42 = v41 + 192LL * *(unsigned int *)(a1 + 2184);
  while ( v41 != v42 )
  {
    while ( 1 )
    {
      v42 -= 192;
      if ( *(_BYTE *)(v42 + 184) )
      {
        v43 = *(void **)(v42 + 152);
        if ( v43 != (void *)(v42 + 168) )
          operator delete(v43);
      }
      v44 = *(void **)(v42 + 120);
      if ( v44 != (void *)(v42 + 136) )
        operator delete(v44);
      v45 = *(void ***)(v42 + 96);
      v46 = *(_QWORD *)(v42 + 104);
      v47 = v45;
      if ( (void **)v46 != v45 )
      {
        do
        {
          while ( 1 )
          {
            v48 = *v47;
            if ( *v47 == v47 + 2 )
              break;
            v84.m128i_i64[0] = v46;
            v47 += 4;
            operator delete(v48);
            v46 = v84.m128i_i64[0];
            if ( v47 == (void **)v84.m128i_i64[0] )
              goto LABEL_40;
          }
          v47 += 4;
        }
        while ( (void **)v46 != v47 );
LABEL_40:
        v45 = *(void ***)(v42 + 96);
      }
      if ( v45 )
        operator delete(v45);
      v49 = *(void **)(v42 + 64);
      if ( v49 != (void *)(v42 + 80) )
        operator delete(v49);
      v50 = *(void **)(v42 + 32);
      if ( v50 != (void *)(v42 + 48) )
        operator delete(v50);
      if ( *(_QWORD *)v42 == v42 + 16 )
        break;
      operator delete(*(void **)v42);
      if ( v41 == v42 )
        goto LABEL_49;
    }
  }
LABEL_49:
  *(_DWORD *)(v7 + 2184) = 0;
  if ( *(_DWORD *)(v7 + 2188) )
  {
    v51 = *(_QWORD *)(v7 + 2176);
  }
  else
  {
    v76 = sub_2237400(v7 + 2176, v7 + 2192, 1, 192, v103);
    sub_11821E0((__int64 *)(v7 + 2176), v76);
    v77 = *(void **)(v7 + 2176);
    v78 = v103[0];
    if ( (void *)(v7 + 2192) != v77 )
      free(v77);
    v79 = *(unsigned int *)(v7 + 2184);
    *(_QWORD *)(v7 + 2176) = v76;
    *(_DWORD *)(v7 + 2188) = v78;
    v51 = v76 + 192 * v79;
  }
  *(_QWORD *)v51 = v51 + 16;
  sub_126BE20((_QWORD *)v51, (_BYTE *)v105[0], (__int64)v105[0] + (unsigned __int64)v105[1]);
  *(_QWORD *)(v51 + 32) = v51 + 48;
  sub_126BE20((_QWORD *)(v51 + 32), (_BYTE *)v108[0], (__int64)v108[0] + (unsigned __int64)v108[1]);
  *(_QWORD *)(v51 + 64) = v51 + 80;
  sub_126BE20((_QWORD *)(v51 + 64), (_BYTE *)v110[0], (__int64)v110[0] + (unsigned __int64)v110[1]);
  v52 = (char *)v112[1] - (char *)v112[0];
  v53 = (char *)v112[1] - (char *)v112[0];
  *(_OWORD *)(v51 + 96) = 0;
  v54 = v53 >> 5;
  *(_QWORD *)(v51 + 112) = 0;
  if ( v54 )
  {
    if ( v54 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v55 = (_QWORD *)operator new(v52);
      goto LABEL_54;
    }
LABEL_134:
    std::__throw_bad_alloc();
  }
  v55 = nullptr;
LABEL_54:
  v84.m128i_i64[0] = (__int64)v55;
  v56 = _mm_loadl_epi64(&v84);
  *(_QWORD *)(v51 + 112) = (char *)v55 + v52;
  *(__m128i *)(v51 + 96) = _mm_unpacklo_epi64(v56, v56);
  v57 = v112[0];
  v84.m128i_i64[0] = (__int64)v112[1];
  if ( v112[1] == v112[0] )
    goto LABEL_69;
  *v55 = v55 + 2;
  v58 = (_BYTE *)*v57;
  v59 = v57[1];
  if ( v59 + *v57 && !v58 )
    goto LABEL_22;
  v84.m128i_i64[1] = (__int64)v105;
  v60 = v7;
  v61 = (char *)(v57 + 4);
  v62 = v59;
LABEL_58:
  if ( v62 > 0xF )
    goto LABEL_65;
  while ( 1 )
  {
    v63 = (_BYTE *)*v55;
    if ( v62 == 1 )
    {
      *v63 = *v58;
      v63 = (_BYTE *)*v55;
      goto LABEL_61;
    }
    if ( v62 )
      goto LABEL_67;
LABEL_61:
    v55[1] = v62;
    v55 += 4;
    v63[v62] = 0;
    if ( v61 == (char *)v84.m128i_i64[0] )
      break;
    v61 += 32;
    *v55 = v55 + 2;
    v58 = *((_BYTE **)v61 - 4);
    v62 = *((_QWORD *)v61 - 3);
    if ( !&v58[v62] )
      goto LABEL_58;
    if ( !v58 )
      goto LABEL_22;
    if ( v62 > 0xF )
    {
LABEL_65:
      v85 = v58;
      if ( (v62 & 0x8000000000000000LL) != 0LL )
        goto LABEL_133;
      v63 = (_BYTE *)operator new(v62 + 1);
      v55[2] = v62;
      v58 = v85;
      *v55 = v63;
LABEL_67:
      memcpy(v63, v58, v62);
      v63 = (_BYTE *)*v55;
      goto LABEL_61;
    }
  }
  v7 = v60;
  v9 = (void **)v84.m128i_i64[1];
LABEL_69:
  *(_QWORD *)(v51 + 104) = v55;
  *(_QWORD *)(v51 + 120) = v51 + 136;
  sub_126BE20((_QWORD *)(v51 + 120), (_BYTE *)v114[0], (__int64)v114[0] + (unsigned __int64)v114[1]);
  *(_BYTE *)(v51 + 184) = 0;
  if ( v118 )
  {
    *(_QWORD *)(v51 + 152) = v51 + 168;
    sub_126BE20((_QWORD *)(v51 + 152), (_BYTE *)v116[0], (__int64)v116[0] + (unsigned __int64)v116[1]);
    *(_BYTE *)(v51 + 184) = 1;
    ++*(_DWORD *)(v7 + 2184);
    if ( v118 && v116[0] != v9 + 21 )
      operator delete(v116[0]);
  }
  else
  {
    ++*(_DWORD *)(v7 + 2184);
  }
  if ( v114[0] != v9 + 17 )
    operator delete(v114[0]);
  v67 = (void **)v112[1];
  v68 = (void **)v112[0];
  if ( v112[0] != v112[1] )
  {
    do
    {
      while ( *v68 != v68 + 2 )
      {
        operator delete(*v68);
        v68 += 4;
        if ( v68 == v67 )
          goto LABEL_76;
      }
      v68 += 4;
    }
    while ( v68 != v67 );
LABEL_76:
    v67 = (void **)v112[0];
  }
  if ( v67 )
    operator delete(v67);
  if ( v110[0] != v9 + 10 )
    operator delete(v110[0]);
  if ( v108[0] != v9 + 6 )
    operator delete(v108[0]);
  if ( v105[0] != v9 + 2 )
    operator delete(v105[0]);
  v69 = *(_QWORD *)(v7 + 8);
  v70 = *(_QWORD *)(v69 + 496);
  if ( v70 )
  {
    v82 = *(_BYTE **)(v69 + 488);
    v87 = &v89;
    v89 = v91;
    sub_126BE20(&v89, v82, (__int64)&v82[v70]);
  }
  else
  {
    v91[0] = 0;
    v87 = &v89;
    v89 = v91;
    v90 = 0;
  }
  v71 = v7 + 624;
  sub_12202B0(v7, v7 + 1152, v70, v64, v65, v66);
  v72 = *((_DWORD *)v86 + 8);
  if ( ((v72 - 29) & 0xFFFFFFF7) == 0 || (unsigned int)(v72 - 21) <= 1 )
  {
LABEL_89:
    v73 = 5;
    v74 = "lib32";
    goto LABEL_90;
  }
  if ( v72 == 38 )
  {
    v83 = *((_DWORD *)v86 + 12);
    if ( v83 != 12 && v83 != 25 )
      goto LABEL_120;
    v73 = 6;
    v74 = "libx32";
  }
  else
  {
    if ( v72 == 27 )
      goto LABEL_89;
LABEL_120:
    v75 = sub_22B7EC0(v86);
    v74 = "lib";
    v73 = v75 == 0 ? 5LL : 3LL;
    if ( !v75 )
      v74 = (char *)"lib64";
  }
LABEL_90:
  v92[0] = v93;
  sub_126BEE0(v92, v74, (__int64)&v74[v73]);
  v88 = v94;
  sub_126C3D0(v94, (__int64)v86);
  sub_1218F10(v7, a2, (__int64)v87, (__int64)v92, (__int64)v94, v7 + 624);
  v102 = 260;
  v99[0] = "/lib";
  v100 = 259;
  v104 = 257;
  v101[0] = v94;
  LOWORD(v108[0]) = 257;
  v85 = v103;
  v84.m128i_i64[1] = (__int64)v101;
  v84.m128i_i64[0] = (__int64)v99;
  sub_1130220(v95, v89, v90, (__int64)v99, (__int64)v101, (__int64)v103, (__int64)v9);
  v86 = v97;
  v98 = 260;
  v97[0] = v95;
  sub_11C52D0(a2, (__int64)v97, v7 + 624);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  v101[0] = v92;
  LOWORD(v108[0]) = 257;
  v104 = 257;
  v102 = 260;
  v99[0] = "/lib/..";
  v100 = 259;
  sub_1130220(v95, v89, v90, v84.m128i_i64[0], v84.m128i_i64[1], (__int64)v85, (__int64)v9);
  v97[0] = v95;
  v98 = 260;
  sub_11C52D0(a2, (__int64)v86, v7 + 624);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  v102 = 260;
  v101[0] = v88;
  v99[0] = "/usr/lib";
  LOWORD(v108[0]) = 257;
  v104 = 257;
  v100 = 259;
  sub_1130220(v95, v89, v90, v84.m128i_i64[0], v84.m128i_i64[1], (__int64)v85, (__int64)v9);
  v97[0] = v95;
  v98 = 260;
  sub_11C52D0(a2, (__int64)v86, v7 + 624);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  v104 = 257;
  v99[0] = "/usr";
  LOWORD(v108[0]) = 257;
  v102 = 260;
  v101[0] = v92;
  v100 = 259;
  sub_1130220(v95, v89, v90, v84.m128i_i64[0], v84.m128i_i64[1], (__int64)v85, (__int64)v9);
  v97[0] = v95;
  v98 = 260;
  sub_11C52D0(a2, (__int64)v86, v7 + 624);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  sub_1219730(v7, a2, (__int64)v87, (__int64)v92, v7 + 624);
  v99[0] = "/lib";
  v100 = 259;
  LOWORD(v108[0]) = 257;
  v104 = 257;
  v102 = 257;
  sub_1130220(v95, v89, v90, v84.m128i_i64[0], v84.m128i_i64[1], (__int64)v85, (__int64)v9);
  v97[0] = v95;
  v98 = 260;
  sub_11C52D0(a2, (__int64)v86, v71);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  LOWORD(v108[0]) = 257;
  v104 = 257;
  v102 = 257;
  v99[0] = "/usr/lib";
  v100 = 259;
  sub_1130220(v95, v89, v90, v84.m128i_i64[0], v84.m128i_i64[1], (__int64)v85, (__int64)v9);
  v98 = 260;
  v97[0] = v95;
  sub_11C52D0(a2, (__int64)v86, v71);
  if ( v95[0] != v96 )
    operator delete(v95[0]);
  if ( (__m128i *)v94[0].m128i_i64[0] != &v88[1] )
    operator delete((void *)v94[0].m128i_i64[0]);
  if ( v92[0] != v93 )
    operator delete(v92[0]);
  if ( v89 != v87 + 2 )
    operator delete(v89);
}
