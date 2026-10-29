__m128i *__fastcall sub_5E6ED0(__int64 a1, char *a2)
{
  char *v2; // r12
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  size_t v6; // r13
  __int16 v7; // ax
  size_t v8; // r13
  size_t v9; // r13
  size_t v10; // r15
  __int16 v11; // ax
  size_t v12; // r15
  size_t v13; // r15
  int v14; // eax
  size_t v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rbx
  size_t v19; // r14
  __int16 v20; // ax
  size_t v21; // r14
  size_t v22; // r14
  size_t v23; // r14
  __int16 v24; // ax
  size_t v25; // r14
  size_t v26; // r14
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rbx
  size_t v31; // r14
  __int16 v32; // ax
  size_t v33; // r14
  size_t v34; // r14
  size_t v35; // r14
  __int16 v36; // ax
  size_t v37; // r14
  size_t v38; // r14
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rbx
  size_t v43; // r15
  __int16 v44; // ax
  size_t v45; // r15
  size_t v46; // r15
  size_t v47; // r15
  __int16 v48; // ax
  size_t v49; // r15
  size_t v50; // r15
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rbx
  size_t v55; // r15
  __int16 v56; // ax
  size_t v57; // r15
  size_t v58; // r15
  size_t v59; // r13
  __int16 v60; // ax
  size_t v61; // r13
  size_t v62; // r13
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rbx
  size_t v67; // r14
  char v68; // al
  size_t v69; // r14
  size_t v70; // r14
  __m128i *result; // rax
  const __m128i *v72; // roff
  __int64 v73; // rdx
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
  void *v107; // rax

  v2 = a2;
  sub_5E6380(a1, a2);
  v3 = operator new(0xC8u);
  v4 = *((_QWORD *)a2 + 77);
  *(_QWORD *)(v3 + 8) = 0;
  v5 = v3;
  *(_OWORD *)(v3 + 16) = 0;
  v6 = *(_QWORD *)(v4 + 16);
  if ( v6 )
  {
    v74 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 16), a2);
    *(_QWORD *)(v5 + 8) = v74;
    *(_QWORD *)(v5 + 24) = v6;
    a2 = *(char **)(v4 + 8);
    memcpy(v74, a2, v6);
    *(_QWORD *)(v5 + 16) = v6;
  }
  v7 = *(_WORD *)(v4 + 32);
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 32) = v7;
  v8 = *(_QWORD *)(v4 + 48);
  if ( v8 )
  {
    v107 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 48), a2);
    *(_QWORD *)(v5 + 40) = v107;
    *(_QWORD *)(v5 + 56) = v8;
    a2 = *(char **)(v4 + 40);
    memcpy(v107, a2, v8);
    *(_QWORD *)(v5 + 48) = v8;
  }
  *(_QWORD *)(v5 + 64) = 0;
  *(_OWORD *)(v5 + 72) = 0;
  v9 = *(_QWORD *)(v4 + 72);
  if ( v9 )
  {
    v106 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 72), a2);
    *(_QWORD *)(v5 + 64) = v106;
    *(_QWORD *)(v5 + 80) = v9;
    a2 = *(char **)(v4 + 64);
    memcpy(v106, a2, v9);
    *(_QWORD *)(v5 + 72) = v9;
  }
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)v5 = &off_2B07160;
  *(_OWORD *)(v5 + 96) = 0;
  v10 = *(_QWORD *)(v4 + 96);
  if ( v10 )
  {
    v105 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 96), a2);
    *(_QWORD *)(v5 + 88) = v105;
    *(_QWORD *)(v5 + 104) = v10;
    a2 = *(char **)(v4 + 88);
    memcpy(v105, a2, v10);
    *(_QWORD *)(v5 + 96) = v10;
  }
  v11 = *(_WORD *)(v4 + 112);
  *(_QWORD *)(v5 + 120) = 0;
  *(_OWORD *)(v5 + 128) = 0;
  *(_WORD *)(v5 + 112) = v11;
  v12 = *(_QWORD *)(v4 + 128);
  if ( v12 )
  {
    v104 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 128), a2);
    *(_QWORD *)(v5 + 120) = v104;
    *(_QWORD *)(v5 + 136) = v12;
    a2 = *(char **)(v4 + 120);
    memcpy(v104, a2, v12);
    *(_QWORD *)(v5 + 128) = v12;
  }
  *(_QWORD *)(v5 + 144) = 0;
  *(_OWORD *)(v5 + 152) = 0;
  v13 = *(_QWORD *)(v4 + 152);
  if ( v13 )
  {
    v103 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 152), a2);
    *(_QWORD *)(v5 + 144) = v103;
    *(_QWORD *)(v5 + 160) = v13;
    a2 = *(char **)(v4 + 144);
    memcpy(v103, a2, v13);
    *(_QWORD *)(v5 + 152) = v13;
  }
  v14 = *(_DWORD *)(v4 + 168);
  *(_QWORD *)(v5 + 176) = 0;
  *(_OWORD *)(v5 + 184) = 0;
  *(_DWORD *)(v5 + 168) = v14;
  *(_QWORD *)v5 = &off_2B071A8;
  v15 = *(_QWORD *)(v4 + 184);
  if ( v15 )
  {
    v102 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 184), a2);
    *(_QWORD *)(v5 + 176) = v102;
    *(_QWORD *)(v5 + 192) = v15;
    a2 = *(char **)(v4 + 176);
    memcpy(v102, a2, v15);
    *(_QWORD *)(v5 + 184) = v15;
  }
  *(_QWORD *)(a1 + 616) = v5;
  v16 = operator new(0xB0u);
  v17 = *((_QWORD *)v2 + 78);
  *(_QWORD *)(v16 + 8) = 0;
  v18 = v16;
  *(_OWORD *)(v16 + 16) = 0;
  v19 = *(_QWORD *)(v17 + 16);
  if ( v19 )
  {
    v101 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 16), a2);
    *(_QWORD *)(v18 + 8) = v101;
    *(_QWORD *)(v18 + 24) = v19;
    a2 = *(char **)(v17 + 8);
    memcpy(v101, a2, v19);
    *(_QWORD *)(v18 + 16) = v19;
  }
  v20 = *(_WORD *)(v17 + 32);
  *(_QWORD *)(v18 + 40) = 0;
  *(_OWORD *)(v18 + 48) = 0;
  *(_WORD *)(v18 + 32) = v20;
  v21 = *(_QWORD *)(v17 + 48);
  if ( v21 )
  {
    v100 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 48), a2);
    *(_QWORD *)(v18 + 40) = v100;
    *(_QWORD *)(v18 + 56) = v21;
    a2 = *(char **)(v17 + 40);
    memcpy(v100, a2, v21);
    *(_QWORD *)(v18 + 48) = v21;
  }
  *(_QWORD *)(v18 + 64) = 0;
  *(_OWORD *)(v18 + 72) = 0;
  v22 = *(_QWORD *)(v17 + 72);
  if ( v22 )
  {
    v99 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 72), a2);
    *(_QWORD *)(v18 + 64) = v99;
    *(_QWORD *)(v18 + 80) = v22;
    a2 = *(char **)(v17 + 64);
    memcpy(v99, a2, v22);
    *(_QWORD *)(v18 + 72) = v22;
  }
  *(_QWORD *)v18 = &off_2B07160;
  *(_QWORD *)(v18 + 88) = 0;
  *(_OWORD *)(v18 + 96) = 0;
  v23 = *(_QWORD *)(v17 + 96);
  if ( v23 )
  {
    v98 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 96), a2);
    *(_QWORD *)(v18 + 88) = v98;
    *(_QWORD *)(v18 + 104) = v23;
    a2 = *(char **)(v17 + 88);
    memcpy(v98, a2, v23);
    *(_QWORD *)(v18 + 96) = v23;
  }
  v24 = *(_WORD *)(v17 + 112);
  *(_QWORD *)(v18 + 120) = 0;
  *(_OWORD *)(v18 + 128) = 0;
  *(_WORD *)(v18 + 112) = v24;
  v25 = *(_QWORD *)(v17 + 128);
  if ( v25 )
  {
    v97 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 128), a2);
    *(_QWORD *)(v18 + 120) = v97;
    *(_QWORD *)(v18 + 136) = v25;
    a2 = *(char **)(v17 + 120);
    memcpy(v97, a2, v25);
    *(_QWORD *)(v18 + 128) = v25;
  }
  *(_QWORD *)(v18 + 144) = 0;
  *(_OWORD *)(v18 + 152) = 0;
  v26 = *(_QWORD *)(v17 + 152);
  if ( v26 )
  {
    v96 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 152), a2);
    *(_QWORD *)(v18 + 144) = v96;
    *(_QWORD *)(v18 + 160) = v26;
    a2 = *(char **)(v17 + 144);
    memcpy(v96, a2, v26);
    *(_QWORD *)(v18 + 152) = v26;
  }
  *(_DWORD *)(v18 + 168) = *(_DWORD *)(v17 + 168);
  *(_QWORD *)v18 = &off_2B10978;
  v27 = *(_BYTE *)(v17 + 172);
  *(_QWORD *)(a1 + 624) = v18;
  *(_BYTE *)(v18 + 172) = v27;
  v28 = operator new(0xB0u);
  v29 = *((_QWORD *)v2 + 79);
  *(_QWORD *)(v28 + 8) = 0;
  v30 = v28;
  *(_OWORD *)(v28 + 16) = 0;
  v31 = *(_QWORD *)(v29 + 16);
  if ( v31 )
  {
    v95 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 16), a2);
    *(_QWORD *)(v30 + 8) = v95;
    *(_QWORD *)(v30 + 24) = v31;
    a2 = *(char **)(v29 + 8);
    memcpy(v95, a2, v31);
    *(_QWORD *)(v30 + 16) = v31;
  }
  v32 = *(_WORD *)(v29 + 32);
  *(_QWORD *)(v30 + 40) = 0;
  *(_OWORD *)(v30 + 48) = 0;
  *(_WORD *)(v30 + 32) = v32;
  v33 = *(_QWORD *)(v29 + 48);
  if ( v33 )
  {
    v94 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 48), a2);
    *(_QWORD *)(v30 + 40) = v94;
    *(_QWORD *)(v30 + 56) = v33;
    a2 = *(char **)(v29 + 40);
    memcpy(v94, a2, v33);
    *(_QWORD *)(v30 + 48) = v33;
  }
  *(_QWORD *)(v30 + 64) = 0;
  *(_OWORD *)(v30 + 72) = 0;
  v34 = *(_QWORD *)(v29 + 72);
  if ( v34 )
  {
    v93 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 72), a2);
    *(_QWORD *)(v30 + 64) = v93;
    *(_QWORD *)(v30 + 80) = v34;
    a2 = *(char **)(v29 + 64);
    memcpy(v93, a2, v34);
    *(_QWORD *)(v30 + 72) = v34;
  }
  *(_QWORD *)v30 = &off_2B07160;
  *(_QWORD *)(v30 + 88) = 0;
  *(_OWORD *)(v30 + 96) = 0;
  v35 = *(_QWORD *)(v29 + 96);
  if ( v35 )
  {
    v92 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 96), a2);
    *(_QWORD *)(v30 + 88) = v92;
    *(_QWORD *)(v30 + 104) = v35;
    a2 = *(char **)(v29 + 88);
    memcpy(v92, a2, v35);
    *(_QWORD *)(v30 + 96) = v35;
  }
  v36 = *(_WORD *)(v29 + 112);
  *(_QWORD *)(v30 + 120) = 0;
  *(_OWORD *)(v30 + 128) = 0;
  *(_WORD *)(v30 + 112) = v36;
  v37 = *(_QWORD *)(v29 + 128);
  if ( v37 )
  {
    v91 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 128), a2);
    *(_QWORD *)(v30 + 120) = v91;
    *(_QWORD *)(v30 + 136) = v37;
    a2 = *(char **)(v29 + 120);
    memcpy(v91, a2, v37);
    *(_QWORD *)(v30 + 128) = v37;
  }
  *(_QWORD *)(v30 + 144) = 0;
  *(_OWORD *)(v30 + 152) = 0;
  v38 = *(_QWORD *)(v29 + 152);
  if ( v38 )
  {
    v90 = (void *)qalloc_or_throw(*(_QWORD *)(v29 + 152), a2);
    *(_QWORD *)(v30 + 144) = v90;
    *(_QWORD *)(v30 + 160) = v38;
    a2 = *(char **)(v29 + 144);
    memcpy(v90, a2, v38);
    *(_QWORD *)(v30 + 152) = v38;
  }
  *(_DWORD *)(v30 + 168) = *(_DWORD *)(v29 + 168);
  *(_QWORD *)v30 = &off_2B10978;
  v39 = *(_BYTE *)(v29 + 172);
  *(_QWORD *)(a1 + 632) = v30;
  *(_BYTE *)(v30 + 172) = v39;
  *(_DWORD *)(a1 + 640) = *((_DWORD *)v2 + 160);
  v40 = operator new(0xB0u);
  v41 = *((_QWORD *)v2 + 81);
  *(_QWORD *)(v40 + 8) = 0;
  v42 = v40;
  *(_OWORD *)(v40 + 16) = 0;
  v43 = *(_QWORD *)(v41 + 16);
  if ( v43 )
  {
    v89 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 16), a2);
    *(_QWORD *)(v42 + 8) = v89;
    *(_QWORD *)(v42 + 24) = v43;
    a2 = *(char **)(v41 + 8);
    memcpy(v89, a2, v43);
    *(_QWORD *)(v42 + 16) = v43;
  }
  v44 = *(_WORD *)(v41 + 32);
  *(_QWORD *)(v42 + 40) = 0;
  *(_OWORD *)(v42 + 48) = 0;
  *(_WORD *)(v42 + 32) = v44;
  v45 = *(_QWORD *)(v41 + 48);
  if ( v45 )
  {
    v88 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 48), a2);
    *(_QWORD *)(v42 + 40) = v88;
    *(_QWORD *)(v42 + 56) = v45;
    a2 = *(char **)(v41 + 40);
    memcpy(v88, a2, v45);
    *(_QWORD *)(v42 + 48) = v45;
  }
  *(_QWORD *)(v42 + 64) = 0;
  *(_OWORD *)(v42 + 72) = 0;
  v46 = *(_QWORD *)(v41 + 72);
  if ( v46 )
  {
    v87 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 72), a2);
    *(_QWORD *)(v42 + 64) = v87;
    *(_QWORD *)(v42 + 80) = v46;
    a2 = *(char **)(v41 + 64);
    memcpy(v87, a2, v46);
    *(_QWORD *)(v42 + 72) = v46;
  }
  *(_QWORD *)v42 = &off_2B07160;
  *(_QWORD *)(v42 + 88) = 0;
  *(_OWORD *)(v42 + 96) = 0;
  v47 = *(_QWORD *)(v41 + 96);
  if ( v47 )
  {
    v86 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 96), a2);
    *(_QWORD *)(v42 + 88) = v86;
    *(_QWORD *)(v42 + 104) = v47;
    a2 = *(char **)(v41 + 88);
    memcpy(v86, a2, v47);
    *(_QWORD *)(v42 + 96) = v47;
  }
  v48 = *(_WORD *)(v41 + 112);
  *(_QWORD *)(v42 + 120) = 0;
  *(_OWORD *)(v42 + 128) = 0;
  *(_WORD *)(v42 + 112) = v48;
  v49 = *(_QWORD *)(v41 + 128);
  if ( v49 )
  {
    v85 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 128), a2);
    *(_QWORD *)(v42 + 120) = v85;
    *(_QWORD *)(v42 + 136) = v49;
    a2 = *(char **)(v41 + 120);
    memcpy(v85, a2, v49);
    *(_QWORD *)(v42 + 128) = v49;
  }
  *(_QWORD *)(v42 + 144) = 0;
  *(_OWORD *)(v42 + 152) = 0;
  v50 = *(_QWORD *)(v41 + 152);
  if ( v50 )
  {
    v84 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 152), a2);
    *(_QWORD *)(v42 + 144) = v84;
    *(_QWORD *)(v42 + 160) = v50;
    a2 = *(char **)(v41 + 144);
    memcpy(v84, a2, v50);
    *(_QWORD *)(v42 + 152) = v50;
  }
  v51 = *(_DWORD *)(v41 + 168);
  *(_QWORD *)(a1 + 648) = v42;
  *(_DWORD *)(v42 + 168) = v51;
  *(_QWORD *)v42 = &off_2B071F0;
  v52 = operator new(0xB0u);
  v53 = *((_QWORD *)v2 + 82);
  *(_QWORD *)(v52 + 8) = 0;
  v54 = v52;
  *(_OWORD *)(v52 + 16) = 0;
  v55 = *(_QWORD *)(v53 + 16);
  if ( v55 )
  {
    v83 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 16), a2);
    *(_QWORD *)(v54 + 8) = v83;
    *(_QWORD *)(v54 + 24) = v55;
    a2 = *(char **)(v53 + 8);
    memcpy(v83, a2, v55);
    *(_QWORD *)(v54 + 16) = v55;
  }
  v56 = *(_WORD *)(v53 + 32);
  *(_QWORD *)(v54 + 40) = 0;
  *(_OWORD *)(v54 + 48) = 0;
  *(_WORD *)(v54 + 32) = v56;
  v57 = *(_QWORD *)(v53 + 48);
  if ( v57 )
  {
    v82 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 48), a2);
    *(_QWORD *)(v54 + 40) = v82;
    *(_QWORD *)(v54 + 56) = v57;
    a2 = *(char **)(v53 + 40);
    memcpy(v82, a2, v57);
    *(_QWORD *)(v54 + 48) = v57;
  }
  *(_QWORD *)(v54 + 64) = 0;
  *(_OWORD *)(v54 + 72) = 0;
  v58 = *(_QWORD *)(v53 + 72);
  if ( v58 )
  {
    v81 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 72), a2);
    *(_QWORD *)(v54 + 64) = v81;
    *(_QWORD *)(v54 + 80) = v58;
    a2 = *(char **)(v53 + 64);
    memcpy(v81, a2, v58);
    *(_QWORD *)(v54 + 72) = v58;
  }
  *(_QWORD *)v54 = &off_2B07160;
  *(_QWORD *)(v54 + 88) = 0;
  *(_OWORD *)(v54 + 96) = 0;
  v59 = *(_QWORD *)(v53 + 96);
  if ( v59 )
  {
    v80 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 96), a2);
    *(_QWORD *)(v54 + 88) = v80;
    *(_QWORD *)(v54 + 104) = v59;
    a2 = *(char **)(v53 + 88);
    memcpy(v80, a2, v59);
    *(_QWORD *)(v54 + 96) = v59;
  }
  v60 = *(_WORD *)(v53 + 112);
  *(_QWORD *)(v54 + 120) = 0;
  *(_OWORD *)(v54 + 128) = 0;
  *(_WORD *)(v54 + 112) = v60;
  v61 = *(_QWORD *)(v53 + 128);
  if ( v61 )
  {
    v79 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 128), a2);
    *(_QWORD *)(v54 + 120) = v79;
    *(_QWORD *)(v54 + 136) = v61;
    a2 = *(char **)(v53 + 120);
    memcpy(v79, a2, v61);
    *(_QWORD *)(v54 + 128) = v61;
  }
  *(_QWORD *)(v54 + 144) = 0;
  *(_OWORD *)(v54 + 152) = 0;
  v62 = *(_QWORD *)(v53 + 152);
  if ( v62 )
  {
    v78 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 152), a2);
    *(_QWORD *)(v54 + 144) = v78;
    *(_QWORD *)(v54 + 160) = v62;
    a2 = *(char **)(v53 + 144);
    memcpy(v78, a2, v62);
    *(_QWORD *)(v54 + 152) = v62;
  }
  v63 = *(_DWORD *)(v53 + 168);
  *(_QWORD *)(a1 + 656) = v54;
  *(_DWORD *)(v54 + 168) = v63;
  *(_QWORD *)v54 = &off_2B07238;
  v64 = operator new(0x58u);
  v65 = *((_QWORD *)v2 + 83);
  *(_QWORD *)v64 = 0;
  v66 = v64;
  *(_OWORD *)(v64 + 8) = 0;
  v67 = *(_QWORD *)(v65 + 8);
  if ( v67 )
  {
    v77 = (void *)qalloc_or_throw(*(_QWORD *)(v65 + 8), a2);
    *(_QWORD *)v66 = v77;
    *(_QWORD *)(v66 + 16) = v67;
    a2 = *(char **)v65;
    memcpy(v77, *(const void **)v65, v67);
    *(_QWORD *)(v66 + 8) = v67;
  }
  *(_WORD *)(v66 + 24) = *(_WORD *)(v65 + 24);
  *(_BYTE *)(v66 + 26) = *(_BYTE *)(v65 + 26);
  v68 = *(_BYTE *)(v65 + 32);
  *(_QWORD *)(v66 + 40) = 0;
  *(_BYTE *)(v66 + 32) = v68;
  *(_OWORD *)(v66 + 48) = 0;
  v69 = *(_QWORD *)(v65 + 48);
  if ( v69 )
  {
    v76 = (void *)qalloc_or_throw(*(_QWORD *)(v65 + 48), a2);
    *(_QWORD *)(v66 + 40) = v76;
    *(_QWORD *)(v66 + 56) = v69;
    a2 = *(char **)(v65 + 40);
    memcpy(v76, a2, v69);
    *(_QWORD *)(v66 + 48) = v69;
  }
  *(_QWORD *)(v66 + 64) = 0;
  *(_OWORD *)(v66 + 72) = 0;
  v70 = *(_QWORD *)(v65 + 72);
  if ( v70 )
  {
    v75 = (void *)qalloc_or_throw(*(_QWORD *)(v65 + 72), a2);
    *(_QWORD *)(v66 + 64) = v75;
    *(_QWORD *)(v66 + 80) = v70;
    memcpy(v75, *(const void **)(v65 + 64), v70);
    *(_QWORD *)(v66 + 72) = v70;
  }
  *(_QWORD *)(a1 + 664) = v66;
  result = (__m128i *)operator new(0x18u);
  v72 = *((const __m128i **)v2 + 84);
  *result = _mm_loadu_si128(v72);
  v73 = v72[1].m128i_i64[0];
  *(_QWORD *)(a1 + 672) = result;
  result[1].m128i_i64[0] = v73;
  return result;
}

