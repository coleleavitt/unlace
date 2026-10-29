__int64 __fastcall sub_6FD330(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rax
  const __m128i *v6; // rbp
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __m128i v13; // xmm0
  size_t v14; // rbx
  size_t v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rbx
  void *v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  size_t v27; // rbx
  size_t v28; // rbx
  __int64 v29; // rsi
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  size_t v40; // r13
  size_t v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rsi
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rdx
  void *v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  void *v51; // rax
  void *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rbx
  __m128i v65; // xmm0
  size_t v66; // rbx
  size_t v67; // rbx
  __int64 v68; // rsi
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rbx
  void *v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __int64 v76; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  size_t v79; // r13
  size_t v80; // r13
  __int64 v81; // rsi
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __int64 v84; // rax
  __int64 v85; // r15
  void *v86; // rax
  __m128i v87; // xmm0
  __m128i v88; // xmm1
  __int64 v89; // rax
  __m128i v90; // xmm0
  void *v91; // rax
  void *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  void *v95; // rax
  void *v96; // rax
  __int64 v97; // [rsp+8h] [rbp-190h]
  __int64 v98; // [rsp+10h] [rbp-188h]
  __int64 v100; // [rsp+28h] [rbp-170h] BYREF
  __m128i v101; // [rsp+30h] [rbp-168h] BYREF
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  size_t v103[2]; // [rsp+48h] [rbp-150h]
  void *src; // [rsp+58h] [rbp-140h]
  size_t n[2]; // [rsp+60h] [rbp-138h]
  __int128 v106; // [rsp+70h] [rbp-128h] BYREF
  __m128i v107; // [rsp+88h] [rbp-110h] BYREF
  __m128i v108; // [rsp+98h] [rbp-100h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-F0h]
  __int64 v110; // [rsp+B0h] [rbp-E8h]
  char v111; // [rsp+B8h] [rbp-E0h]
  __m128i v112; // [rsp+C0h] [rbp-D8h] BYREF
  void *v113; // [rsp+D0h] [rbp-C8h]
  __m128i v114; // [rsp+D8h] [rbp-C0h] BYREF
  void *v115; // [rsp+E8h] [rbp-B0h]
  __m128i v116; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v117; // [rsp+100h] [rbp-98h] BYREF
  __m128i v118; // [rsp+108h] [rbp-90h] BYREF
  __m128i v119; // [rsp+118h] [rbp-80h] BYREF
  __m128i v120; // [rsp+128h] [rbp-70h] BYREF
  __int64 v121; // [rsp+138h] [rbp-60h]
  __int64 v122; // [rsp+140h] [rbp-58h]
  char v123; // [rsp+148h] [rbp-50h]
  unsigned __int64 v124; // [rsp+158h] [rbp-40h]

  v3 = 0;
  v5 = *(_QWORD *)(a3 + 8);
  v124 = __readfsqword(0x28u);
  v6 = *(const __m128i **)a3;
  v97 = *(_QWORD *)a3 + 144 * v5;
  if ( v97 != *(_QWORD *)a3 )
  {
    while ( 1 )
    {
      v9 = v6->m128i_i64[0];
      if ( v6->m128i_i64[0] < v3 )
        return 0;
      if ( v6->m128i_i64[0] != v3 )
        break;
LABEL_8:
      v7 = (__int64)v6;
      v6 += 9;
      sub_6C1060((__int64 *)a2, v7);
      v8 = _mm_loadu_si128(v6 - 9);
      v3 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
      if ( (const __m128i *)v97 == v6 )
        goto LABEL_48;
    }
    v101 = 0;
    v108.m128i_i64[1] = (__int64)&dword_0 + 1;
    v10 = v9 - v3 - (-(int)v3 & 7);
    *(_OWORD *)v103 = 0;
    *(_OWORD *)n = 0;
    ptr = nullptr;
    v11 = v10 & 7;
    src = nullptr;
    LODWORD(v109) = -1;
    v110 = 0;
    v111 = 0;
    v106 = 0;
    if ( (-(int)v3 & 7) != 0 )
    {
      v101.m128i_i64[0] = v3;
      v101.m128i_i64[1] = -(int)v3 & 7;
      v112.m128i_i8[0] = 1;
      *(__int16 *)((char *)v112.m128i_i16 + 1) = -(char)v3 & 7;
      create_tinfo(&v106, 14, 14, &v112);
      v39 = _mm_load_si128(&v101);
      v40 = v103[0];
      v113 = nullptr;
      v112 = v39;
      v114 = 0;
      if ( v103[0] )
      {
        v57 = (void *)qalloc_or_throw(v103[0]);
        v114.m128i_i64[1] = v40;
        v113 = v57;
        memcpy(v57, ptr, v40);
        v114.m128i_i64[0] = v40;
      }
      v41 = n[0];
      v115 = nullptr;
      v116 = 0;
      if ( n[0] )
      {
        v56 = (void *)qalloc_or_throw(n[0]);
        v116.m128i_i64[1] = v41;
        v115 = v56;
        memcpy(v56, src, v41);
        v116.m128i_i64[0] = v41;
      }
      v117 = 0;
      copy_tinfo_t(&v117);
      v42 = *(_QWORD *)(a2 + 8);
      v43 = *(_QWORD *)a2;
      v118 = _mm_loadu_si128((const __m128i *)((char *)&v106 + 8));
      v44 = _mm_loadu_si128(&v107);
      v121 = v109;
      v119 = v44;
      v45 = _mm_loadu_si128(&v108);
      v122 = v110;
      v120 = v45;
      v123 = v111;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v42 + 1) )
      {
        v55 = qvector_reserve(a2, v43, v42 + 1, 144);
        v42 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v55;
        v43 = v55;
      }
      v46 = v43 + 144 * v42;
      *(__m128i *)v46 = _mm_load_si128(&v112);
      v47 = v113;
      v48 = _mm_loadu_si128(&v114);
      v113 = nullptr;
      *(_QWORD *)(v46 + 16) = v47;
      *(__m128i *)(v46 + 24) = v48;
      v49 = _mm_load_si128(&v116);
      v114 = 0;
      v116 = 0;
      *(_QWORD *)(v46 + 40) = v115;
      v115 = nullptr;
      *(_QWORD *)(v46 + 64) = 0;
      *(__m128i *)(v46 + 48) = v49;
      v98 = v46;
      copy_tinfo_t(v46 + 64);
      v50 = _mm_loadu_si128(&v118);
      *(_QWORD *)(v98 + 120) = v121;
      *(__m128i *)(v98 + 72) = v50;
      *(__m128i *)(v98 + 88) = _mm_loadu_si128(&v119);
      *(__m128i *)(v98 + 104) = _mm_loadu_si128(&v120);
      *(_QWORD *)(v98 + 128) = v122;
      *(_BYTE *)(v98 + 136) = v123;
      ++*(_QWORD *)(a2 + 8);
      clear_tinfo_t(&v117);
      if ( v115 )
      {
        v116.m128i_i64[0] = 0;
        qfree(v115);
      }
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
      v3 += v101.m128i_u64[1];
    }
    if ( v10 <= 7 )
    {
      if ( (v10 & 7) == 0 )
      {
LABEL_4:
        clear_tinfo_t(&v106);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( ptr )
        {
          v103[0] = 0;
          qfree(ptr);
        }
        goto LABEL_8;
      }
    }
    else
    {
      v12 = v10 >> 3;
      sub_35A790((char **)&ptr);
      v101.m128i_i64[0] = v3;
      v101.m128i_i64[1] = 8 * (int)v12;
      if ( (_DWORD)v12 == 1 )
      {
        v112.m128i_i64[0] = 50;
        copy_tinfo_t(&v106);
        clear_tinfo_t(&v112);
      }
      else
      {
        v100 = 50;
        v112.m128i_i32[2] = 0;
        v112.m128i_i32[3] = v12;
        v112.m128i_i64[0] = 0;
        copy_tinfo_t(&v112);
        create_tinfo(&v106, 11, 11, &v112);
        clear_tinfo_t(&v112);
        clear_tinfo_t(&v100);
      }
      v13 = _mm_load_si128(&v101);
      v14 = v103[0];
      v113 = nullptr;
      v114 = 0;
      v112 = v13;
      if ( v103[0] )
      {
        v59 = (void *)qalloc_or_throw(v103[0]);
        v114.m128i_i64[1] = v14;
        v113 = v59;
        memcpy(v59, ptr, v14);
        v114.m128i_i64[0] = v14;
      }
      v15 = n[0];
      v115 = nullptr;
      v116 = 0;
      if ( n[0] )
      {
        v58 = (void *)qalloc_or_throw(n[0]);
        v116.m128i_i64[1] = v15;
        v115 = v58;
        memcpy(v58, src, v15);
        v116.m128i_i64[0] = v15;
      }
      v117 = 0;
      copy_tinfo_t(&v117);
      v16 = *(_QWORD *)(a2 + 8);
      v17 = *(_QWORD *)a2;
      v118 = _mm_loadu_si128((const __m128i *)((char *)&v106 + 8));
      v18 = _mm_loadu_si128(&v107);
      v121 = v109;
      v119 = v18;
      v19 = _mm_loadu_si128(&v108);
      v122 = v110;
      v120 = v19;
      v123 = v111;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v16 + 1) )
      {
        v54 = qvector_reserve(a2, v17, v16 + 1, 144);
        v16 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v54;
        v17 = v54;
      }
      v20 = v17 + 144 * v16;
      *(__m128i *)v20 = _mm_load_si128(&v112);
      v21 = v113;
      v22 = _mm_loadu_si128(&v114);
      v113 = nullptr;
      *(_QWORD *)(v20 + 16) = v21;
      *(__m128i *)(v20 + 24) = v22;
      v23 = _mm_load_si128(&v116);
      v114 = 0;
      v116 = 0;
      *(_QWORD *)(v20 + 40) = v115;
      v115 = nullptr;
      *(_QWORD *)(v20 + 64) = 0;
      *(__m128i *)(v20 + 48) = v23;
      copy_tinfo_t(v20 + 64);
      v24 = v121;
      *(__m128i *)(v20 + 72) = _mm_loadu_si128(&v118);
      v25 = _mm_loadu_si128(&v119);
      *(_QWORD *)(v20 + 120) = v24;
      *(__m128i *)(v20 + 88) = v25;
      *(__m128i *)(v20 + 104) = _mm_loadu_si128(&v120);
      *(_QWORD *)(v20 + 128) = v122;
      *(_BYTE *)(v20 + 136) = v123;
      ++*(_QWORD *)(a2 + 8);
      clear_tinfo_t(&v117);
      if ( v115 )
      {
        v116.m128i_i64[0] = 0;
        qfree(v115);
      }
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
      v3 += v101.m128i_u64[1];
      if ( !v11 )
        goto LABEL_4;
    }
    v103[0] = 0;
    v101.m128i_i64[0] = v3;
    v101.m128i_i64[1] = v11;
    v112.m128i_i8[0] = 1;
    *(__int16 *)((char *)v112.m128i_i16 + 1) = (unsigned __int8)v11;
    create_tinfo(&v106, 14, 14, &v112);
    v26 = _mm_load_si128(&v101);
    v27 = v103[0];
    v113 = nullptr;
    v112 = v26;
    v114 = 0;
    if ( v103[0] )
    {
      v52 = (void *)qalloc_or_throw(v103[0]);
      v114.m128i_i64[1] = v27;
      v113 = v52;
      memcpy(v52, ptr, v27);
      v114.m128i_i64[0] = v27;
    }
    v28 = n[0];
    v115 = nullptr;
    v116 = 0;
    if ( n[0] )
    {
      v51 = (void *)qalloc_or_throw(n[0]);
      v116.m128i_i64[1] = v28;
      v115 = v51;
      memcpy(v51, src, v28);
      v116.m128i_i64[0] = v28;
    }
    v117 = 0;
    copy_tinfo_t(&v117);
    v29 = *(_QWORD *)a2;
    v118 = _mm_loadu_si128((const __m128i *)((char *)&v106 + 8));
    v30 = _mm_loadu_si128(&v107);
    v121 = v109;
    v119 = v30;
    v31 = _mm_loadu_si128(&v108);
    v122 = v110;
    v120 = v31;
    v123 = v111;
    v32 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v32 + 1) )
    {
      v53 = qvector_reserve(a2, v29, v32 + 1, 144);
      *(_QWORD *)a2 = v53;
      v29 = v53;
      v32 = *(_QWORD *)(a2 + 8);
    }
    v33 = v29 + 144 * v32;
    *(__m128i *)v33 = _mm_load_si128(&v112);
    v34 = v113;
    v35 = _mm_loadu_si128(&v114);
    v113 = nullptr;
    *(_QWORD *)(v33 + 16) = v34;
    *(__m128i *)(v33 + 24) = v35;
    v36 = _mm_load_si128(&v116);
    v114 = 0;
    v116 = 0;
    *(_QWORD *)(v33 + 40) = v115;
    v115 = nullptr;
    *(_QWORD *)(v33 + 64) = 0;
    *(__m128i *)(v33 + 48) = v36;
    copy_tinfo_t(v33 + 64);
    v37 = v121;
    *(__m128i *)(v33 + 72) = _mm_loadu_si128(&v118);
    v38 = _mm_loadu_si128(&v119);
    *(_QWORD *)(v33 + 120) = v37;
    *(__m128i *)(v33 + 88) = v38;
    *(__m128i *)(v33 + 104) = _mm_loadu_si128(&v120);
    *(_QWORD *)(v33 + 128) = v122;
    *(_BYTE *)(v33 + 136) = v123;
    ++*(_QWORD *)(a2 + 8);
    clear_tinfo_t(&v117);
    if ( v115 )
    {
      v116.m128i_i64[0] = 0;
      qfree(v115);
    }
    if ( v113 )
    {
      v114.m128i_i64[0] = 0;
      qfree(v113);
    }
    goto LABEL_4;
  }
LABEL_48:
  v60 = *(_QWORD *)(a3 + 24);
  if ( v3 < 8 * v60 )
  {
    ptr = nullptr;
    v101 = 0;
    *(_OWORD *)v103 = 0;
    src = nullptr;
    v63 = 8 * v60 - v3 - (-(int)v3 & 7);
    v108.m128i_i64[1] = 1;
    LODWORD(v109) = -1;
    v110 = 0;
    v111 = 0;
    *(_OWORD *)n = 0;
    v106 = 0;
    if ( (-(int)v3 & 7) != 0 )
    {
      v101.m128i_i64[0] = v3;
      v101.m128i_i64[1] = -(int)v3 & 7;
      v112.m128i_i8[0] = 1;
      *(__int16 *)((char *)v112.m128i_i16 + 1) = -(char)v3 & 7;
      create_tinfo(&v106, 14, 14, &v112);
      v78 = _mm_load_si128(&v101);
      v79 = v103[0];
      v113 = nullptr;
      v112 = v78;
      v114 = 0;
      if ( v103[0] )
      {
        v96 = (void *)qalloc_or_throw(v103[0]);
        v114.m128i_i64[1] = v79;
        v113 = v96;
        memcpy(v96, ptr, v79);
        v114.m128i_i64[0] = v79;
      }
      v80 = n[0];
      v115 = nullptr;
      v116 = 0;
      if ( n[0] )
      {
        v95 = (void *)qalloc_or_throw(n[0]);
        v116.m128i_i64[1] = v80;
        v115 = v95;
        memcpy(v95, src, v80);
        v116.m128i_i64[0] = v80;
      }
      v117 = 0;
      copy_tinfo_t(&v117);
      v81 = *(_QWORD *)a2;
      v118 = _mm_loadu_si128((const __m128i *)((char *)&v106 + 8));
      v82 = _mm_loadu_si128(&v107);
      v121 = v109;
      v119 = v82;
      v83 = _mm_loadu_si128(&v108);
      v122 = v110;
      v120 = v83;
      v123 = v111;
      v84 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v84 + 1) )
      {
        v93 = qvector_reserve(a2, v81, v84 + 1, 144);
        *(_QWORD *)a2 = v93;
        v81 = v93;
        v84 = *(_QWORD *)(a2 + 8);
      }
      v85 = v81 + 144 * v84;
      *(__m128i *)v85 = _mm_load_si128(&v112);
      v86 = v113;
      v87 = _mm_loadu_si128(&v114);
      v113 = nullptr;
      *(__m128i *)(v85 + 24) = v87;
      *(_QWORD *)(v85 + 16) = v86;
      v88 = _mm_load_si128(&v116);
      v114 = 0;
      v116 = 0;
      *(_QWORD *)(v85 + 40) = v115;
      v115 = nullptr;
      *(_QWORD *)(v85 + 64) = 0;
      *(__m128i *)(v85 + 48) = v88;
      copy_tinfo_t(v85 + 64);
      v89 = v121;
      *(__m128i *)(v85 + 72) = _mm_loadu_si128(&v118);
      v90 = _mm_loadu_si128(&v119);
      *(_QWORD *)(v85 + 120) = v89;
      *(__m128i *)(v85 + 88) = v90;
      *(__m128i *)(v85 + 104) = _mm_loadu_si128(&v120);
      *(_QWORD *)(v85 + 128) = v122;
      *(_BYTE *)(v85 + 136) = v123;
      ++*(_QWORD *)(a2 + 8);
      clear_tinfo_t(&v117);
      if ( v115 )
      {
        v116.m128i_i64[0] = 0;
        qfree(v115);
      }
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
      v3 += v101.m128i_u64[1];
    }
    if ( v63 > 7 )
    {
      v64 = v63 >> 3;
      sub_35A790((char **)&ptr);
      v101.m128i_i64[0] = v3;
      v101.m128i_i64[1] = 8 * (int)v64;
      if ( (_DWORD)v64 == 1 )
      {
        v112.m128i_i64[0] = 50;
        copy_tinfo_t(&v106);
        clear_tinfo_t(&v112);
      }
      else
      {
        v100 = 50;
        v112.m128i_i32[2] = 0;
        v112.m128i_i32[3] = v64;
        v112.m128i_i64[0] = 0;
        copy_tinfo_t(&v112);
        create_tinfo(&v106, 11, 11, &v112);
        clear_tinfo_t(&v112);
        clear_tinfo_t(&v100);
      }
      v65 = _mm_load_si128(&v101);
      v66 = v103[0];
      v113 = nullptr;
      v112 = v65;
      v114 = 0;
      if ( v103[0] )
      {
        v92 = (void *)qalloc_or_throw(v103[0]);
        v114.m128i_i64[1] = v66;
        v113 = v92;
        memcpy(v92, ptr, v66);
        v114.m128i_i64[0] = v66;
      }
      v67 = n[0];
      v115 = nullptr;
      v116 = 0;
      if ( n[0] )
      {
        v91 = (void *)qalloc_or_throw(n[0]);
        v116.m128i_i64[1] = v67;
        v115 = v91;
        memcpy(v91, src, v67);
        v116.m128i_i64[0] = v67;
      }
      v117 = 0;
      copy_tinfo_t(&v117);
      v68 = *(_QWORD *)a2;
      v118 = _mm_loadu_si128((const __m128i *)((char *)&v106 + 8));
      v69 = _mm_loadu_si128(&v107);
      v121 = v109;
      v119 = v69;
      v70 = _mm_loadu_si128(&v108);
      v122 = v110;
      v120 = v70;
      v123 = v111;
      v71 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v71 + 1) )
      {
        v94 = qvector_reserve(a2, v68, v71 + 1, 144);
        *(_QWORD *)a2 = v94;
        v68 = v94;
        v71 = *(_QWORD *)(a2 + 8);
      }
      v72 = v68 + 144 * v71;
      *(__m128i *)v72 = _mm_load_si128(&v112);
      v73 = v113;
      v74 = _mm_loadu_si128(&v114);
      v113 = nullptr;
      *(__m128i *)(v72 + 24) = v74;
      *(_QWORD *)(v72 + 16) = v73;
      v75 = _mm_load_si128(&v116);
      v114 = 0;
      v116 = 0;
      *(_QWORD *)(v72 + 40) = v115;
      v115 = nullptr;
      *(_QWORD *)(v72 + 64) = 0;
      *(__m128i *)(v72 + 48) = v75;
      copy_tinfo_t(v72 + 64);
      v76 = v121;
      *(__m128i *)(v72 + 72) = _mm_loadu_si128(&v118);
      v77 = _mm_loadu_si128(&v119);
      *(_QWORD *)(v72 + 120) = v76;
      *(__m128i *)(v72 + 88) = v77;
      *(__m128i *)(v72 + 104) = _mm_loadu_si128(&v120);
      *(_QWORD *)(v72 + 128) = v122;
      *(_BYTE *)(v72 + 136) = v123;
      ++*(_QWORD *)(a2 + 8);
      clear_tinfo_t(&v117);
      if ( v115 )
      {
        v116.m128i_i64[0] = 0;
        qfree(v115);
      }
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
    }
    clear_tinfo_t(&v106);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( ptr )
    {
      v103[0] = 0;
      qfree(ptr);
    }
    v60 = *(_QWORD *)(a3 + 24);
  }
  *(_QWORD *)(a2 + 24) = v60;
  v61 = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(a2 + 40) = 1;
  *(_DWORD *)(a2 + 44) = v61 | 0x40;
  return 1;
}
