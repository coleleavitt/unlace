int __fastcall sub_589880(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __m128i si128; // xmm7
  __m128i v9; // xmm1
  char v10; // al
  char *v11; // r12
  char *v12; // r13
  __int64 v13; // rax
  int *v14; // r11
  char v15; // si
  const __m128i *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(); // r9
  __int32 v20; // r10d
  unsigned __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdi
  __m128i v25; // xmm0
  void **v26; // rdi
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rbp
  __int64 v32; // rax
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  char v35; // al
  char *v36; // rbp
  char *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  char v40; // si
  const __m128i *v41; // rcx
  int *v42; // r12
  __int64 v43; // r9
  __int64 v44; // rdi
  __int32 v45; // r10d
  unsigned __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rdi
  __m128i v50; // xmm0
  __int64 v51; // rbp
  __int64 v52; // rax
  __m128i v53; // xmm4
  char v54; // al
  __int64 v55; // rbp
  __int64 v56; // rax
  __m128i v57; // xmm5
  char v58; // al
  __int64 v59; // rbp
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __m128i v62; // xmm6
  __int64 v63; // rbp
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __m128i v66; // xmm7
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i v70; // xmm1
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rdx
  __m128i v74; // xmm2
  __int64 v75; // rax
  __int64 v76; // rdx
  __m128i v77; // xmm3
  __int64 v78; // rax
  __int64 v79; // rdx
  __m128i v80; // xmm4
  __int64 v81; // rax
  __int64 v82; // rdx
  __m128i v83; // xmm5
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r8
  __m128i *v88; // rdi
  const __m128i *v89; // rdx
  const __m128i *v90; // rcx
  __m128i v91; // xmm0
  __int32 v92; // edi
  __m128i v93; // xmm0
  __int32 v94; // eax
  bool v95; // zf
  unsigned __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // r8
  __m128i *v99; // rdi
  const __m128i *v100; // rdx
  const __m128i *v101; // rcx
  __m128i v102; // xmm0
  __int32 v103; // r11d
  __m128i v104; // xmm0
  int v105; // eax
  __m128i v106; // [rsp+80h] [rbp-2D8h] BYREF
  void **p_ptr; // [rsp+98h] [rbp-2C0h]
  __m128i v108; // [rsp+A0h] [rbp-2B8h] BYREF
  __m128i v109; // [rsp+B0h] [rbp-2A8h] BYREF
  __m128i v110; // [rsp+C0h] [rbp-298h] BYREF
  void *v111[2]; // [rsp+D0h] [rbp-288h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-278h]
  int *v113; // [rsp+E8h] [rbp-270h]
  unsigned __int64 v114; // [rsp+F0h] [rbp-268h]
  unsigned __int64 v115; // [rsp+F8h] [rbp-260h]
  __int64 (__fastcall *v116)(); // [rsp+100h] [rbp-258h]
  __int64 v117; // [rsp+108h] [rbp-250h]
  int v118; // [rsp+114h] [rbp-244h] BYREF
  __int64 (__fastcall *v119)(); // [rsp+118h] [rbp-240h] BYREF
  __m128i v120; // [rsp+120h] [rbp-238h] BYREF
  __m128i v121; // [rsp+130h] [rbp-228h] BYREF
  __int64 v122; // [rsp+140h] [rbp-218h]
  __m128i v123; // [rsp+150h] [rbp-208h] BYREF
  __m128i v124; // [rsp+160h] [rbp-1F8h] BYREF
  __int64 v125; // [rsp+170h] [rbp-1E8h]
  __m128i v126; // [rsp+180h] [rbp-1D8h] BYREF
  __m128i v127; // [rsp+190h] [rbp-1C8h] BYREF
  __int64 v128; // [rsp+1A0h] [rbp-1B8h]
  __m128i v129; // [rsp+1B0h] [rbp-1A8h] BYREF
  __m128i v130; // [rsp+1C0h] [rbp-198h] BYREF
  __int64 v131; // [rsp+1D0h] [rbp-188h]
  __m128i v132; // [rsp+1E0h] [rbp-178h] BYREF
  __m128i v133; // [rsp+1F0h] [rbp-168h] BYREF
  __int64 v134; // [rsp+200h] [rbp-158h]
  __m128i v135; // [rsp+210h] [rbp-148h] BYREF
  __m128i v136; // [rsp+220h] [rbp-138h] BYREF
  __int64 v137; // [rsp+230h] [rbp-128h]
  int *v138; // [rsp+240h] [rbp-118h] BYREF
  __int64 v139; // [rsp+248h] [rbp-110h]
  __int64 v140; // [rsp+250h] [rbp-108h]
  __int64 v141; // [rsp+258h] [rbp-100h]
  __int64 (__fastcall **v142)(); // [rsp+260h] [rbp-F8h]
  __int32 v143; // [rsp+268h] [rbp-F0h]
  char v144; // [rsp+26Ch] [rbp-ECh]
  void *ptr; // [rsp+270h] [rbp-E8h] BYREF
  __int64 v146; // [rsp+278h] [rbp-E0h]
  _BYTE v147[216]; // [rsp+280h] [rbp-D8h] BYREF

  v120.m128i_i64[1] = 13;
  v106 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9EB8), (__m128i)(unsigned __int64)nullsub_266);
  v109 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9EC8), (__m128i)(unsigned __int64)nullsub_267);
  v120.m128i_i64[0] = (__int64)"bidirectional";
  v121.m128i_i64[1] = (__int64)"Force bidirectional pre reg-alloc list scheduling";
  v123.m128i_i64[0] = (__int64)"bottomup";
  v108 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9ED0), (__m128i)(unsigned __int64)nullsub_548);
  v110 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4A7C050, (__m128i)(unsigned __int64)qword_4AF4BE0);
  *(__m128i *)v111 = _mm_unpacklo_epi64(
                       (__m128i)(unsigned __int64)&off_4A7C050,
                       (__m128i)(unsigned __int64)qword_4AF4E40);
  v121.m128i_i32[0] = 3;
  v122 = 49;
  v123.m128i_i64[1] = 8;
  v124.m128i_i32[0] = 2;
  v124.m128i_i64[1] = (__int64)"Force bottom-up pre reg-alloc list scheduling";
  v126.m128i_i64[0] = (__int64)"topdown";
  v127.m128i_i64[1] = (__int64)"Force top-down pre reg-alloc list scheduling";
  p_ptr = &ptr;
  v125 = 45;
  v126.m128i_i64[1] = 7;
  v127.m128i_i32[0] = 1;
  v128 = 44;
  sub_2A860F0(
    (unsigned int)&ptr,
    a2,
    a3,
    a4,
    a5,
    a6,
    (__int128)_mm_load_si128(&v126),
    (__int128)_mm_load_si128(&v127),
    44,
    (__int128)_mm_load_si128(&v123),
    (__int128)_mm_load_si128(&v124),
    45,
    (__int128)_mm_load_si128(&v120),
    (__int128)_mm_load_si128(&v121),
    49);
  qword_4AF4E40[2] = 0;
  qword_4AF4E40[3] = 0;
  qword_4AF4E40[4] = 0;
  qword_4AF4E40[0] = (__int64)&off_4A6E058;
  qword_4AF4E40[1] &= 0x80000000uLL;
  qword_4AF4E40[5] = 0;
  qword_4AF4E40[9] = 0x100000000LL;
  qword_4AF4E40[11] = (__int64)&qword_4AF4E40[14];
  qword_4AF4E40[6] = 0;
  qword_4AF4E40[7] = 0;
  qword_4AF4E40[8] = (__int64)&qword_4AF4E40[10];
  qword_4AF4E40[12] = 1;
  LODWORD(qword_4AF4E40[13]) = 0;
  BYTE4(qword_4AF4E40[13]) = 1;
  v6 = sub_259AC30(&ptr, a2);
  v7 = LODWORD(qword_4AF4E40[9]);
  if ( HIDWORD(qword_4AF4E40[9]) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(&qword_4AF4E40[8], &qword_4AF4E40[10], v7 + 1, 8);
    v7 = LODWORD(qword_4AF4E40[9]);
  }
  si128 = _mm_load_si128((const __m128i *)v111);
  v9 = _mm_load_si128(&v108);
  *(_QWORD *)(qword_4AF4E40[8] + 8 * v7) = v6;
  ++LODWORD(qword_4AF4E40[9]);
  LODWORD(qword_4AF4E40[15]) = 0;
  LODWORD(qword_4AF4E40[17]) = 0;
  BYTE4(qword_4AF4E40[17]) = 0;
  qword_4AF4E40[0] = (__int64)&off_4A7C0A0;
  qword_4AF4E40[20] = (__int64)&qword_4AF4E40[22];
  qword_4AF4E40[16] = (__int64)off_4A7C030;
  qword_4AF4E40[21] = 0x800000000LL;
  *(__m128i *)&qword_4AF4E40[18] = si128;
  *(_OWORD *)&qword_4AF4E40[70] = 0;
  *(__m128i *)&qword_4AF4E40[72] = v9;
  sub_259F400(qword_4AF4E40, "misched-prera-direction", 23);
  v10 = BYTE2(qword_4AF4E40[1]);
  v11 = (char *)ptr;
  qword_4AF4E40[5] = 39;
  LODWORD(qword_4AF4E40[15]) = 0;
  BYTE4(qword_4AF4E40[17]) = 1;
  LODWORD(qword_4AF4E40[17]) = 0;
  BYTE2(qword_4AF4E40[1]) = v10 & 0x9F | 0x20;
  qword_4AF4E40[4] = (__int64)"Pre reg-alloc list scheduling direction";
  v12 = &v11[40 * (unsigned int)v146];
  while ( v12 != v11 )
  {
    v13 = *((_QWORD *)v11 + 4);
    v14 = *(int **)v11;
    v15 = 1;
    v16 = (const __m128i *)&v138;
    v17 = LODWORD(qword_4AF4E40[21]);
    v18 = *((_QWORD *)v11 + 3);
    v142 = off_4A7C030;
    v19 = *((__int64 (__fastcall **)())v11 + 1);
    v20 = *((_DWORD *)v11 + 4);
    v141 = v13;
    v21 = HIDWORD(qword_4AF4E40[21]);
    v140 = v18;
    v22 = v17;
    v138 = v14;
    v139 = (__int64)v19;
    v144 = 1;
    v143 = v20;
    if ( v21 < v17 + 1 )
    {
      v85 = qword_4AF4E40[20];
      if ( (unsigned __int64)&v138 < v85 || (unsigned __int64)&v138 >= v85 + 48 * v17 )
      {
        v115 = -1;
        LOBYTE(v114) = 0;
      }
      else
      {
        LOBYTE(v114) = 1;
        v115 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v138 - v85) >> 4);
      }
      v113 = (int *)v19;
      v112 = (__int64)v14;
      LODWORD(v111[0]) = v20;
      v86 = sub_25D5F70(&qword_4AF4E40[20], &qword_4AF4E40[22], v17 + 1, 48, &v135);
      v20 = (__int32)v111[0];
      v14 = (int *)v112;
      v87 = v86;
      v19 = (__int64 (__fastcall *)())v113;
      v88 = (__m128i *)qword_4AF4E40[20];
      v89 = v88;
      v90 = &v88[3 * LODWORD(qword_4AF4E40[21])];
      if ( v88 != v90 )
      {
        v111[0] = (void *)qword_4AF4E40[20];
        do
        {
          v91 = _mm_loadu_si128(v89);
          v92 = v89[2].m128i_i32[2];
          v89 += 3;
          v86 += 48;
          *(__m128i *)(v86 - 48) = v91;
          v93 = _mm_loadu_si128(v89 - 2);
          *(_DWORD *)(v86 - 8) = v92;
          LOBYTE(v92) = v89[-1].m128i_i8[12];
          *(__m128i *)(v86 - 32) = v93;
          *(_BYTE *)(v86 - 4) = v92;
          *(_QWORD *)(v86 - 16) = off_4A7C030;
        }
        while ( v90 != v89 );
        v88 = (__m128i *)v111[0];
      }
      v94 = v135.m128i_i32[0];
      if ( v88 != (__m128i *)&qword_4AF4E40[22] )
      {
        v117 = v135.m128i_i64[0];
        v116 = v19;
        v113 = v14;
        v112 = v87;
        LODWORD(v111[0]) = v20;
        free(v88);
        v14 = v113;
        v87 = v112;
        v94 = v117;
        v19 = v116;
        v20 = (__int32)v111[0];
      }
      v17 = LODWORD(qword_4AF4E40[21]);
      v95 = (_BYTE)v114 == 0;
      qword_4AF4E40[20] = v87;
      HIDWORD(qword_4AF4E40[21]) = v94;
      v22 = v17;
      if ( v95 )
      {
        v15 = 1;
        v16 = (const __m128i *)&v138;
      }
      else
      {
        v16 = (const __m128i *)(v87 + 48 * v115);
        v20 = v16[2].m128i_i32[2];
        v15 = v16[2].m128i_i8[12];
      }
    }
    v11 += 40;
    v23 = qword_4AF4E40[20] + 48 * v17;
    v24 = qword_4AF4E40[19];
    *(__m128i *)v23 = _mm_loadu_si128(v16);
    v25 = _mm_loadu_si128(v16 + 1);
    *(_BYTE *)(v23 + 44) = v15;
    *(_DWORD *)(v23 + 40) = v20;
    *(_QWORD *)(v23 + 32) = off_4A7C030;
    *(__m128i *)(v23 + 16) = v25;
    LODWORD(qword_4AF4E40[21]) = v22 + 1;
    sub_259ED10(v24, v14, v19);
  }
  sub_259EC40(qword_4AF4E40);
  v111[0] = v147;
  if ( ptr != v147 )
    free(ptr);
  __cxa_atexit(sub_3153B10, qword_4AF4E40, &off_47CFE00);
  v129.m128i_i64[1] = 13;
  v129.m128i_i64[0] = (__int64)"bidirectional";
  v130.m128i_i64[1] = (__int64)"Force bidirectional post reg-alloc list scheduling";
  v132.m128i_i64[0] = (__int64)"bottomup";
  v133.m128i_i64[1] = (__int64)"Force bottom-up post reg-alloc list scheduling";
  v135.m128i_i64[0] = (__int64)"topdown";
  v136.m128i_i64[1] = (__int64)"Force top-down post reg-alloc list scheduling";
  v130.m128i_i32[0] = 3;
  v131 = 50;
  v132.m128i_i64[1] = 8;
  v133.m128i_i32[0] = 2;
  v134 = 46;
  v135.m128i_i64[1] = 7;
  v136.m128i_i32[0] = 1;
  v137 = 45;
  v26 = p_ptr;
  sub_2A860F0(
    (_DWORD)p_ptr,
    (unsigned int)qword_4AF4E40,
    v27,
    v28,
    v29,
    v30,
    (__int128)_mm_load_si128(&v135),
    (__int128)_mm_load_si128(&v136),
    45,
    (__int128)_mm_load_si128(&v132),
    (__int128)_mm_load_si128(&v133),
    46,
    (__int128)_mm_load_si128(&v129),
    (__int128)_mm_load_si128(&v130),
    50);
  qword_4AF4BE0[2] = 0;
  qword_4AF4BE0[3] = 0;
  qword_4AF4BE0[4] = 0;
  qword_4AF4BE0[0] = (__int64)&off_4A6E058;
  qword_4AF4BE0[1] &= 0x80000000uLL;
  qword_4AF4BE0[5] = 0;
  qword_4AF4BE0[9] = 0x100000000LL;
  qword_4AF4BE0[11] = (__int64)&qword_4AF4BE0[14];
  qword_4AF4BE0[6] = 0;
  qword_4AF4BE0[7] = 0;
  qword_4AF4BE0[8] = (__int64)&qword_4AF4BE0[10];
  qword_4AF4BE0[12] = 1;
  LODWORD(qword_4AF4BE0[13]) = 0;
  BYTE4(qword_4AF4BE0[13]) = 1;
  v31 = sub_259AC30(v26, qword_4AF4E40);
  v32 = LODWORD(qword_4AF4BE0[9]);
  if ( HIDWORD(qword_4AF4BE0[9]) < (unsigned __int64)(v32 + 1) )
  {
    sub_25D6060(&qword_4AF4BE0[8], &qword_4AF4BE0[10], v32 + 1, 8);
    v32 = LODWORD(qword_4AF4BE0[9]);
  }
  v33 = _mm_load_si128(&v110);
  v34 = _mm_load_si128(&v108);
  *(_QWORD *)(qword_4AF4BE0[8] + 8 * v32) = v31;
  ++LODWORD(qword_4AF4BE0[9]);
  LODWORD(qword_4AF4BE0[15]) = 0;
  LODWORD(qword_4AF4BE0[17]) = 0;
  BYTE4(qword_4AF4BE0[17]) = 0;
  qword_4AF4BE0[0] = (__int64)&off_4A7C0A0;
  qword_4AF4BE0[20] = (__int64)&qword_4AF4BE0[22];
  qword_4AF4BE0[16] = (__int64)off_4A7C030;
  qword_4AF4BE0[21] = 0x800000000LL;
  *(__m128i *)&qword_4AF4BE0[18] = v33;
  *(_OWORD *)&qword_4AF4BE0[70] = 0;
  *(__m128i *)&qword_4AF4BE0[72] = v34;
  sub_259F400(qword_4AF4BE0, "misched-postra-direction", 24);
  v35 = BYTE2(qword_4AF4BE0[1]);
  v36 = (char *)ptr;
  qword_4AF4BE0[5] = 40;
  LODWORD(qword_4AF4BE0[15]) = 0;
  BYTE4(qword_4AF4BE0[17]) = 1;
  LODWORD(qword_4AF4BE0[17]) = 0;
  BYTE2(qword_4AF4BE0[1]) = v35 & 0x9F | 0x20;
  qword_4AF4BE0[4] = (__int64)"Post reg-alloc list scheduling direction";
  v37 = &v36[40 * (unsigned int)v146];
  v108.m128i_i64[0] = (__int64)&v119;
  while ( v37 != v36 )
  {
    v38 = *((_QWORD *)v36 + 4);
    v39 = *((_QWORD *)v36 + 3);
    v40 = 1;
    v41 = (const __m128i *)&v138;
    v42 = *(int **)v36;
    v43 = *((_QWORD *)v36 + 1);
    v142 = off_4A7C030;
    v44 = LODWORD(qword_4AF4BE0[21]);
    v45 = *((_DWORD *)v36 + 4);
    v141 = v38;
    v46 = HIDWORD(qword_4AF4BE0[21]);
    v140 = v39;
    v138 = v42;
    v47 = v44;
    v139 = v43;
    v144 = 1;
    v143 = v45;
    if ( v46 < v44 + 1 )
    {
      v96 = qword_4AF4BE0[20];
      if ( (unsigned __int64)&v138 < v96 || (unsigned __int64)&v138 >= v96 + 48 * v44 )
      {
        v114 = -1;
        LOBYTE(v113) = 0;
      }
      else
      {
        LOBYTE(v113) = 1;
        v114 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v138 - v96) >> 4);
      }
      LODWORD(v112) = v45;
      v110.m128i_i64[0] = v43;
      v97 = sub_25D5F70(&qword_4AF4BE0[20], &qword_4AF4BE0[22], v44 + 1, 48, v108.m128i_i64[0]);
      v43 = v110.m128i_i64[0];
      v45 = v112;
      v98 = v97;
      v99 = (__m128i *)qword_4AF4BE0[20];
      v100 = v99;
      v101 = &v99[3 * LODWORD(qword_4AF4BE0[21])];
      if ( v99 != v101 )
      {
        do
        {
          v102 = _mm_loadu_si128(v100);
          v103 = v100[2].m128i_i32[2];
          v100 += 3;
          v97 += 48;
          *(__m128i *)(v97 - 48) = v102;
          v104 = _mm_loadu_si128(v100 - 2);
          *(_DWORD *)(v97 - 8) = v103;
          LOBYTE(v103) = v100[-1].m128i_i8[12];
          *(__m128i *)(v97 - 32) = v104;
          *(_BYTE *)(v97 - 4) = v103;
          *(_QWORD *)(v97 - 16) = off_4A7C030;
        }
        while ( v101 != v100 );
      }
      v105 = (int)v119;
      if ( v99 != (__m128i *)&qword_4AF4BE0[22] )
      {
        v116 = v119;
        v115 = v98;
        LODWORD(v112) = v45;
        v110.m128i_i64[0] = v43;
        free(v99);
        v98 = v115;
        v45 = v112;
        v105 = (int)v116;
        v43 = v110.m128i_i64[0];
      }
      v44 = LODWORD(qword_4AF4BE0[21]);
      v95 = (_BYTE)v113 == 0;
      qword_4AF4BE0[20] = v98;
      HIDWORD(qword_4AF4BE0[21]) = v105;
      v47 = v44;
      if ( v95 )
      {
        v40 = 1;
        v41 = (const __m128i *)&v138;
      }
      else
      {
        v41 = (const __m128i *)(v98 + 48 * v114);
        v45 = v41[2].m128i_i32[2];
        v40 = v41[2].m128i_i8[12];
      }
    }
    v36 += 40;
    v48 = qword_4AF4BE0[20] + 48 * v44;
    v49 = qword_4AF4BE0[19];
    *(__m128i *)v48 = _mm_loadu_si128(v41);
    v50 = _mm_loadu_si128(v41 + 1);
    *(_BYTE *)(v48 + 44) = v40;
    *(_DWORD *)(v48 + 40) = v45;
    *(_QWORD *)(v48 + 32) = off_4A7C030;
    *(__m128i *)(v48 + 16) = v50;
    LODWORD(qword_4AF4BE0[21]) = v47 + 1;
    sub_259ED10(v49, v42, v43);
  }
  sub_259EC40(qword_4AF4BE0);
  if ( ptr != v111[0] )
    free(ptr);
  __cxa_atexit(sub_3153B10, qword_4AF4BE0, &off_47CFE00);
  qword_4AF4B20[2] = 0;
  qword_4AF4B20[0] = (__int64)&off_4A6E058;
  qword_4AF4B20[1] &= 0x80000000uLL;
  qword_4AF4B20[3] = 0;
  qword_4AF4B20[9] = 0x100000000LL;
  qword_4AF4B20[11] = (__int64)&qword_4AF4B20[14];
  qword_4AF4B20[4] = 0;
  qword_4AF4B20[5] = 0;
  qword_4AF4B20[6] = 0;
  qword_4AF4B20[7] = 0;
  qword_4AF4B20[8] = (__int64)&qword_4AF4B20[10];
  qword_4AF4B20[12] = 1;
  LODWORD(qword_4AF4B20[13]) = 0;
  BYTE4(qword_4AF4B20[13]) = 1;
  v51 = sub_259AC30(sub_3153B10, qword_4AF4BE0);
  v52 = LODWORD(qword_4AF4B20[9]);
  if ( HIDWORD(qword_4AF4B20[9]) < (unsigned __int64)(v52 + 1) )
  {
    sub_25D6060(&qword_4AF4B20[8], &qword_4AF4B20[10], v52 + 1, 8);
    v52 = LODWORD(qword_4AF4B20[9]);
  }
  v53 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF4B20[8] + 8 * v52) = v51;
  LOWORD(qword_4AF4B20[17]) = 0;
  *(_OWORD *)&qword_4AF4B20[19] = 0;
  qword_4AF4B20[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4AF4B20[21] = v53;
  ++LODWORD(qword_4AF4B20[9]);
  qword_4AF4B20[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4AF4B20[15]) = 0;
  qword_4AF4B20[18] = (__int64)off_49D9168;
  sub_259F400(qword_4AF4B20, "misched-dcpl", 12);
  v54 = BYTE2(qword_4AF4B20[1]);
  qword_4AF4B20[5] = 36;
  BYTE2(qword_4AF4B20[1]) = v54 & 0x9F | 0x20;
  qword_4AF4B20[4] = (__int64)"Print critical path length to stdout";
  sub_259EC40(qword_4AF4B20);
  __cxa_atexit(sub_1F6C9D0, qword_4AF4B20, &off_47CFE00);
  qword_4AF4A60[2] = 0;
  qword_4AF4A60[0] = (__int64)&off_4A6E058;
  qword_4AF4A60[1] &= 0x80000000uLL;
  qword_4AF4A60[3] = 0;
  qword_4AF4A60[9] = 0x100000000LL;
  qword_4AF4A60[11] = (__int64)&qword_4AF4A60[14];
  qword_4AF4A60[4] = 0;
  qword_4AF4A60[5] = 0;
  qword_4AF4A60[6] = 0;
  qword_4AF4A60[7] = 0;
  qword_4AF4A60[8] = (__int64)&qword_4AF4A60[10];
  qword_4AF4A60[12] = 1;
  LODWORD(qword_4AF4A60[13]) = 0;
  BYTE4(qword_4AF4A60[13]) = 1;
  v55 = sub_259AC30(sub_1F6C9D0, qword_4AF4B20);
  v56 = LODWORD(qword_4AF4A60[9]);
  if ( HIDWORD(qword_4AF4A60[9]) < (unsigned __int64)(v56 + 1) )
  {
    sub_25D6060(&qword_4AF4A60[8], &qword_4AF4A60[10], v56 + 1, 8);
    v56 = LODWORD(qword_4AF4A60[9]);
  }
  v57 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF4A60[8] + 8 * v56) = v55;
  LOWORD(qword_4AF4A60[17]) = 0;
  *(_OWORD *)&qword_4AF4A60[19] = 0;
  qword_4AF4A60[16] = (__int64)&off_4A64730;
  *(__m128i *)&qword_4AF4A60[21] = v57;
  ++LODWORD(qword_4AF4A60[9]);
  qword_4AF4A60[0] = (__int64)off_4A6DFF0;
  LOBYTE(qword_4AF4A60[15]) = 0;
  qword_4AF4A60[18] = (__int64)off_49D9168;
  sub_259F400(qword_4AF4A60, "verify-misched", 14);
  v58 = BYTE2(qword_4AF4A60[1]);
  qword_4AF4A60[5] = 57;
  BYTE2(qword_4AF4A60[1]) = v58 & 0x9F | 0x20;
  qword_4AF4A60[4] = (__int64)"Verify machine instrs before and after machine scheduling";
  sub_259EC40(qword_4AF4A60);
  __cxa_atexit(sub_1F6C9D0, qword_4AF4A60, &off_47CFE00);
  qword_4AF49B0 = 0;
  qword_4AF49E0 = (__int64)&qword_4AF49F0;
  qword_4AF49B8 = 0;
  qword_4AF49A0 = (__int64)&off_4A6E058;
  qword_4AF49A8 = (unsigned int)qword_4AF49A8 & 0x80000000;
  qword_4AF49C0 = 0;
  qword_4AF49E8 = 0x100000000LL;
  qword_4AF49F8 = (__int64)&qword_4AF4A10;
  qword_4AF49C8 = 0;
  qword_4AF49D0 = 0;
  qword_4AF49D8 = 0;
  qword_4AF4A00 = 1;
  dword_4AF4A08 = 0;
  byte_4AF4A0C = 1;
  v59 = sub_259AC30(sub_1F6C9D0, &qword_4AF49F0);
  v60 = (unsigned int)qword_4AF49E8;
  v61 = (unsigned int)qword_4AF49E8 + 1LL;
  if ( HIDWORD(qword_4AF49E8) < v61 )
  {
    sub_25D6060(&qword_4AF49F0 - 2, &qword_4AF49F0, v61, 8);
    v60 = (unsigned int)qword_4AF49E8;
  }
  v62 = _mm_load_si128(&v109);
  *(_QWORD *)(qword_4AF49E0 + 8 * v60) = v59;
  xmmword_4AF4A38 = 0;
  xmmword_4AF4A48 = (__int128)v62;
  qword_4AF4A20 = (__int64)&off_4A64710;
  LODWORD(qword_4AF49E8) = qword_4AF49E8 + 1;
  byte_4AF4A2C = 0;
  qword_4AF49A0 = (__int64)off_4A6DEB8;
  dword_4AF4A18 = 0;
  dword_4AF4A28 = 0;
  qword_4AF4A30 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF49A0, "misched-limit", 13);
  qword_4AF49C8 = 34;
  dword_4AF4A18 = 256;
  byte_4AF4A2C = 1;
  dword_4AF4A28 = 256;
  BYTE2(qword_4AF49A8) = BYTE2(qword_4AF49A8) & 0x9F | 0x20;
  qword_4AF49C0 = (__int64)"Limit ready list to N instructions";
  sub_259EC40(&qword_4AF49A0);
  __cxa_atexit(sub_1F6C940, &qword_4AF49A0, &off_47CFE00);
  qword_4AF48F0 = 0;
  qword_4AF4920 = (__int64)&qword_4AF4930;
  qword_4AF48F8 = 0;
  qword_4AF48E0 = (__int64)&off_4A6E058;
  qword_4AF48E8 = (unsigned int)qword_4AF48E8 & 0x80000000;
  qword_4AF4900 = 0;
  qword_4AF4928 = 0x100000000LL;
  qword_4AF4938 = (__int64)&qword_4AF4950;
  qword_4AF4908 = 0;
  qword_4AF4910 = 0;
  qword_4AF4918 = 0;
  qword_4AF4940 = 1;
  dword_4AF4948 = 0;
  byte_4AF494C = 1;
  v63 = sub_259AC30(sub_1F6C940, &qword_4AF4930);
  v64 = (unsigned int)qword_4AF4928;
  v65 = (unsigned int)qword_4AF4928 + 1LL;
  if ( HIDWORD(qword_4AF4928) < v65 )
  {
    sub_25D6060(&qword_4AF4930 - 2, &qword_4AF4930, v65, 8);
    v64 = (unsigned int)qword_4AF4928;
  }
  v66 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF4920 + 8 * v64) = v63;
  word_4AF4968 = 0;
  xmmword_4AF4978 = 0;
  qword_4AF4960 = (__int64)&off_4A64730;
  xmmword_4AF4988 = (__int128)v66;
  LODWORD(qword_4AF4928) = qword_4AF4928 + 1;
  qword_4AF48E0 = (__int64)off_4A6DFF0;
  byte_4AF4958 = 0;
  qword_4AF4970 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF48E0, "misched-regpressure", 19);
  qword_4AF4908 = 36;
  byte_4AF4958 = 1;
  word_4AF4968 = 257;
  BYTE2(qword_4AF48E8) = BYTE2(qword_4AF48E8) & 0x9F | 0x20;
  qword_4AF4900 = (__int64)"Enable register pressure scheduling.";
  sub_259EC40(&qword_4AF48E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF48E0, &off_47CFE00);
  ptr = "Enable cyclic critical path analysis.";
  LOBYTE(v118) = 1;
  v138 = &v118;
  v146 = 37;
  LODWORD(v119) = 1;
  sub_315E1F0(
    qword_4AF4820,
    "misched-cyclicpath",
    v108.m128i_i64[0],
    p_ptr,
    &v138,
    v67,
    v106.m128i_i64[0],
    v106.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4AF4820, &off_47CFE00);
  qword_4AF4770 = 0;
  qword_4AF47A0 = (__int64)&qword_4AF47B0;
  qword_4AF4778 = 0;
  qword_4AF4760 = (__int64)&off_4A6E058;
  qword_4AF4768 = (unsigned int)qword_4AF4768 & 0x80000000;
  qword_4AF4780 = 0;
  qword_4AF47A8 = 0x100000000LL;
  qword_4AF47B8 = (__int64)&qword_4AF47D0;
  qword_4AF4788 = 0;
  qword_4AF4790 = 0;
  qword_4AF4798 = 0;
  qword_4AF47C0 = 1;
  dword_4AF47C8 = 0;
  byte_4AF47CC = 1;
  v68 = sub_259AC30(sub_1F6C9D0, &qword_4AF47B0);
  v69 = (unsigned int)qword_4AF47A8;
  if ( HIDWORD(qword_4AF47A8) < (unsigned __int64)(unsigned int)qword_4AF47A8 + 1 )
  {
    v110.m128i_i64[0] = v68;
    sub_25D6060(&qword_4AF47B0 - 2, &qword_4AF47B0, (unsigned int)qword_4AF47A8 + 1LL, 8);
    v69 = (unsigned int)qword_4AF47A8;
    v68 = v110.m128i_i64[0];
  }
  v70 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF47A0 + 8 * v69) = v68;
  xmmword_4AF47F8 = 0;
  xmmword_4AF4808 = (__int128)v70;
  qword_4AF47E0 = (__int64)&off_4A64730;
  word_4AF47E8 = 0;
  LODWORD(qword_4AF47A8) = qword_4AF47A8 + 1;
  qword_4AF4760 = (__int64)off_4A6DFF0;
  byte_4AF47D8 = 0;
  qword_4AF47F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF4760, "misched-cluster", 15);
  qword_4AF4788 = 24;
  byte_4AF47D8 = 1;
  word_4AF47E8 = 257;
  BYTE2(qword_4AF4768) = BYTE2(qword_4AF4768) & 0x9F | 0x20;
  qword_4AF4780 = (__int64)"Enable memop clustering.";
  sub_259EC40(&qword_4AF4760);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF4760, &off_47CFE00);
  ptr = "Switch to fast cluster algorithm with the lost of some fusion opportunities";
  LOBYTE(v118) = 0;
  v138 = &v118;
  v146 = 75;
  LODWORD(v119) = 1;
  sub_315E1F0(
    qword_4AF46A0,
    "force-fast-cluster",
    v108.m128i_i64[0],
    p_ptr,
    &v138,
    v71,
    v106.m128i_i64[0],
    v106.m128i_i64[1]);
  __cxa_atexit(sub_1F6C9D0, qword_4AF46A0, &off_47CFE00);
  qword_4AF45F0 = 0;
  qword_4AF4620 = (__int64)&qword_4AF4630;
  qword_4AF45F8 = 0;
  qword_4AF45E0 = (__int64)&off_4A6E058;
  qword_4AF45E8 = (unsigned int)qword_4AF45E8 & 0x80000000;
  qword_4AF4600 = 0;
  qword_4AF4628 = 0x100000000LL;
  qword_4AF4638 = (__int64)&qword_4AF4650;
  qword_4AF4608 = 0;
  qword_4AF4610 = 0;
  qword_4AF4618 = 0;
  qword_4AF4640 = 1;
  dword_4AF4648 = 0;
  byte_4AF464C = 1;
  v72 = sub_259AC30(sub_1F6C9D0, &qword_4AF4630);
  v73 = (unsigned int)qword_4AF4628;
  if ( HIDWORD(qword_4AF4628) < (unsigned __int64)(unsigned int)qword_4AF4628 + 1 )
  {
    v110.m128i_i64[0] = v72;
    sub_25D6060(&qword_4AF4630 - 2, &qword_4AF4630, (unsigned int)qword_4AF4628 + 1LL, 8);
    v73 = (unsigned int)qword_4AF4628;
    v72 = v110.m128i_i64[0];
  }
  v74 = _mm_load_si128(&v109);
  *(_QWORD *)(qword_4AF4620 + 8 * v73) = v72;
  xmmword_4AF4678 = 0;
  xmmword_4AF4688 = (__int128)v74;
  qword_4AF4660 = (__int64)&off_4A64710;
  LODWORD(qword_4AF4628) = qword_4AF4628 + 1;
  byte_4AF466C = 0;
  qword_4AF45E0 = (__int64)off_4A6DEB8;
  dword_4AF4658 = 0;
  dword_4AF4668 = 0;
  qword_4AF4670 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF45E0, "fast-cluster-threshold", 22);
  qword_4AF4608 = 30;
  dword_4AF4658 = 1000;
  byte_4AF466C = 1;
  dword_4AF4668 = 1000;
  BYTE2(qword_4AF45E8) = BYTE2(qword_4AF45E8) & 0x9F | 0x20;
  qword_4AF4600 = (__int64)"The threshold for fast cluster";
  sub_259EC40(&qword_4AF45E0);
  __cxa_atexit(sub_1F6C940, &qword_4AF45E0, &off_47CFE00);
  qword_4AF4530 = 0;
  qword_4AF4560 = (__int64)&qword_4AF4570;
  qword_4AF4538 = 0;
  qword_4AF4520 = (__int64)&off_4A6E058;
  qword_4AF4528 = (unsigned int)qword_4AF4528 & 0x80000000;
  qword_4AF4540 = 0;
  qword_4AF4568 = 0x100000000LL;
  qword_4AF4578 = (__int64)&qword_4AF4590;
  qword_4AF4548 = 0;
  qword_4AF4550 = 0;
  qword_4AF4558 = 0;
  qword_4AF4580 = 1;
  dword_4AF4588 = 0;
  byte_4AF458C = 1;
  v75 = sub_259AC30(sub_1F6C940, &qword_4AF4570);
  v76 = (unsigned int)qword_4AF4568;
  if ( HIDWORD(qword_4AF4568) < (unsigned __int64)(unsigned int)qword_4AF4568 + 1 )
  {
    v110.m128i_i64[0] = v75;
    sub_25D6060(&qword_4AF4570 - 2, &qword_4AF4570, (unsigned int)qword_4AF4568 + 1LL, 8);
    v76 = (unsigned int)qword_4AF4568;
    v75 = v110.m128i_i64[0];
  }
  v77 = _mm_load_si128(&v109);
  *(_QWORD *)(qword_4AF4560 + 8 * v76) = v75;
  xmmword_4AF45B8 = 0;
  xmmword_4AF45C8 = (__int128)v77;
  qword_4AF45A0 = (__int64)&off_4A64710;
  LODWORD(qword_4AF4568) = qword_4AF4568 + 1;
  byte_4AF45AC = 0;
  qword_4AF4520 = (__int64)off_4A6DEB8;
  dword_4AF4598 = 0;
  dword_4AF45A8 = 0;
  qword_4AF45B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF4520, "misched-resource-cutoff", 23);
  qword_4AF4548 = 28;
  dword_4AF4598 = 10;
  byte_4AF45AC = 1;
  dword_4AF45A8 = 10;
  BYTE2(qword_4AF4528) = BYTE2(qword_4AF4528) & 0x9F | 0x20;
  qword_4AF4540 = (__int64)"Number of intervals to track";
  sub_259EC40(&qword_4AF4520);
  __cxa_atexit(sub_1F6C940, &qword_4AF4520, &off_47CFE00);
  ptr = "Machine instruction scheduler to use";
  v146 = 36;
  v138 = (int *)v108.m128i_i64[0];
  v118 = 1;
  v119 = sub_3151810;
  sub_315E3C0(qword_4AF4240, "misched", &v138, &v118, p_ptr);
  __cxa_atexit(sub_3153C50, qword_4AF4240, &off_47CFE00);
  sub_315DEE0(qword_4AF4200, "default", "Use the target's default scheduler choice.", sub_3151810);
  sub_315DF40(qword_4AF44E0, qword_4AF4200);
  __cxa_atexit(sub_3152C40, qword_4AF4200, &off_47CFE00);
  qword_4AF4150 = 0;
  qword_4AF4180 = (__int64)&qword_4AF4190;
  qword_4AF4158 = 0;
  qword_4AF4140 = (__int64)&off_4A6E058;
  qword_4AF4148 = (unsigned int)qword_4AF4148 & 0x80000000;
  qword_4AF4160 = 0;
  qword_4AF4188 = 0x100000000LL;
  qword_4AF4198 = (__int64)&qword_4AF41B0;
  qword_4AF4168 = 0;
  qword_4AF4170 = 0;
  qword_4AF4178 = 0;
  qword_4AF41A0 = 1;
  dword_4AF41A8 = 0;
  byte_4AF41AC = 1;
  v78 = sub_259AC30(sub_3152C40, &qword_4AF4190);
  v79 = (unsigned int)qword_4AF4188;
  if ( HIDWORD(qword_4AF4188) < (unsigned __int64)(unsigned int)qword_4AF4188 + 1 )
  {
    p_ptr = (void **)v78;
    sub_25D6060(&qword_4AF4190 - 2, &qword_4AF4190, (unsigned int)qword_4AF4188 + 1LL, 8);
    v79 = (unsigned int)qword_4AF4188;
    v78 = (__int64)p_ptr;
  }
  v80 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF4180 + 8 * v79) = v78;
  word_4AF41C8 = 0;
  xmmword_4AF41D8 = 0;
  qword_4AF41C0 = (__int64)&off_4A64730;
  xmmword_4AF41E8 = (__int128)v80;
  LODWORD(qword_4AF4188) = qword_4AF4188 + 1;
  qword_4AF4140 = (__int64)off_4A6DFF0;
  byte_4AF41B8 = 0;
  qword_4AF41D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF4140, "enable-misched", 14);
  qword_4AF4168 = 47;
  qword_4AF4160 = (__int64)"Enable the machine instruction scheduling pass.";
  byte_4AF41B8 = 1;
  word_4AF41C8 = 257;
  BYTE2(qword_4AF4148) = BYTE2(qword_4AF4148) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF4140);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF4140, &off_47CFE00);
  qword_4AF4090 = 0;
  qword_4AF40C0 = (__int64)&qword_4AF40D0;
  qword_4AF4098 = 0;
  qword_4AF4080 = (__int64)&off_4A6E058;
  qword_4AF4088 = (unsigned int)qword_4AF4088 & 0x80000000;
  qword_4AF40A0 = 0;
  qword_4AF40C8 = 0x100000000LL;
  qword_4AF40D8 = (__int64)&qword_4AF40F0;
  qword_4AF40A8 = 0;
  qword_4AF40B0 = 0;
  qword_4AF40B8 = 0;
  qword_4AF40E0 = 1;
  dword_4AF40E8 = 0;
  byte_4AF40EC = 1;
  v81 = sub_259AC30(sub_1F6C9D0, &qword_4AF40D0);
  v82 = (unsigned int)qword_4AF40C8;
  if ( HIDWORD(qword_4AF40C8) < (unsigned __int64)(unsigned int)qword_4AF40C8 + 1 )
  {
    p_ptr = (void **)v81;
    sub_25D6060(&qword_4AF40D0 - 2, &qword_4AF40D0, (unsigned int)qword_4AF40C8 + 1LL, 8);
    v82 = (unsigned int)qword_4AF40C8;
    v81 = (__int64)p_ptr;
  }
  v83 = _mm_load_si128(&v106);
  *(_QWORD *)(qword_4AF40C0 + 8 * v82) = v81;
  word_4AF4108 = 0;
  xmmword_4AF4118 = 0;
  xmmword_4AF4128 = (__int128)v83;
  qword_4AF4100 = (__int64)&off_4A64730;
  LODWORD(qword_4AF40C8) = qword_4AF40C8 + 1;
  byte_4AF40F8 = 0;
  qword_4AF4080 = (__int64)off_4A6DFF0;
  qword_4AF4110 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF4080, "enable-post-misched", 19);
  word_4AF4108 = 257;
  qword_4AF40A0 = (__int64)"Enable the post-ra machine instruction scheduling pass.";
  qword_4AF40A8 = 55;
  byte_4AF40F8 = 1;
  BYTE2(qword_4AF4088) = BYTE2(qword_4AF4088) & 0x9F | 0x20;
  sub_259EC40(&qword_4AF4080);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF4080, &off_47CFE00);
  sub_315DEE0(qword_4AF4040, "converge", "Standard converging scheduler.", sub_3160E20);
  sub_315DF40(qword_4AF44E0, qword_4AF4040);
  __cxa_atexit(sub_3152C40, qword_4AF4040, &off_47CFE00);
  sub_315DEE0(qword_4AF4000, "ilpmax", "Schedule bottom-up for max ILP", sub_3156B60);
  sub_315DF40(qword_4AF44E0, qword_4AF4000);
  __cxa_atexit(sub_3152C40, qword_4AF4000, &off_47CFE00);
  sub_315DEE0(qword_4AF3FC0, "ilpmin", "Schedule bottom-up for min ILP", sub_3156720);
  sub_315DF40(qword_4AF44E0, qword_4AF3FC0);
  return __cxa_atexit(sub_3152C40, qword_4AF3FC0, &off_47CFE00);
}

