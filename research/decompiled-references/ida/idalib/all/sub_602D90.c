__m128i *__fastcall sub_602D90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  size_t v5; // r13
  __int16 v6; // ax
  size_t v7; // r13
  size_t v8; // r13
  size_t v9; // r15
  __int16 v10; // ax
  size_t v11; // r15
  size_t v12; // r15
  int v13; // eax
  size_t v14; // r15
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  size_t v18; // r14
  __int16 v19; // ax
  size_t v20; // r14
  size_t v21; // r14
  size_t v22; // r14
  __int16 v23; // ax
  size_t v24; // r14
  size_t v25; // r14
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rbx
  size_t v30; // r14
  __int16 v31; // ax
  size_t v32; // r14
  size_t v33; // r14
  size_t v34; // r14
  __int16 v35; // ax
  size_t v36; // r14
  size_t v37; // r14
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rbx
  size_t v42; // r15
  __int16 v43; // ax
  size_t v44; // r15
  size_t v45; // r15
  size_t v46; // r15
  __int16 v47; // ax
  size_t v48; // r15
  size_t v49; // r15
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rbx
  size_t v54; // r15
  __int16 v55; // ax
  size_t v56; // r15
  size_t v57; // r15
  size_t v58; // r13
  __int16 v59; // ax
  size_t v60; // r13
  size_t v61; // r13
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rbx
  size_t v66; // r14
  char v67; // al
  size_t v68; // r14
  size_t v69; // r14
  __m128i *result; // rax
  const __m128i *v71; // roff
  __int64 v72; // rdx
  void *v73; // rax
  void *v74; // rax
  void *v75; // rax
  void *v76; // rax
  void *v77; // rax
  void *v78; // rax
  void *v79; // rax
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  void *v83; // rax
  void *v84; // rax
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  void *v88; // rax
  void *v89; // rax
  void *v90; // rax
  void *v91; // rax
  void *v92; // rax
  void *v93; // rax
  void *v94; // rax
  void *v95; // rax
  void *v96; // rax
  void *v97; // rax
  void *v98; // rax
  void *v99; // rax
  void *v100; // rax
  void *v101; // rax
  void *v102; // rax
  void *v103; // rax
  void *v104; // rax
  void *v105; // rax
  void *v106; // rax

  sub_602240(a1, a2);
  v2 = operator new(0xC8u);
  v3 = *(_QWORD *)(a2 + 624);
  *(_QWORD *)(v2 + 8) = 0;
  v4 = v2;
  *(_OWORD *)(v2 + 16) = 0;
  v5 = *(_QWORD *)(v3 + 16);
  if ( v5 )
  {
    v73 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 16));
    *(_QWORD *)(v4 + 8) = v73;
    *(_QWORD *)(v4 + 24) = v5;
    memcpy(v73, *(const void **)(v3 + 8), v5);
    *(_QWORD *)(v4 + 16) = v5;
  }
  v6 = *(_WORD *)(v3 + 32);
  *(_QWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_WORD *)(v4 + 32) = v6;
  v7 = *(_QWORD *)(v3 + 48);
  if ( v7 )
  {
    v106 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 48));
    *(_QWORD *)(v4 + 40) = v106;
    *(_QWORD *)(v4 + 56) = v7;
    memcpy(v106, *(const void **)(v3 + 40), v7);
    *(_QWORD *)(v4 + 48) = v7;
  }
  *(_QWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  v8 = *(_QWORD *)(v3 + 72);
  if ( v8 )
  {
    v105 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 72));
    *(_QWORD *)(v4 + 64) = v105;
    *(_QWORD *)(v4 + 80) = v8;
    memcpy(v105, *(const void **)(v3 + 64), v8);
    *(_QWORD *)(v4 + 72) = v8;
  }
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)v4 = &off_2B31120;
  *(_OWORD *)(v4 + 96) = 0;
  v9 = *(_QWORD *)(v3 + 96);
  if ( v9 )
  {
    v104 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 96));
    *(_QWORD *)(v4 + 88) = v104;
    *(_QWORD *)(v4 + 104) = v9;
    memcpy(v104, *(const void **)(v3 + 88), v9);
    *(_QWORD *)(v4 + 96) = v9;
  }
  v10 = *(_WORD *)(v3 + 112);
  *(_QWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_WORD *)(v4 + 112) = v10;
  v11 = *(_QWORD *)(v3 + 128);
  if ( v11 )
  {
    v103 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 128));
    *(_QWORD *)(v4 + 120) = v103;
    *(_QWORD *)(v4 + 136) = v11;
    memcpy(v103, *(const void **)(v3 + 120), v11);
    *(_QWORD *)(v4 + 128) = v11;
  }
  *(_QWORD *)(v4 + 144) = 0;
  *(_OWORD *)(v4 + 152) = 0;
  v12 = *(_QWORD *)(v3 + 152);
  if ( v12 )
  {
    v102 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 152));
    *(_QWORD *)(v4 + 144) = v102;
    *(_QWORD *)(v4 + 160) = v12;
    memcpy(v102, *(const void **)(v3 + 144), v12);
    *(_QWORD *)(v4 + 152) = v12;
  }
  v13 = *(_DWORD *)(v3 + 168);
  *(_QWORD *)(v4 + 176) = 0;
  *(_OWORD *)(v4 + 184) = 0;
  *(_DWORD *)(v4 + 168) = v13;
  *(_QWORD *)v4 = &off_2B31168;
  v14 = *(_QWORD *)(v3 + 184);
  if ( v14 )
  {
    v101 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 184));
    *(_QWORD *)(v4 + 176) = v101;
    *(_QWORD *)(v4 + 192) = v14;
    memcpy(v101, *(const void **)(v3 + 176), v14);
    *(_QWORD *)(v4 + 184) = v14;
  }
  *(_QWORD *)(a1 + 624) = v4;
  v15 = operator new(0xB0u);
  v16 = *(_QWORD *)(a2 + 632);
  *(_QWORD *)(v15 + 8) = 0;
  v17 = v15;
  *(_OWORD *)(v15 + 16) = 0;
  v18 = *(_QWORD *)(v16 + 16);
  if ( v18 )
  {
    v100 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 16));
    *(_QWORD *)(v17 + 8) = v100;
    *(_QWORD *)(v17 + 24) = v18;
    memcpy(v100, *(const void **)(v16 + 8), v18);
    *(_QWORD *)(v17 + 16) = v18;
  }
  v19 = *(_WORD *)(v16 + 32);
  *(_QWORD *)(v17 + 40) = 0;
  *(_OWORD *)(v17 + 48) = 0;
  *(_WORD *)(v17 + 32) = v19;
  v20 = *(_QWORD *)(v16 + 48);
  if ( v20 )
  {
    v99 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 48));
    *(_QWORD *)(v17 + 40) = v99;
    *(_QWORD *)(v17 + 56) = v20;
    memcpy(v99, *(const void **)(v16 + 40), v20);
    *(_QWORD *)(v17 + 48) = v20;
  }
  *(_QWORD *)(v17 + 64) = 0;
  *(_OWORD *)(v17 + 72) = 0;
  v21 = *(_QWORD *)(v16 + 72);
  if ( v21 )
  {
    v98 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 72));
    *(_QWORD *)(v17 + 64) = v98;
    *(_QWORD *)(v17 + 80) = v21;
    memcpy(v98, *(const void **)(v16 + 64), v21);
    *(_QWORD *)(v17 + 72) = v21;
  }
  *(_QWORD *)v17 = &off_2B31120;
  *(_QWORD *)(v17 + 88) = 0;
  *(_OWORD *)(v17 + 96) = 0;
  v22 = *(_QWORD *)(v16 + 96);
  if ( v22 )
  {
    v97 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 96));
    *(_QWORD *)(v17 + 88) = v97;
    *(_QWORD *)(v17 + 104) = v22;
    memcpy(v97, *(const void **)(v16 + 88), v22);
    *(_QWORD *)(v17 + 96) = v22;
  }
  v23 = *(_WORD *)(v16 + 112);
  *(_QWORD *)(v17 + 120) = 0;
  *(_OWORD *)(v17 + 128) = 0;
  *(_WORD *)(v17 + 112) = v23;
  v24 = *(_QWORD *)(v16 + 128);
  if ( v24 )
  {
    v96 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 128));
    *(_QWORD *)(v17 + 120) = v96;
    *(_QWORD *)(v17 + 136) = v24;
    memcpy(v96, *(const void **)(v16 + 120), v24);
    *(_QWORD *)(v17 + 128) = v24;
  }
  *(_QWORD *)(v17 + 144) = 0;
  *(_OWORD *)(v17 + 152) = 0;
  v25 = *(_QWORD *)(v16 + 152);
  if ( v25 )
  {
    v95 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 152));
    *(_QWORD *)(v17 + 144) = v95;
    *(_QWORD *)(v17 + 160) = v25;
    memcpy(v95, *(const void **)(v16 + 144), v25);
    *(_QWORD *)(v17 + 152) = v25;
  }
  *(_DWORD *)(v17 + 168) = *(_DWORD *)(v16 + 168);
  *(_QWORD *)v17 = &off_2B3A918;
  v26 = *(_BYTE *)(v16 + 172);
  *(_QWORD *)(a1 + 632) = v17;
  *(_BYTE *)(v17 + 172) = v26;
  v27 = operator new(0xB0u);
  v28 = *(_QWORD *)(a2 + 640);
  *(_QWORD *)(v27 + 8) = 0;
  v29 = v27;
  *(_OWORD *)(v27 + 16) = 0;
  v30 = *(_QWORD *)(v28 + 16);
  if ( v30 )
  {
    v94 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 16));
    *(_QWORD *)(v29 + 8) = v94;
    *(_QWORD *)(v29 + 24) = v30;
    memcpy(v94, *(const void **)(v28 + 8), v30);
    *(_QWORD *)(v29 + 16) = v30;
  }
  v31 = *(_WORD *)(v28 + 32);
  *(_QWORD *)(v29 + 40) = 0;
  *(_OWORD *)(v29 + 48) = 0;
  *(_WORD *)(v29 + 32) = v31;
  v32 = *(_QWORD *)(v28 + 48);
  if ( v32 )
  {
    v93 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 48));
    *(_QWORD *)(v29 + 40) = v93;
    *(_QWORD *)(v29 + 56) = v32;
    memcpy(v93, *(const void **)(v28 + 40), v32);
    *(_QWORD *)(v29 + 48) = v32;
  }
  *(_QWORD *)(v29 + 64) = 0;
  *(_OWORD *)(v29 + 72) = 0;
  v33 = *(_QWORD *)(v28 + 72);
  if ( v33 )
  {
    v92 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 72));
    *(_QWORD *)(v29 + 64) = v92;
    *(_QWORD *)(v29 + 80) = v33;
    memcpy(v92, *(const void **)(v28 + 64), v33);
    *(_QWORD *)(v29 + 72) = v33;
  }
  *(_QWORD *)v29 = &off_2B31120;
  *(_QWORD *)(v29 + 88) = 0;
  *(_OWORD *)(v29 + 96) = 0;
  v34 = *(_QWORD *)(v28 + 96);
  if ( v34 )
  {
    v91 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 96));
    *(_QWORD *)(v29 + 88) = v91;
    *(_QWORD *)(v29 + 104) = v34;
    memcpy(v91, *(const void **)(v28 + 88), v34);
    *(_QWORD *)(v29 + 96) = v34;
  }
  v35 = *(_WORD *)(v28 + 112);
  *(_QWORD *)(v29 + 120) = 0;
  *(_OWORD *)(v29 + 128) = 0;
  *(_WORD *)(v29 + 112) = v35;
  v36 = *(_QWORD *)(v28 + 128);
  if ( v36 )
  {
    v90 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 128));
    *(_QWORD *)(v29 + 120) = v90;
    *(_QWORD *)(v29 + 136) = v36;
    memcpy(v90, *(const void **)(v28 + 120), v36);
    *(_QWORD *)(v29 + 128) = v36;
  }
  *(_QWORD *)(v29 + 144) = 0;
  *(_OWORD *)(v29 + 152) = 0;
  v37 = *(_QWORD *)(v28 + 152);
  if ( v37 )
  {
    v89 = (void *)qalloc_or_throw(*(_QWORD *)(v28 + 152));
    *(_QWORD *)(v29 + 144) = v89;
    *(_QWORD *)(v29 + 160) = v37;
    memcpy(v89, *(const void **)(v28 + 144), v37);
    *(_QWORD *)(v29 + 152) = v37;
  }
  *(_DWORD *)(v29 + 168) = *(_DWORD *)(v28 + 168);
  *(_QWORD *)v29 = &off_2B3A918;
  v38 = *(_BYTE *)(v28 + 172);
  *(_QWORD *)(a1 + 640) = v29;
  *(_BYTE *)(v29 + 172) = v38;
  *(_DWORD *)(a1 + 648) = *(_DWORD *)(a2 + 648);
  v39 = operator new(0xB0u);
  v40 = *(_QWORD *)(a2 + 656);
  *(_QWORD *)(v39 + 8) = 0;
  v41 = v39;
  *(_OWORD *)(v39 + 16) = 0;
  v42 = *(_QWORD *)(v40 + 16);
  if ( v42 )
  {
    v88 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 16));
    *(_QWORD *)(v41 + 8) = v88;
    *(_QWORD *)(v41 + 24) = v42;
    memcpy(v88, *(const void **)(v40 + 8), v42);
    *(_QWORD *)(v41 + 16) = v42;
  }
  v43 = *(_WORD *)(v40 + 32);
  *(_QWORD *)(v41 + 40) = 0;
  *(_OWORD *)(v41 + 48) = 0;
  *(_WORD *)(v41 + 32) = v43;
  v44 = *(_QWORD *)(v40 + 48);
  if ( v44 )
  {
    v87 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 48));
    *(_QWORD *)(v41 + 40) = v87;
    *(_QWORD *)(v41 + 56) = v44;
    memcpy(v87, *(const void **)(v40 + 40), v44);
    *(_QWORD *)(v41 + 48) = v44;
  }
  *(_QWORD *)(v41 + 64) = 0;
  *(_OWORD *)(v41 + 72) = 0;
  v45 = *(_QWORD *)(v40 + 72);
  if ( v45 )
  {
    v86 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 72));
    *(_QWORD *)(v41 + 64) = v86;
    *(_QWORD *)(v41 + 80) = v45;
    memcpy(v86, *(const void **)(v40 + 64), v45);
    *(_QWORD *)(v41 + 72) = v45;
  }
  *(_QWORD *)v41 = &off_2B31120;
  *(_QWORD *)(v41 + 88) = 0;
  *(_OWORD *)(v41 + 96) = 0;
  v46 = *(_QWORD *)(v40 + 96);
  if ( v46 )
  {
    v85 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 96));
    *(_QWORD *)(v41 + 88) = v85;
    *(_QWORD *)(v41 + 104) = v46;
    memcpy(v85, *(const void **)(v40 + 88), v46);
    *(_QWORD *)(v41 + 96) = v46;
  }
  v47 = *(_WORD *)(v40 + 112);
  *(_QWORD *)(v41 + 120) = 0;
  *(_OWORD *)(v41 + 128) = 0;
  *(_WORD *)(v41 + 112) = v47;
  v48 = *(_QWORD *)(v40 + 128);
  if ( v48 )
  {
    v84 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 128));
    *(_QWORD *)(v41 + 120) = v84;
    *(_QWORD *)(v41 + 136) = v48;
    memcpy(v84, *(const void **)(v40 + 120), v48);
    *(_QWORD *)(v41 + 128) = v48;
  }
  *(_QWORD *)(v41 + 144) = 0;
  *(_OWORD *)(v41 + 152) = 0;
  v49 = *(_QWORD *)(v40 + 152);
  if ( v49 )
  {
    v83 = (void *)qalloc_or_throw(*(_QWORD *)(v40 + 152));
    *(_QWORD *)(v41 + 144) = v83;
    *(_QWORD *)(v41 + 160) = v49;
    memcpy(v83, *(const void **)(v40 + 144), v49);
    *(_QWORD *)(v41 + 152) = v49;
  }
  v50 = *(_DWORD *)(v40 + 168);
  *(_QWORD *)(a1 + 656) = v41;
  *(_DWORD *)(v41 + 168) = v50;
  *(_QWORD *)v41 = &off_2B311B0;
  v51 = operator new(0xB0u);
  v52 = *(_QWORD *)(a2 + 664);
  *(_QWORD *)(v51 + 8) = 0;
  v53 = v51;
  *(_OWORD *)(v51 + 16) = 0;
  v54 = *(_QWORD *)(v52 + 16);
  if ( v54 )
  {
    v82 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 16));
    *(_QWORD *)(v53 + 8) = v82;
    *(_QWORD *)(v53 + 24) = v54;
    memcpy(v82, *(const void **)(v52 + 8), v54);
    *(_QWORD *)(v53 + 16) = v54;
  }
  v55 = *(_WORD *)(v52 + 32);
  *(_QWORD *)(v53 + 40) = 0;
  *(_OWORD *)(v53 + 48) = 0;
  *(_WORD *)(v53 + 32) = v55;
  v56 = *(_QWORD *)(v52 + 48);
  if ( v56 )
  {
    v81 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 48));
    *(_QWORD *)(v53 + 40) = v81;
    *(_QWORD *)(v53 + 56) = v56;
    memcpy(v81, *(const void **)(v52 + 40), v56);
    *(_QWORD *)(v53 + 48) = v56;
  }
  *(_QWORD *)(v53 + 64) = 0;
  *(_OWORD *)(v53 + 72) = 0;
  v57 = *(_QWORD *)(v52 + 72);
  if ( v57 )
  {
    v80 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 72));
    *(_QWORD *)(v53 + 64) = v80;
    *(_QWORD *)(v53 + 80) = v57;
    memcpy(v80, *(const void **)(v52 + 64), v57);
    *(_QWORD *)(v53 + 72) = v57;
  }
  *(_QWORD *)v53 = &off_2B31120;
  *(_QWORD *)(v53 + 88) = 0;
  *(_OWORD *)(v53 + 96) = 0;
  v58 = *(_QWORD *)(v52 + 96);
  if ( v58 )
  {
    v79 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 96));
    *(_QWORD *)(v53 + 88) = v79;
    *(_QWORD *)(v53 + 104) = v58;
    memcpy(v79, *(const void **)(v52 + 88), v58);
    *(_QWORD *)(v53 + 96) = v58;
  }
  v59 = *(_WORD *)(v52 + 112);
  *(_QWORD *)(v53 + 120) = 0;
  *(_OWORD *)(v53 + 128) = 0;
  *(_WORD *)(v53 + 112) = v59;
  v60 = *(_QWORD *)(v52 + 128);
  if ( v60 )
  {
    v78 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 128));
    *(_QWORD *)(v53 + 120) = v78;
    *(_QWORD *)(v53 + 136) = v60;
    memcpy(v78, *(const void **)(v52 + 120), v60);
    *(_QWORD *)(v53 + 128) = v60;
  }
  *(_QWORD *)(v53 + 144) = 0;
  *(_OWORD *)(v53 + 152) = 0;
  v61 = *(_QWORD *)(v52 + 152);
  if ( v61 )
  {
    v77 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 152));
    *(_QWORD *)(v53 + 144) = v77;
    *(_QWORD *)(v53 + 160) = v61;
    memcpy(v77, *(const void **)(v52 + 144), v61);
    *(_QWORD *)(v53 + 152) = v61;
  }
  v62 = *(_DWORD *)(v52 + 168);
  *(_QWORD *)(a1 + 664) = v53;
  *(_DWORD *)(v53 + 168) = v62;
  *(_QWORD *)v53 = &off_2B311F8;
  v63 = operator new(0x58u);
  v64 = *(_QWORD *)(a2 + 672);
  *(_QWORD *)v63 = 0;
  v65 = v63;
  *(_OWORD *)(v63 + 8) = 0;
  v66 = *(_QWORD *)(v64 + 8);
  if ( v66 )
  {
    v76 = (void *)qalloc_or_throw(*(_QWORD *)(v64 + 8));
    *(_QWORD *)v65 = v76;
    *(_QWORD *)(v65 + 16) = v66;
    memcpy(v76, *(const void **)v64, v66);
    *(_QWORD *)(v65 + 8) = v66;
  }
  *(_WORD *)(v65 + 24) = *(_WORD *)(v64 + 24);
  *(_BYTE *)(v65 + 26) = *(_BYTE *)(v64 + 26);
  v67 = *(_BYTE *)(v64 + 32);
  *(_QWORD *)(v65 + 40) = 0;
  *(_BYTE *)(v65 + 32) = v67;
  *(_OWORD *)(v65 + 48) = 0;
  v68 = *(_QWORD *)(v64 + 48);
  if ( v68 )
  {
    v75 = (void *)qalloc_or_throw(*(_QWORD *)(v64 + 48));
    *(_QWORD *)(v65 + 40) = v75;
    *(_QWORD *)(v65 + 56) = v68;
    memcpy(v75, *(const void **)(v64 + 40), v68);
    *(_QWORD *)(v65 + 48) = v68;
  }
  *(_QWORD *)(v65 + 64) = 0;
  *(_OWORD *)(v65 + 72) = 0;
  v69 = *(_QWORD *)(v64 + 72);
  if ( v69 )
  {
    v74 = (void *)qalloc_or_throw(*(_QWORD *)(v64 + 72));
    *(_QWORD *)(v65 + 64) = v74;
    *(_QWORD *)(v65 + 80) = v69;
    memcpy(v74, *(const void **)(v64 + 64), v69);
    *(_QWORD *)(v65 + 72) = v69;
  }
  *(_QWORD *)(a1 + 672) = v65;
  result = (__m128i *)operator new(0x18u);
  v71 = *(const __m128i **)(a2 + 680);
  *result = _mm_loadu_si128(v71);
  v72 = v71[1].m128i_i64[0];
  *(_QWORD *)(a1 + 680) = result;
  result[1].m128i_i64[0] = v72;
  return result;
}
