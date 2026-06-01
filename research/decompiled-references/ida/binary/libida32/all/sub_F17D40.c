void __fastcall sub_F17D40(__int64 a1, __int64 a2)
{
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm7
  __m128i *v12; // rdx
  __m128i v13; // xmm0
  void *v14; // rax
  void *v15; // rdx
  __m128i *v16; // rdi
  __m128i v17; // xmm2
  __m128i v18; // xmm7
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm4
  __m128i *v22; // rdx
  __m128 v23; // xmm0
  __m128i *v24; // rdi
  __m128i v25; // xmm3
  __m128i v26; // xmm6
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm7
  __m128i *v30; // rdx
  void *v31; // rax
  __m128i *v32; // rdi
  __m128i v33; // xmm4
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm5
  __m128i *v37; // rdx
  __m128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __m128i *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm3
  __m128i *v46; // rdx
  __m128i v47; // xmm0
  void *v48; // rax
  void *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // r14
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm5
  __m128i *v57; // rdx
  __m128i v58; // xmm0
  void *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  void (__fastcall *v66)(__int64, __int64, __int64); // rax
  __int64 v67; // rax
  _BYTE *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdi
  _BYTE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rdi
  void (__fastcall *v78)(__int64, __int64, __int64); // rax
  __int64 v79; // rax
  _BYTE *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rsi
  __int64 v84; // rdi
  _BYTE *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // rdi
  void (__fastcall *v92)(__int64, __int64, __int64); // rax
  __int64 v93; // rax
  _BYTE *v94; // rax
  __m128i v95; // [rsp+0h] [rbp-168h] BYREF
  double v96[2]; // [rsp+18h] [rbp-150h] BYREF
  char v97; // [rsp+2Bh] [rbp-13Dh] BYREF
  char v98; // [rsp+2Ch] [rbp-13Ch] BYREF
  char v99; // [rsp+2Dh] [rbp-13Bh] BYREF
  char v100; // [rsp+2Eh] [rbp-13Ah] BYREF
  char v101; // [rsp+2Fh] [rbp-139h] BYREF
  __m128i v102; // [rsp+30h] [rbp-138h] BYREF
  __int64 v103; // [rsp+40h] [rbp-128h]
  void *v104; // [rsp+48h] [rbp-120h] BYREF
  __int64 v105; // [rsp+50h] [rbp-118h]
  __m128i v106; // [rsp+58h] [rbp-110h] BYREF
  __m128i v107; // [rsp+70h] [rbp-F8h] BYREF
  void *v108[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v109; // [rsp+90h] [rbp-D8h]
  __m128i v110; // [rsp+98h] [rbp-D0h] BYREF
  __m128i v111; // [rsp+B0h] [rbp-B8h] BYREF
  void *v112[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-98h]
  __m128i v114; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v115; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v116; // [rsp+F8h] [rbp-70h] BYREF
  void *v117; // [rsp+108h] [rbp-60h]
  __int64 v118; // [rsp+110h] [rbp-58h]
  __m128i v119[5]; // [rsp+118h] [rbp-50h] BYREF

  if ( (*(_BYTE *)(a2 + 96) & 1) != 0 )
    sub_971800(*(_QWORD *)(a1 + 1096), " virtual");
  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_971800(*(_QWORD *)(a1 + 1096), "target ");
    sub_F06990(a1, *(_QWORD *)(a2 + 64));
    v60 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v60 )
    {
      v61 = *(_QWORD *)(a1 + 16);
      v98 = 1;
      v62 = v61 + 32 * v60 - 32;
      if ( !*(_QWORD *)(v62 + 16) )
        goto LABEL_109;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v62 + 24))(v62, &v98);
        v64 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v64;
        v65 = *(_QWORD *)(a1 + 16) + 32 * v64;
        v66 = *(void (__fastcall **)(__int64, __int64, __int64))(v65 + 16);
        if ( v66 )
          v66(v65, v65, 3);
        v67 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v67 )
          break;
        v63 = *(_QWORD *)(a1 + 16);
        v98 = 1;
        v62 = v63 + 32 * v67 - 32;
        if ( !*(_QWORD *)(v62 + 16) )
          goto LABEL_109;
      }
    }
    v68 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v68 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    goto LABEL_69;
  }
  v95.m128i_i64[0] = a1;
  v4 = _mm_loadl_epi64(&v95);
  v103 = a2;
  v104 = &v106;
  v95 = _mm_unpacklo_epi64(v4, v4);
  v102 = v95;
  sub_F009D0(&v104, &byte_22CD811, (__int64)&byte_22CD811);
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v33 = _mm_loadu_si128((const __m128i *)&v102.m128i_u64[1]);
    v115 = v102.m128i_i64[0];
    v117 = v119;
    v116 = v33;
    if ( v104 == &v106 )
    {
      v119[0] = _mm_loadu_si128(&v106);
    }
    else
    {
      v117 = v104;
      v119[0].m128i_i64[0] = v106.m128i_i64[0];
    }
    v34 = v105;
    v105 = 0;
    v106.m128i_i8[0] = 0;
    v118 = v34;
    v104 = &v106;
    v112[0] = nullptr;
    v35 = operator new(0x38u);
    v36 = _mm_loadu_si128(&v116);
    *(_QWORD *)v35 = v115;
    *(_QWORD *)(v35 + 24) = v35 + 40;
    v37 = (__m128i *)v117;
    *(__m128i *)(v35 + 8) = v36;
    if ( v37 == v119 )
    {
      *(__m128i *)(v35 + 40) = _mm_loadu_si128(v119);
    }
    else
    {
      *(_QWORD *)(v35 + 24) = v37;
      *(_QWORD *)(v35 + 40) = v119[0].m128i_i64[0];
    }
    v111.m128i_i64[0] = v35;
    *(_QWORD *)(v35 + 32) = v118;
    *(_QWORD *)&v96[0] = sub_F0F000;
    v117 = v119;
    v118 = 0;
    v38 = _mm_loadh_ps(v96);
    v119[0].m128i_i8[0] = 0;
    *(__m128 *)v112 = v38;
    sub_AA95F0(a1 + 16, &v111);
    if ( v112[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v112[0])(&v111, &v111, 3);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 16);
    v97 = 0;
    v7 = v6 + 32 * v5 - 32;
    if ( !*(_QWORD *)(v7 + 16) )
      goto LABEL_109;
    (*(void (__fastcall **)(__int64, char *))(v7 + 24))(v7, &v97);
    v8 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
    v116 = _mm_loadu_si128((const __m128i *)&v102.m128i_u64[1]);
    v115 = v102.m128i_i64[0];
    v117 = v119;
    if ( v104 == &v106 )
    {
      v119[0] = _mm_loadu_si128(&v106);
    }
    else
    {
      v117 = v104;
      v119[0].m128i_i64[0] = v106.m128i_i64[0];
    }
    v9 = v105;
    v105 = 0;
    v106.m128i_i8[0] = 0;
    v118 = v9;
    v104 = &v106;
    v112[0] = nullptr;
    v10 = operator new(0x38u);
    v11 = _mm_loadu_si128(&v116);
    *(_QWORD *)v10 = v115;
    *(_QWORD *)(v10 + 24) = v10 + 40;
    v12 = (__m128i *)v117;
    *(__m128i *)(v10 + 8) = v11;
    if ( v12 == v119 )
    {
      *(__m128i *)(v10 + 40) = _mm_loadu_si128(v119);
    }
    else
    {
      *(_QWORD *)(v10 + 24) = v12;
      *(_QWORD *)(v10 + 40) = v119[0].m128i_i64[0];
    }
    v111.m128i_i64[0] = v10;
    v119[0].m128i_i8[0] = 0;
    v13 = _mm_load_si128(&v111);
    *(_QWORD *)(v10 + 32) = v118;
    v117 = v119;
    v118 = 0;
    v111 = _mm_loadu_si128(v8);
    v14 = (void *)v8[1].m128i_i64[0];
    v15 = (void *)v8[1].m128i_i64[1];
    *v8 = v13;
    v112[0] = v14;
    v8[1].m128i_i64[0] = (__int64)sub_F012E0;
    v112[1] = v15;
    v8[1].m128i_i64[1] = (__int64)sub_F0F000;
    if ( v14 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v14)(&v111, &v111, 3);
  }
  if ( v117 != v119 )
    operator delete(v117);
  v16 = (__m128i *)v104;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v16 != &v106 )
    operator delete(v16);
  if ( *(_BYTE *)(a1 + 1056) )
  {
LABEL_69:
    *(_BYTE *)(a1 + 1056) = 0;
    sub_971800(*(_QWORD *)(a1 + 1096), "nominated ");
    v69 = sub_B76580(a2);
    sub_F06990(a1, v69);
    v70 = *(_QWORD *)(a1 + 1096);
    v71 = *(_BYTE **)(v70 + 32);
    if ( (unsigned __int64)v71 >= *(_QWORD *)(v70 + 24) )
    {
      sub_2257CD0(v70, 32);
    }
    else
    {
      *(_QWORD *)(v70 + 32) = v71 + 1;
      *v71 = 32;
    }
    sub_F06990(a1, *(_QWORD *)(a2 + 80));
    v72 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v72 )
    {
      v73 = *(_QWORD *)(a1 + 16);
      v100 = 1;
      v74 = v73 + 32 * v72 - 32;
      if ( !*(_QWORD *)(v74 + 16) )
        goto LABEL_109;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v74 + 24))(v74, &v100);
        v76 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v76;
        v77 = *(_QWORD *)(a1 + 16) + 32 * v76;
        v78 = *(void (__fastcall **)(__int64, __int64, __int64))(v77 + 16);
        if ( v78 )
          v78(v77, v77, 3);
        v79 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v79 )
          break;
        v75 = *(_QWORD *)(a1 + 16);
        v100 = 1;
        v74 = v75 + 32 * v79 - 32;
        if ( !*(_QWORD *)(v74 + 16) )
          goto LABEL_109;
      }
    }
    v80 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v80 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
LABEL_79:
    *(_BYTE *)(a1 + 1056) = 0;
    sub_971800(*(_QWORD *)(a1 + 1096), "constructed ");
    v81 = *(_QWORD *)(a2 + 88);
    if ( !v81 )
      v81 = *(_QWORD *)(a2 + 64);
    v82 = *(_QWORD *)(v81 + 16);
    v83 = (_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v82 & 4) != 0 )
      v83 = (_QWORD *)*v83;
    if ( v83 )
      v83 -= 8;
    sub_F06990(a1, (__int64)v83);
    v84 = *(_QWORD *)(a1 + 1096);
    v85 = *(_BYTE **)(v84 + 32);
    if ( (unsigned __int64)v85 >= *(_QWORD *)(v84 + 24) )
    {
      sub_2257CD0(v84, 32);
    }
    else
    {
      *(_QWORD *)(v84 + 32) = v85 + 1;
      *v85 = 32;
    }
    sub_F06990(a1, *(_QWORD *)(a2 + 88));
    v86 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v86 )
    {
      v87 = *(_QWORD *)(a1 + 16);
      LOBYTE(v115) = 1;
      v88 = v87 + 32 * v86 - 32;
      if ( !*(_QWORD *)(v88 + 16) )
        goto LABEL_109;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v88 + 24))(v88, &v115);
        v90 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v90;
        v91 = *(_QWORD *)(a1 + 16) + 32 * v90;
        v92 = *(void (__fastcall **)(__int64, __int64, __int64))(v91 + 16);
        if ( v92 )
          v92(v91, v91, 3);
        v93 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v93 )
          break;
        v89 = *(_QWORD *)(a1 + 16);
        LOBYTE(v115) = 1;
        v88 = v89 + 32 * v93 - 32;
        if ( !*(_QWORD *)(v88 + 16) )
          goto LABEL_109;
      }
    }
    v94 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v94 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v17 = _mm_load_si128(&v95);
  v108[0] = (void *)a2;
  v107 = v17;
  v108[1] = &v110;
  sub_F009D0(&v108[1], &byte_22CD811, (__int64)&byte_22CD811);
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v18 = _mm_loadu_si128((const __m128i *)&v107.m128i_u64[1]);
    v115 = v107.m128i_i64[0];
    v117 = v119;
    v116 = v18;
    if ( v108[1] == &v110 )
    {
      v119[0] = _mm_loadu_si128(&v110);
    }
    else
    {
      v117 = v108[1];
      v119[0].m128i_i64[0] = v110.m128i_i64[0];
    }
    v19 = v109;
    v109 = 0;
    v110.m128i_i8[0] = 0;
    v118 = v19;
    v108[1] = &v110;
    v112[0] = nullptr;
    v20 = operator new(0x38u);
    v21 = _mm_loadu_si128(&v116);
    *(_QWORD *)v20 = v115;
    *(_QWORD *)(v20 + 24) = v20 + 40;
    v22 = (__m128i *)v117;
    *(__m128i *)(v20 + 8) = v21;
    if ( v22 == v119 )
    {
      *(__m128i *)(v20 + 40) = _mm_loadu_si128(v119);
    }
    else
    {
      *(_QWORD *)(v20 + 24) = v22;
      *(_QWORD *)(v20 + 40) = v119[0].m128i_i64[0];
    }
    v111.m128i_i64[0] = v20;
    *(_QWORD *)(v20 + 32) = v118;
    *(_QWORD *)&v96[0] = sub_F0F7E0;
    v117 = v119;
    v118 = 0;
    v23 = _mm_loadh_ps(v96);
    v119[0].m128i_i8[0] = 0;
    *(__m128 *)v112 = v23;
    sub_AA95F0(a1 + 16, &v111);
    if ( v112[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v112[0])(&v111, &v111, 3);
  }
  else
  {
    v39 = *(unsigned int *)(a1 + 24);
    v40 = *(_QWORD *)(a1 + 16);
    v99 = 0;
    v41 = v40 + 32 * v39 - 32;
    if ( !*(_QWORD *)(v41 + 16) )
      goto LABEL_109;
    (*(void (__fastcall **)(__int64, char *))(v41 + 24))(v41, &v99);
    v42 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
    v116 = _mm_loadu_si128((const __m128i *)&v107.m128i_u64[1]);
    v115 = v107.m128i_i64[0];
    v117 = v119;
    if ( v108[1] == &v110 )
    {
      v119[0] = _mm_loadu_si128(&v110);
    }
    else
    {
      v117 = v108[1];
      v119[0].m128i_i64[0] = v110.m128i_i64[0];
    }
    v43 = v109;
    v109 = 0;
    v110.m128i_i8[0] = 0;
    v118 = v43;
    v108[1] = &v110;
    v112[0] = nullptr;
    v44 = operator new(0x38u);
    v45 = _mm_loadu_si128(&v116);
    *(_QWORD *)v44 = v115;
    *(_QWORD *)(v44 + 24) = v44 + 40;
    v46 = (__m128i *)v117;
    *(__m128i *)(v44 + 8) = v45;
    if ( v46 == v119 )
    {
      *(__m128i *)(v44 + 40) = _mm_loadu_si128(v119);
    }
    else
    {
      *(_QWORD *)(v44 + 24) = v46;
      *(_QWORD *)(v44 + 40) = v119[0].m128i_i64[0];
    }
    v111.m128i_i64[0] = v44;
    v119[0].m128i_i8[0] = 0;
    v47 = _mm_load_si128(&v111);
    *(_QWORD *)(v44 + 32) = v118;
    v117 = v119;
    v118 = 0;
    v111 = _mm_loadu_si128(v42);
    v48 = (void *)v42[1].m128i_i64[0];
    v49 = (void *)v42[1].m128i_i64[1];
    *v42 = v47;
    v112[0] = v48;
    v42[1].m128i_i64[0] = (__int64)sub_F01230;
    v112[1] = v49;
    v42[1].m128i_i64[1] = (__int64)sub_F0F7E0;
    if ( v48 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v48)(&v111, &v111, 3);
  }
  if ( v117 != v119 )
    operator delete(v117);
  v24 = (__m128i *)v108[1];
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v24 != &v110 )
    operator delete(v24);
  if ( *(_BYTE *)(a1 + 1056) )
    goto LABEL_79;
  v25 = _mm_load_si128(&v95);
  v112[0] = (void *)a2;
  v111 = v25;
  v112[1] = &v114;
  sub_F009D0(&v112[1], &byte_22CD811, (__int64)&byte_22CD811);
  if ( !*(_BYTE *)(a1 + 1057) )
  {
    v50 = *(unsigned int *)(a1 + 24);
    v51 = *(_QWORD *)(a1 + 16);
    v101 = 0;
    v52 = v51 + 32 * v50 - 32;
    if ( *(_QWORD *)(v52 + 16) )
    {
      (*(void (__fastcall **)(__int64, char *))(v52 + 24))(v52, &v101);
      v53 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v116 = _mm_loadu_si128((const __m128i *)&v111.m128i_u64[1]);
      v115 = v111.m128i_i64[0];
      v117 = v119;
      if ( v112[1] == &v114 )
      {
        v119[0] = _mm_loadu_si128(&v114);
      }
      else
      {
        v117 = v112[1];
        v119[0].m128i_i64[0] = v114.m128i_i64[0];
      }
      v54 = v113;
      v113 = 0;
      v114.m128i_i8[0] = 0;
      v118 = v54;
      v112[1] = &v114;
      v108[0] = nullptr;
      v55 = operator new(0x38u);
      v56 = _mm_loadu_si128(&v116);
      *(_QWORD *)v55 = v115;
      *(_QWORD *)(v55 + 24) = v55 + 40;
      v57 = (__m128i *)v117;
      *(__m128i *)(v55 + 8) = v56;
      if ( v57 == v119 )
      {
        *(__m128i *)(v55 + 40) = _mm_loadu_si128(v119);
      }
      else
      {
        *(_QWORD *)(v55 + 24) = v57;
        *(_QWORD *)(v55 + 40) = v119[0].m128i_i64[0];
      }
      v107.m128i_i64[0] = v55;
      v119[0].m128i_i8[0] = 0;
      v58 = _mm_load_si128(&v107);
      *(_QWORD *)(v55 + 32) = v118;
      v117 = v119;
      v118 = 0;
      v107 = _mm_loadu_si128(v53);
      v31 = (void *)v53[1].m128i_i64[0];
      v59 = (void *)v53[1].m128i_i64[1];
      *v53 = v58;
      v108[0] = v31;
      v53[1].m128i_i64[0] = (__int64)sub_F01180;
      v108[1] = v59;
      v53[1].m128i_i64[1] = (__int64)sub_F0D860;
      if ( v31 )
        goto LABEL_35;
      goto LABEL_36;
    }
LABEL_109:
    std::__throw_bad_function_call();
  }
  v26 = _mm_loadu_si128((const __m128i *)&v111.m128i_u64[1]);
  v115 = v111.m128i_i64[0];
  v117 = v119;
  v116 = v26;
  if ( v112[1] == &v114 )
  {
    v119[0] = _mm_loadu_si128(&v114);
  }
  else
  {
    v117 = v112[1];
    v119[0].m128i_i64[0] = v114.m128i_i64[0];
  }
  v27 = v113;
  v113 = 0;
  v114.m128i_i8[0] = 0;
  v118 = v27;
  v112[1] = &v114;
  v108[0] = nullptr;
  v28 = operator new(0x38u);
  v29 = _mm_loadu_si128(&v116);
  *(_QWORD *)v28 = v115;
  *(_QWORD *)(v28 + 24) = v28 + 40;
  v30 = (__m128i *)v117;
  *(__m128i *)(v28 + 8) = v29;
  if ( v30 == v119 )
  {
    *(__m128i *)(v28 + 40) = _mm_loadu_si128(v119);
  }
  else
  {
    *(_QWORD *)(v28 + 24) = v30;
    *(_QWORD *)(v28 + 40) = v119[0].m128i_i64[0];
  }
  v107.m128i_i64[0] = v28;
  v119[0].m128i_i8[0] = 0;
  *(_QWORD *)(v28 + 32) = v118;
  v95.m128i_i64[0] = (__int64)sub_F0D860;
  v117 = v119;
  v118 = 0;
  *(__m128 *)v108 = _mm_loadh_ps((const double *)v95.m128i_i64);
  sub_AA95F0(a1 + 16, &v107);
  v31 = v108[0];
  if ( v108[0] )
LABEL_35:
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v31)(&v107, &v107, 3);
LABEL_36:
  if ( v117 != v119 )
    operator delete(v117);
  v32 = (__m128i *)v112[1];
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v32 != &v114 )
    operator delete(v32);
}

