void __fastcall sub_13F3340(__int64 a1)
{
  int v2; // esi
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // r12
  _QWORD *v12; // r13
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // rbp
  __int64 v15; // rax
  unsigned __int8 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rcx
  unsigned __int64 *v20; // rbp
  __int64 v21; // r15
  unsigned __int64 *v22; // r13
  unsigned __int64 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r13
  void **v27; // r14
  void **v28; // rbp
  __int64 v29; // rsi
  _QWORD *v30; // r13
  _QWORD *v31; // rbp
  __int64 v32; // rdi
  void **v33; // rdi
  void **v34; // r12
  void **v35; // rdi
  __int64 v36; // rsi
  _QWORD *v37; // r13
  _QWORD *v38; // rbp
  __int64 v39; // rdi
  void **v40; // rdi
  void **v41; // r12
  void **v42; // rdi
  __int64 v43; // rsi
  unsigned __int64 *v44; // r13
  unsigned __int64 *v45; // rbp
  unsigned __int64 *v46; // rdi
  int v47; // eax
  char *v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  char *v51; // rdi
  __int64 v52; // r13
  int v53; // eax
  __int64 v54; // r15
  __int64 v55; // r14
  _QWORD *v56; // rax
  void *v57; // rdi
  int v58; // eax
  char *v59; // rdi
  __int64 v60; // rbp
  __int64 v61; // r12
  _QWORD *v62; // rax
  void *v63; // rdi
  __int64 *v64; // r14
  __int64 v65; // rax
  __int64 *v66; // r15
  __int64 v67; // rdx
  unsigned int v68; // ecx
  __int64 v69; // r12
  bool v70; // cf
  __int64 v71; // rcx
  unsigned __int64 v72; // r12
  unsigned __int64 i; // rbp
  __int64 v74; // rdi
  _QWORD *v75; // r12
  _QWORD *v76; // r13
  unsigned __int64 v77; // r14
  unsigned __int64 j; // rbp
  __int64 v79; // rdi
  __int64 *v80; // rbp
  __int64 *v81; // r12
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 *v85; // r12
  void *v86; // rdi
  void **v87; // r12
  void **v88; // rbp
  void *v89; // rdi
  void (*v90)(void); // rax
  __int64 *v91; // rax
  __int64 *v92; // r12
  __int64 *v93; // r13
  __int64 *v94; // rbp
  __int64 v95; // rdi
  unsigned int v96; // ecx
  __int64 v97; // rdi
  __int64 *v98; // rdx
  __int64 v99; // rsi
  unsigned int v100; // ecx
  __int64 *v101; // rbp
  __int64 v102; // rsi
  __int64 v103; // rdi
  double v104[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 652);
  v3 = *(char **)(a1 + 640);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 648);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 && v7 != (_QWORD *)-8LL )
        {
          v8 = (_QWORD *)v7[1];
          v9 = *v7 + 41LL;
          if ( v8 != v7 + 3 )
            free(v8);
          operator delete(v7, v9, 8);
          v3 = *(char **)(a1 + 640);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *(_QWORD **)(a1 + 624);
  v11 = *(_QWORD **)(a1 + 616);
  if ( v10 != v11 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      if ( *v11 )
      {
        v13 = (unsigned __int8 *)v12[4];
        v14 = (unsigned __int8 *)v12[3];
        if ( v13 != v14 )
        {
          do
          {
            while ( 1 )
            {
              v15 = v14[136];
              if ( (_BYTE)v15 == 0xFF )
                break;
              v16 = v14;
              v14 += 144;
              ((void (__fastcall *)(unsigned __int8 *))funcs_13F3420[v15])(v16);
              if ( v13 == v14 )
                goto LABEL_15;
            }
            v14 += 144;
          }
          while ( v13 != v14 );
LABEL_15:
          v14 = (unsigned __int8 *)v12[3];
        }
        if ( v14 )
          operator delete(v14);
        operator delete(v12, 0x30u);
      }
      ++v11;
    }
    while ( v10 != v11 );
    v11 = *(_QWORD **)(a1 + 616);
  }
  if ( v11 )
    operator delete(v11);
  operator delete(*(_QWORD *)(a1 + 592), 16LL * *(unsigned int *)(a1 + 608), 8);
  operator delete(*(_QWORD *)(a1 + 568), 16LL * *(unsigned int *)(a1 + 584), 8);
  v17 = *(unsigned int *)(a1 + 560);
  if ( (_DWORD)v17 )
  {
    v18 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)&v104[0] = v18 + 32 * v17;
    do
    {
      if ( *(_QWORD *)v18 != -8192 && *(_QWORD *)v18 != -4096 )
      {
        v19 = *(unsigned int *)(v18 + 24);
        v20 = *(unsigned __int64 **)(v18 + 8);
        v21 = 8 * v19;
        v22 = v20;
        v23 = &v20[v19];
        if ( (_DWORD)v19 )
        {
          do
          {
            if ( *v22 != -4096 )
              sub_FEE490(*v22, 0xFFFFFFFFFFFFE000LL);
            ++v22;
          }
          while ( v23 != v22 );
        }
        operator delete(v20, v21, 8);
      }
      v18 += 32;
    }
    while ( *(_QWORD *)&v104[0] != v18 );
    v17 = *(unsigned int *)(a1 + 560);
  }
  operator delete(*(_QWORD *)(a1 + 544), 32 * v17, 8);
  operator delete(*(_QWORD *)(a1 + 520), 16LL * *(unsigned int *)(a1 + 536), 8);
  v24 = *(unsigned int *)(a1 + 512);
  if ( (_DWORD)v24 )
  {
    v25 = *(_QWORD *)(a1 + 496);
    v26 = v25 + 104 * v24;
    do
    {
      if ( *(_QWORD *)v25 != -4096 && *(_QWORD *)v25 != -8192 )
      {
        v27 = *(void ***)(v25 + 24);
        v28 = &v27[4 * *(unsigned int *)(v25 + 32)];
        if ( v27 != v28 )
        {
          do
          {
            while ( 1 )
            {
              v28 -= 4;
              if ( *v28 == v28 + 2 )
                break;
              operator delete(*v28);
              if ( v27 == v28 )
                goto LABEL_41;
            }
          }
          while ( v27 != v28 );
LABEL_41:
          v28 = *(void ***)(v25 + 24);
        }
        if ( v28 != (void **)(v25 + 40) )
          free(v28);
      }
      v25 += 104;
    }
    while ( v26 != v25 );
    v24 = *(unsigned int *)(a1 + 512);
  }
  operator delete(*(_QWORD *)(a1 + 496), 104 * v24, 8);
  operator delete(*(_QWORD *)(a1 + 472), 16LL * *(unsigned int *)(a1 + 488), 8);
  operator delete(*(_QWORD *)(a1 + 440), 16LL * *(unsigned int *)(a1 + 456), 8);
  v29 = *(unsigned int *)(a1 + 432);
  if ( (_DWORD)v29 )
  {
    v30 = *(_QWORD **)(a1 + 416);
    v31 = &v30[2 * v29];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(*v30 - 0x7FFFFFFFFFFFFFFELL) > 1 )
        {
          v32 = v30[1];
          if ( v32 )
          {
            if ( (v32 & 4) != 0 )
            {
              v33 = (void **)(v32 & 0xFFFFFFFFFFFFFFF8LL);
              v34 = v33;
              if ( v33 )
                break;
            }
          }
        }
        v30 += 2;
        if ( v31 == v30 )
          goto LABEL_56;
      }
      v35 = (void **)*v33;
      if ( v35 != v34 + 2 )
        free(v35);
      v30 += 2;
      operator delete(v34, 0x30u);
    }
    while ( v31 != v30 );
LABEL_56:
    v29 = *(unsigned int *)(a1 + 432);
  }
  operator delete(*(_QWORD *)(a1 + 416), 16 * v29, 8);
  v36 = *(unsigned int *)(a1 + 408);
  if ( (_DWORD)v36 )
  {
    v37 = *(_QWORD **)(a1 + 392);
    v38 = &v37[2 * v36];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(*v37 - 0x7FFFFFFFFFFFFFFELL) > 1 )
        {
          v39 = v37[1];
          if ( v39 )
          {
            if ( (v39 & 4) != 0 )
            {
              v40 = (void **)(v39 & 0xFFFFFFFFFFFFFFF8LL);
              v41 = v40;
              if ( v40 )
                break;
            }
          }
        }
        v37 += 2;
        if ( v38 == v37 )
          goto LABEL_67;
      }
      v42 = (void **)*v40;
      if ( v42 != v41 + 2 )
        free(v42);
      v37 += 2;
      operator delete(v41, 0x30u);
    }
    while ( v38 != v37 );
LABEL_67:
    v36 = *(unsigned int *)(a1 + 408);
  }
  operator delete(*(_QWORD *)(a1 + 392), 16 * v36, 8);
  v43 = *(unsigned int *)(a1 + 384);
  if ( (_DWORD)v43 )
  {
    v44 = *(unsigned __int64 **)(a1 + 368);
    v45 = &v44[4 * v43];
    do
    {
      if ( *v44 != -4096 && !sub_FEE490(*v44, 0xFFFFFFFFFFFFE000LL) )
      {
        v46 = (unsigned __int64 *)v44[1];
        if ( v46 != v44 + 3 )
          free(v46);
      }
      v44 += 4;
    }
    while ( v45 != v44 );
    v43 = *(unsigned int *)(a1 + 384);
  }
  operator delete(*(_QWORD *)(a1 + 368), 32 * v43, 8);
  if ( *(_DWORD *)(a1 + 356) )
  {
    v47 = *(_DWORD *)(a1 + 352);
    v48 = *(char **)(a1 + 344);
    if ( v47 )
    {
      v49 = 0;
      *(_QWORD *)&v104[0] = 8LL * (unsigned int)(v47 - 1) + 8;
      do
      {
        v50 = *(_QWORD *)&v48[v49];
        if ( v50 && v50 != -8 )
        {
          v51 = *(char **)(v50 + 8);
          v52 = *(_QWORD *)v50 + 33LL;
          if ( *(_DWORD *)(v50 + 20) )
          {
            v53 = *(_DWORD *)(v50 + 16);
            if ( v53 )
            {
              v54 = 0;
              v55 = 8LL * (unsigned int)(v53 - 1) + 8;
              do
              {
                v56 = *(_QWORD **)&v51[v54];
                if ( v56 && v56 != (_QWORD *)-8LL )
                {
                  operator delete(*(_QWORD *)&v51[v54], *v56 + 9LL, 8);
                  v51 = *(char **)(v50 + 8);
                }
                v54 += 8;
              }
              while ( v55 != v54 );
            }
          }
          free(v51);
          operator delete(v50, v52, 8);
          v48 = *(char **)(a1 + 344);
        }
        v49 += 8;
      }
      while ( *(_QWORD *)&v104[0] != v49 );
    }
  }
  else
  {
    v48 = *(char **)(a1 + 344);
  }
  free(v48);
  v57 = *(void **)(a1 + 304);
  if ( v57 != (void *)(a1 + 320) )
    free(v57);
  operator delete(*(_QWORD *)(a1 + 280), 16LL * *(unsigned int *)(a1 + 296), 8);
  if ( *(_DWORD *)(a1 + 268) )
  {
    v58 = *(_DWORD *)(a1 + 264);
    v59 = *(char **)(a1 + 256);
    if ( v58 )
    {
      v60 = 0;
      v61 = 8LL * (unsigned int)(v58 - 1) + 8;
      do
      {
        v62 = *(_QWORD **)&v59[v60];
        if ( v62 != (_QWORD *)-8LL && v62 )
        {
          operator delete(*(_QWORD *)&v59[v60], *v62 + 17LL, 8);
          v59 = *(char **)(a1 + 256);
        }
        v60 += 8;
      }
      while ( v61 != v60 );
    }
  }
  else
  {
    v59 = *(char **)(a1 + 256);
  }
  free(v59);
  v63 = *(void **)(a1 + 176);
  if ( v63 != (void *)(a1 + 192) )
    free(v63);
  v64 = *(__int64 **)(a1 + 96);
  v65 = *(unsigned int *)(a1 + 104);
  v66 = &v64[v65];
  if ( v64 != v66 )
  {
    v67 = *(_QWORD *)(a1 + 96);
    while ( 1 )
    {
      v68 = (unsigned int)(((__int64)v64 - v67) >> 3) >> 7;
      v69 = 4096LL << v68;
      v70 = v68 < 0x1E;
      v71 = *v64;
      if ( !v70 )
        v69 = 0x40000000000LL;
      v72 = v71 + v69;
      if ( v71 == *(_QWORD *)(v67 + 8 * v65 - 8) )
        v72 = *(_QWORD *)(a1 + 80);
      for ( i = ((v71 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1776; i <= v72; i += 1776LL )
      {
        v74 = i - 1776;
        sub_FEE520(v74);
      }
      if ( v66 == ++v64 )
        break;
      v67 = *(_QWORD *)(a1 + 96);
      v65 = *(unsigned int *)(a1 + 104);
    }
  }
  v75 = *(_QWORD **)(a1 + 144);
  v76 = &v75[2 * *(unsigned int *)(a1 + 152)];
  if ( v75 != v76 )
  {
    do
    {
      v77 = *v75 + v75[1];
      for ( j = ((*v75 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 1776; v77 >= j; j += 1776LL )
      {
        v79 = j - 1776;
        sub_FEE520(v79);
      }
      v75 += 2;
    }
    while ( v76 != v75 );
    v80 = *(__int64 **)(a1 + 144);
    v81 = &v80[2 * *(unsigned int *)(a1 + 152)];
    while ( v81 != v80 )
    {
      v82 = v80[1];
      v83 = *v80;
      v80 += 2;
      operator delete(v83, v82, 16);
    }
  }
  *(_DWORD *)(a1 + 152) = 0;
  v84 = *(unsigned int *)(a1 + 104);
  if ( !(_DWORD)v84 )
    goto LABEL_118;
  *(_QWORD *)(a1 + 160) = 0;
  v91 = *(__int64 **)(a1 + 96);
  v92 = v91 + 1;
  v93 = &v91[v84];
  v94 = v91 + 1;
  *(_QWORD *)&v104[0] = *v91 + 4096;
  *(__m128 *)(a1 + 80) = _mm_loadh_ps(v104);
  if ( v93 != v91 + 1 )
  {
    while ( 1 )
    {
      v96 = (unsigned int)(v94 - v91) >> 7;
      if ( v96 > 0x1D )
      {
        v95 = *v94++;
        operator delete(v95, 0x40000000000LL, 16);
        if ( v93 == v94 )
          goto LABEL_145;
      }
      else
      {
        v97 = *v94++;
        operator delete(v97, 4096LL << v96, 16);
        if ( v94 == v93 )
        {
LABEL_145:
          v91 = *(__int64 **)(a1 + 96);
          v92 = v91 + 1;
          v94 = v91 + 1;
          break;
        }
      }
      v91 = *(__int64 **)(a1 + 96);
    }
  }
  *(_DWORD *)(a1 + 104) = 1;
  v98 = v91;
  while ( 1 )
  {
    v99 = 0x40000000000LL;
    v100 = (unsigned int)(v91 - v98) >> 7;
    if ( v100 <= 0x1D )
      v99 = 4096LL << v100;
    operator delete(*v91, v99, 16);
    v91 = v92;
    if ( v92 == v94 )
      break;
    v98 = *(__int64 **)(a1 + 96);
    ++v92;
  }
  v101 = *(__int64 **)(a1 + 144);
  v85 = &v101[2 * *(unsigned int *)(a1 + 152)];
  if ( v101 != v85 )
  {
    do
    {
      v102 = v101[1];
      v103 = *v101;
      v101 += 2;
      operator delete(v103, v102, 16);
    }
    while ( v85 != v101 );
LABEL_118:
    v85 = *(__int64 **)(a1 + 144);
  }
  if ( v85 != (__int64 *)(a1 + 160) )
    free(v85);
  v86 = *(void **)(a1 + 96);
  if ( v86 != (void *)(a1 + 112) )
    free(v86);
  v87 = *(void ***)(a1 + 40);
  v88 = &v87[*(unsigned int *)(a1 + 48)];
  if ( v87 != v88 )
  {
    while ( 1 )
    {
      v89 = *--v88;
      if ( !*v88 )
        goto LABEL_126;
      v90 = *(void (**)(void))(*(_QWORD *)v89 + 16LL);
      if ( (char *)v90 == (char *)sub_13F27A0 )
      {
        operator delete(v89, 8u);
LABEL_126:
        if ( v87 == v88 )
          goto LABEL_130;
      }
      else
      {
        v90();
        if ( v87 == v88 )
        {
LABEL_130:
          v88 = *(void ***)(a1 + 40);
          break;
        }
      }
    }
  }
  if ( v88 != (void **)(a1 + 56) )
    free(v88);
}
