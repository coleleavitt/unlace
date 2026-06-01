void __fastcall sub_F426A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(); // rsi
  size_t v12; // rax
  bool v13; // zf
  __m128i si128; // xmm7
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r15
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm5
  void **v24; // rdx
  __m128i v25; // xmm0
  void (__fastcall *v26)(_BYTE *, _BYTE *, __int64); // rax
  __int64 v27; // rdx
  void (__fastcall *v28)(double **, char *); // rcx
  __m128i *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  const __m128i *v42; // rbp
  __m128i v43; // xmm2
  __m128i v44; // xmm3
  void *v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm4
  __m128i v48; // xmm5
  __m128i *v49; // rdx
  __m128i v50; // xmm6
  __m128i *v51; // rdi
  __int64 v52; // rax
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __m128i v58; // xmm2
  __m128i *v59; // r15
  void *v60; // rax
  __int64 v61; // rax
  __m128i v62; // xmm3
  __m128i v63; // xmm4
  __m128i *v64; // rdx
  __m128i v65; // xmm0
  void (__fastcall *v66)(__m256i *, __m256i *, __int64); // rax
  __int64 v67; // rdx
  __m128i v68; // xmm2
  void *v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm3
  void **v72; // rdx
  __m128 v73; // xmm0
  unsigned __int8 v74; // r15
  __int8 v75; // dl
  __int32 v76; // ebx
  _QWORD *v77; // r13
  unsigned __int8 v78; // r15
  int v79; // esi
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdi
  void (__fastcall *v87)(__int64, __int64, __int64); // rax
  __int64 v88; // rax
  _BYTE *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // rdi
  void (__fastcall *v98)(__int64, __int64, __int64); // rax
  __int64 v99; // rax
  _BYTE *v100; // rax
  __m128 v101; // [rsp+0h] [rbp-1B8h] BYREF
  void (__fastcall *v102)(double **, char *); // [rsp+10h] [rbp-1A8h] BYREF
  __int8 v103; // [rsp+1Fh] [rbp-199h]
  char v104; // [rsp+2Dh] [rbp-18Bh] BYREF
  char v105; // [rsp+2Eh] [rbp-18Ah] BYREF
  char v106; // [rsp+2Fh] [rbp-189h] BYREF
  __m128i v107[2]; // [rsp+30h] [rbp-188h] BYREF
  __m128i v108; // [rsp+50h] [rbp-168h] BYREF
  __m128i v109; // [rsp+60h] [rbp-158h]
  __m128i v110; // [rsp+70h] [rbp-148h]
  __m128i v111; // [rsp+80h] [rbp-138h]
  __m128i v112; // [rsp+90h] [rbp-128h]
  __m256i v113; // [rsp+A0h] [rbp-118h] BYREF
  void *v114; // [rsp+C0h] [rbp-F8h]
  __m128i v115; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v116[40]; // [rsp+E0h] [rbp-D8h] BYREF
  void *v117; // [rsp+108h] [rbp-B0h] BYREF
  void *v118; // [rsp+110h] [rbp-A8h]
  __m128i v119; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v120; // [rsp+130h] [rbp-88h] BYREF
  __m128i v121; // [rsp+138h] [rbp-80h] BYREF
  void *v122[2]; // [rsp+148h] [rbp-70h] BYREF
  void *v123[2]; // [rsp+158h] [rbp-60h] BYREF
  __m128i v124[5]; // [rsp+168h] [rbp-50h] BYREF

  sub_F2EF80(a1, a2);
  v4 = sub_B971E0(a2);
  if ( v4 )
  {
    v9 = v4;
    sub_995540(*(_QWORD *)(a1 + 1096), " instantiated_from");
    sub_F29AE0(a1, v9);
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 <= 1 )
  {
    sub_F2AEB0(a1, *(_BYTE *)(a2 + 180) & 7);
    if ( (*(_BYTE *)(a2 + 180) & 8) != 0 )
      sub_995540(*(_QWORD *)(a1 + 1096), " strict-pack-match");
  }
  v10 = *(_QWORD *)(a2 + 120);
  if ( (v10 & 4) != 0 )
  {
    v11 = *(__int64 (__fastcall **)())(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11 )
      sub_F41560(a1, v11, v5, v6, v7, v8);
  }
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    v12 = j__strlen(&byte_22F0C30);
    v102 = (void (__fastcall *)(double **, char *))a2;
    v13 = *(_BYTE *)(a1 + 1056) == 0;
    v107[0] = (__m128i)_mm_loadh_ps((const double *)&v102);
    if ( v13 )
    {
      si128 = _mm_load_si128(v107);
      v113.m256i_i64[0] = a1;
      *(__m128i *)&v113.m256i_u64[1] = si128;
      v113.m256i_i64[3] = (__int64)&v115;
      sub_F24710(&v113.m256i_i64[3], &byte_22F0C30, (__int64)(&byte_22F0C30 + v12));
      if ( *(_BYTE *)(a1 + 1057) )
      {
        v68 = _mm_loadu_si128((const __m128i *)&v113.m256i_u64[1]);
        v120 = v113.m256i_i64[0];
        v122[0] = v123;
        v121 = v68;
        if ( (__m128i *)v113.m256i_i64[3] == &v115 )
        {
          *(__m128i *)v123 = _mm_loadu_si128(&v115);
        }
        else
        {
          v122[0] = (void *)v113.m256i_i64[3];
          v123[0] = (void *)v115.m128i_i64[0];
        }
        v69 = v114;
        v114 = nullptr;
        v115.m128i_i8[0] = 0;
        v122[1] = v69;
        v113.m256i_i64[3] = (__int64)&v115;
        *(_QWORD *)&v116[16] = 0;
        v70 = operator new(0x38u);
        v71 = _mm_loadu_si128(&v121);
        *(_QWORD *)v70 = v120;
        *(_QWORD *)(v70 + 24) = v70 + 40;
        v72 = (void **)v122[0];
        *(__m128i *)(v70 + 8) = v71;
        if ( v72 == v123 )
        {
          *(__m128i *)(v70 + 40) = _mm_loadu_si128((const __m128i *)v123);
        }
        else
        {
          *(_QWORD *)(v70 + 24) = v72;
          *(void **)(v70 + 40) = v123[0];
        }
        *(_QWORD *)v116 = v70;
        *(void **)(v70 + 32) = v122[1];
        v102 = sub_F3EF60;
        v122[0] = v123;
        v122[1] = nullptr;
        v73 = _mm_loadh_ps((const double *)&v102);
        LOBYTE(v123[0]) = 0;
        *(__m128 *)&v116[16] = v73;
        sub_ACD330(a1 + 16, (__m128i *)v116);
        if ( *(_QWORD *)&v116[16] )
          (*(void (__fastcall **)(_BYTE *, _BYTE *, __int64))&v116[16])(v116, v116, 3);
        goto LABEL_20;
      }
      v15 = *(unsigned int *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 16);
      v104 = 0;
      v17 = v16 + 32 * v15 - 32;
      if ( *(_QWORD *)(v17 + 16) )
      {
        (*(void (__fastcall **)(__int64, char *))(v17 + 24))(v17, &v104);
        v18 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
        v121 = _mm_loadu_si128((const __m128i *)&v113.m256i_u64[1]);
        v120 = v113.m256i_i64[0];
        v122[0] = v123;
        if ( (__m128i *)v113.m256i_i64[3] == &v115 )
        {
          *(__m128i *)v123 = _mm_loadu_si128(&v115);
        }
        else
        {
          v122[0] = (void *)v113.m256i_i64[3];
          v123[0] = (void *)v115.m128i_i64[0];
        }
        v19 = v114;
        v114 = nullptr;
        v115.m128i_i8[0] = 0;
        v122[1] = v19;
        v113.m256i_i64[3] = (__int64)&v115;
        *(_QWORD *)&v116[16] = 0;
        v20 = operator new(0x38u);
        v23 = _mm_loadu_si128(&v121);
        *(_QWORD *)v20 = v120;
        *(_QWORD *)(v20 + 24) = v20 + 40;
        v24 = (void **)v122[0];
        *(__m128i *)(v20 + 8) = v23;
        if ( v24 == v123 )
        {
          *(__m128i *)(v20 + 40) = _mm_loadu_si128((const __m128i *)v123);
        }
        else
        {
          *(_QWORD *)(v20 + 24) = v24;
          *(void **)(v20 + 40) = v123[0];
        }
        *(_QWORD *)v116 = v20;
        LOBYTE(v123[0]) = 0;
        v25 = _mm_load_si128((const __m128i *)v116);
        *(void **)(v20 + 32) = v122[1];
        v122[0] = v123;
        v122[1] = nullptr;
        *(__m128i *)v116 = _mm_loadu_si128(v18);
        v26 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v18[1].m128i_i64[0];
        v27 = v18[1].m128i_i64[1];
        *v18 = v25;
        *(_QWORD *)&v116[16] = v26;
        v18[1].m128i_i64[0] = (__int64)sub_F251A0;
        v28 = sub_F3EF60;
        *(_QWORD *)&v116[24] = v27;
        v18[1].m128i_i64[1] = (__int64)sub_F3EF60;
        if ( v26 )
          v26(v116, v116, 3);
LABEL_20:
        if ( v122[0] != v123 )
          operator delete(v122[0]);
        v29 = (__m128i *)v113.m256i_i64[3];
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v29 != &v115 )
          operator delete(v29);
        goto LABEL_24;
      }
LABEL_90:
      std::__throw_bad_function_call();
    }
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F3CA00((double *)v107[0].m128i_i64, &v107[0].m128i_i64[1]);
    v92 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v92 )
    {
      v93 = *(_QWORD *)(a1 + 16);
      v105 = 1;
      v94 = v93 + 32 * v92 - 32;
      if ( !*(_QWORD *)(v94 + 16) )
        goto LABEL_90;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v94 + 24))(v94, &v105);
        v96 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v96;
        v97 = *(_QWORD *)(a1 + 16) + 32 * v96;
        v98 = *(void (__fastcall **)(__int64, __int64, __int64))(v97 + 16);
        if ( v98 )
          v98(v97, v97, 3);
        v99 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v99 )
          break;
        v95 = *(_QWORD *)(a1 + 16);
        v105 = 1;
        v94 = v95 + 32 * v99 - 32;
        if ( !*(_QWORD *)(v94 + 16) )
          goto LABEL_90;
      }
    }
    v100 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v100 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
LABEL_24:
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v27, (__int64)v28, v21, v22);
    v34 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v34 + 24) & 1) != 0 )
      v35 = sub_B96980(v34);
    else
      v35 = *(_QWORD *)(v34 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v30, v31, v32, v33);
    v36 = *(_QWORD *)(a2 + 104);
    v102 = (void (__fastcall *)(double **, char *))(v35 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL));
    sub_7052B0((__int64 *)(v36 + 96), v36, v37, v38, v39, v40);
    v41 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v41 + 24) & 1) != 0 )
      v42 = (const __m128i *)sub_B96980(v41);
    else
      v42 = *(const __m128i **)(v41 + 24);
    if ( (char *)v102 == (char *)v42 )
      return;
    v101 = _mm_loadh_ps((const double *)off_2B4C2B8);
    do
    {
      v52 = v42[1].m128i_i64[0];
      v53 = _mm_loadu_si128(v42);
      v108.m128i_i64[1] = a1;
      v13 = *(_BYTE *)(a1 + 1056) == 0;
      v108.m128i_i64[0] = v52;
      v54 = _mm_load_si128(&v108);
      v107[1] = v53;
      v109 = v53;
      v110 = v54;
      v111 = v53;
      v112 = v54;
      if ( v13 )
      {
        *(_QWORD *)v116 = a1;
        *(__m128i *)&v116[8] = v53;
        *(__m128i *)&v116[24] = v54;
        v117 = &v119;
        sub_F24710(&v117, &byte_22F0C30, (__int64)&byte_22F0C30);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v43 = _mm_loadu_si128((const __m128i *)&v116[8]);
          v44 = _mm_loadu_si128((const __m128i *)&v116[24]);
          v120 = *(_QWORD *)v116;
          v123[0] = v124;
          v121 = v43;
          *(__m128i *)v122 = v44;
          if ( v117 == &v119 )
          {
            v124[0] = _mm_loadu_si128(&v119);
          }
          else
          {
            v123[0] = v117;
            v124[0].m128i_i64[0] = v119.m128i_i64[0];
          }
          v45 = v118;
          v118 = nullptr;
          v119.m128i_i8[0] = 0;
          v123[1] = v45;
          v117 = &v119;
          v113.m256i_i64[2] = 0;
          v46 = operator new(0x48u);
          v47 = _mm_loadu_si128(&v121);
          v48 = _mm_loadu_si128((const __m128i *)v122);
          *(_QWORD *)v46 = v120;
          *(_QWORD *)(v46 + 40) = v46 + 56;
          v49 = (__m128i *)v123[0];
          *(__m128i *)(v46 + 8) = v47;
          *(__m128i *)(v46 + 24) = v48;
          if ( v49 == v124 )
          {
            *(__m128i *)(v46 + 56) = _mm_loadu_si128(v124);
          }
          else
          {
            *(_QWORD *)(v46 + 40) = v49;
            *(_QWORD *)(v46 + 56) = v124[0].m128i_i64[0];
          }
          v50 = _mm_load_si128((const __m128i *)&v101);
          v113.m256i_i64[0] = v46;
          *(void **)(v46 + 48) = v123[1];
          v123[0] = v124;
          v123[1] = nullptr;
          v124[0].m128i_i8[0] = 0;
          *(__m128i *)&v113.m256i_u64[2] = v50;
          sub_ACD330(a1 + 16, (__m128i *)&v113);
          if ( v113.m256i_i64[2] )
            ((void (__fastcall *)(__m256i *, __m256i *, __int64))v113.m256i_i64[2])(&v113, &v113, 3);
        }
        else
        {
          v55 = *(unsigned int *)(a1 + 24);
          v56 = *(_QWORD *)(a1 + 16);
          v106 = 0;
          v57 = v56 + 32 * v55 - 32;
          if ( !*(_QWORD *)(v57 + 16) )
            goto LABEL_90;
          (*(void (__fastcall **)(__int64, char *))(v57 + 24))(v57, &v106);
          v58 = _mm_loadu_si128((const __m128i *)&v116[24]);
          v59 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          v121 = _mm_loadu_si128((const __m128i *)&v116[8]);
          *(__m128i *)v122 = v58;
          v120 = *(_QWORD *)v116;
          v123[0] = v124;
          if ( v117 == &v119 )
          {
            v124[0] = _mm_loadu_si128(&v119);
          }
          else
          {
            v123[0] = v117;
            v124[0].m128i_i64[0] = v119.m128i_i64[0];
          }
          v60 = v118;
          v118 = nullptr;
          v119.m128i_i8[0] = 0;
          v123[1] = v60;
          v117 = &v119;
          v113.m256i_i64[2] = 0;
          v61 = operator new(0x48u);
          v62 = _mm_loadu_si128(&v121);
          v63 = _mm_loadu_si128((const __m128i *)v122);
          *(_QWORD *)v61 = v120;
          *(_QWORD *)(v61 + 40) = v61 + 56;
          v64 = (__m128i *)v123[0];
          *(__m128i *)(v61 + 8) = v62;
          *(__m128i *)(v61 + 24) = v63;
          if ( v64 == v124 )
          {
            *(__m128i *)(v61 + 56) = _mm_loadu_si128(v124);
          }
          else
          {
            *(_QWORD *)(v61 + 40) = v64;
            *(_QWORD *)(v61 + 56) = v124[0].m128i_i64[0];
          }
          v113.m256i_i64[0] = v61;
          v124[0].m128i_i8[0] = 0;
          v65 = _mm_load_si128((const __m128i *)&v113);
          *(void **)(v61 + 48) = v123[1];
          v123[0] = v124;
          v123[1] = nullptr;
          *(__m128i *)v113.m256i_i8 = _mm_loadu_si128(v59);
          v66 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v59[1].m128i_i64[0];
          v67 = v59[1].m128i_i64[1];
          *v59 = v65;
          v113.m256i_i64[2] = (__int64)v66;
          v59[1].m128i_i64[0] = (__int64)sub_F250D0;
          v113.m256i_i64[3] = v67;
          v59[1].m128i_i64[1] = (__int64)sub_F330E0;
          if ( v66 )
            v66(&v113, &v113, 3);
        }
        if ( v123[0] != v124 )
          operator delete(v123[0]);
        v51 = (__m128i *)v117;
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v51 != &v119 )
          operator delete(v51);
        goto LABEL_40;
      }
      v74 = v109.m128i_u8[12];
      v75 = v111.m128i_i8[12];
      *(_BYTE *)(a1 + 1056) = 0;
      v76 = v109.m128i_i32[2];
      v77 = (_QWORD *)v110.m128i_i64[0];
      v78 = (v74 >> 2) & 3;
      if ( (v75 & 1) != 0 )
      {
        v91 = *(_QWORD *)(a1 + 1096);
        v103 = v75;
        sub_995540(v91, "virtual ");
        v75 = v103;
      }
      v79 = v78;
      if ( (v75 & 0xC) == 0xC )
        v79 = 2 * ((v75 & 2) != 0);
      sub_F2AE20(a1, v79);
      v80 = *v77 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(*(_QWORD *)v80 + 8LL) & 0xF) != 0 )
      {
        v90 = sub_F64F00(*v77);
        sub_F2A610(a1, v90 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v76 )
LABEL_71:
          sub_995540(*(_QWORD *)(a1 + 1096), "...");
      }
      else
      {
        sub_F2A610(a1, *(_QWORD *)v80 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v76 )
          goto LABEL_71;
      }
      v81 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v81 )
      {
        v82 = *(_QWORD *)(a1 + 16);
        LOBYTE(v120) = 1;
        v83 = v82 + 32 * v81 - 32;
        if ( !*(_QWORD *)(v83 + 16) )
          goto LABEL_90;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v83 + 24))(v83, &v120);
          v85 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v85;
          v86 = *(_QWORD *)(a1 + 16) + 32 * v85;
          v87 = *(void (__fastcall **)(__int64, __int64, __int64))(v86 + 16);
          if ( v87 )
            v87(v86, v86, 3);
          v88 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v88 )
            break;
          v84 = *(_QWORD *)(a1 + 16);
          LOBYTE(v120) = 1;
          v83 = v84 + 32 * v88 - 32;
          if ( !*(_QWORD *)(v83 + 16) )
            goto LABEL_90;
        }
      }
      v89 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v89 = 0;
      sub_995540(*(_QWORD *)a1, "\n");
      *(_BYTE *)(a1 + 1056) = 1;
LABEL_40:
      v42 = (const __m128i *)((char *)v42 + 24);
    }
    while ( (char *)v102 != (char *)v42 );
  }
}
