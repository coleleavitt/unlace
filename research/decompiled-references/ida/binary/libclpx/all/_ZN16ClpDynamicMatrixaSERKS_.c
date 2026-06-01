__int64 *__fastcall ClpDynamicMatrix::operator=(__int64 *a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // xmm0_8
  const void *v22; // r13
  int v23; // eax
  unsigned __int64 v24; // r12
  void *v25; // rax
  void *v26; // rax
  __int64 v27; // rcx
  const void *v28; // r13
  size_t v29; // r12
  void *v30; // rax
  void *v31; // rax
  __int64 v32; // rcx
  const void *v33; // r13
  size_t v34; // r12
  void *v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(ClpPackedMatrix *__hidden); // rax
  __int64 v39; // rax
  int v40; // eax
  const void *v41; // r13
  int v42; // r12d
  unsigned __int64 v43; // r12
  void *v44; // rax
  void *v45; // rcx
  const void *v46; // r13
  unsigned __int64 v47; // rax
  size_t v48; // r12
  void *v49; // rax
  void *v50; // rcx
  const void *v51; // r13
  size_t v52; // r12
  void *v53; // rax
  void *v54; // rcx
  const void *v55; // r13
  int v56; // r12d
  void *v57; // rax
  void *v58; // rcx
  __int64 v59; // rdx
  int v60; // r12d
  __int128 v61; // xmm0
  unsigned __int64 v62; // rcx
  const void *v63; // r13
  __int128 v64; // xmm1
  unsigned __int64 v65; // r12
  void *v66; // rax
  void *v67; // rax
  __int64 v68; // r8
  const void *v69; // r13
  size_t v70; // r12
  void *v71; // rax
  void *v72; // rax
  __int64 v73; // r8
  const void *v74; // r13
  int v75; // r12d
  unsigned __int64 v76; // r12
  void *v77; // rax
  void *v78; // rcx
  const void *v79; // r13
  unsigned __int64 v80; // rdx
  size_t v81; // r12
  void *v82; // rax
  void *v83; // rax
  __int64 v84; // rcx
  const void *v85; // r13
  size_t v86; // r12
  void *v87; // rax
  void *v88; // rcx
  const void *v89; // r13
  unsigned __int64 v90; // r12
  unsigned __int64 v91; // r12
  void *v92; // rax
  void *v93; // rcx
  const void *v94; // r13
  int v95; // r12d
  unsigned __int64 v96; // r12
  void *v97; // rax
  void *v98; // rcx
  const void *v99; // r13
  unsigned __int64 v100; // rdx
  size_t v101; // r12
  void *v102; // rax
  void *v103; // rax
  __int64 v104; // rcx
  const void *v105; // r13
  size_t v106; // r12
  void *v107; // rax
  void *v108; // rax
  __int64 v109; // rcx
  const void *v110; // r12
  int v111; // edx
  size_t v112; // rbp
  void *v113; // rax
  void *v114; // rcx

  if ( a1 == (__int64 *)a2 )
    return a1;
  ClpPackedMatrix::operator=();
  v3 = (void *)a1[21];
  if ( v3 )
    operator delete[](v3);
  v4 = (void *)a1[22];
  if ( v4 )
    operator delete[](v4);
  v5 = (void *)a1[23];
  if ( v5 )
    operator delete[](v5);
  v6 = (void *)a1[24];
  if ( v6 )
    operator delete[](v6);
  v7 = (void *)a1[27];
  if ( v7 )
    operator delete[](v7);
  v8 = (void *)a1[28];
  if ( v8 )
    operator delete[](v8);
  v9 = (void *)a1[29];
  if ( v9 )
    operator delete[](v9);
  v10 = (void *)a1[39];
  if ( v10 )
    operator delete[](v10);
  v11 = (void *)a1[40];
  if ( v11 )
    operator delete[](v11);
  v12 = (void *)a1[41];
  if ( v12 )
    operator delete[](v12);
  v13 = (void *)a1[42];
  if ( v13 )
    operator delete[](v13);
  v14 = (void *)a1[43];
  if ( v14 )
    operator delete[](v14);
  v15 = (void *)a1[44];
  if ( v15 )
    operator delete[](v15);
  v16 = (void *)a1[45];
  if ( v16 )
    operator delete[](v16);
  v17 = (void *)a1[46];
  if ( v17 )
    operator delete[](v17);
  v18 = (void *)a1[47];
  if ( v18 )
    operator delete[](v18);
  v19 = (void *)a1[48];
  if ( v19 )
    operator delete[](v19);
  v20 = *(int *)(a2 + 200);
  v21 = *(_QWORD *)(a2 + 208);
  v22 = *(const void **)(a2 + 168);
  *((_DWORD *)a1 + 51) = *(_DWORD *)(a2 + 204);
  a1[26] = v21;
  v23 = *(_DWORD *)(a2 + 260);
  *((_DWORD *)a1 + 50) = v20;
  *(__m128i *)(a1 + 31) = _mm_loadu_si128((const __m128i *)(a2 + 248));
  *((_DWORD *)a1 + 66) = *(_DWORD *)(a2 + 264);
  *((_DWORD *)a1 + 67) = *(_DWORD *)(a2 + 268);
  if ( v22 )
  {
    if ( (unsigned __int64)v23 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v24 = 4LL * v23;
    v25 = (void *)operator new[](v24);
    v26 = memcpy(v25, v22, v24);
    v20 = *((int *)a1 + 50);
    v27 = (__int64)v26;
  }
  else
  {
    v27 = 0;
  }
  v28 = *(const void **)(a2 + 176);
  a1[21] = v27;
  if ( v28 )
  {
    if ( v20 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v29 = 4 * v20;
    v30 = (void *)operator new[](4 * v20);
    v31 = memcpy(v30, v28, v29);
    v20 = *((int *)a1 + 50);
    v32 = (__int64)v31;
  }
  else
  {
    v32 = 0;
  }
  v33 = *(const void **)(a2 + 184);
  a1[22] = v32;
  if ( v33 )
  {
    if ( v20 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v34 = 4 * v20;
    v35 = (void *)operator new[](4 * v20);
    v36 = memcpy(v35, v33, v34);
  }
  else
  {
    v36 = nullptr;
  }
  v37 = *a1;
  a1[23] = (__int64)v36;
  v38 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v37 + 32);
  if ( v38 == ClpPackedMatrix::getNumRows )
  {
    v39 = a1[11];
    if ( *(_BYTE *)(v39 + 8) )
      v40 = *(_DWORD *)(v39 + 68);
    else
      v40 = *(_DWORD *)(v39 + 64);
  }
  else
  {
    v40 = v38((ClpPackedMatrix *)a1);
  }
  v41 = *(const void **)(a2 + 192);
  v42 = v40 + 1 - *((_DWORD *)a1 + 66);
  if ( v41 )
  {
    if ( (unsigned __int64)v42 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v43 = 4LL * v42;
    v44 = (void *)operator new[](v43);
    v45 = memcpy(v44, v41, v43);
  }
  else
  {
    v45 = nullptr;
  }
  v46 = *(const void **)(a2 + 216);
  a1[24] = (__int64)v45;
  v47 = *((int *)a1 + 50);
  if ( v46 )
  {
    if ( v47 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_109;
    v48 = 8 * v47;
    v49 = (void *)operator new[](8 * v47);
    v50 = memcpy(v49, v46, v48);
    v47 = *((int *)a1 + 50);
  }
  else
  {
    v50 = nullptr;
  }
  v51 = *(const void **)(a2 + 224);
  a1[27] = (__int64)v50;
  if ( v51 )
  {
    if ( v47 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_109;
    v52 = 8 * v47;
    v53 = (void *)operator new[](8 * v47);
    v54 = memcpy(v53, v51, v52);
    LODWORD(v47) = *((_DWORD *)a1 + 50);
  }
  else
  {
    v54 = nullptr;
  }
  v55 = *(const void **)(a2 + 232);
  a1[28] = (__int64)v54;
  v56 = 2 * v47 + 16;
  if ( v55 )
  {
    v57 = (void *)operator new[](v56);
    v58 = memcpy(v57, v55, v56);
    LODWORD(v47) = *((_DWORD *)a1 + 50);
  }
  else
  {
    v58 = nullptr;
  }
  v59 = *(_QWORD *)(a2 + 240);
  a1[29] = (__int64)v58;
  v60 = v47 + 1;
  v61 = *(_OWORD *)(a2 + 136);
  v62 = *(int *)(a2 + 300);
  v63 = *(const void **)(a2 + 312);
  a1[30] = v59;
  v64 = *(_OWORD *)(a2 + 120);
  *((_DWORD *)a1 + 68) = *(_DWORD *)(a2 + 272);
  LODWORD(v59) = *(_DWORD *)(a2 + 276);
  *(_OWORD *)(a1 + 15) = v64;
  *(_OWORD *)(a1 + 17) = v61;
  *((_DWORD *)a1 + 69) = v59;
  *(_QWORD *)&v61 = *(_QWORD *)(a2 + 152);
  *((_DWORD *)a1 + 40) = *(_DWORD *)(a2 + 160);
  LODWORD(v59) = *(_DWORD *)(a2 + 280);
  a1[19] = v61;
  *(_QWORD *)&v61 = *(_QWORD *)(a2 + 288);
  *((_DWORD *)a1 + 70) = v59;
  LODWORD(v59) = *(_DWORD *)(a2 + 296);
  a1[36] = v61;
  *((_DWORD *)a1 + 75) = v62;
  *((_DWORD *)a1 + 74) = v59;
  *((_DWORD *)a1 + 76) = *(_DWORD *)(a2 + 304);
  if ( v63 )
  {
    if ( (unsigned __int64)v60 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v65 = 4LL * v60;
    v66 = (void *)operator new[](v65);
    v67 = memcpy(v66, v63, v65);
    v62 = *((int *)a1 + 75);
    v68 = (__int64)v67;
  }
  else
  {
    v68 = 0;
  }
  v69 = *(const void **)(a2 + 320);
  a1[39] = v68;
  if ( v69 )
  {
    if ( v62 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v70 = 4 * v62;
    v71 = (void *)operator new[](4 * v62);
    v72 = memcpy(v71, v69, v70);
    LODWORD(v62) = *((_DWORD *)a1 + 75);
    v73 = (__int64)v72;
  }
  else
  {
    v73 = 0;
  }
  v74 = *(const void **)(a2 + 328);
  a1[40] = v73;
  v75 = v62 + 1;
  if ( v74 )
  {
    if ( (unsigned __int64)v75 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v76 = 4LL * v75;
    v77 = (void *)operator new[](v76);
    v78 = memcpy(v77, v74, v76);
  }
  else
  {
    v78 = nullptr;
  }
  v79 = *(const void **)(a2 + 336);
  a1[41] = (__int64)v78;
  v80 = *((int *)a1 + 76);
  if ( v79 )
  {
    if ( v80 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v81 = 4 * v80;
    v82 = (void *)operator new[](4 * v80);
    v83 = memcpy(v82, v79, v81);
    v80 = *((int *)a1 + 76);
    v84 = (__int64)v83;
  }
  else
  {
    v84 = 0;
  }
  v85 = *(const void **)(a2 + 344);
  a1[42] = v84;
  if ( v85 )
  {
    if ( v80 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_109;
    v86 = 8 * v80;
    v87 = (void *)operator new[](8 * v80);
    v88 = memcpy(v87, v85, v86);
  }
  else
  {
    v88 = nullptr;
  }
  v89 = *(const void **)(a2 + 352);
  a1[43] = (__int64)v88;
  v90 = *((int *)a1 + 75);
  if ( v89 )
  {
    if ( v90 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_109;
    v91 = 8 * v90;
    v92 = (void *)operator new[](v91);
    v93 = memcpy(v92, v89, v91);
  }
  else
  {
    v93 = nullptr;
  }
  v94 = *(const void **)(a2 + 360);
  v95 = *((_DWORD *)a1 + 65) - *((_DWORD *)a1 + 64);
  a1[44] = (__int64)v93;
  if ( v94 )
  {
    if ( (unsigned __int64)v95 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_109;
    v96 = 4LL * v95;
    v97 = (void *)operator new[](v96);
    v98 = memcpy(v97, v94, v96);
  }
  else
  {
    v98 = nullptr;
  }
  v99 = *(const void **)(a2 + 376);
  a1[45] = (__int64)v98;
  v100 = *((int *)a1 + 75);
  if ( v99 )
  {
    if ( v100 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_109;
    v101 = 8 * v100;
    v102 = (void *)operator new[](8 * v100);
    v103 = memcpy(v102, v99, v101);
    v100 = *((int *)a1 + 75);
    v104 = (__int64)v103;
  }
  else
  {
    v104 = 0;
  }
  v105 = *(const void **)(a2 + 384);
  a1[47] = v104;
  if ( !v105 )
  {
    v109 = 0;
    goto LABEL_86;
  }
  if ( v100 > 0xFFFFFFFFFFFFFFFLL )
LABEL_109:
    __cxa_throw_bad_array_new_length();
  v106 = 8 * v100;
  v107 = (void *)operator new[](8 * v100);
  v108 = memcpy(v107, v105, v106);
  LODWORD(v100) = *((_DWORD *)a1 + 75);
  v109 = (__int64)v108;
LABEL_86:
  v110 = *(const void **)(a2 + 368);
  v111 = 2 * v100;
  a1[48] = v109;
  if ( v110 )
  {
    v112 = v111;
    v113 = (void *)operator new[](v111);
    v114 = memcpy(v113, v110, v112);
  }
  else
  {
    v114 = nullptr;
  }
  a1[46] = (__int64)v114;
  return a1;
}

