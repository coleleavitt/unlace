unsigned __int64 __fastcall sub_1D84D0(__int64 a1, char *a2, __m128i *a3, __int64 a4)
{
  __int64 v4; // r14
  char *v5; // r12
  __int64 v7; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rdx
  __m128i si128; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  void *v27; // r14
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdi
  void *v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rdi
  void *v36; // r13
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  const void *v41; // rsi
  unsigned __int64 *v42; // rax
  __int64 v43; // rdx
  void *v44; // r8
  __int64 v45; // rbp
  __int64 v46; // rdi
  void *v47; // rbp
  unsigned __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // rdi
  void *v51; // rbp
  unsigned __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // rdi
  void *v55; // rbp
  unsigned __int64 v56; // rdx
  __m128i v57; // xmm0
  __int64 v58; // rdi
  void *v59; // rbp
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm0
  __int64 v62; // rdi
  void *v63; // rbp
  unsigned __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rdi
  void *v67; // r15
  __int64 v68; // rcx
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __int64 v71; // rdi
  void *v72; // r14
  __int64 v73; // rcx
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // rdi
  __int64 v77; // rsi
  unsigned __int64 *v78; // rax
  __int64 v79; // rdx
  size_t v81; // rbp
  __int64 v82; // rbp
  void *v83; // rax
  void *v84; // rax
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  __int64 v88; // r13
  __int64 v89; // r13
  __int64 v90; // r13
  void *v91; // rax
  __int64 v92; // r13
  void *v93; // rax
  __int64 v94; // r13
  void *v95; // rax
  size_t v96; // r14
  void *v97; // rax
  void *v98; // rax
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  size_t v100[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v101; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v102; // [rsp+30h] [rbp-58h] BYREF
  __int64 v103; // [rsp+38h] [rbp-50h]
  unsigned __int64 v104; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = a2;
  v7 = *(_QWORD *)(a1 + 8);
  v104 = __readfsqword(0x28u);
  a3->m128i_i64[0] = v7;
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
  {
    v98 = (void *)qalloc_or_throw(16 * v9, (__int64)a2, (__int64)a3, a4);
    a2 = *(char **)(a1 + 16);
    v4 = (__int64)v98;
    memcpy(v98, a2, 16 * v9);
  }
  v10 = a3->m128i_i64[1];
  if ( v10 )
  {
    a3[1].m128i_i64[0] = 0;
    qfree(v10);
  }
  a3[1].m128i_i64[0] = v9;
  a3[1].m128i_i64[1] = v9;
  v11 = 0;
  a3->m128i_i64[1] = v4;
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
  v12 = *(_QWORD *)(a1 + 1480);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  if ( v12 )
  {
    *(__m128i *)n = si128;
    v96 = 40 * v12;
    v97 = (void *)qalloc_or_throw(40 * v12, (__int64)a2, v12, a4);
    a2 = *(char **)(a1 + 1472);
    v11 = (__int64)v97;
    memcpy(v97, a2, v96);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v14 = a3[9].m128i_i64[0];
  if ( v14 )
  {
    a3[9].m128i_i64[1] = 0;
    *(__m128i *)n = si128;
    qfree(v14);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  *(__m128i *)((char *)a3 + 152) = si128;
  v15 = 0;
  a3[9].m128i_i64[0] = v11;
  a3[10].m128i_i64[1] = *(_QWORD *)(a1 + 176);
  a3[18].m128i_i32[0] = *(_DWORD *)(a1 + 1184);
  v16 = *(_QWORD *)(a1 + 1200);
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v16 )
  {
    *(__m128i *)n = v17;
    v94 = 16 * v16;
    v95 = (void *)qalloc_or_throw(v94, (__int64)a2, v94, a4);
    a2 = *(char **)(a1 + 1192);
    v15 = (__int64)v95;
    memcpy(v95, a2, v94);
    v17 = _mm_load_si128((const __m128i *)n);
  }
  v18 = a3[18].m128i_i64[1];
  if ( v18 )
  {
    a3[19].m128i_i64[0] = 0;
    *(__m128i *)n = v17;
    qfree(v18);
    v17 = _mm_load_si128((const __m128i *)n);
  }
  a3[18].m128i_i64[1] = v15;
  v19 = 0;
  a3[19] = v17;
  v20 = *(_QWORD *)(a1 + 192);
  v21 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
  if ( v20 )
  {
    *(__m128i *)n = v21;
    v92 = 16 * v20;
    v93 = (void *)qalloc_or_throw(v92, (__int64)a2, v92, a4);
    a2 = *(char **)(a1 + 184);
    v19 = (__int64)v93;
    memcpy(v93, a2, v92);
    v21 = _mm_load_si128((const __m128i *)n);
  }
  v22 = a3[11].m128i_i64[0];
  if ( v22 )
  {
    a3[11].m128i_i64[1] = 0;
    *(__m128i *)n = v21;
    qfree(v22);
    v21 = _mm_load_si128((const __m128i *)n);
  }
  a3[11].m128i_i64[0] = v19;
  v23 = 0;
  *(__m128i *)((char *)a3 + 184) = v21;
  v24 = *(_QWORD *)(a1 + 216);
  v25 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
  if ( v24 )
  {
    *(__m128i *)n = v25;
    v90 = 16 * v24;
    v91 = (void *)qalloc_or_throw(v90, (__int64)a2, v90, a4);
    a2 = *(char **)(a1 + 208);
    v23 = (__int64)v91;
    memcpy(v91, a2, v90);
    v25 = _mm_load_si128((const __m128i *)n);
  }
  v26 = a3[12].m128i_i64[1];
  if ( v26 )
  {
    a3[13].m128i_i64[0] = 0;
    *(__m128i *)n = v25;
    qfree(v26);
    v25 = _mm_load_si128((const __m128i *)n);
  }
  a3[12].m128i_i64[1] = v23;
  v27 = nullptr;
  a3[13] = v25;
  v28 = *(_QWORD *)(a1 + 240);
  v29 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
  if ( v28 )
  {
    *(__m128i *)n = v29;
    v89 = 16 * v28;
    v27 = (void *)qalloc_or_throw(v89, (__int64)a2, v89, a4);
    memcpy(v27, *(const void **)(a1 + 232), v89);
    v29 = _mm_load_si128((const __m128i *)n);
  }
  v30 = a3[14].m128i_i64[0];
  if ( v30 )
  {
    a3[14].m128i_i64[1] = 0;
    *(__m128i *)n = v29;
    qfree(v30);
    v29 = _mm_load_si128((const __m128i *)n);
  }
  a3[14].m128i_i64[0] = (__int64)v27;
  v31 = nullptr;
  *(__m128i *)((char *)a3 + 232) = v29;
  sub_648D0(&a3[15].m128i_i64[1], (__int64 *)(a1 + 256));
  v33 = *(_QWORD *)(a1 + 280);
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
  if ( v33 )
  {
    *(__m128i *)n = v34;
    v88 = 16 * v33;
    v31 = (void *)qalloc_or_throw(v88, a1 + 256, v88, v32);
    memcpy(v31, *(const void **)(a1 + 272), v88);
    v34 = _mm_load_si128((const __m128i *)n);
  }
  v35 = a3[16].m128i_i64[1];
  if ( v35 )
  {
    a3[17].m128i_i64[0] = 0;
    *(__m128i *)n = v34;
    qfree(v35);
    v34 = _mm_load_si128((const __m128i *)n);
  }
  a3[16].m128i_i64[1] = (__int64)v31;
  v36 = nullptr;
  a3[17] = v34;
  sub_1D41E0(a3[20].m128i_i64, a1 + 432, v33, v32);
  v38 = *(_QWORD *)(a1 + 464);
  v39 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
  if ( v38 )
  {
    *(__m128i *)v100 = v39;
    n[0] = 4 * v38;
    v36 = (void *)qalloc_or_throw(n[0], a1 + 432, n[0], v37);
    memcpy(v36, *(const void **)(a1 + 456), n[0]);
    v39 = _mm_load_si128((const __m128i *)v100);
  }
  v40 = a3[21].m128i_i64[1];
  if ( v40 )
  {
    a3[22].m128i_i64[0] = 0;
    *(__m128i *)n = v39;
    qfree(v40);
    v39 = _mm_load_si128((const __m128i *)n);
  }
  v41 = (const void *)(a1 + 872);
  a3[21].m128i_i64[1] = (__int64)v36;
  n[0] = a1 + 872;
  a3[22] = v39;
  if ( (__m128i *)(a1 + 872) != &a3[23] )
  {
    sub_1D82C0((__int64 *)&v102, (__int64)v41);
    v37 = v103;
    v42 = (unsigned __int64 *)a3[23].m128i_i64[0];
    a3[23].m128i_i64[0] = (__int64)v102;
    v43 = a3[23].m128i_i64[1];
    v102 = v42;
    a3[23].m128i_i64[1] = v37;
    v103 = v43;
    if ( v42 )
    {
      sub_82C40(&v102);
      if ( v102 )
        qfree((__int64)v102);
    }
  }
  v44 = nullptr;
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
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v5;
  v45 = *((_QWORD *)v5 + 2);
  if ( v45 )
  {
    v100[0] = 16 * v45;
    v84 = (void *)qalloc_or_throw(16 * v45, (__int64)v41, 16 * v45, v37);
    v41 = *((const void **)v5 + 1);
    v44 = memcpy(v84, v41, v100[0]);
  }
  v46 = *(_QWORD *)(a1 + 16);
  if ( v46 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v100[0] = (size_t)v44;
    qfree(v46);
    v44 = (void *)v100[0];
  }
  *(_QWORD *)(a1 + 24) = v45;
  *(_QWORD *)(a1 + 32) = v45;
  v47 = nullptr;
  *(_QWORD *)(a1 + 16) = v44;
  *(_QWORD *)(a1 + 40) = *((_QWORD *)v5 + 4);
  *(_QWORD *)(a1 + 48) = *((_QWORD *)v5 + 5);
  *(_QWORD *)(a1 + 56) = *((_QWORD *)v5 + 6);
  *(_QWORD *)(a1 + 80) = *((_QWORD *)v5 + 7);
  *(_QWORD *)(a1 + 88) = *((_QWORD *)v5 + 8);
  *(_QWORD *)(a1 + 96) = *((_QWORD *)v5 + 9);
  *(_QWORD *)(a1 + 104) = *((_QWORD *)v5 + 10);
  *(_DWORD *)(a1 + 112) = *((_DWORD *)v5 + 22);
  *(_DWORD *)(a1 + 116) = *((_DWORD *)v5 + 23);
  *(_DWORD *)(a1 + 120) = *((_DWORD *)v5 + 24);
  *(_QWORD *)(a1 + 128) = *((_QWORD *)v5 + 13);
  *(_QWORD *)(a1 + 136) = *((_QWORD *)v5 + 14);
  *(_QWORD *)(a1 + 144) = *((_QWORD *)v5 + 15);
  *(_QWORD *)(a1 + 152) = *((_QWORD *)v5 + 16);
  *(_QWORD *)(a1 + 168) = *((_QWORD *)v5 + 17);
  v48 = *((_QWORD *)v5 + 19);
  v49 = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
  if ( v48 )
  {
    v101 = v49;
    v100[0] = 40 * v48;
    v83 = (void *)qalloc_or_throw(v100[0], (__int64)v41, v100[0], v37);
    v41 = *((const void **)v5 + 18);
    v47 = v83;
    memcpy(v83, v41, v100[0]);
    v49 = _mm_load_si128(&v101);
  }
  v50 = *(_QWORD *)(a1 + 1472);
  if ( v50 )
  {
    *(_QWORD *)(a1 + 1480) = 0;
    *(__m128i *)v100 = v49;
    qfree(v50);
    v49 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 1472) = v47;
  v51 = nullptr;
  *(__m128i *)(a1 + 1480) = v49;
  *(_QWORD *)(a1 + 176) = *((_QWORD *)v5 + 21);
  *(_DWORD *)(a1 + 1184) = *((_DWORD *)v5 + 72);
  v52 = *((_QWORD *)v5 + 38);
  v53 = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v52);
  if ( v52 )
  {
    v101 = v53;
    v100[0] = 16 * v52;
    v87 = (void *)qalloc_or_throw(v100[0], (__int64)v41, v100[0], v37);
    v41 = *((const void **)v5 + 37);
    v51 = v87;
    memcpy(v87, v41, v100[0]);
    v53 = _mm_load_si128(&v101);
  }
  v54 = *(_QWORD *)(a1 + 1192);
  if ( v54 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    *(__m128i *)v100 = v53;
    qfree(v54);
    v53 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 1192) = v51;
  v55 = nullptr;
  *(__m128i *)(a1 + 1200) = v53;
  v56 = *((_QWORD *)v5 + 23);
  v57 = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
  if ( v56 )
  {
    v101 = v57;
    v100[0] = 16 * v56;
    v86 = (void *)qalloc_or_throw(v100[0], (__int64)v41, v100[0], v37);
    v41 = *((const void **)v5 + 22);
    v55 = v86;
    memcpy(v86, v41, v100[0]);
    v57 = _mm_load_si128(&v101);
  }
  v58 = *(_QWORD *)(a1 + 184);
  if ( v58 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    *(__m128i *)v100 = v57;
    qfree(v58);
    v57 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 184) = v55;
  v59 = nullptr;
  *(__m128i *)(a1 + 192) = v57;
  v60 = *((_QWORD *)v5 + 26);
  v61 = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
  if ( v60 )
  {
    v101 = v61;
    v100[0] = 16 * v60;
    v85 = (void *)qalloc_or_throw(v100[0], (__int64)v41, v100[0], v37);
    v41 = *((const void **)v5 + 25);
    v59 = v85;
    memcpy(v85, v41, v100[0]);
    v61 = _mm_load_si128(&v101);
  }
  v62 = *(_QWORD *)(a1 + 208);
  if ( v62 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    *(__m128i *)v100 = v61;
    qfree(v62);
    v61 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 208) = v59;
  v63 = nullptr;
  *(__m128i *)(a1 + 216) = v61;
  v64 = *((_QWORD *)v5 + 29);
  v65 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
  if ( v64 )
  {
    v101 = v65;
    v100[0] = 16 * v64;
    v63 = (void *)qalloc_or_throw(v100[0], (__int64)v41, v100[0], v37);
    memcpy(v63, *((const void **)v5 + 28), v100[0]);
    v65 = _mm_load_si128(&v101);
  }
  v66 = *(_QWORD *)(a1 + 232);
  if ( v66 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    *(__m128i *)v100 = v65;
    qfree(v66);
    v65 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 232) = v63;
  v67 = nullptr;
  *(__m128i *)(a1 + 240) = v65;
  sub_648D0((__int64 *)(a1 + 256), (__int64 *)v5 + 31);
  v69 = *((_QWORD *)v5 + 34);
  v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v69);
  if ( v69 )
  {
    *(__m128i *)v100 = v70;
    v82 = 16 * v69;
    v67 = (void *)qalloc_or_throw(v82, (__int64)(v5 + 248), v82, v68);
    memcpy(v67, *((const void **)v5 + 33), v82);
    v70 = _mm_load_si128((const __m128i *)v100);
  }
  v71 = *(_QWORD *)(a1 + 272);
  if ( v71 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    *(__m128i *)v100 = v70;
    qfree(v71);
    v70 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 272) = v67;
  v72 = nullptr;
  *(__m128i *)(a1 + 280) = v70;
  sub_1D41E0((__int64 *)(a1 + 432), (__int64)(v5 + 320), v69, v68);
  v74 = *((_QWORD *)v5 + 44);
  v75 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v74, (__m128i)(unsigned __int64)v74);
  if ( v74 )
  {
    v81 = 4 * v74;
    *(__m128i *)v100 = v75;
    v72 = (void *)qalloc_or_throw(4 * v74, (__int64)(v5 + 320), v74, v73);
    memcpy(v72, *((const void **)v5 + 43), v81);
    v75 = _mm_load_si128((const __m128i *)v100);
  }
  v76 = *(_QWORD *)(a1 + 456);
  if ( v76 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    *(__m128i *)v100 = v75;
    qfree(v76);
    v75 = _mm_load_si128((const __m128i *)v100);
  }
  *(_QWORD *)(a1 + 456) = v72;
  *(__m128i *)(a1 + 464) = v75;
  if ( (char *)n[0] != v5 + 368 )
  {
    sub_1D82C0((__int64 *)&v102, (__int64)(v5 + 368));
    v77 = v103;
    v78 = *(unsigned __int64 **)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v102;
    v79 = *(_QWORD *)(a1 + 880);
    v102 = v78;
    *(_QWORD *)(a1 + 880) = v77;
    v103 = v79;
    if ( v78 )
    {
      sub_82C40(&v102);
      if ( v102 )
        qfree((__int64)v102);
    }
  }
  *(__m128i *)(a1 + 536) = _mm_loadu_si128((const __m128i *)v5 + 24);
  *(__m128i *)(a1 + 552) = _mm_loadu_si128((const __m128i *)v5 + 25);
  *(__m128i *)(a1 + 568) = _mm_loadu_si128((const __m128i *)v5 + 26);
  *(__m128i *)(a1 + 584) = _mm_loadu_si128((const __m128i *)v5 + 27);
  *(__m128i *)(a1 + 600) = _mm_loadu_si128((const __m128i *)v5 + 28);
  *(__m128i *)(a1 + 616) = _mm_loadu_si128((const __m128i *)v5 + 29);
  *(__m128i *)(a1 + 632) = _mm_loadu_si128((const __m128i *)v5 + 30);
  *(__m128i *)(a1 + 648) = _mm_loadu_si128((const __m128i *)v5 + 31);
  *(__m128i *)(a1 + 664) = _mm_loadu_si128((const __m128i *)v5 + 32);
  *(__m128i *)(a1 + 680) = _mm_loadu_si128((const __m128i *)v5 + 33);
  *(__m128i *)(a1 + 696) = _mm_loadu_si128((const __m128i *)v5 + 34);
  *(__m128i *)(a1 + 712) = _mm_loadu_si128((const __m128i *)v5 + 35);
  return v104 - __readfsqword(0x28u);
}
