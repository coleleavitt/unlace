// Alternative name is '_ZN16ClpDynamicMatrixC2ERKS_'
void __fastcall ClpDynamicMatrix::ClpDynamicMatrix(ClpDynamicMatrix *this, const ClpDynamicMatrix *a2)
{
  unsigned __int64 v2; // rdx
  const void *v3; // r13
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // r12
  void *v7; // rax
  void *v8; // rax
  void *v9; // rcx
  const void *v10; // r13
  size_t v11; // r12
  void *v12; // rax
  void *v13; // rax
  void *v14; // rcx
  const void *v15; // r13
  size_t v16; // r12
  void *v17; // rax
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  const void *v21; // r13
  int v22; // edx
  unsigned __int64 v23; // r12
  void *v24; // rax
  void *v25; // rcx
  const void *v26; // r13
  unsigned __int64 v27; // rax
  size_t v28; // r12
  void *v29; // rax
  void *v30; // rcx
  const void *v31; // r13
  size_t v32; // r12
  void *v33; // rax
  void *v34; // rcx
  const void *v35; // r13
  int v36; // r12d
  void *v37; // rax
  void *v38; // rcx
  __int64 v39; // rdx
  const void *v40; // r13
  int v41; // eax
  __int128 v42; // xmm0
  int v43; // ecx
  __int128 v44; // xmm1
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r12
  void *v47; // rax
  void *v48; // rax
  void *v49; // rcx
  const void *v50; // r13
  size_t v51; // r12
  void *v52; // rax
  void *v53; // rax
  void *v54; // rcx
  const void *v55; // r13
  int v56; // r12d
  unsigned __int64 v57; // r12
  void *v58; // rax
  void *v59; // rcx
  const void *v60; // r13
  unsigned __int64 v61; // rdx
  size_t v62; // r12
  void *v63; // rax
  void *v64; // rax
  void *v65; // rcx
  const void *v66; // r13
  size_t v67; // r12
  void *v68; // rax
  void *v69; // rcx
  const void *v70; // r13
  unsigned __int64 v71; // rdx
  size_t v72; // r12
  void *v73; // rax
  void *v74; // rcx
  const void *v75; // r13
  int v76; // r12d
  unsigned __int64 v77; // r12
  void *v78; // rax
  void *v79; // rcx
  const void *v80; // r13
  unsigned __int64 v81; // rdx
  size_t v82; // r12
  void *v83; // rax
  void *v84; // rax
  void *v85; // rcx
  const void *v86; // r13
  size_t v87; // r12
  void *v88; // rax
  void *v89; // rax
  void *v90; // rcx
  const void *v91; // r12
  int v92; // edx
  size_t v93; // rbp
  void *v94; // rax
  void *v95; // rcx

  ClpPackedMatrix::ClpPackedMatrix(this, a2);
  v2 = *((int *)a2 + 50);
  v3 = *((const void **)a2 + 21);
  *((_QWORD *)this + 26) = *((_QWORD *)a2 + 26);
  *(_QWORD *)this = off_4D0218;
  v4 = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 50) = v2;
  *((_DWORD *)this + 51) = v4;
  v5 = *((_DWORD *)a2 + 65);
  *(__m128i *)((char *)this + 248) = _mm_loadu_si128((const __m128i *)((char *)a2 + 248));
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  if ( v3 )
  {
    if ( (unsigned __int64)v5 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v6 = 4LL * v5;
    v7 = (void *)operator new[](v6);
    v8 = memcpy(v7, v3, v6);
    v2 = *((int *)this + 50);
    v9 = v8;
  }
  else
  {
    v9 = nullptr;
  }
  v10 = *((const void **)a2 + 22);
  *((_QWORD *)this + 21) = v9;
  if ( v10 )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v11 = 4 * v2;
    v12 = (void *)operator new[](4 * v2);
    v13 = memcpy(v12, v10, v11);
    v2 = *((int *)this + 50);
    v14 = v13;
  }
  else
  {
    v14 = nullptr;
  }
  v15 = *((const void **)a2 + 23);
  *((_QWORD *)this + 22) = v14;
  if ( v15 )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v16 = 4 * v2;
    v17 = (void *)operator new[](4 * v2);
    v18 = memcpy(v17, v15, v16);
  }
  else
  {
    v18 = nullptr;
  }
  v19 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 23) = v18;
  v20 = *(_DWORD *)(v19 + 64);
  if ( *(_BYTE *)(v19 + 8) )
    v20 = *(_DWORD *)(v19 + 68);
  v21 = *((const void **)a2 + 24);
  v22 = v20 + 1 - *((_DWORD *)this + 66);
  if ( v21 )
  {
    if ( (unsigned __int64)v22 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v23 = 4LL * v22;
    v24 = (void *)operator new[](v23);
    v25 = memcpy(v24, v21, v23);
  }
  else
  {
    v25 = nullptr;
  }
  v26 = *((const void **)a2 + 27);
  *((_QWORD *)this + 24) = v25;
  v27 = *((int *)this + 50);
  if ( v26 )
  {
    if ( v27 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v28 = 8 * v27;
    v29 = (void *)operator new[](8 * v27);
    v30 = memcpy(v29, v26, v28);
    v27 = *((int *)this + 50);
  }
  else
  {
    v30 = nullptr;
  }
  v31 = *((const void **)a2 + 28);
  *((_QWORD *)this + 27) = v30;
  if ( v31 )
  {
    if ( v27 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v32 = 8 * v27;
    v33 = (void *)operator new[](8 * v27);
    v34 = memcpy(v33, v31, v32);
    LODWORD(v27) = *((_DWORD *)this + 50);
  }
  else
  {
    v34 = nullptr;
  }
  v35 = *((const void **)a2 + 29);
  *((_QWORD *)this + 28) = v34;
  v36 = 2 * v27 + 16;
  if ( v35 )
  {
    v37 = (void *)operator new[](v36);
    v38 = memcpy(v37, v35, v36);
    LODWORD(v27) = *((_DWORD *)this + 50);
  }
  else
  {
    v38 = nullptr;
  }
  v39 = *((_QWORD *)a2 + 30);
  v40 = *((const void **)a2 + 39);
  v41 = v27 + 1;
  v42 = *(_OWORD *)((char *)a2 + 136);
  *((_QWORD *)this + 29) = v38;
  v43 = *((_DWORD *)a2 + 76);
  *((_QWORD *)this + 30) = v39;
  v44 = *(_OWORD *)((char *)a2 + 120);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  LODWORD(v39) = *((_DWORD *)a2 + 69);
  *(_OWORD *)((char *)this + 120) = v44;
  *(_OWORD *)((char *)this + 136) = v42;
  *((_DWORD *)this + 69) = v39;
  *(_QWORD *)&v42 = *((_QWORD *)a2 + 19);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  LODWORD(v39) = *((_DWORD *)a2 + 70);
  *((_QWORD *)this + 19) = v42;
  *(_QWORD *)&v42 = *((_QWORD *)a2 + 36);
  *((_DWORD *)this + 70) = v39;
  LODWORD(v39) = *((_DWORD *)a2 + 74);
  *((_QWORD *)this + 36) = v42;
  *((_DWORD *)this + 74) = v39;
  v45 = *((int *)a2 + 75);
  *((_DWORD *)this + 76) = v43;
  *((_DWORD *)this + 75) = v45;
  if ( v40 )
  {
    if ( (unsigned __int64)v41 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v46 = 4LL * v41;
    v47 = (void *)operator new[](v46);
    v48 = memcpy(v47, v40, v46);
    v45 = *((int *)this + 75);
    v49 = v48;
  }
  else
  {
    v49 = nullptr;
  }
  v50 = *((const void **)a2 + 40);
  *((_QWORD *)this + 39) = v49;
  if ( v50 )
  {
    if ( v45 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v51 = 4 * v45;
    v52 = (void *)operator new[](4 * v45);
    v53 = memcpy(v52, v50, v51);
    LODWORD(v45) = *((_DWORD *)this + 75);
    v54 = v53;
  }
  else
  {
    v54 = nullptr;
  }
  v55 = *((const void **)a2 + 41);
  *((_QWORD *)this + 40) = v54;
  v56 = v45 + 1;
  if ( v55 )
  {
    if ( (unsigned __int64)v56 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v57 = 4LL * v56;
    v58 = (void *)operator new[](v57);
    v59 = memcpy(v58, v55, v57);
  }
  else
  {
    v59 = nullptr;
  }
  v60 = *((const void **)a2 + 42);
  *((_QWORD *)this + 41) = v59;
  v61 = *((int *)this + 76);
  if ( v60 )
  {
    if ( v61 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v62 = 4 * v61;
    v63 = (void *)operator new[](4 * v61);
    v64 = memcpy(v63, v60, v62);
    v61 = *((int *)this + 76);
    v65 = v64;
  }
  else
  {
    v65 = nullptr;
  }
  v66 = *((const void **)a2 + 43);
  *((_QWORD *)this + 42) = v65;
  if ( v66 )
  {
    if ( v61 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v67 = 8 * v61;
    v68 = (void *)operator new[](8 * v61);
    v69 = memcpy(v68, v66, v67);
  }
  else
  {
    v69 = nullptr;
  }
  v70 = *((const void **)a2 + 44);
  *((_QWORD *)this + 43) = v69;
  v71 = *((int *)this + 75);
  if ( v70 )
  {
    if ( v71 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v72 = 8 * v71;
    v73 = (void *)operator new[](8 * v71);
    v74 = memcpy(v73, v70, v72);
  }
  else
  {
    v74 = nullptr;
  }
  v75 = *((const void **)a2 + 45);
  v76 = *((_DWORD *)this + 65) - *((_DWORD *)this + 64);
  *((_QWORD *)this + 44) = v74;
  if ( v75 )
  {
    if ( (unsigned __int64)v76 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v77 = 4LL * v76;
    v78 = (void *)operator new[](v77);
    v79 = memcpy(v78, v75, v77);
  }
  else
  {
    v79 = nullptr;
  }
  v80 = *((const void **)a2 + 47);
  *((_QWORD *)this + 45) = v79;
  v81 = *((int *)this + 75);
  if ( v80 )
  {
    if ( v81 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v82 = 8 * v81;
    v83 = (void *)operator new[](8 * v81);
    v84 = memcpy(v83, v80, v82);
    v81 = *((int *)this + 75);
    v85 = v84;
  }
  else
  {
    v85 = nullptr;
  }
  v86 = *((const void **)a2 + 48);
  *((_QWORD *)this + 47) = v85;
  if ( v86 )
  {
    if ( v81 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v87 = 8 * v81;
    v88 = (void *)operator new[](8 * v81);
    v89 = memcpy(v88, v86, v87);
    LODWORD(v81) = *((_DWORD *)this + 75);
    v90 = v89;
  }
  else
  {
    v90 = nullptr;
  }
  v91 = *((const void **)a2 + 46);
  v92 = 2 * v81;
  *((_QWORD *)this + 48) = v90;
  if ( v91 )
  {
    v93 = v92;
    v94 = (void *)operator new[](v92);
    v95 = memcpy(v94, v91, v93);
  }
  else
  {
    v95 = nullptr;
  }
  *((_QWORD *)this + 46) = v95;
}

