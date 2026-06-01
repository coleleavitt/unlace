__int64 __fastcall CoinModel::operator=(__int64 a1, __int64 a2)
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
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi
  const void *v25; // r13
  unsigned __int64 v26; // rdx
  size_t v27; // rbp
  void *v28; // rax
  void *v29; // rax
  void *v30; // rcx
  const void *v31; // r13
  size_t v32; // rbp
  void *v33; // rax
  void *v34; // rax
  void *v35; // rcx
  const void *v36; // r13
  size_t v37; // rbp
  void *v38; // rax
  void *v39; // rcx
  const void *v40; // r13
  unsigned __int64 v41; // rdx
  size_t v42; // rbp
  void *v43; // rax
  void *v44; // rax
  void *v45; // rcx
  const void *v46; // r13
  size_t v47; // rbp
  void *v48; // rax
  void *v49; // rax
  void *v50; // rcx
  const void *v51; // r13
  size_t v52; // rbp
  void *v53; // rax
  void *v54; // rax
  void *v55; // rcx
  const void *v56; // r13
  size_t v57; // rbp
  void *v58; // rax
  void *v59; // rax
  void *v60; // rcx
  const void *v61; // r13
  size_t v62; // rbp
  void *v63; // rax
  void *v64; // rax
  void *v65; // rcx
  const void *v66; // r13
  size_t v67; // rbp
  void *v68; // rax
  void *v69; // rcx
  const void *v70; // r13
  unsigned __int64 v71; // rdx
  size_t v72; // rbp
  void *v73; // rax
  void *v74; // rcx
  bool v75; // zf
  __int64 v76; // rax
  CoinPackedMatrix *v77; // rbp
  unsigned __int64 v78; // rdx
  int v79; // eax
  const void *v80; // r13
  unsigned __int64 v81; // rbp
  unsigned __int64 v82; // rbp
  void *v83; // rax
  void *v84; // rcx
  const void *v85; // r13
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // rbp
  void *v88; // rax
  void *v89; // rcx
  const void *v90; // r13
  unsigned __int64 v91; // rdx
  size_t v92; // rbp
  void *v93; // rax
  void *v94; // rax
  void *v95; // rcx
  const void *v96; // r13
  size_t v97; // rbp
  void *v98; // rax
  void *v99; // rcx
  const void *v100; // r12
  unsigned __int64 v101; // rbp
  unsigned __int64 v102; // rbp
  void *v103; // rax
  void *v104; // rcx
  const void *v106; // r13
  int v107; // ebp
  unsigned __int64 v108; // rbp
  void *v109; // rax
  int *v110; // rax
  int *v111; // rcx
  const void *v112; // r14
  unsigned __int64 v113; // r13
  void *v114; // rax
  void *v115; // rax
  void *v116; // rcx
  const void *v117; // r14
  size_t v118; // rbp
  void *v119; // rax
  void *v120; // rax
  void *v121; // rcx
  const void *v122; // r14
  size_t v123; // rbp
  void *v124; // rax
  void *v125; // rcx
  const void *v126; // rbp
  unsigned __int64 v127; // r13
  void *v128; // rax
  void *v129; // rcx
  const void *v130; // r13
  int v131; // ebp
  unsigned __int64 v132; // rbp
  void *v133; // rax
  void *v134; // rcx

  if ( a1 != a2 )
  {
    CoinBaseModel::operator=();
    v3 = *(void **)(a1 + 128);
    if ( v3 )
      operator delete[](v3);
    v4 = *(void **)(a1 + 136);
    if ( v4 )
      operator delete[](v4);
    v5 = *(void **)(a1 + 176);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 184);
    if ( v6 )
      operator delete[](v6);
    v7 = *(void **)(a1 + 192);
    if ( v7 )
      operator delete[](v7);
    v8 = *(void **)(a1 + 200);
    if ( v8 )
      operator delete[](v8);
    v9 = *(void **)(a1 + 240);
    if ( v9 )
      operator delete[](v9);
    v10 = *(void **)(a1 + 280);
    if ( v10 )
      operator delete[](v10);
    v11 = *(void **)(a1 + 288);
    if ( v11 )
      operator delete[](v11);
    v12 = *(void **)(a1 + 296);
    if ( v12 )
      operator delete[](v12);
    v13 = *(void **)(a1 + 448);
    if ( v13 )
      operator delete[](v13);
    v14 = *(void **)(a1 + 480);
    if ( v14 )
      operator delete[](v14);
    v15 = *(void **)(a1 + 488);
    if ( v15 )
      operator delete[](v15);
    v16 = *(void **)(a1 + 624);
    if ( v16 )
      operator delete[](v16);
    v17 = *(void **)(a1 + 640);
    if ( v17 )
      operator delete[](v17);
    v18 = *(void **)(a1 + 648);
    if ( v18 )
      operator delete[](v18);
    v19 = *(void **)(a1 + 656);
    if ( v19 )
      operator delete[](v19);
    v20 = *(void **)(a1 + 664);
    if ( v20 )
      operator delete[](v20);
    v21 = *(void **)(a1 + 672);
    if ( v21 )
      operator delete[](v21);
    v22 = *(void **)(a1 + 680);
    if ( v22 )
      operator delete[](v22);
    v23 = *(void **)(a1 + 688);
    if ( v23 )
      operator delete[](v23);
    v24 = *(_QWORD *)(a1 + 304);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    *(__m128i *)(a1 + 100) = _mm_loadu_si128((const __m128i *)(a2 + 100));
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
    *(_DWORD *)(a1 + 496) = *(_DWORD *)(a2 + 496);
    CoinModelHash::operator=(a1 + 144, a2 + 144);
    CoinModelHash::operator=(a1 + 208, a2 + 208);
    CoinModelHash::operator=(a1 + 248, a2 + 248);
    CoinModelHash2::operator=(a1 + 312, a2 + 312);
    CoinModelHash2::operator=(a1 + 456, a2 + 456);
    CoinModelLinkedList::operator=(a1 + 336, a2 + 336);
    CoinModelLinkedList::operator=(a1 + 560, a2 + 560);
    CoinModelLinkedList::operator=(a1 + 504, a2 + 504);
    CoinModelLinkedList::operator=(a1 + 392, a2 + 392);
    v25 = *(const void **)(a2 + 128);
    v26 = *(int *)(a1 + 100);
    *(_DWORD *)(a1 + 616) = *(_DWORD *)(a2 + 616);
    *(_DWORD *)(a1 + 632) = *(_DWORD *)(a2 + 632);
    *(_DWORD *)(a1 + 704) = *(_DWORD *)(a2 + 704);
    *(_BYTE *)(a1 + 708) = *(_BYTE *)(a2 + 708);
    *(_DWORD *)(a1 + 712) = *(_DWORD *)(a2 + 712);
    if ( v25 )
    {
      if ( v26 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v27 = 8 * v26;
      v28 = (void *)operator new[](8 * v26);
      v29 = memcpy(v28, v25, v27);
      v26 = *(int *)(a1 + 100);
      v30 = v29;
    }
    else
    {
      v30 = nullptr;
    }
    v31 = *(const void **)(a2 + 136);
    *(_QWORD *)(a1 + 128) = v30;
    if ( v31 )
    {
      if ( v26 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v32 = 8 * v26;
      v33 = (void *)operator new[](8 * v26);
      v34 = memcpy(v33, v31, v32);
      v26 = *(int *)(a1 + 100);
      v35 = v34;
    }
    else
    {
      v35 = nullptr;
    }
    v36 = *(const void **)(a2 + 176);
    *(_QWORD *)(a1 + 136) = v35;
    if ( v36 )
    {
      if ( v26 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v37 = 4 * v26;
      v38 = (void *)operator new[](4 * v26);
      v39 = memcpy(v38, v36, v37);
    }
    else
    {
      v39 = nullptr;
    }
    v40 = *(const void **)(a2 + 184);
    *(_QWORD *)(a1 + 176) = v39;
    v41 = *(int *)(a1 + 104);
    if ( v40 )
    {
      if ( v41 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v42 = 8 * v41;
      v43 = (void *)operator new[](8 * v41);
      v44 = memcpy(v43, v40, v42);
      v41 = *(int *)(a1 + 104);
      v45 = v44;
    }
    else
    {
      v45 = nullptr;
    }
    v46 = *(const void **)(a2 + 192);
    *(_QWORD *)(a1 + 184) = v45;
    if ( v46 )
    {
      if ( v41 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v47 = 8 * v41;
      v48 = (void *)operator new[](8 * v41);
      v49 = memcpy(v48, v46, v47);
      v41 = *(int *)(a1 + 104);
      v50 = v49;
    }
    else
    {
      v50 = nullptr;
    }
    v51 = *(const void **)(a2 + 200);
    *(_QWORD *)(a1 + 192) = v50;
    if ( v51 )
    {
      if ( v41 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v52 = 8 * v41;
      v53 = (void *)operator new[](8 * v41);
      v54 = memcpy(v53, v51, v52);
      v41 = *(int *)(a1 + 104);
      v55 = v54;
    }
    else
    {
      v55 = nullptr;
    }
    v56 = *(const void **)(a2 + 240);
    *(_QWORD *)(a1 + 200) = v55;
    if ( v56 )
    {
      if ( v41 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v57 = 4 * v41;
      v58 = (void *)operator new[](4 * v41);
      v59 = memcpy(v58, v56, v57);
      v41 = *(int *)(a1 + 104);
      v60 = v59;
    }
    else
    {
      v60 = nullptr;
    }
    v61 = *(const void **)(a2 + 280);
    *(_QWORD *)(a1 + 240) = v60;
    if ( v61 )
    {
      if ( v41 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v62 = 4 * v41;
      v63 = (void *)operator new[](4 * v41);
      v64 = memcpy(v63, v61, v62);
      v41 = *(int *)(a1 + 104);
      v65 = v64;
    }
    else
    {
      v65 = nullptr;
    }
    v66 = *(const void **)(a2 + 680);
    *(_QWORD *)(a1 + 280) = v65;
    if ( v66 )
    {
      if ( v41 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v67 = 4 * v41;
      v68 = (void *)operator new[](4 * v41);
      v69 = memcpy(v68, v66, v67);
    }
    else
    {
      v69 = nullptr;
    }
    v70 = *(const void **)(a2 + 688);
    *(_QWORD *)(a1 + 680) = v69;
    v71 = *(int *)(a1 + 100);
    if ( v70 )
    {
      if ( v71 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v72 = 4 * v71;
      v73 = (void *)operator new[](4 * v71);
      v74 = memcpy(v73, v70, v72);
    }
    else
    {
      v74 = nullptr;
    }
    v75 = *(_QWORD *)(a2 + 304) == 0;
    v76 = *(_QWORD *)(a2 + 696);
    *(_QWORD *)(a1 + 688) = v74;
    *(_QWORD *)(a1 + 696) = v76;
    if ( v75 )
    {
      v78 = *(int *)(a1 + 632);
      *(_QWORD *)(a1 + 304) = 0;
      if ( !(_DWORD)v78 )
      {
LABEL_78:
        v79 = *(_DWORD *)(a1 + 704);
        *(_QWORD *)(a1 + 640) = 0;
        *(_QWORD *)(a1 + 648) = 0;
        *(_QWORD *)(a1 + 656) = 0;
        *(_QWORD *)(a1 + 664) = 0;
        *(_QWORD *)(a1 + 672) = 0;
        if ( v79 )
          goto LABEL_79;
        goto LABEL_115;
      }
    }
    else
    {
      v77 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v77, *(const CoinPackedMatrix **)(a2 + 304));
      v78 = *(int *)(a1 + 632);
      *(_QWORD *)(a1 + 304) = v77;
      if ( !(_DWORD)v78 )
        goto LABEL_78;
    }
    v106 = *(const void **)(a2 + 640);
    v107 = v78 + 1;
    if ( v106 )
    {
      if ( (unsigned __int64)v107 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v108 = 4LL * v107;
      v109 = (void *)operator new[](v108);
      v110 = (int *)memcpy(v109, v106, v108);
      v78 = *(int *)(a1 + 632);
      v111 = v110;
    }
    else
    {
      v111 = nullptr;
    }
    v112 = *(const void **)(a2 + 648);
    *(_QWORD *)(a1 + 640) = v111;
    v113 = v111[(int)v78];
    if ( v112 )
    {
      if ( (unsigned __int64)(int)v113 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v114 = (void *)operator new[](4LL * (int)v113);
      v115 = memcpy(v114, v112, 4LL * (int)v113);
      v78 = *(int *)(a1 + 632);
      v116 = v115;
    }
    else
    {
      v116 = nullptr;
    }
    v117 = *(const void **)(a2 + 656);
    *(_QWORD *)(a1 + 648) = v116;
    if ( v117 )
    {
      if ( v78 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v118 = 4 * v78;
      v119 = (void *)operator new[](4 * v78);
      v120 = memcpy(v119, v117, v118);
      v78 = *(int *)(a1 + 632);
      v121 = v120;
    }
    else
    {
      v121 = nullptr;
    }
    v122 = *(const void **)(a2 + 664);
    *(_QWORD *)(a1 + 656) = v121;
    if ( v122 )
    {
      if ( v78 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_141;
      v123 = 4 * v78;
      v124 = (void *)operator new[](4 * v78);
      v125 = memcpy(v124, v122, v123);
    }
    else
    {
      v125 = nullptr;
    }
    v126 = *(const void **)(a2 + 672);
    *(_QWORD *)(a1 + 664) = v125;
    if ( v126 )
    {
      if ( v113 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_141;
      v127 = 8 * v113;
      v128 = (void *)operator new[](v127);
      v129 = memcpy(v128, v126, v127);
    }
    else
    {
      v129 = nullptr;
    }
    v79 = *(_DWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 672) = v129;
    if ( v79 )
    {
LABEL_79:
      if ( v79 != 1 )
      {
        *(_QWORD *)(a1 + 288) = 0;
LABEL_81:
        v80 = *(const void **)(a2 + 296);
        v81 = *(int *)(a1 + 112);
        if ( v80 )
        {
          if ( v81 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_141;
          v82 = 16 * v81;
          v83 = (void *)operator new[](v82);
          v84 = memcpy(v83, v80, v82);
        }
        else
        {
          v84 = nullptr;
        }
        v85 = *(const void **)(a2 + 448);
        *(_QWORD *)(a1 + 296) = v84;
        v86 = *(int *)(a1 + 120);
        if ( v85 )
        {
          if ( v86 > 0x7FFFFFFFFFFFFFFLL )
            goto LABEL_141;
          v87 = 16 * v86;
          v88 = (void *)operator new[](v87);
          v89 = memcpy(v88, v85, v87);
        }
        else
        {
          v89 = nullptr;
        }
        v90 = *(const void **)(a2 + 480);
        *(_QWORD *)(a1 + 448) = v89;
        v91 = *(int *)(a1 + 496);
        if ( v90 )
        {
          if ( v91 > 0x1FFFFFFFFFFFFFFELL )
            goto LABEL_141;
          v92 = 4 * v91;
          v93 = (void *)operator new[](4 * v91);
          v94 = memcpy(v93, v90, v92);
          v91 = *(int *)(a1 + 496);
          v95 = v94;
        }
        else
        {
          v95 = nullptr;
        }
        v96 = *(const void **)(a2 + 488);
        *(_QWORD *)(a1 + 480) = v95;
        if ( v96 )
        {
          if ( v91 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_141;
          v97 = 8 * v91;
          v98 = (void *)operator new[](8 * v91);
          v99 = memcpy(v98, v96, v97);
        }
        else
        {
          v99 = nullptr;
        }
        v100 = *(const void **)(a2 + 624);
        *(_QWORD *)(a1 + 488) = v99;
        v101 = *(int *)(a1 + 616);
        if ( !v100 )
        {
          v104 = nullptr;
          goto LABEL_96;
        }
        if ( v101 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v102 = 8 * v101;
          v103 = (void *)operator new[](v102);
          v104 = memcpy(v103, v100, v102);
LABEL_96:
          *(_QWORD *)(a1 + 624) = v104;
          return a1;
        }
LABEL_141:
        __cxa_throw_bad_array_new_length();
      }
      v130 = *(const void **)(a2 + 288);
      v131 = *(_DWORD *)(a1 + 104) + 1;
      if ( !v130 )
        goto LABEL_120;
      goto LABEL_116;
    }
LABEL_115:
    v130 = *(const void **)(a2 + 288);
    v131 = *(_DWORD *)(a1 + 100) + 1;
    if ( !v130 )
    {
LABEL_120:
      v134 = nullptr;
LABEL_118:
      *(_QWORD *)(a1 + 288) = v134;
      goto LABEL_81;
    }
LABEL_116:
    if ( (unsigned __int64)v131 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_141;
    v132 = 4LL * v131;
    v133 = (void *)operator new[](v132);
    v134 = memcpy(v133, v130, v132);
    goto LABEL_118;
  }
  return a1;
}

