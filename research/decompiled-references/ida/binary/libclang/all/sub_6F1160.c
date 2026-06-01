void __fastcall sub_6F1160(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // r15
  __int64 v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  __int64 v30; // r12
  _QWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  _QWORD *v41; // rdi
  __int64 v42; // rsi
  _DWORD *v43; // rdi
  void *v45; // rbx
  void *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // r13
  __int64 v49; // rbx
  char *v50; // rbx
  char *v51; // r12
  void *v52; // rdi
  void *v53; // rbx
  void *v54; // rbx
  void *v55; // rbx
  void *v56; // rdi
  void *v57; // rdi
  __int64 v58; // rsi
  unsigned int v59; // eax
  _QWORD *v60; // rbx
  _QWORD *v61; // r12
  __int64 v62; // rdi
  __int64 v63; // rsi
  unsigned int v64; // eax
  _QWORD *v65; // rbx
  _QWORD *v66; // r12
  __int64 v67; // rdi
  unsigned int v68; // eax
  _QWORD *v69; // rbx
  _QWORD *v70; // r12
  __int64 v71; // rax
  void **v72; // rax
  void **v73; // r13
  char *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r12
  __int64 v77; // rbx
  __int64 v78; // rdi
  unsigned int v79; // eax
  _QWORD *v80; // rbx
  _QWORD *v81; // r12
  __int64 v82; // rax
  void **v83; // rax
  void **v84; // r13
  unsigned __int64 v85; // rsi
  void *v86; // rdi
  char *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r12
  __int64 v90; // rbx
  _QWORD *v91; // rdi
  __int64 v92; // rsi
  unsigned __int64 v93; // rsi
  void *v94; // rdi
  void *v95; // rdi
  _QWORD *v96; // [rsp+0h] [rbp-48h]
  _QWORD *v97; // [rsp+8h] [rbp-40h]

  sub_6B4D40(a1);
  v2 = *(unsigned int *)(a1 + 23208);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD *)(a1 + 23192);
    v4 = v3 + 40 * v2;
    do
    {
      if ( *(_QWORD *)v3 && *(_QWORD *)v3 != -1 || *(_DWORD *)(v3 + 8) )
      {
        v5 = *(char **)(v3 + 16);
        if ( *(_DWORD *)(v3 + 28) )
        {
          v6 = *(unsigned int *)(v3 + 24);
          if ( (_DWORD)v6 )
          {
            v7 = 8 * v6;
            v8 = 0;
            do
            {
              v9 = *(_QWORD *)&v5[v8];
              if ( v9 && v9 != -8 )
              {
                operator delete();
                v5 = *(char **)(v3 + 16);
              }
              v8 += 8;
            }
            while ( v8 != v7 );
          }
        }
        free(v5);
      }
      v3 += 40;
    }
    while ( v4 != v3 );
  }
  operator delete();
  v10 = *(_QWORD **)(a1 + 23144);
  v11 = &v10[*(unsigned int *)(a1 + 23152)];
  v97 = v10;
  if ( v10 != v11 )
  {
    do
    {
      v12 = *--v11;
      v96 = (_QWORD *)v12;
      if ( v12 )
      {
        v13 = *(_QWORD **)v12;
        v14 = (_QWORD *)(*(_QWORD *)v12 + 136LL * *(unsigned int *)(v12 + 8));
        if ( *(_QWORD **)v12 != v14 )
        {
          do
          {
            v15 = *((unsigned int *)v14 - 30);
            v16 = (_QWORD *)*(v14 - 16);
            v14 -= 17;
            v17 = &v16[7 * v15];
            if ( v16 != v17 )
            {
              do
              {
                v17 -= 7;
                v18 = (_QWORD *)v17[2];
                if ( v18 != v17 + 4 )
                  free(v18);
              }
              while ( v16 != v17 );
              v17 = (_QWORD *)v14[1];
            }
            if ( v17 != v14 + 3 )
              free(v17);
          }
          while ( v13 != v14 );
          v14 = (_QWORD *)*v96;
        }
        if ( v14 != v96 + 2 )
          free(v14);
        operator delete(v96, 0x120u);
      }
      *v11 = 0;
    }
    while ( v97 != v11 );
    v11 = *(_QWORD **)(a1 + 23144);
  }
  if ( v11 != (_QWORD *)(a1 + 23160) )
    free(v11);
  v19 = *(char **)(a1 + 23120);
  if ( *(_DWORD *)(a1 + 23132) )
  {
    v20 = *(unsigned int *)(a1 + 23128);
    if ( (_DWORD)v20 )
    {
      v21 = 8 * v20;
      v22 = 0;
      do
      {
        v23 = *(_QWORD *)&v19[v22];
        if ( v23 != -8 && v23 )
        {
          operator delete();
          v19 = *(char **)(a1 + 23120);
        }
        v22 += 8;
      }
      while ( v22 != v21 );
    }
  }
  free(v19);
  v24 = *(_QWORD *)(a1 + 23112);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = *(void **)(a1 + 23088);
  *(_QWORD *)(a1 + 23112) = 0;
  if ( v25 )
    operator delete(v25, *(_QWORD *)(a1 + 23104) - (_QWORD)v25);
  v26 = *(void **)(a1 + 22808);
  if ( v26 != (void *)(a1 + 22824) )
    free(v26);
  v27 = *(unsigned int *)(a1 + 22744);
  if ( (_DWORD)v27 )
  {
    v28 = *(_QWORD *)(a1 + 22728);
    v29 = (_QWORD *)(v28 + 32);
    v30 = v28 + (v27 << 7) + 32;
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v29 - 32) + 2) > 1u )
        {
          v31 = (_QWORD *)*(v29 - 2);
          if ( v31 != v29 )
            break;
        }
        v29 += 16;
        if ( v29 == (_QWORD *)v30 )
          goto LABEL_53;
      }
      free(v31);
      v29 += 16;
    }
    while ( v29 != (_QWORD *)v30 );
  }
LABEL_53:
  operator delete();
  v32 = *(unsigned int *)(a1 + 22712);
  if ( (_DWORD)v32 )
  {
    v33 = *(_QWORD **)(a1 + 22696);
    v34 = &v33[7 * v32];
    do
    {
      if ( *v33 != -8192 && *v33 != -4096 )
      {
        v35 = (_QWORD *)v33[1];
        if ( v35 != v33 + 3 )
          free(v35);
      }
      v33 += 7;
    }
    while ( v34 != v33 );
  }
  operator delete();
  operator delete();
  operator delete();
  v36 = *(void **)(a1 + 22632);
  if ( v36 != (void *)(a1 + 22648) )
    free(v36);
  operator delete();
  operator delete();
  v37 = *(void **)(a1 + 18424);
  if ( v37 != (void *)(a1 + 18440) )
    free(v37);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v38 = *(unsigned int *)(a1 + 18248);
  if ( (_DWORD)v38 )
  {
    v39 = *(_QWORD *)(a1 + 18232);
    v40 = v39 + 56 * v38;
    do
    {
      while ( (unsigned int)(*(_DWORD *)v39 + 1) <= 1 )
      {
        v39 += 56;
        if ( v40 == v39 )
          goto LABEL_69;
      }
      v41 = *(_QWORD **)(v39 + 24);
      v39 += 56;
      sub_6A8EF0(v41);
    }
    while ( v40 != v39 );
LABEL_69:
    v38 = *(unsigned int *)(a1 + 18248);
  }
  v42 = 56 * v38;
  operator delete();
  v43 = *(_DWORD **)(a1 + 18200);
  if ( v43 )
  {
    if ( v43[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v43 + 8LL))(v43, v42);
  }
  sub_25ABF80(a1 + 18184, v42);
  sub_25ABF80(a1 + 18168, v42);
  sub_25ABF80(a1 + 17416, v42);
  sub_25ABF80(a1 + 17400, v42);
  sub_25ABF80(a1 + 17384, v42);
  v45 = *(void **)(a1 + 17328);
  if ( v45 )
  {
    sub_7DB490(*(_QWORD *)(a1 + 17328));
    operator delete(v45, 0x18u);
  }
  v46 = *(void **)(a1 + 17320);
  *(_QWORD *)(a1 + 17328) = 0;
  if ( v46 )
  {
    sub_8C9C10(v46);
    operator delete(v46, 0x28u);
  }
  v47 = *(_QWORD *)(a1 + 17272);
  *(_QWORD *)(a1 + 17320) = 0;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
  *(_QWORD *)(a1 + 17272) = 0;
  sub_C70160(a1 + 2288);
  v48 = *(_QWORD *)(a1 + 2208);
  v49 = v48 + 8LL * *(unsigned int *)(a1 + 2216);
  while ( v49 != v48 )
  {
    v48 += 8;
    operator delete();
  }
  v50 = *(char **)(a1 + 2256);
  v51 = &v50[16 * *(unsigned int *)(a1 + 2264)];
  if ( v50 != v51 )
  {
    do
    {
      v50 += 16;
      operator delete();
    }
    while ( v51 != v50 );
    v51 = *(char **)(a1 + 2256);
  }
  if ( v51 != (char *)(a1 + 2272) )
    free(v51);
  v52 = *(void **)(a1 + 2208);
  if ( v52 != (void *)(a1 + 2224) )
    free(v52);
  v53 = *(void **)(a1 + 2184);
  if ( v53 )
  {
    sub_CA1BA0(*(_QWORD *)(a1 + 2184));
    operator delete(v53, 0x18u);
  }
  v54 = *(void **)(a1 + 2176);
  *(_QWORD *)(a1 + 2184) = 0;
  if ( v54 )
  {
    sub_D62E70(v54);
    operator delete(v54, 0x20u);
  }
  v55 = *(void **)(a1 + 2168);
  *(_QWORD *)(a1 + 2176) = 0;
  if ( v55 )
  {
    sub_CA1C10(v55);
    operator delete(v55, 0x10u);
  }
  *(_QWORD *)(a1 + 2168) = 0;
  operator delete();
  operator delete();
  v56 = *(void **)(a1 + 2032);
  if ( v56 != (void *)(a1 + 2048) )
    free(v56);
  operator delete();
  v57 = *(void **)(a1 + 1992);
  if ( v57 != (void *)(a1 + 2008) )
    free(v57);
  v58 = 16LL * *(unsigned int *)(a1 + 1984);
  operator delete();
  v59 = *(_DWORD *)(a1 + 1960);
  if ( v59 )
  {
    v60 = *(_QWORD **)(a1 + 1944);
    v61 = &v60[2 * v59];
    do
    {
      if ( *v60 != -4096 && *v60 != -8192 )
      {
        v62 = v60[1];
        if ( v62 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 8LL))(v62, v58);
        v60[1] = 0;
      }
      v60 += 2;
    }
    while ( v61 != v60 );
    v59 = *(_DWORD *)(a1 + 1960);
  }
  v63 = 16LL * v59;
  operator delete();
  v64 = *(_DWORD *)(a1 + 1936);
  if ( v64 )
  {
    v65 = *(_QWORD **)(a1 + 1920);
    v66 = &v65[2 * v64];
    do
    {
      if ( *v65 != -4096 && *v65 != -8192 )
      {
        v67 = v65[1];
        if ( v67 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 8LL))(v67, v63);
        v65[1] = 0;
      }
      v65 += 2;
    }
    while ( v66 != v65 );
  }
  operator delete();
  v68 = *(_DWORD *)(a1 + 1912);
  if ( v68 )
  {
    v69 = *(_QWORD **)(a1 + 1896);
    v70 = &v69[2 * v68];
    do
    {
      if ( *v69 != -4096 && *v69 != -8192 )
      {
        v71 = v69[1];
        if ( v71 )
        {
          if ( (v71 & 4) != 0 )
          {
            v72 = (void **)(v71 & 0xFFFFFFFFFFFFFFF8LL);
            v73 = v72;
            if ( v72 )
            {
              if ( *v72 != v72 + 2 )
                free(*v72);
              operator delete(v73, 0x30u);
            }
          }
        }
      }
      v69 += 2;
    }
    while ( v70 != v69 );
  }
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v74 = *(char **)(a1 + 1728);
  if ( *(_DWORD *)(a1 + 1740) )
  {
    v75 = *(unsigned int *)(a1 + 1736);
    if ( (_DWORD)v75 )
    {
      v76 = 8 * v75;
      v77 = 0;
      do
      {
        v78 = *(_QWORD *)&v74[v77];
        if ( v78 != -8 && v78 )
        {
          operator delete();
          v74 = *(char **)(a1 + 1728);
        }
        v77 += 8;
      }
      while ( v77 != v76 );
    }
  }
  free(v74);
  operator delete();
  v79 = *(_DWORD *)(a1 + 1688);
  if ( v79 )
  {
    v80 = *(_QWORD **)(a1 + 1672);
    v81 = &v80[2 * v79];
    do
    {
      if ( *v80 != -8192 && *v80 != -4096 )
      {
        v82 = v80[1];
        if ( v82 )
        {
          if ( (v82 & 4) != 0 )
          {
            v83 = (void **)(v82 & 0xFFFFFFFFFFFFFFF8LL);
            v84 = v83;
            if ( v83 )
            {
              if ( *v83 != v83 + 2 )
                free(*v83);
              operator delete(v84, 0x30u);
            }
          }
        }
      }
      v80 += 2;
    }
    while ( v81 != v80 );
  }
  operator delete();
  operator delete();
  v85 = 16LL * *(unsigned int *)(a1 + 1640);
  operator delete();
  sub_25ABF80(a1 + 1352, v85);
  v86 = *(void **)(a1 + 1320);
  if ( v86 != (void *)(a1 + 1336) )
  {
    v85 = *(_QWORD *)(a1 + 1336) + 1LL;
    operator delete(v86, v85);
  }
  v87 = *(char **)(a1 + 1288);
  if ( *(_DWORD *)(a1 + 1300) )
  {
    v88 = *(unsigned int *)(a1 + 1296);
    if ( (_DWORD)v88 )
    {
      v89 = 8 * v88;
      v90 = 0;
      do
      {
        v91 = *(_QWORD **)&v87[v90];
        if ( v91 && v91 != (_QWORD *)-8LL )
        {
          v85 = *v91 + 17LL;
          operator delete();
          v87 = *(char **)(a1 + 1288);
        }
        v90 += 8;
      }
      while ( v90 != v89 );
    }
  }
  free(v87);
  sub_25ABF80(a1 + 1272, v85);
  sub_25ABF80(a1 + 1256, v85);
  sub_25ABF80(a1 + 1240, v85);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v92 = 16LL * *(unsigned int *)(a1 + 1064);
  operator delete();
  sub_25ABF80(a1 + 1024, v92);
  sub_25ABF80(a1 + 1000, v92);
  sub_25ABF80(a1 + 976, v92);
  sub_25ABF80(a1 + 952, v92);
  sub_25ABF80(a1 + 936, v92);
  sub_25ABF80(a1 + 920, v92);
  sub_25ABF80(a1 + 904, v92);
  sub_25ABF80(a1 + 888, v92);
  sub_25ABF80(a1 + 872, v92);
  sub_25ABF80(a1 + 856, v92);
  sub_25ABF80(a1 + 832, v92);
  sub_25ABF80(a1 + 816, v92);
  sub_25ABF80(a1 + 800, v92);
  sub_25ABF80(a1 + 784, v92);
  sub_25ABF80(a1 + 768, v92);
  sub_25ABF80(a1 + 752, v92);
  sub_6F0FC0(a1 + 728);
  v93 = 152LL * *(unsigned int *)(a1 + 744);
  operator delete();
  sub_25ABF80(a1 + 712, v93);
  sub_25ABF80(a1 + 696, v93);
  sub_25ABF80(a1 + 680, v93);
  sub_25ABF80(a1 + 664, v93);
  sub_25ABF80(a1 + 640, v93);
  sub_25ABF80(a1 + 624, v93);
  sub_25ABF80(a1 + 608, v93);
  sub_25ABF80(a1 + 592, v93);
  sub_25ABF80(a1 + 576, v93);
  sub_25ABF80(a1 + 560, v93);
  sub_25ABF80(a1 + 536, v93);
  sub_25ABF80(a1 + 520, v93);
  sub_25ABF80(a1 + 504, v93);
  sub_25ABF80(a1 + 488, v93);
  sub_25ABF80(a1 + 472, v93);
  sub_25ABF80(a1 + 456, v93);
  sub_25ABF80(a1 + 432, v93);
  sub_25ABF80(a1 + 408, v93);
  sub_25ABF80(a1 + 384, v93);
  sub_25ABF80(a1 + 368, v93);
  sub_25ABF80(a1 + 344, v93);
  sub_25ABF80(a1 + 328, v93);
  sub_25ABF80(a1 + 304, v93);
  sub_25ABF80(a1 + 288, v93);
  sub_25ABF80(a1 + 264, v93);
  sub_25ABF80(a1 + 240, v93);
  sub_25ABF80(a1 + 216, v93);
  v94 = *(void **)(a1 + 192);
  if ( v94 )
  {
    v93 = *(_QWORD *)(a1 + 208) - (_QWORD)v94;
    operator delete(v94, v93);
  }
  sub_25ABF80(a1 + 176, v93);
  sub_25ABF80(a1 + 152, v93);
  sub_25ABF80(a1 + 136, v93);
  sub_25ABF80(a1 + 120, v93);
  sub_25ABF80(a1 + 104, v93);
  sub_25ABF80(a1 + 88, v93);
  sub_25ABF80(a1 + 72, v93);
  sub_25ABF80(a1 + 56, v93);
  sub_25ABF80(a1 + 40, v93);
  sub_25ABF80(a1 + 24, v93);
  v95 = *(void **)(a1 + 8);
  if ( v95 != (void *)(a1 + 24) )
    free(v95);
}

