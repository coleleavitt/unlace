unsigned __int64 __fastcall sub_1D3C20(__int64 a1, __int64 a2, __m128i *a3)
{
  void *v3; // r14
  __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rdi
  void *v10; // r13
  unsigned __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rdi
  void *v14; // r14
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rdi
  void *v18; // r14
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rdi
  void *v22; // r14
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  void *v26; // r14
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdi
  void *v30; // r14
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdi
  void *v34; // r13
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned __int64 *v39; // rax
  __int64 v40; // rdx
  void *v41; // r8
  __int64 v42; // rbp
  __int64 v43; // rdi
  void *v44; // rbp
  unsigned __int64 v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // rdi
  void *v48; // rbp
  unsigned __int64 v49; // rdx
  __m128i v50; // xmm0
  __int64 v51; // rdi
  void *v52; // rbp
  unsigned __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rdi
  void *v56; // rbp
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rdi
  void *v60; // rbp
  unsigned __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rdi
  void *v64; // r15
  unsigned __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rdi
  void *v68; // r14
  unsigned __int64 v69; // rdx
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // rsi
  unsigned __int64 *v73; // rax
  __int64 v74; // rdx
  size_t v76; // rbp
  size_t v77; // rbp
  void *v78; // rax
  size_t v79; // r13
  size_t v80; // r13
  size_t v81; // r13
  size_t v82; // r13
  size_t v83; // r13
  size_t v84; // r14
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  size_t v86[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v87; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v88; // [rsp+30h] [rbp-58h] BYREF
  __int64 v89; // [rsp+38h] [rbp-50h]
  unsigned __int64 v90; // [rsp+48h] [rbp-40h]

  v3 = nullptr;
  v6 = *(_QWORD *)(a1 + 8);
  v90 = __readfsqword(0x28u);
  a3->m128i_i64[0] = v6;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
  {
    v3 = (void *)qalloc_or_throw(16 * v8);
    memcpy(v3, *(const void **)(a1 + 16), 16 * v8);
  }
  v9 = a3->m128i_i64[1];
  if ( v9 )
  {
    a3[1].m128i_i64[0] = 0;
    qfree(v9);
  }
  a3[1].m128i_i64[0] = v8;
  a3[1].m128i_i64[1] = v8;
  v10 = nullptr;
  a3->m128i_i64[1] = (__int64)v3;
  a3[2].m128i_i64[0] = *(_QWORD *)(a1 + 40);
  a3[2].m128i_i64[1] = *(_QWORD *)(a1 + 48);
  a3[3].m128i_i64[0] = *(_QWORD *)(a1 + 56);
  a3[3].m128i_i64[1] = *(_QWORD *)(a1 + 80);
  a3[4].m128i_i64[0] = *(_QWORD *)(a1 + 88);
  a3[4].m128i_i64[1] = *(_QWORD *)(a1 + 96);
  a3[5].m128i_i64[0] = *(_QWORD *)(a1 + 104);
  a3[5].m128i_i32[2] = *(_DWORD *)(a1 + 112);
  a3[5].m128i_i32[3] = *(_DWORD *)(a1 + 116);
  a3[6].m128i_i32[0] = *(_DWORD *)(a1 + 120);
  a3[6].m128i_i64[1] = *(_QWORD *)(a1 + 128);
  a3[7].m128i_i64[0] = *(_QWORD *)(a1 + 136);
  a3[7].m128i_i64[1] = *(_QWORD *)(a1 + 144);
  a3[8].m128i_i64[0] = *(_QWORD *)(a1 + 152);
  a3[8].m128i_i64[1] = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 1480);
  si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    *(__m128i *)n = si128;
    v84 = 40 * v11;
    v10 = (void *)qalloc_or_throw(40 * v11);
    memcpy(v10, *(const void **)(a1 + 1472), v84);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v13 = a3[9].m128i_i64[0];
  if ( v13 )
  {
    a3[9].m128i_i64[1] = 0;
    *(__m128i *)n = si128;
    qfree(v13);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  *(__m128i *)((char *)a3 + 152) = si128;
  v14 = nullptr;
  a3[9].m128i_i64[0] = (__int64)v10;
  a3[10].m128i_i64[1] = *(_QWORD *)(a1 + 176);
  a3[18].m128i_i32[0] = *(_DWORD *)(a1 + 1184);
  v15 = *(_QWORD *)(a1 + 1200);
  v16 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v15 )
  {
    *(__m128i *)n = v16;
    v83 = 16 * v15;
    v14 = (void *)qalloc_or_throw(16 * v15);
    memcpy(v14, *(const void **)(a1 + 1192), v83);
    v16 = _mm_load_si128((const __m128i *)n);
  }
  v17 = a3[18].m128i_i64[1];
  if ( v17 )
  {
    a3[19].m128i_i64[0] = 0;
    *(__m128i *)n = v16;
    qfree(v17);
    v16 = _mm_load_si128((const __m128i *)n);
  }
  a3[18].m128i_i64[1] = (__int64)v14;
  v18 = nullptr;
  a3[19] = v16;
  v19 = *(_QWORD *)(a1 + 192);
  v20 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  if ( v19 )
  {
    *(__m128i *)n = v20;
    v82 = 16 * v19;
    v18 = (void *)qalloc_or_throw(16 * v19);
    memcpy(v18, *(const void **)(a1 + 184), v82);
    v20 = _mm_load_si128((const __m128i *)n);
  }
  v21 = a3[11].m128i_i64[0];
  if ( v21 )
  {
    a3[11].m128i_i64[1] = 0;
    *(__m128i *)n = v20;
    qfree(v21);
    v20 = _mm_load_si128((const __m128i *)n);
  }
  a3[11].m128i_i64[0] = (__int64)v18;
  v22 = nullptr;
  *(__m128i *)((char *)a3 + 184) = v20;
  v23 = *(_QWORD *)(a1 + 216);
  v24 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
  if ( v23 )
  {
    *(__m128i *)n = v24;
    v81 = 16 * v23;
    v22 = (void *)qalloc_or_throw(16 * v23);
    memcpy(v22, *(const void **)(a1 + 208), v81);
    v24 = _mm_load_si128((const __m128i *)n);
  }
  v25 = a3[12].m128i_i64[1];
  if ( v25 )
  {
    a3[13].m128i_i64[0] = 0;
    *(__m128i *)n = v24;
    qfree(v25);
    v24 = _mm_load_si128((const __m128i *)n);
  }
  a3[12].m128i_i64[1] = (__int64)v22;
  v26 = nullptr;
  a3[13] = v24;
  v27 = *(_QWORD *)(a1 + 240);
  v28 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
  if ( v27 )
  {
    *(__m128i *)n = v28;
    v80 = 16 * v27;
    v26 = (void *)qalloc_or_throw(16 * v27);
    memcpy(v26, *(const void **)(a1 + 232), v80);
    v28 = _mm_load_si128((const __m128i *)n);
  }
  v29 = a3[14].m128i_i64[0];
  if ( v29 )
  {
    a3[14].m128i_i64[1] = 0;
    *(__m128i *)n = v28;
    qfree(v29);
    v28 = _mm_load_si128((const __m128i *)n);
  }
  a3[14].m128i_i64[0] = (__int64)v26;
  v30 = nullptr;
  *(__m128i *)((char *)a3 + 232) = v28;
  sub_606D0(&a3[15].m128i_i64[1], (__int64 *)(a1 + 256));
  v31 = *(_QWORD *)(a1 + 280);
  v32 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
  if ( v31 )
  {
    *(__m128i *)n = v32;
    v79 = 16 * v31;
    v30 = (void *)qalloc_or_throw(16 * v31);
    memcpy(v30, *(const void **)(a1 + 272), v79);
    v32 = _mm_load_si128((const __m128i *)n);
  }
  v33 = a3[16].m128i_i64[1];
  if ( v33 )
  {
    a3[17].m128i_i64[0] = 0;
    *(__m128i *)n = v32;
    qfree(v33);
    v32 = _mm_load_si128((const __m128i *)n);
  }
  a3[16].m128i_i64[1] = (__int64)v30;
  v34 = nullptr;
  a3[17] = v32;
  sub_1CFE60(a3[20].m128i_i64, a1 + 432);
  v35 = *(_QWORD *)(a1 + 464);
  v36 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
  if ( v35 )
  {
    *(__m128i *)v86 = v36;
    n[0] = 4 * v35;
    v34 = (void *)qalloc_or_throw(4 * v35);
    memcpy(v34, *(const void **)(a1 + 456), n[0]);
    v36 = _mm_load_si128((const __m128i *)v86);
  }
  v37 = a3[21].m128i_i64[1];
  if ( v37 )
  {
    a3[22].m128i_i64[0] = 0;
    *(__m128i *)n = v36;
    qfree(v37);
    v36 = _mm_load_si128((const __m128i *)n);
  }
  a3[21].m128i_i64[1] = (__int64)v34;
  n[0] = a1 + 872;
  a3[22] = v36;
  if ( (__m128i *)(a1 + 872) != &a3[23] )
  {
    sub_1D3A10((__int64 *)&v88, a1 + 872);
    v38 = v89;
    v39 = (unsigned __int64 *)a3[23].m128i_i64[0];
    a3[23].m128i_i64[0] = (__int64)v88;
    v40 = a3[23].m128i_i64[1];
    v88 = v39;
    a3[23].m128i_i64[1] = v38;
    v89 = v40;
    if ( v39 )
    {
      sub_7EA40(&v88);
      if ( v88 )
        qfree(v88);
    }
  }
  v41 = nullptr;
  a3[24] = _mm_loadu_si128((const __m128i *)(a1 + 536));
  a3[25] = _mm_loadu_si128((const __m128i *)(a1 + 552));
  a3[26] = _mm_loadu_si128((const __m128i *)(a1 + 568));
  a3[27] = _mm_loadu_si128((const __m128i *)(a1 + 584));
  a3[28] = _mm_loadu_si128((const __m128i *)(a1 + 600));
  a3[29] = _mm_loadu_si128((const __m128i *)(a1 + 616));
  a3[30] = _mm_loadu_si128((const __m128i *)(a1 + 632));
  a3[31] = _mm_loadu_si128((const __m128i *)(a1 + 648));
  a3[32] = _mm_loadu_si128((const __m128i *)(a1 + 664));
  a3[33] = _mm_loadu_si128((const __m128i *)(a1 + 680));
  a3[34] = _mm_loadu_si128((const __m128i *)(a1 + 696));
  a3[35] = _mm_loadu_si128((const __m128i *)(a1 + 712));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v42 = *(_QWORD *)(a2 + 16);
  if ( v42 )
  {
    v86[0] = 16 * v42;
    v78 = (void *)qalloc_or_throw(16 * v42);
    v41 = memcpy(v78, *(const void **)(a2 + 8), v86[0]);
  }
  v43 = *(_QWORD *)(a1 + 16);
  if ( v43 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v86[0] = (size_t)v41;
    qfree(v43);
    v41 = (void *)v86[0];
  }
  *(_QWORD *)(a1 + 24) = v42;
  *(_QWORD *)(a1 + 32) = v42;
  v44 = nullptr;
  *(_QWORD *)(a1 + 16) = v41;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 136);
  v45 = *(_QWORD *)(a2 + 152);
  v46 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
  if ( v45 )
  {
    v87 = v46;
    v86[0] = 40 * v45;
    v44 = (void *)qalloc_or_throw(40 * v45);
    memcpy(v44, *(const void **)(a2 + 144), v86[0]);
    v46 = _mm_load_si128(&v87);
  }
  v47 = *(_QWORD *)(a1 + 1472);
  if ( v47 )
  {
    *(_QWORD *)(a1 + 1480) = 0;
    *(__m128i *)v86 = v46;
    qfree(v47);
    v46 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 1472) = v44;
  v48 = nullptr;
  *(__m128i *)(a1 + 1480) = v46;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 1184) = *(_DWORD *)(a2 + 288);
  v49 = *(_QWORD *)(a2 + 304);
  v50 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
  if ( v49 )
  {
    v87 = v50;
    v86[0] = 16 * v49;
    v48 = (void *)qalloc_or_throw(16 * v49);
    memcpy(v48, *(const void **)(a2 + 296), v86[0]);
    v50 = _mm_load_si128(&v87);
  }
  v51 = *(_QWORD *)(a1 + 1192);
  if ( v51 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    *(__m128i *)v86 = v50;
    qfree(v51);
    v50 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 1192) = v48;
  v52 = nullptr;
  *(__m128i *)(a1 + 1200) = v50;
  v53 = *(_QWORD *)(a2 + 184);
  v54 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
  if ( v53 )
  {
    v87 = v54;
    v86[0] = 16 * v53;
    v52 = (void *)qalloc_or_throw(16 * v53);
    memcpy(v52, *(const void **)(a2 + 176), v86[0]);
    v54 = _mm_load_si128(&v87);
  }
  v55 = *(_QWORD *)(a1 + 184);
  if ( v55 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    *(__m128i *)v86 = v54;
    qfree(v55);
    v54 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 184) = v52;
  v56 = nullptr;
  *(__m128i *)(a1 + 192) = v54;
  v57 = *(_QWORD *)(a2 + 208);
  v58 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
  if ( v57 )
  {
    v87 = v58;
    v86[0] = 16 * v57;
    v56 = (void *)qalloc_or_throw(16 * v57);
    memcpy(v56, *(const void **)(a2 + 200), v86[0]);
    v58 = _mm_load_si128(&v87);
  }
  v59 = *(_QWORD *)(a1 + 208);
  if ( v59 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    *(__m128i *)v86 = v58;
    qfree(v59);
    v58 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 208) = v56;
  v60 = nullptr;
  *(__m128i *)(a1 + 216) = v58;
  v61 = *(_QWORD *)(a2 + 232);
  v62 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
  if ( v61 )
  {
    v87 = v62;
    v86[0] = 16 * v61;
    v60 = (void *)qalloc_or_throw(16 * v61);
    memcpy(v60, *(const void **)(a2 + 224), v86[0]);
    v62 = _mm_load_si128(&v87);
  }
  v63 = *(_QWORD *)(a1 + 232);
  if ( v63 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    *(__m128i *)v86 = v62;
    qfree(v63);
    v62 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 232) = v60;
  v64 = nullptr;
  *(__m128i *)(a1 + 240) = v62;
  sub_606D0((__int64 *)(a1 + 256), (__int64 *)(a2 + 248));
  v65 = *(_QWORD *)(a2 + 272);
  v66 = _mm_unpacklo_epi64((__m128i)v65, (__m128i)v65);
  if ( v65 )
  {
    *(__m128i *)v86 = v66;
    v77 = 16 * v65;
    v64 = (void *)qalloc_or_throw(16 * v65);
    memcpy(v64, *(const void **)(a2 + 264), v77);
    v66 = _mm_load_si128((const __m128i *)v86);
  }
  v67 = *(_QWORD *)(a1 + 272);
  if ( v67 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    *(__m128i *)v86 = v66;
    qfree(v67);
    v66 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 272) = v64;
  v68 = nullptr;
  *(__m128i *)(a1 + 280) = v66;
  sub_1CFE60((__int64 *)(a1 + 432), a2 + 320);
  v69 = *(_QWORD *)(a2 + 352);
  v70 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)v69);
  if ( v69 )
  {
    v76 = 4 * v69;
    *(__m128i *)v86 = v70;
    v68 = (void *)qalloc_or_throw(4 * v69);
    memcpy(v68, *(const void **)(a2 + 344), v76);
    v70 = _mm_load_si128((const __m128i *)v86);
  }
  v71 = *(_QWORD *)(a1 + 456);
  if ( v71 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    *(__m128i *)v86 = v70;
    qfree(v71);
    v70 = _mm_load_si128((const __m128i *)v86);
  }
  *(_QWORD *)(a1 + 456) = v68;
  *(__m128i *)(a1 + 464) = v70;
  if ( n[0] != a2 + 368 )
  {
    sub_1D3A10((__int64 *)&v88, a2 + 368);
    v72 = v89;
    v73 = *(unsigned __int64 **)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v88;
    v74 = *(_QWORD *)(a1 + 880);
    v88 = v73;
    *(_QWORD *)(a1 + 880) = v72;
    v89 = v74;
    if ( v73 )
    {
      sub_7EA40(&v88);
      if ( v88 )
        qfree(v88);
    }
  }
  *(__m128i *)(a1 + 536) = _mm_loadu_si128((const __m128i *)(a2 + 384));
  *(__m128i *)(a1 + 552) = _mm_loadu_si128((const __m128i *)(a2 + 400));
  *(__m128i *)(a1 + 568) = _mm_loadu_si128((const __m128i *)(a2 + 416));
  *(__m128i *)(a1 + 584) = _mm_loadu_si128((const __m128i *)(a2 + 432));
  *(__m128i *)(a1 + 600) = _mm_loadu_si128((const __m128i *)(a2 + 448));
  *(__m128i *)(a1 + 616) = _mm_loadu_si128((const __m128i *)(a2 + 464));
  *(__m128i *)(a1 + 632) = _mm_loadu_si128((const __m128i *)(a2 + 480));
  *(__m128i *)(a1 + 648) = _mm_loadu_si128((const __m128i *)(a2 + 496));
  *(__m128i *)(a1 + 664) = _mm_loadu_si128((const __m128i *)(a2 + 512));
  *(__m128i *)(a1 + 680) = _mm_loadu_si128((const __m128i *)(a2 + 528));
  *(__m128i *)(a1 + 696) = _mm_loadu_si128((const __m128i *)(a2 + 544));
  *(__m128i *)(a1 + 712) = _mm_loadu_si128((const __m128i *)(a2 + 560));
  return v90 - __readfsqword(0x28u);
}
