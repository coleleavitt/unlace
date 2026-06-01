__int64 __fastcall sub_CF8380(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r14d
  _BYTE *v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rax
  _DWORD *v16; // rax
  unsigned int v17; // edx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  int *v20; // rsi
  int v21; // esi
  __int64 v22; // r9
  _QWORD *v23; // r8
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // r9
  __int64 v28; // rbp
  char *v29; // rax
  __int64 *v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  bool v35; // r14
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _DWORD *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbx
  void *v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r13
  unsigned int v48; // r14d
  __int64 v49; // rdx
  int v50; // esi
  __int64 v51; // rcx
  int *v52; // rcx
  int v53; // ecx
  unsigned int v54; // r15d
  unsigned int v55; // edx
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // edx
  char *v60; // rax
  __int64 *v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbx
  void *v67; // rdi
  char *v68; // rax
  __int64 *v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rax
  __int64 v73; // r10
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // rbp
  unsigned __int8 v80; // r9
  __int64 v81; // r15
  unsigned __int64 v82; // rax
  __int64 v83; // r11
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // [rsp+0h] [rbp-118h]
  int v87; // [rsp+8h] [rbp-110h]
  void *v88; // [rsp+8h] [rbp-110h]
  __int64 v89; // [rsp+10h] [rbp-108h]
  void *v90; // [rsp+10h] [rbp-108h]
  __int64 v91; // [rsp+18h] [rbp-100h]
  unsigned __int8 v92; // [rsp+18h] [rbp-100h]
  unsigned __int8 v93; // [rsp+18h] [rbp-100h]
  _QWORD *v94; // [rsp+20h] [rbp-F8h]
  void *v95; // [rsp+20h] [rbp-F8h]
  _QWORD *v96; // [rsp+28h] [rbp-F0h]
  int v97; // [rsp+30h] [rbp-E8h]
  __int64 v98; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v99; // [rsp+40h] [rbp-D8h] BYREF
  void *v100; // [rsp+48h] [rbp-D0h]
  void *v101; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+58h] [rbp-C0h]
  __int64 v103[23]; // [rsp+60h] [rbp-B8h] BYREF

  v6 = sub_15D1F10(a2);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v6 == *(_QWORD *)(v8 + 840) )
    goto LABEL_39;
  v9 = v6;
  v10 = *(_QWORD *)(v6 + 24);
  if ( v10 )
  {
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 == 5 )
    {
      v35 = 0;
      v101 = &dword_0 + 1;
      v102 = 0;
      v103[0] = 1;
      v103[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v103);
      v39 = *(_DWORD **)(v9 + 24);
      BYTE4(v103[0]) &= ~1u;
      LODWORD(v103[0]) = 1;
      if ( v39 && *v39 == 5 )
        v35 = v39[1] == 1;
      v40 = *(_QWORD *)(a1 + 40);
      if ( !v40 )
      {
        sub_16669E0(a1 + 32);
        v40 = *(_QWORD *)(a1 + 40);
      }
      sub_166A700(v40, (unsigned int)&v101, v35, v36, v37, v38);
      v41 = sub_15E1B70(*(_QWORD *)(a1 + 32));
      v42 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      sub_CF71F0(*a3, a3[1]);
      *a3 = v42;
      v43 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v101);
      sub_182CBA0(v43, v103);
      return 1;
    }
    if ( v11 != *(_DWORD *)(a1 + 48) )
    {
      if ( v11 != *(_DWORD *)(a1 + 72) )
      {
LABEL_6:
        if ( (unsigned int)sub_15F0200(a1 + 88) != v11 )
          return 0;
        v44 = *(__int64 **)sub_15F6BE0(a1 + 88, v9);
        if ( !v44 )
          return 0;
        v46 = (__int64)&v44[*((unsigned int *)v44 - 1)];
        if ( v44 == (__int64 *)v46 )
          return 0;
        while ( 1 )
        {
          v47 = *v44;
          v48 = *(_DWORD *)(*v44 + 32);
          if ( !v48 )
            goto LABEL_100;
          v49 = 0;
          v50 = -1;
          while ( 1 )
          {
            v51 = *(_QWORD *)(v47 + 8 * v49 + 48);
            if ( v9 != v51 )
              break;
            v50 = v49;
LABEL_59:
            if ( ++v49 == v48 )
              goto LABEL_60;
          }
          v52 = *(int **)(v51 + 24);
          if ( v52 )
          {
            v53 = *v52;
            if ( v53 != 4 && v53 != -1 )
              goto LABEL_59;
          }
LABEL_60:
          if ( v50 != -1 )
          {
            v87 = v50;
            v54 = 0;
            v55 = 0;
            v56 = v103;
            v101 = v103;
            v102 = 0x1000000000LL;
            do
            {
              if ( v87 == v54 )
              {
                if ( v55 >= HIDWORD(v102) )
                {
                  LODWORD(v89) = 2 * HIDWORD(v102);
                  v68 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v102)));
                  v55 = v102;
                  v69 = (__int64 *)v101;
                  v56 = v68;
                  if ( (_DWORD)v102 )
                  {
                    if ( (unsigned int)(v102 - 1) <= 2 || v68 == (char *)v101 + 8 )
                    {
                      v74 = 0;
                      v45 = 8LL * (unsigned int)v102;
                      do
                      {
                        v56[v74 / 8] = v69[v74 / 8];
                        v74 += 8LL;
                      }
                      while ( v45 != v74 );
                    }
                    else
                    {
                      v70 = 0;
                      v71 = 16LL * ((unsigned int)v102 >> 1);
                      do
                      {
                        *(__m128i *)&v56[v70 / 8] = _mm_loadu_si128((const __m128i *)&v69[v70 / 8]);
                        v70 += 16LL;
                      }
                      while ( v70 != v71 );
                      if ( (v55 & 1) != 0 )
                        v56[v55 & 0xFFFFFFFE] = v69[v55 & 0xFFFFFFFE];
                    }
                  }
                  if ( v69 != v103 && v69 )
                  {
                    v91 = (__int64)v56;
                    sub_186B220(v69);
                    v55 = v102;
                    v56 = (_QWORD *)v91;
                  }
                  v101 = v56;
                  HIDWORD(v102) = v89;
                }
                v64 = v55++;
                v56[v64] = a2;
              }
              else
              {
                v58 = sub_15E1950(*(_QWORD *)(a1 + 32));
                v59 = v102;
                if ( (unsigned int)v102 < HIDWORD(v102) )
                {
                  v56 = v101;
                }
                else
                {
                  LODWORD(v91) = v58;
                  LODWORD(v89) = 2 * HIDWORD(v102);
                  v60 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v102)));
                  v59 = v102;
                  v61 = (__int64 *)v101;
                  v56 = v60;
                  if ( (_DWORD)v102 )
                  {
                    if ( (unsigned int)(v102 - 1) <= 2 || v60 == (char *)v101 + 8 )
                    {
                      v72 = 0;
                      v73 = 8LL * (unsigned int)v102;
                      do
                      {
                        v46 = v61[v72 / 8];
                        v56[v72 / 8] = v46;
                        v72 += 8LL;
                      }
                      while ( v73 != v72 );
                    }
                    else
                    {
                      v62 = 0;
                      v45 = 16LL * ((unsigned int)v102 >> 1);
                      do
                      {
                        *(__m128i *)&v56[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62 / 8]);
                        v62 += 16LL;
                      }
                      while ( v45 != v62 );
                      if ( (v59 & 1) != 0 )
                      {
                        v63 = v59 & 0xFFFFFFFE;
                        v45 = v61[v63];
                        v56[v63] = v45;
                      }
                    }
                  }
                  if ( v61 && v61 != v103 )
                  {
                    v96 = v56;
                    LODWORD(v91) = v58;
                    sub_186B220(v61);
                    v59 = v102;
                    v56 = v96;
                  }
                  v101 = v56;
                  HIDWORD(v102) = v89;
                }
                v57 = v59;
                v55 = v59 + 1;
                v56[v57] = v58;
              }
              ++v54;
              LODWORD(v102) = v55;
            }
            while ( v54 < v48 );
            v65 = sub_15DC610(
                    *(_QWORD *)(a1 + 32),
                    v47,
                    v55,
                    (int)v56,
                    v46,
                    v45,
                    v86,
                    v87,
                    v89,
                    v91,
                    (int)v103,
                    (char)v96,
                    v97,
                    v98,
                    v99,
                    v100);
            v66 = v65;
            if ( v65 )
              ++*(_DWORD *)(v65 + 8);
            sub_CF71F0(*a3, a3[1]);
            v67 = v101;
            *a3 = v66;
            if ( v67 != v95 && v67 )
              sub_186B220(v67);
            return 1;
          }
LABEL_100:
          if ( (__int64 *)v46 == ++v44 )
            return 0;
        }
      }
      v13 = *(_BYTE **)(v10 + 8);
      v14 = 0xFFFFFFFF0LL;
      if ( v13 )
        v14 = 16LL * (unsigned int)(*((_DWORD *)v13 - 1) - 1);
      goto LABEL_11;
    }
LABEL_39:
    v33 = sub_15E1A70(*(_QWORD *)(a1 + 32));
    v34 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_CF71F0(*a3, a3[1]);
    *a3 = v34;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 48) == -1 )
    goto LABEL_39;
  if ( *(_DWORD *)(a1 + 72) != -1 )
  {
    v11 = -1;
    goto LABEL_6;
  }
  v13 = nullptr;
  v14 = 0xFFFFFFFF0LL;
LABEL_11:
  v15 = &v13[v14];
  if ( v15[8] != 1 )
LABEL_123:
    sub_DBF6E(0);
  v16 = *(_DWORD **)(*(_QWORD *)v15 + 24LL);
  if ( !v16 )
    return 0;
  LOBYTE(v7) = *v16 == 4 || *v16 == -1;
  if ( (_BYTE)v7 )
    return 0;
  if ( v13 )
  {
    v17 = *((_DWORD *)v13 - 1) - 1;
    if ( *((_DWORD *)v13 - 1) == 1 )
    {
      v103[0] = a2;
      v101 = v103;
      v102 = 0x1000000001LL;
      goto LABEL_110;
    }
  }
  else
  {
    v17 = -1;
  }
  v18 = v13;
  v19 = 16LL * v17;
  do
  {
    if ( v18[8] != 1 )
      goto LABEL_123;
    v20 = *(int **)(*(_QWORD *)v18 + 24LL);
    if ( !v20 )
      return v7;
    v21 = *v20;
    if ( v21 == -1 || v21 == 4 )
      return v7;
    v18 += 16;
  }
  while ( v18 != &v13[v19] );
  v103[0] = a2;
  v22 = 0;
  v101 = v103;
  v102 = 0x1000000001LL;
  while ( 1 )
  {
    if ( v13[v22 + 8] != 1 )
      sub_DBF6E(0);
    v91 = v19;
    v89 = v22;
    v24 = sub_15E1950(v8);
    v25 = v102;
    v26 = v24;
    v27 = v89;
    v19 = v91;
    if ( (unsigned int)v102 < HIDWORD(v102) )
    {
      v23 = v101;
    }
    else
    {
      v28 = (unsigned int)(2 * HIDWORD(v102));
      v29 = (char *)sub_186B270(8 * v28);
      v25 = v102;
      v30 = (__int64 *)v101;
      v23 = v29;
      v27 = v89;
      v19 = v91;
      if ( (_DWORD)v102 )
      {
        if ( (unsigned int)(v102 - 1) <= 2 || v29 == (char *)v101 + 8 )
        {
          v82 = 0;
          v83 = 8LL * (unsigned int)v102;
          do
          {
            v23[v82 / 8] = v30[v82 / 8];
            v82 += 8LL;
          }
          while ( v83 != v82 );
        }
        else
        {
          v31 = 0;
          v32 = 16LL * ((unsigned int)v102 >> 1);
          do
          {
            *(__m128i *)&v23[v31 / 8] = _mm_loadu_si128((const __m128i *)&v30[v31 / 8]);
            v31 += 16LL;
          }
          while ( v32 != v31 );
          if ( (v25 & 1) != 0 )
            v23[v25 & 0xFFFFFFFE] = v30[v25 & 0xFFFFFFFE];
        }
      }
      if ( v30 != v103 && v30 )
      {
        v94 = v23;
        sub_186B220(v30);
        v25 = v102;
        v23 = v94;
        v19 = v91;
        v27 = v89;
      }
      v101 = v23;
      HIDWORD(v102) = v28;
    }
    v22 = v27 + 16;
    v23[v25] = v26;
    v8 = *(_QWORD *)(a1 + 32);
    LODWORD(v102) = v25 + 1;
    if ( v22 == v19 )
      break;
    v13 = *(_BYTE **)(*(_QWORD *)(v9 + 24) + 8LL);
  }
LABEL_110:
  v75 = sub_15E1AF0(v8);
  v79 = v75;
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v80 = sub_CF8380(
          a1,
          v75,
          (int)&v99,
          v76,
          v77,
          v78,
          v86,
          (__int64)v103,
          v89,
          v91,
          (int)v94,
          (int)v96,
          v97,
          v98,
          0,
          *(void **)(a1 + 32));
  v81 = v99;
  v90 = v100;
  if ( v80 )
  {
    v93 = v80;
    v98 = v99;
    sub_D03540(&v101, &v98);
    v84 = sub_15E1AF0(*(_QWORD *)(a1 + 32));
    v85 = v84;
    if ( v84 )
      ++*(_DWORD *)(v84 + 8);
    sub_CF71F0(*a3, a3[1]);
    *a3 = v85;
    v80 = v93;
  }
  v92 = v80;
  sub_CF71F0(v81, (__int64)v90);
  sub_CF71F0(v79, v8);
  v7 = v92;
  if ( v101 && v101 != v88 )
  {
    sub_186B220(v101);
    return v92;
  }
  return v7;
}

