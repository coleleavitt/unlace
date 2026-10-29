// Alternative name is '_ZN16CoinPackedMatrixC2ERKS_iPKiiS3_'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(
        CoinPackedMatrix *this,
        const CoinPackedMatrix *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6)
{
  int v7; // r15d
  int v9; // r13d
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  char *v13; // r12
  int v14; // eax
  const int *v15; // rcx
  int *v16; // rax
  __int64 v17; // r8
  int *v18; // rbp
  int v19; // r13d
  __int64 v20; // rax
  int v21; // edi
  int *v22; // rdx
  int v23; // esi
  __int64 v24; // rdx
  int *v25; // r13
  __int64 v26; // r11
  int v27; // eax
  __int64 v28; // r8
  int *v29; // r10
  _DWORD *v30; // r8
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // r15
  int *v45; // rdi
  const int *v46; // r14
  _DWORD *v47; // r15
  int v48; // ecx
  __int64 v49; // r9
  int *v50; // r13
  _DWORD *v51; // r9
  __int64 v52; // rdx
  int v53; // esi
  __int64 v54; // r8
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // xmm0_8
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rsi
  int v61; // edx
  int v62; // edx
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  _DWORD *v69; // r11
  __int64 v70; // rdi
  unsigned __int64 v71; // rax
  __int64 v72; // rbp
  int v73; // ecx
  int v74; // edx
  __int64 v75; // rsi
  int *v76; // r15
  _DWORD *v77; // rsi
  __int64 v78; // rdi
  int v79; // r8d
  __int64 v80; // rdx
  __int64 v81; // r9
  __int64 v82; // r10
  int v83; // edi
  __int64 v84; // xmm0_8
  __int64 v85; // rdi
  int v86; // edi
  const int *v87; // rax
  int *v88; // rcx
  __int64 v89; // r11
  int v90; // eax
  __int64 v91; // rsi
  int *v92; // r9
  _DWORD *v93; // rsi
  __int64 v94; // rdi
  int v95; // edx
  __int64 v96; // rax
  __int64 v97; // r10
  int v98; // edi
  int v99; // edi
  int v100; // eax
  unsigned __int64 v101; // r13
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  _DWORD *v105; // r14
  unsigned __int64 v106; // r10
  __int64 v107; // r15
  int v108; // ecx
  __int64 v109; // r8
  int *v110; // r13
  _DWORD *v111; // r8
  __int64 v112; // rsi
  int v113; // edi
  __int64 v114; // rdx
  __int64 v115; // r9
  __int64 v116; // r11
  int v117; // esi
  __int64 v118; // xmm0_8
  __int64 v119; // rsi
  _DWORD *v120; // rax
  int v121; // esi
  void *exception; // r14
  __int64 v123; // [rsp+0h] [rbp-A8h]
  const int *v124; // [rsp+8h] [rbp-A0h]
  int *v125; // [rsp+8h] [rbp-A0h]
  __int64 v126; // [rsp+10h] [rbp-98h]
  __int64 v127; // [rsp+18h] [rbp-90h]
  __int64 v128; // [rsp+20h] [rbp-88h]
  const int *v129; // [rsp+28h] [rbp-80h]
  __int64 v130; // [rsp+28h] [rbp-80h]
  int *v131; // [rsp+28h] [rbp-80h]
  __int64 v132; // [rsp+28h] [rbp-80h]
  __int64 v133; // [rsp+28h] [rbp-80h]
  __int64 v134; // [rsp+28h] [rbp-80h]
  __int64 v135; // [rsp+28h] [rbp-80h]
  const int *v136; // [rsp+30h] [rbp-78h]
  __int64 v137; // [rsp+30h] [rbp-78h]
  int *v138; // [rsp+38h] [rbp-70h]
  __int64 v139; // [rsp+50h] [rbp-58h]
  __int64 v140; // [rsp+58h] [rbp-50h]
  __int64 v141; // [rsp+60h] [rbp-48h]

  *((_BYTE *)this + 8) = 1;
  v124 = a6;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  if ( a3 <= 0 || (v7 = a5, a5 <= 0) )
  {
    v120 = (_DWORD *)operator new[](4u);
    *((_QWORD *)this + 6) = v120;
    *v120 = 0;
    return;
  }
  v9 = a3;
  if ( !*((_BYTE *)a2 + 8) )
  {
    v87 = a4;
    *((_BYTE *)this + 8) = 0;
    a4 = a6;
    v9 = a5;
    v124 = v87;
    v7 = a3;
  }
  v127 = *((_QWORD *)a2 + 4);
  v126 = *((_QWORD *)a2 + 5);
  v128 = *((_QWORD *)a2 + 6);
  v10 = *((_QWORD *)a2 + 7);
  *((_DWORD *)this + 16) = v7;
  v11 = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 19) = v7;
  *((_DWORD *)this + 17) = v9;
  v123 = v10;
  if ( v11 <= 0 )
    goto LABEL_95;
  v12 = *((int *)a2 + 17);
  if ( (int)v12 <= 0 )
    goto LABEL_95;
  v129 = a4;
  v13 = (char *)operator new[](4 * v12);
  v14 = *((_DWORD *)a2 + 17);
  v15 = v129;
  if ( v14 > 0 )
  {
    memset(v13, 255, 4LL * (unsigned int)(v14 - 1) + 4);
    v15 = v129;
  }
  v136 = v15;
  v16 = (int *)operator new[](4LL * v9);
  v17 = (unsigned int)(v9 - 1);
  v18 = v16;
  v19 = 0;
  v130 = v17 + 1;
  memset(v16, 255, 4 * (v17 + 1));
  v20 = 0;
  v21 = 0;
  do
  {
    while ( 1 )
    {
      v24 = v136[v20];
      if ( (int)v24 >= 0 && *((_DWORD *)a2 + 17) > (int)v24 )
        break;
      ++v20;
      ++v21;
      if ( v20 == v130 )
        goto LABEL_16;
    }
    v22 = (int *)&v13[4 * v24];
    v23 = *v22;
    if ( *v22 < 0 )
    {
      *v22 = v20;
    }
    else
    {
      ++v19;
      *v22 = v20;
      v18[v20] = v23;
    }
    ++v20;
  }
  while ( v20 != v130 );
LABEL_16:
  if ( v21 )
    goto LABEL_95;
  *((_DWORD *)this + 18) = 0;
  if ( !v19 )
  {
    v63 = *((_DWORD *)a2 + 16);
    if ( 3 * *((_DWORD *)this + 16) > 2 * v63 && 3 * *((_DWORD *)this + 17) > 2 * *((_DWORD *)a2 + 17) )
    {
      v64 = 1;
      v65 = v7 + 1;
      if ( *((int *)a2 + 18) > 0 )
        v64 = *((_DWORD *)a2 + 18);
      v132 = 4 * v65;
      *((_DWORD *)this + 20) = v64;
      *((_QWORD *)this + 6) = operator new[](4 * v65);
      *((_QWORD *)this + 7) = operator new[](v132 - 4);
      v66 = *((int *)this + 20);
      if ( v66 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_94;
      *((_QWORD *)this + 5) = operator new[](4 * v66);
      v67 = *((int *)this + 20);
      if ( v67 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_94;
      v68 = operator new[](8 * v67);
      *((_QWORD *)this + 4) = v68;
      v137 = v68;
      v69 = *((_DWORD **)this + 6);
      v70 = *((_QWORD *)this + 7);
      *((_DWORD *)this + 18) = 0;
      v138 = v18;
      v133 = 4LL * (unsigned int)(v7 - 1) + 4;
      *v69 = 0;
      v71 = 0;
      v72 = v70;
      do
      {
        v73 = *((_DWORD *)this + 18);
        v74 = v124[v71 / 4];
        if ( v74 < 0 || *((_DWORD *)a2 + 16) <= v74 )
        {
          ++v19;
        }
        else
        {
          v75 = 4LL * v74;
          v76 = (int *)(v128 + v75);
          v77 = (_DWORD *)(v123 + v75);
          v78 = *v76;
          v79 = v78 + *v77;
          if ( v79 > (int)v78 )
          {
            v80 = (int)v78 + 1;
            v81 = v126 + -4 * v80 + 4 * v78;
            v82 = v127 + 8 * v78 - 8 * v80;
            while ( 1 )
            {
              v83 = *(_DWORD *)&v13[4 * *(int *)(v81 + 4 * v80)];
              if ( v83 >= 0 )
                break;
LABEL_62:
              v86 = v80++;
              if ( v79 <= v86 )
                goto LABEL_54;
            }
            while ( 1 )
            {
              v84 = *(_QWORD *)(v82 + 8 * v80);
              *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v73) = v83;
              v85 = *((int *)this + 18);
              v73 = v85 + 1;
              *(_QWORD *)(v137 + 8 * v85) = v84;
              LODWORD(v85) = v80++;
              *((_DWORD *)this + 18) = v73;
              v79 = *v76 + *v77;
              if ( v79 <= (int)v85 )
                break;
              v83 = *(_DWORD *)&v13[4 * *(int *)(v81 + 4 * v80)];
              if ( v83 < 0 )
                goto LABEL_62;
            }
          }
        }
LABEL_54:
        v69[v71 / 4 + 1] = v73;
        *(_DWORD *)(v72 + v71) = *((_DWORD *)this + 18) - v69[v71 / 4];
        v71 += 4LL;
      }
      while ( v133 != v71 );
      v18 = v138;
      if ( !v19 )
        goto LABEL_45;
      goto LABEL_95;
    }
    v134 = (unsigned int)(v7 - 1);
    v88 = (int *)v124;
    v89 = (__int64)&v124[v134 + 1];
LABEL_67:
    while ( 2 )
    {
      v90 = *v88;
      if ( v63 <= *v88 || v90 < 0 )
      {
        ++v19;
      }
      else
      {
        v91 = 4LL * v90;
        v92 = (int *)(v128 + v91);
        v93 = (_DWORD *)(v123 + v91);
        v94 = *v92;
        v95 = v94 + *v93;
        if ( v95 > (int)v94 )
        {
          v96 = (int)v94 + 1;
          v97 = v126 + 4 * (v94 - v96);
          while ( *(int *)&v13[4 * *(int *)(v97 + 4 * v96)] < 0 )
          {
LABEL_74:
            v99 = v96++;
            if ( v95 <= v99 )
            {
              if ( (int *)v89 == ++v88 )
              {
LABEL_76:
                if ( !v19 )
                {
                  v100 = 1;
                  if ( *((int *)this + 18) > 0 )
                    v100 = *((_DWORD *)this + 18);
                  v101 = 4LL * (v7 + 1);
                  *((_DWORD *)this + 20) = v100;
                  *((_QWORD *)this + 6) = operator new[](v101);
                  *((_QWORD *)this + 7) = operator new[](v101 - 4);
                  v102 = *((int *)this + 20);
                  if ( v102 <= 0x1FFFFFFFFFFFFFFELL )
                  {
                    *((_QWORD *)this + 5) = operator new[](4 * v102);
                    v103 = *((int *)this + 20);
                    if ( v103 <= 0xFFFFFFFFFFFFFFFLL )
                    {
                      v104 = operator new[](8 * v103);
                      v105 = *((_DWORD **)this + 6);
                      v106 = 0;
                      v107 = *((_QWORD *)this + 7);
                      *((_QWORD *)this + 4) = v104;
                      *((_DWORD *)this + 18) = 0;
                      *v105 = 0;
                      v135 = 4 * v134 + 4;
                      while ( 1 )
                      {
                        v108 = *((_DWORD *)this + 18);
                        v109 = 4LL * v124[v106 / 4];
                        v110 = (int *)(v128 + v109);
                        v111 = (_DWORD *)(v123 + v109);
                        v112 = *v110;
                        v113 = v112 + *v111;
                        if ( v113 > (int)v112 )
                        {
                          v114 = (int)v112 + 1;
                          v115 = v126 + -4 * v114 + 4 * v112;
                          v116 = v127 + 8 * v112 - 8 * v114;
                          do
                          {
                            while ( 1 )
                            {
                              v117 = *(_DWORD *)&v13[4 * *(int *)(v115 + 4 * v114)];
                              if ( v117 < 0 )
                                break;
                              v118 = *(_QWORD *)(v116 + 8 * v114);
                              *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v108) = v117;
                              v119 = *((int *)this + 18);
                              v108 = v119 + 1;
                              *(_QWORD *)(v104 + 8 * v119) = v118;
                              LODWORD(v119) = v114++;
                              *((_DWORD *)this + 18) = v108;
                              v113 = *v110 + *v111;
                              if ( v113 <= (int)v119 )
                                goto LABEL_86;
                            }
                            v121 = v114++;
                          }
                          while ( v113 > v121 );
                        }
LABEL_86:
                        v105[v106 / 4 + 1] = v108;
                        *(_DWORD *)(v107 + v106) = *((_DWORD *)this + 18) - v105[v106 / 4];
                        v106 += 4LL;
                        if ( v135 == v106 )
                          goto LABEL_45;
                      }
                    }
                  }
LABEL_94:
                  __cxa_throw_bad_array_new_length();
                }
LABEL_95:
                exception = __cxa_allocate_exception(0x30u);
                std::string::string();
                std::string::string();
                std::string::string();
                CoinError::CoinError();
                if ( (_UNKNOWN *)(v139 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                  sub_223D40(v139 - 24);
                if ( (_UNKNOWN *)(v140 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                  sub_223D40(v140 - 24);
                if ( (_UNKNOWN *)(v141 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                  sub_223D40(v141 - 24);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'CoinError,
                  (void (*)(void *))CoinError::~CoinError);
              }
              goto LABEL_67;
            }
          }
          while ( 1 )
          {
            ++*((_DWORD *)this + 18);
            v98 = v96++;
            v95 = *v92 + *v93;
            if ( v95 <= v98 )
              break;
            if ( *(int *)&v13[4 * *(int *)(v97 + 4 * v96)] < 0 )
              goto LABEL_74;
          }
        }
      }
      if ( (int *)v89 == ++v88 )
        goto LABEL_76;
      continue;
    }
  }
  v25 = (int *)v124;
  v26 = (__int64)&v124[v7 - 1 + 1];
  do
  {
    while ( 1 )
    {
      v27 = *v25;
      if ( *v25 >= 0 && *((_DWORD *)a2 + 16) > v27 )
        break;
      ++v21;
LABEL_20:
      if ( (int *)v26 == ++v25 )
        goto LABEL_31;
    }
    v28 = 4LL * v27;
    v29 = (int *)(v128 + v28);
    v30 = (_DWORD *)(v123 + v28);
    v31 = *v29;
    v32 = v31 + *v30;
    if ( v32 <= (int)v31 )
      goto LABEL_20;
    v33 = (int)v31 + 1;
    v34 = v126 + 4 * (v31 - v33);
    do
    {
      v35 = *(int *)&v13[4 * *(int *)(v34 + 4 * v33)];
      if ( (int)v35 >= 0 )
      {
        v36 = *((_DWORD *)this + 18) + 1;
        do
        {
          LODWORD(v35) = v18[v35];
          v37 = v36++;
        }
        while ( (int)v35 >= 0 );
        *((_DWORD *)this + 18) = v37;
        v32 = *v29 + *v30;
      }
      v38 = v33++;
    }
    while ( v32 > v38 );
    ++v25;
  }
  while ( (int *)v26 != v25 );
LABEL_31:
  if ( v21 )
    goto LABEL_95;
  v39 = 1;
  if ( *((int *)this + 18) > 0 )
    v39 = *((_DWORD *)this + 18);
  v40 = 4LL * (v7 + 1);
  *((_DWORD *)this + 20) = v39;
  *((_QWORD *)this + 6) = operator new[](v40);
  *((_QWORD *)this + 7) = operator new[](v40 - 4);
  v41 = *((int *)this + 20);
  if ( v41 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_94;
  *((_QWORD *)this + 5) = operator new[](4 * v41);
  v42 = *((int *)this + 20);
  if ( v42 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_94;
  v43 = operator new[](8 * v42);
  v44 = *((_DWORD **)this + 6);
  v45 = *((int **)this + 7);
  v46 = v124;
  *((_QWORD *)this + 4) = v43;
  *((_DWORD *)this + 18) = 0;
  v131 = v25;
  *v44 = 0;
  v125 = v45;
  v47 = v44 + 1;
  do
  {
    v48 = *((_DWORD *)this + 18);
    v49 = 4LL * *v46;
    v50 = (int *)(v128 + v49);
    v51 = (_DWORD *)(v123 + v49);
    v52 = *v50;
    v53 = v52 + *v51;
    if ( (int)v52 < v53 )
    {
      v54 = (int)v52 + 1;
      v55 = v126 + -4 * v54 + 4 * v52;
      v56 = v127 + -8 * v54 + 8 * v52;
      do
      {
        v57 = *(_QWORD *)(v56 + 8 * v54);
        v58 = *(int *)&v13[4 * *(int *)(v55 + 4 * v54)];
        if ( (int)v58 >= 0 )
        {
          v59 = *((_QWORD *)this + 5);
          do
          {
            *(_DWORD *)(v59 + 4LL * v48) = v58;
            v60 = *((int *)this + 18);
            v58 = v18[v58];
            v48 = v60 + 1;
            *(_QWORD *)(v43 + 8 * v60) = v57;
            *((_DWORD *)this + 18) = v60 + 1;
          }
          while ( (int)v58 >= 0 );
          v53 = *v50 + *v51;
        }
        v61 = v54++;
      }
      while ( v53 > v61 );
    }
    *v47 = v48;
    ++v46;
    v62 = *((_DWORD *)this + 18) - *(v47++ - 1);
    *v125++ = v62;
  }
  while ( v131 != v46 );
LABEL_45:
  operator delete[](v13);
  operator delete[](v18);
}

