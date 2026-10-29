// Alternative name is '_ZN9CoinModelC1ERKS_'
void __fastcall CoinModel::CoinModel(CoinModel *this, const CoinModel *a2)
{
  const void *v2; // r15
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r12
  void *v5; // rax
  void *v6; // rax
  void *v7; // rcx
  const void *v8; // r15
  unsigned __int64 v9; // r12
  void *v10; // rax
  void *v11; // rax
  void *v12; // rcx
  const void *v13; // r15
  unsigned __int64 v14; // r12
  void *v15; // rax
  void *v16; // rcx
  const void *v17; // r15
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r12
  void *v20; // rax
  void *v21; // rax
  void *v22; // rcx
  const void *v23; // r15
  unsigned __int64 v24; // r12
  void *v25; // rax
  void *v26; // rax
  void *v27; // rcx
  const void *v28; // r15
  unsigned __int64 v29; // r12
  void *v30; // rax
  void *v31; // rax
  void *v32; // rcx
  const void *v33; // r15
  unsigned __int64 v34; // r12
  void *v35; // rax
  void *v36; // rax
  void *v37; // rcx
  const void *v38; // r15
  unsigned __int64 v39; // r12
  void *v40; // rax
  void *v41; // rcx
  const void *v42; // r15
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // r12
  void *v45; // rax
  void *v46; // rax
  void *v47; // rcx
  const void *v48; // r15
  unsigned __int64 v49; // r12
  void *v50; // rax
  void *v51; // rcx
  const void *v52; // r15
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r12
  void *v55; // rax
  void *v56; // rcx
  const void *v57; // r15
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // r12
  void *v60; // rax
  void *v61; // rcx
  const void *v62; // r15
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r12
  void *v65; // rax
  void *v66; // rcx
  bool v67; // zf
  __int64 v68; // rax
  CoinPackedMatrix *v69; // r12
  unsigned __int64 v70; // r12
  int v71; // eax
  const void *v72; // r15
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r12
  void *v75; // rax
  void *v76; // rcx
  const void *v77; // r12
  int v78; // eax
  unsigned __int64 v79; // rbp
  void *v80; // rax
  void *v81; // rcx
  const void *v82; // r15
  int v83; // eax
  unsigned __int64 v84; // r12
  void *v85; // rax
  _DWORD *v86; // rax
  _DWORD *v87; // rcx
  const void *v88; // r15
  int v89; // eax
  unsigned __int64 v90; // r12
  void *v91; // rax
  void *v92; // rax
  void *v93; // rcx
  const void *v94; // r15
  unsigned __int64 v95; // r12
  void *v96; // rax
  void *v97; // rax
  void *v98; // rcx
  const void *v99; // r15
  unsigned __int64 v100; // r12
  void *v101; // rax
  void *v102; // rcx
  const void *v103; // r15
  void *v104; // rax
  void *v105; // rcx
  const void *v106; // r15
  __int64 v107; // r12
  unsigned __int64 v108; // r12
  void *v109; // rax
  void *v110; // rcx
  int v111; // [rsp+3Ch] [rbp-3Ch]

  CoinBaseModel::CoinBaseModel(this, a2);
  *(_QWORD *)this = &off_4D1800;
  *(__m128i *)((char *)this + 100) = _mm_loadu_si128((const __m128i *)((char *)a2 + 100));
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 144), (const CoinModel *)((char *)a2 + 144));
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 208), (const CoinModel *)((char *)a2 + 208));
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 248), (const CoinModel *)((char *)a2 + 248));
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 312), (const CoinModel *)((char *)a2 + 312));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 336), (const CoinModel *)((char *)a2 + 336));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 392), (const CoinModel *)((char *)a2 + 392));
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 456), (const CoinModel *)((char *)a2 + 456));
  *((_DWORD *)this + 124) = *((_DWORD *)a2 + 124);
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 504), (const CoinModel *)((char *)a2 + 504));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 560), (const CoinModel *)((char *)a2 + 560));
  v2 = *((const void **)a2 + 16);
  v3 = *((int *)this + 25);
  *((_DWORD *)this + 154) = *((_DWORD *)a2 + 154);
  *((_DWORD *)this + 158) = *((_DWORD *)a2 + 158);
  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 176);
  *((_BYTE *)this + 708) = *((_BYTE *)a2 + 708);
  *((_DWORD *)this + 178) = *((_DWORD *)a2 + 178);
  if ( v2 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v4 = 8 * v3;
    v5 = (void *)operator new[](v4);
    v6 = memcpy(v5, v2, v4);
    v3 = *((int *)this + 25);
    v7 = v6;
  }
  else
  {
    v7 = nullptr;
  }
  v8 = *((const void **)a2 + 17);
  *((_QWORD *)this + 16) = v7;
  if ( v8 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v9 = 8 * v3;
    v10 = (void *)operator new[](v9);
    v11 = memcpy(v10, v8, v9);
    v3 = *((int *)this + 25);
    v12 = v11;
  }
  else
  {
    v12 = nullptr;
  }
  v13 = *((const void **)a2 + 22);
  *((_QWORD *)this + 17) = v12;
  if ( v13 )
  {
    if ( v3 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v14 = 4 * v3;
    v15 = (void *)operator new[](v14);
    v16 = memcpy(v15, v13, v14);
  }
  else
  {
    v16 = nullptr;
  }
  v17 = *((const void **)a2 + 23);
  *((_QWORD *)this + 22) = v16;
  v18 = *((int *)this + 26);
  if ( v17 )
  {
    if ( v18 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v19 = 8 * v18;
    v20 = (void *)operator new[](v19);
    v21 = memcpy(v20, v17, v19);
    v18 = *((int *)this + 26);
    v22 = v21;
  }
  else
  {
    v22 = nullptr;
  }
  v23 = *((const void **)a2 + 24);
  *((_QWORD *)this + 23) = v22;
  if ( v23 )
  {
    if ( v18 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v24 = 8 * v18;
    v25 = (void *)operator new[](v24);
    v26 = memcpy(v25, v23, v24);
    v18 = *((int *)this + 26);
    v27 = v26;
  }
  else
  {
    v27 = nullptr;
  }
  v28 = *((const void **)a2 + 25);
  *((_QWORD *)this + 24) = v27;
  if ( v28 )
  {
    if ( v18 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v29 = 8 * v18;
    v30 = (void *)operator new[](v29);
    v31 = memcpy(v30, v28, v29);
    v18 = *((int *)this + 26);
    v32 = v31;
  }
  else
  {
    v32 = nullptr;
  }
  v33 = *((const void **)a2 + 30);
  *((_QWORD *)this + 25) = v32;
  if ( v33 )
  {
    if ( v18 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v34 = 4 * v18;
    v35 = (void *)operator new[](v34);
    v36 = memcpy(v35, v33, v34);
    v18 = *((int *)this + 26);
    v37 = v36;
  }
  else
  {
    v37 = nullptr;
  }
  v38 = *((const void **)a2 + 35);
  *((_QWORD *)this + 30) = v37;
  if ( v38 )
  {
    if ( v18 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v39 = 4 * v18;
    v40 = (void *)operator new[](v39);
    v41 = memcpy(v40, v38, v39);
  }
  else
  {
    v41 = nullptr;
  }
  v42 = *((const void **)a2 + 60);
  *((_QWORD *)this + 35) = v41;
  v43 = *((int *)this + 124);
  if ( v42 )
  {
    if ( v43 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v44 = 4 * v43;
    v45 = (void *)operator new[](v44);
    v46 = memcpy(v45, v42, v44);
    v43 = *((int *)this + 124);
    v47 = v46;
  }
  else
  {
    v47 = nullptr;
  }
  v48 = *((const void **)a2 + 61);
  *((_QWORD *)this + 60) = v47;
  if ( v48 )
  {
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v49 = 8 * v43;
    v50 = (void *)operator new[](v49);
    v51 = memcpy(v50, v48, v49);
  }
  else
  {
    v51 = nullptr;
  }
  v52 = *((const void **)a2 + 78);
  *((_QWORD *)this + 61) = v51;
  v53 = *((int *)this + 154);
  if ( v52 )
  {
    if ( v53 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v54 = 8 * v53;
    v55 = (void *)operator new[](v54);
    v56 = memcpy(v55, v52, v54);
  }
  else
  {
    v56 = nullptr;
  }
  v57 = *((const void **)a2 + 85);
  *((_QWORD *)this + 78) = v56;
  v58 = *((int *)this + 26);
  if ( v57 )
  {
    if ( v58 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v59 = 4 * v58;
    v60 = (void *)operator new[](v59);
    v61 = memcpy(v60, v57, v59);
  }
  else
  {
    v61 = nullptr;
  }
  v62 = *((const void **)a2 + 86);
  *((_QWORD *)this + 85) = v61;
  v63 = *((int *)this + 25);
  if ( v62 )
  {
    if ( v63 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v64 = 4 * v63;
    v65 = (void *)operator new[](v64);
    v66 = memcpy(v65, v62, v64);
  }
  else
  {
    v66 = nullptr;
  }
  v67 = *((_QWORD *)a2 + 38) == 0;
  v68 = *((_QWORD *)a2 + 87);
  *((_QWORD *)this + 86) = v66;
  *((_QWORD *)this + 87) = v68;
  if ( v67 )
  {
    v70 = *((int *)this + 158);
    *((_QWORD *)this + 38) = 0;
    if ( !(_DWORD)v70 )
    {
LABEL_42:
      v71 = *((_DWORD *)this + 176);
      *((_QWORD *)this + 80) = 0;
      *((_QWORD *)this + 81) = 0;
      *((_QWORD *)this + 82) = 0;
      *((_QWORD *)this + 83) = 0;
      *((_QWORD *)this + 84) = 0;
      if ( v71 )
        goto LABEL_43;
LABEL_69:
      v106 = *((const void **)a2 + 36);
      LODWORD(v107) = *((_DWORD *)this + 25) + 1;
      if ( v106 )
      {
        v107 = (int)v107;
        if ( (unsigned __int64)(int)v107 > 0x1FFFFFFFFFFFFFFELL )
          __cxa_throw_bad_array_new_length();
        goto LABEL_71;
      }
LABEL_91:
      v110 = nullptr;
      goto LABEL_72;
    }
  }
  else
  {
    v69 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v69, *((const CoinPackedMatrix **)a2 + 38));
    *((_QWORD *)this + 38) = v69;
    v70 = *((int *)this + 158);
    if ( !(_DWORD)v70 )
      goto LABEL_42;
  }
  v82 = *((const void **)a2 + 80);
  v83 = v70 + 1;
  if ( v82 )
  {
    if ( (unsigned __int64)v83 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v84 = 4LL * v83;
    v85 = (void *)operator new[](v84);
    v86 = memcpy(v85, v82, v84);
    v70 = *((int *)this + 158);
    v87 = v86;
  }
  else
  {
    v87 = nullptr;
  }
  v88 = *((const void **)a2 + 81);
  *((_QWORD *)this + 80) = v87;
  v89 = v87[(int)v70];
  v111 = v89;
  if ( v88 )
  {
    if ( (unsigned __int64)v89 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v90 = 4LL * v89;
    v91 = (void *)operator new[](v90);
    v92 = memcpy(v91, v88, v90);
    v70 = *((int *)this + 158);
    v93 = v92;
  }
  else
  {
    v93 = nullptr;
  }
  v94 = *((const void **)a2 + 82);
  *((_QWORD *)this + 81) = v93;
  if ( v94 )
  {
    if ( v70 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v95 = 4 * v70;
    v96 = (void *)operator new[](v95);
    v97 = memcpy(v96, v94, v95);
    v70 = *((int *)this + 158);
    v98 = v97;
  }
  else
  {
    v98 = nullptr;
  }
  v99 = *((const void **)a2 + 83);
  *((_QWORD *)this + 82) = v98;
  if ( v99 )
  {
    if ( v70 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v100 = 4 * v70;
    v101 = (void *)operator new[](v100);
    v102 = memcpy(v101, v99, v100);
  }
  else
  {
    v102 = nullptr;
  }
  v103 = *((const void **)a2 + 84);
  *((_QWORD *)this + 83) = v102;
  if ( v103 )
  {
    if ( (unsigned __int64)v111 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v104 = (void *)operator new[](8LL * v111);
    v105 = memcpy(v104, v103, 8LL * v111);
  }
  else
  {
    v105 = nullptr;
  }
  v71 = *((_DWORD *)this + 176);
  *((_QWORD *)this + 84) = v105;
  if ( !v71 )
    goto LABEL_69;
LABEL_43:
  if ( v71 != 1 )
  {
    *((_QWORD *)this + 36) = 0;
    goto LABEL_45;
  }
  v106 = *((const void **)a2 + 36);
  LODWORD(v107) = *((_DWORD *)this + 26) + 1;
  if ( !v106 )
    goto LABEL_91;
  v107 = (int)v107;
  if ( (unsigned __int64)(int)v107 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
LABEL_71:
  v108 = 4 * v107;
  v109 = (void *)operator new[](v108);
  v110 = memcpy(v109, v106, v108);
LABEL_72:
  *((_QWORD *)this + 36) = v110;
LABEL_45:
  v72 = *((const void **)a2 + 37);
  v73 = *((int *)this + 28);
  if ( v72 )
  {
    if ( v73 > 0x7FFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v74 = 16 * v73;
    v75 = (void *)operator new[](v74);
    v76 = memcpy(v75, v72, v74);
  }
  else
  {
    v76 = nullptr;
  }
  v77 = *((const void **)a2 + 56);
  *((_QWORD *)this + 37) = v76;
  v78 = *((_DWORD *)this + 30);
  if ( v77 )
  {
    if ( (unsigned __int64)v78 > 0x7FFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v79 = 16LL * v78;
    v80 = (void *)operator new[](v79);
    v81 = memcpy(v80, v77, v79);
  }
  else
  {
    v81 = nullptr;
  }
  *((_QWORD *)this + 56) = v81;
}

