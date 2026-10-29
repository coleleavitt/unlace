__int64 __fastcall sub_563DB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  __m128i v7; // xmm0
  void *v8; // rdx
  __m128i v9; // xmm0
  void *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // edx
  __m128i v14; // xmm0
  int v15; // edx
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  void *v22; // rdi
  __m128i v23; // xmm0
  void *v24; // r15
  __m128i v25; // xmm0
  void *v26; // rdi
  __m128i v27; // xmm0
  void *v28; // rdi
  void *v29; // r15
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  int v32; // edx
  __m128i v33; // xmm0
  int v34; // edx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 i; // rbp
  __m128i v39; // xmm0
  void *v40; // rdx
  __m128i v41; // xmm0
  void *v42; // rdx
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  int v45; // edx
  __m128i v46; // xmm0
  int v47; // edx
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __m128i v50; // xmm0
  void *v51; // rdi
  __int64 v52; // rdx
  __m128i v53; // xmm0
  void *v54; // rdi
  __m128i v55; // xmm0
  void *v56; // r15
  __m128i v57; // xmm0
  void *v58; // rdi
  __m128i v59; // xmm0
  void *v60; // rdi
  void *v61; // r15
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  int v64; // edx
  __m128i v65; // xmm0
  int v66; // edx
  __m128i v67; // xmm0
  __int64 v68; // rbx
  __int64 v70; // rbp
  __m128i v71; // xmm0
  void *v72; // rax
  __m128i v73; // xmm0
  void *v74; // rax
  __m128i v75; // xmm0
  __m128i v76; // xmm0
  int v77; // eax
  __m128i v78; // xmm0
  int v79; // eax
  __m128i v80; // xmm0
  __int64 v81; // r14
  __m128i v82; // xmm0
  void *v83; // rdi
  __int64 v84; // r14
  __m128i v85; // xmm0
  void *v86; // rdi
  __m128i v87; // xmm0
  void *v88; // r13
  __m128i v89; // xmm0
  void *v90; // rdi
  __m128i v91; // xmm0
  void *v92; // rdi
  void *v93; // r13
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  int v96; // eax
  __m128i v97; // xmm0
  int v98; // eax
  __m128i v99; // xmm0
  __m128i v100; // [rsp+0h] [rbp-128h] BYREF
  __m128i v101; // [rsp+10h] [rbp-118h] BYREF
  __m128i v102; // [rsp+20h] [rbp-108h] BYREF
  unsigned __int64 v103; // [rsp+30h] [rbp-F8h]
  __int64 v104; // [rsp+38h] [rbp-F0h]
  __int64 v105; // [rsp+40h] [rbp-E8h]
  __int64 v106; // [rsp+48h] [rbp-E0h]
  __m128i v107; // [rsp+50h] [rbp-D8h] BYREF
  void *v108; // [rsp+60h] [rbp-C8h]
  __m128i v109; // [rsp+68h] [rbp-C0h] BYREF
  void *v110; // [rsp+78h] [rbp-B0h]
  __m128i v111; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+90h] [rbp-98h] BYREF
  __m128i v113; // [rsp+98h] [rbp-90h] BYREF
  __m128i v114; // [rsp+A8h] [rbp-80h] BYREF
  __m128i v115; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-60h]
  int v117; // [rsp+D0h] [rbp-58h]
  int v118; // [rsp+D4h] [rbp-54h]
  char v119; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+E8h] [rbp-40h]

  v105 = a1;
  v104 = a2;
  v106 = a3;
  v120 = __readfsqword(0x28u);
  if ( a2 == a1 )
    return v106;
  if ( a2 == a3 )
    return v105;
  v3 = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 4);
  v103 = 0x8E38E38E38E38E39LL * ((a3 - a1) >> 4);
  v4 = a1;
  if ( v3 != v103 - v3 )
  {
    while ( 1 )
    {
      v100.m128i_i64[0] = v103 - v3;
      if ( v3 >= (__int64)(v103 - v3) )
      {
        v36 = v4 + 144 * v103;
        v4 = v36 - 144 * v100.m128i_i64[0];
        if ( v3 > 0 )
        {
          v37 = v36 - 80;
          for ( i = 0; i != v3; ++i )
          {
            v39 = _mm_loadu_si128((const __m128i *)(v4 - 144));
            v40 = *(void **)(v4 - 128);
            v4 -= 144;
            *(_QWORD *)(v4 + 16) = 0;
            v107 = v39;
            v41 = _mm_loadu_si128((const __m128i *)(v4 + 24));
            v108 = v40;
            v42 = *(void **)(v4 + 40);
            *(_QWORD *)(v4 + 40) = 0;
            v109 = v41;
            v43 = _mm_loadu_si128((const __m128i *)(v4 + 48));
            *(_OWORD *)(v4 + 24) = 0;
            *(_OWORD *)(v4 + 48) = 0;
            v110 = v42;
            v112 = 0;
            v111 = v43;
            copy_tinfo_t(&v112);
            v44 = _mm_loadu_si128((const __m128i *)(v4 + 72));
            v116 = *(_QWORD *)(v4 + 120);
            v45 = *(_DWORD *)(v4 + 128);
            v113 = v44;
            v46 = _mm_loadu_si128((const __m128i *)(v4 + 88));
            v117 = v45;
            v47 = *(_DWORD *)(v4 + 132);
            v114 = v46;
            v48 = _mm_loadu_si128((const __m128i *)(v4 + 104));
            v118 = v47;
            LOBYTE(v47) = *(_BYTE *)(v4 + 136);
            v115 = v48;
            v119 = v47;
            *(_QWORD *)v4 = *(_QWORD *)(v37 - 64);
            *(_QWORD *)(v4 + 8) = *(_QWORD *)(v37 - 56);
            v49 = *(_QWORD *)(v37 - 48);
            v50 = _mm_loadu_si128((const __m128i *)(v37 - 40));
            *(_QWORD *)(v37 - 48) = 0;
            *(_OWORD *)(v37 - 40) = 0;
            v51 = *(void **)(v4 + 16);
            if ( v51 )
            {
              *(_QWORD *)(v4 + 24) = 0;
              v102.m128i_i64[0] = v49;
              v101 = v50;
              qfree(v51);
              v49 = v102.m128i_i64[0];
              v50 = _mm_load_si128(&v101);
            }
            *(_QWORD *)(v4 + 16) = v49;
            *(__m128i *)(v4 + 24) = v50;
            v52 = *(_QWORD *)(v37 - 24);
            v53 = _mm_loadu_si128((const __m128i *)(v37 - 16));
            *(_QWORD *)(v37 - 24) = 0;
            *(_OWORD *)(v37 - 16) = 0;
            v54 = *(void **)(v4 + 40);
            if ( v54 )
            {
              *(_QWORD *)(v4 + 48) = 0;
              v101.m128i_i64[0] = v52;
              v102 = v53;
              qfree(v54);
              v53 = _mm_load_si128(&v102);
              v52 = v101.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 40) = v52;
            *(__m128i *)(v4 + 48) = v53;
            copy_tinfo_t(v4 + 64);
            v55 = _mm_loadu_si128((const __m128i *)(v37 + 8));
            v56 = v108;
            v108 = nullptr;
            *(__m128i *)(v4 + 72) = v55;
            *(__m128i *)(v4 + 88) = _mm_loadu_si128((const __m128i *)(v37 + 24));
            *(__m128i *)(v4 + 104) = _mm_loadu_si128((const __m128i *)(v37 + 40));
            v57 = _mm_load_si128(&v107);
            *(_DWORD *)(v4 + 120) = *(_DWORD *)(v37 + 56);
            *(_DWORD *)(v4 + 128) = *(_DWORD *)(v37 + 64);
            *(_DWORD *)(v4 + 132) = *(_DWORD *)(v37 + 68);
            *(_BYTE *)(v4 + 136) = *(_BYTE *)(v37 + 72);
            v58 = *(void **)(v37 - 48);
            *(__m128i *)(v37 - 64) = v57;
            v59 = _mm_loadu_si128(&v109);
            v109 = 0;
            if ( v58 )
            {
              *(_QWORD *)(v37 - 40) = 0;
              v101 = v59;
              qfree(v58);
              v59 = _mm_load_si128(&v101);
            }
            v60 = *(void **)(v37 - 24);
            *(_QWORD *)(v37 - 48) = v56;
            *(__m128i *)(v37 - 40) = v59;
            v61 = v110;
            v62 = _mm_load_si128(&v111);
            v110 = nullptr;
            v111 = 0;
            if ( v60 )
            {
              *(_QWORD *)(v37 - 16) = 0;
              v101 = v62;
              qfree(v60);
              v62 = _mm_load_si128(&v101);
            }
            *(_QWORD *)(v37 - 24) = v61;
            *(__m128i *)(v37 - 16) = v62;
            copy_tinfo_t(v37);
            v63 = _mm_loadu_si128(&v113);
            *(_DWORD *)(v37 + 56) = v116;
            v64 = v117;
            *(__m128i *)(v37 + 8) = v63;
            v65 = _mm_loadu_si128(&v114);
            *(_DWORD *)(v37 + 64) = v64;
            v66 = v118;
            *(__m128i *)(v37 + 24) = v65;
            v67 = _mm_loadu_si128(&v115);
            *(_DWORD *)(v37 + 68) = v66;
            LOBYTE(v66) = v119;
            *(__m128i *)(v37 + 40) = v67;
            *(_BYTE *)(v37 + 72) = v66;
            clear_tinfo_t(&v112);
            if ( v110 )
            {
              v111.m128i_i64[0] = 0;
              qfree(v110);
            }
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree(v108);
            }
            v37 -= 144;
          }
        }
        v3 = v103 % v100.m128i_i64[0];
        if ( !(v103 % v100.m128i_i64[0]) )
          return v106 - v104 + v105;
      }
      else
      {
        if ( (__int64)(v103 - v3) > 0 )
        {
          v5 = v4 + 144 * v3 + 64;
          v6 = 0;
          do
          {
            v7 = _mm_loadu_si128((const __m128i *)v4);
            v8 = *(void **)(v4 + 16);
            *(_QWORD *)(v4 + 16) = 0;
            v107 = v7;
            v9 = _mm_loadu_si128((const __m128i *)(v4 + 24));
            v108 = v8;
            v10 = *(void **)(v4 + 40);
            *(_QWORD *)(v4 + 40) = 0;
            v109 = v9;
            v11 = _mm_loadu_si128((const __m128i *)(v4 + 48));
            *(_OWORD *)(v4 + 24) = 0;
            *(_OWORD *)(v4 + 48) = 0;
            v110 = v10;
            v112 = 0;
            v111 = v11;
            copy_tinfo_t(&v112);
            v12 = _mm_loadu_si128((const __m128i *)(v4 + 72));
            v116 = *(_QWORD *)(v4 + 120);
            v13 = *(_DWORD *)(v4 + 128);
            v113 = v12;
            v14 = _mm_loadu_si128((const __m128i *)(v4 + 88));
            v117 = v13;
            v15 = *(_DWORD *)(v4 + 132);
            v114 = v14;
            v16 = _mm_loadu_si128((const __m128i *)(v4 + 104));
            v118 = v15;
            LOBYTE(v15) = *(_BYTE *)(v4 + 136);
            v115 = v16;
            v119 = v15;
            *(_QWORD *)v4 = *(_QWORD *)(v5 - 64);
            *(_QWORD *)(v4 + 8) = *(_QWORD *)(v5 - 56);
            v17 = *(_QWORD *)(v5 - 48);
            v18 = _mm_loadu_si128((const __m128i *)(v5 - 40));
            *(_QWORD *)(v5 - 48) = 0;
            *(_OWORD *)(v5 - 40) = 0;
            v19 = *(void **)(v4 + 16);
            if ( v19 )
            {
              *(_QWORD *)(v4 + 24) = 0;
              v101.m128i_i64[0] = v17;
              v102 = v18;
              qfree(v19);
              v18 = _mm_load_si128(&v102);
              v17 = v101.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 16) = v17;
            *(__m128i *)(v4 + 24) = v18;
            v20 = *(_QWORD *)(v5 - 24);
            v21 = _mm_loadu_si128((const __m128i *)(v5 - 16));
            *(_QWORD *)(v5 - 24) = 0;
            *(_OWORD *)(v5 - 16) = 0;
            v22 = *(void **)(v4 + 40);
            if ( v22 )
            {
              *(_QWORD *)(v4 + 48) = 0;
              v101.m128i_i64[0] = v20;
              v102 = v21;
              qfree(v22);
              v21 = _mm_load_si128(&v102);
              v20 = v101.m128i_i64[0];
            }
            *(_QWORD *)(v4 + 40) = v20;
            *(__m128i *)(v4 + 48) = v21;
            copy_tinfo_t(v4 + 64);
            v23 = _mm_loadu_si128((const __m128i *)(v5 + 8));
            v24 = v108;
            v108 = nullptr;
            *(__m128i *)(v4 + 72) = v23;
            *(__m128i *)(v4 + 88) = _mm_loadu_si128((const __m128i *)(v5 + 24));
            *(__m128i *)(v4 + 104) = _mm_loadu_si128((const __m128i *)(v5 + 40));
            v25 = _mm_load_si128(&v107);
            *(_DWORD *)(v4 + 120) = *(_DWORD *)(v5 + 56);
            *(_DWORD *)(v4 + 128) = *(_DWORD *)(v5 + 64);
            *(_DWORD *)(v4 + 132) = *(_DWORD *)(v5 + 68);
            *(_BYTE *)(v4 + 136) = *(_BYTE *)(v5 + 72);
            v26 = *(void **)(v5 - 48);
            *(__m128i *)(v5 - 64) = v25;
            v27 = _mm_loadu_si128(&v109);
            v109 = 0;
            if ( v26 )
            {
              *(_QWORD *)(v5 - 40) = 0;
              v101 = v27;
              qfree(v26);
              v27 = _mm_load_si128(&v101);
            }
            v28 = *(void **)(v5 - 24);
            *(_QWORD *)(v5 - 48) = v24;
            *(__m128i *)(v5 - 40) = v27;
            v29 = v110;
            v30 = _mm_load_si128(&v111);
            v110 = nullptr;
            v111 = 0;
            if ( v28 )
            {
              *(_QWORD *)(v5 - 16) = 0;
              v101 = v30;
              qfree(v28);
              v30 = _mm_load_si128(&v101);
            }
            *(_QWORD *)(v5 - 24) = v29;
            *(__m128i *)(v5 - 16) = v30;
            copy_tinfo_t(v5);
            v31 = _mm_loadu_si128(&v113);
            *(_DWORD *)(v5 + 56) = v116;
            v32 = v117;
            *(__m128i *)(v5 + 8) = v31;
            v33 = _mm_loadu_si128(&v114);
            *(_DWORD *)(v5 + 64) = v32;
            v34 = v118;
            *(__m128i *)(v5 + 24) = v33;
            v35 = _mm_loadu_si128(&v115);
            *(_DWORD *)(v5 + 68) = v34;
            LOBYTE(v34) = v119;
            *(__m128i *)(v5 + 40) = v35;
            *(_BYTE *)(v5 + 72) = v34;
            clear_tinfo_t(&v112);
            if ( v110 )
            {
              v111.m128i_i64[0] = 0;
              qfree(v110);
            }
            if ( v108 )
            {
              v109.m128i_i64[0] = 0;
              qfree(v108);
            }
            v4 += 144;
            ++v6;
            v5 += 144;
          }
          while ( v100.m128i_i64[0] != v6 );
        }
        if ( !(v103 % v3) )
          return v106 - v104 + v105;
        v100.m128i_i64[0] = v3;
        v3 -= v103 % v3;
      }
      v103 = v100.m128i_i64[0];
    }
  }
  v68 = v105;
  v70 = v104 + 64;
  do
  {
    v71 = _mm_loadu_si128((const __m128i *)v68);
    v72 = *(void **)(v68 + 16);
    *(_QWORD *)(v68 + 16) = 0;
    v107 = v71;
    v73 = _mm_loadu_si128((const __m128i *)(v68 + 24));
    v108 = v72;
    v74 = *(void **)(v68 + 40);
    *(_QWORD *)(v68 + 40) = 0;
    v109 = v73;
    v75 = _mm_loadu_si128((const __m128i *)(v68 + 48));
    *(_OWORD *)(v68 + 24) = 0;
    *(_OWORD *)(v68 + 48) = 0;
    v110 = v74;
    v112 = 0;
    v111 = v75;
    copy_tinfo_t(&v112);
    v76 = _mm_loadu_si128((const __m128i *)(v68 + 72));
    v116 = *(_QWORD *)(v68 + 120);
    v77 = *(_DWORD *)(v68 + 128);
    v113 = v76;
    v78 = _mm_loadu_si128((const __m128i *)(v68 + 88));
    v117 = v77;
    v79 = *(_DWORD *)(v68 + 132);
    v114 = v78;
    v80 = _mm_loadu_si128((const __m128i *)(v68 + 104));
    v118 = v79;
    LOBYTE(v79) = *(_BYTE *)(v68 + 136);
    v115 = v80;
    v119 = v79;
    *(_QWORD *)v68 = *(_QWORD *)(v70 - 64);
    *(_QWORD *)(v68 + 8) = *(_QWORD *)(v70 - 56);
    v81 = *(_QWORD *)(v70 - 48);
    v82 = _mm_loadu_si128((const __m128i *)(v70 - 40));
    *(_QWORD *)(v70 - 48) = 0;
    *(_OWORD *)(v70 - 40) = 0;
    v83 = *(void **)(v68 + 16);
    if ( v83 )
    {
      *(_QWORD *)(v68 + 24) = 0;
      v100 = v82;
      qfree(v83);
      v82 = _mm_load_si128(&v100);
    }
    *(_QWORD *)(v68 + 16) = v81;
    *(__m128i *)(v68 + 24) = v82;
    v84 = *(_QWORD *)(v70 - 24);
    v85 = _mm_loadu_si128((const __m128i *)(v70 - 16));
    *(_QWORD *)(v70 - 24) = 0;
    *(_OWORD *)(v70 - 16) = 0;
    v86 = *(void **)(v68 + 40);
    if ( v86 )
    {
      *(_QWORD *)(v68 + 48) = 0;
      v100 = v85;
      qfree(v86);
      v85 = _mm_load_si128(&v100);
    }
    *(_QWORD *)(v68 + 40) = v84;
    *(__m128i *)(v68 + 48) = v85;
    copy_tinfo_t(v68 + 64);
    v87 = _mm_loadu_si128((const __m128i *)(v70 + 8));
    v88 = v108;
    v108 = nullptr;
    *(__m128i *)(v68 + 72) = v87;
    *(__m128i *)(v68 + 88) = _mm_loadu_si128((const __m128i *)(v70 + 24));
    *(__m128i *)(v68 + 104) = _mm_loadu_si128((const __m128i *)(v70 + 40));
    v89 = _mm_load_si128(&v107);
    *(_DWORD *)(v68 + 120) = *(_DWORD *)(v70 + 56);
    *(_DWORD *)(v68 + 128) = *(_DWORD *)(v70 + 64);
    *(_DWORD *)(v68 + 132) = *(_DWORD *)(v70 + 68);
    *(_BYTE *)(v68 + 136) = *(_BYTE *)(v70 + 72);
    v90 = *(void **)(v70 - 48);
    *(__m128i *)(v70 - 64) = v89;
    v91 = _mm_loadu_si128(&v109);
    v109 = 0;
    if ( v90 )
    {
      *(_QWORD *)(v70 - 40) = 0;
      v100 = v91;
      qfree(v90);
      v91 = _mm_load_si128(&v100);
    }
    v92 = *(void **)(v70 - 24);
    *(_QWORD *)(v70 - 48) = v88;
    *(__m128i *)(v70 - 40) = v91;
    v93 = v110;
    v94 = _mm_load_si128(&v111);
    v110 = nullptr;
    v111 = 0;
    if ( v92 )
    {
      *(_QWORD *)(v70 - 16) = 0;
      v100 = v94;
      qfree(v92);
      v94 = _mm_load_si128(&v100);
    }
    *(_QWORD *)(v70 - 24) = v93;
    *(__m128i *)(v70 - 16) = v94;
    copy_tinfo_t(v70);
    v95 = _mm_loadu_si128(&v113);
    *(_DWORD *)(v70 + 56) = v116;
    v96 = v117;
    *(__m128i *)(v70 + 8) = v95;
    v97 = _mm_loadu_si128(&v114);
    *(_DWORD *)(v70 + 64) = v96;
    v98 = v118;
    *(__m128i *)(v70 + 24) = v97;
    v99 = _mm_loadu_si128(&v115);
    *(_DWORD *)(v70 + 68) = v98;
    LOBYTE(v98) = v119;
    *(__m128i *)(v70 + 40) = v99;
    *(_BYTE *)(v70 + 72) = v98;
    clear_tinfo_t(&v112);
    if ( v110 )
    {
      v111.m128i_i64[0] = 0;
      qfree(v110);
    }
    if ( v108 )
    {
      v109.m128i_i64[0] = 0;
      qfree(v108);
    }
    v68 += 144;
    v70 += 144;
  }
  while ( v104 != v68 );
  return v68;
}
