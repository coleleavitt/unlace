__int64 (__fastcall **__fastcall sub_A1CFD0(__int64 a1))()
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  void *v7; // r13
  __int64 v8; // rsi
  char *v9; // r15
  __int64 v10; // rax
  char *v11; // rbx
  char *v12; // r14
  void *v13; // r13
  char *v14; // rsi
  char *v15; // r15
  __int64 v16; // rax
  char *v17; // rbx
  char *v18; // r14
  void *v19; // r13
  char *v20; // rsi
  __int64 v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi
  void *v25; // rdi
  _QWORD *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // r15
  __int64 v35; // r15
  void *v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // r15
  void *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rdi
  void *v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  _QWORD *v58; // rbx
  __int64 v59; // rax
  _QWORD *v60; // r12
  void *v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  _QWORD *v71; // rbx
  __int64 v72; // rax
  _QWORD *v73; // r12
  void *v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdi
  _QWORD *v78; // rbx
  __int64 v79; // rax
  _QWORD *v80; // r12
  void *v81; // rdi
  __int64 v82; // rdi
  __int64 *v83; // r13
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // r15
  void *v88; // r14
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rdi
  void *v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rdi
  void *v95; // rdi
  __int64 *v96; // rbx
  __int64 v97; // rdi
  void *v98; // rdi
  void *v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v104; // rdi
  _QWORD *v105; // [rsp+8h] [rbp-40h]
  __int64 *v106; // [rsp+8h] [rbp-40h]

  v2 = a1 + 1448;
  *(_QWORD *)(v2 - 1448) = &off_1C709B8;
  *(_QWORD *)(v2 - 1392) = off_1C70B70;
  sub_2A6060(v2);
  sub_25A130((char *)(a1 + 1408));
  v3 = *(void **)(a1 + 1376);
  if ( v3 )
    sub_186B220(v3);
  sub_2334C0((__int64 *)(a1 + 1360));
  v4 = *(_QWORD *)(a1 + 1320);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 40 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4);
        v8 = v4 + 16;
        v4 += 40;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = *(_QWORD *)(a1 + 1320);
    }
    sub_186B220((void *)(v4 - 8));
  }
  v9 = *(char **)(a1 + 1296);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 1304);
    if ( (_DWORD)v10 )
    {
      v11 = *(char **)(a1 + 1296);
      v12 = &v9[56 * v10];
      do
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11 + 16);
        v14 = v11 + 32;
        v11 += 56;
        sub_182CBA0(v13, v14);
      }
      while ( v11 != v12 );
    }
    sub_186B220(v9);
  }
  v15 = *(char **)(a1 + 1264);
  if ( v15 )
  {
    v16 = *(unsigned int *)(a1 + 1272);
    if ( (_DWORD)v16 )
    {
      v17 = *(char **)(a1 + 1264);
      v18 = &v15[56 * v16];
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v17 + 8);
        v20 = v17 + 24;
        v17 += 56;
        sub_182CBA0(v19, v20);
      }
      while ( v17 != v18 );
    }
    sub_186B220(v15);
  }
  v21 = *(_QWORD *)(a1 + 1240);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(void **)(a1 + 1216);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 1192);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(_QWORD *)(a1 + 1176);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void **)(a1 + 1152);
  if ( v25 )
    sub_186B220(v25);
  v26 = (_QWORD *)(a1 + 1080);
  v105 = (_QWORD *)(a1 + 936);
  do
  {
    while ( 1 )
    {
      v27 = v26[4];
      v28 = v27;
      if ( v27 )
      {
        v29 = *(unsigned int *)(v27 - 4);
        v30 = v27 + 16 * v29;
        if ( (_DWORD)v29 )
        {
          do
          {
            v31 = v28;
            v28 += 16;
            sub_15D0DF0(v31);
          }
          while ( v30 != v28 );
          v27 = v26[4];
        }
        sub_186B220((void *)(v27 - 8));
      }
      v32 = v26[3];
      v33 = v32;
      if ( v32 )
      {
        v34 = *(unsigned int *)(v32 - 4);
        if ( (_DWORD)v34 )
        {
          v35 = v32 + 32 * v34;
          do
          {
            v36 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v32);
            v37 = v32 + 16;
            v32 += 32;
            sub_182CBA0(v36, v37);
          }
          while ( v35 != v32 );
          v33 = v26[3];
        }
        sub_186B220((void *)(v33 - 8));
      }
      v38 = v26[2];
      v39 = v38;
      if ( v38 )
      {
        v40 = *(unsigned int *)(v38 - 4);
        if ( (_DWORD)v40 )
        {
          v41 = v38 + 32 * v40;
          do
          {
            v42 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v38);
            v43 = v38 + 16;
            v38 += 32;
            sub_182CBA0(v42, v43);
          }
          while ( v38 != v41 );
          v39 = v26[2];
        }
        sub_186B220((void *)(v39 - 8));
      }
      v44 = v26[1];
      if ( v44 )
        sub_186B220((void *)(v44 - 8));
      if ( !*v26 )
        break;
      v45 = (void *)(*v26 - 8LL);
      v26 -= 6;
      sub_186B220(v45);
      if ( v105 == v26 )
        goto LABEL_51;
    }
    v26 -= 6;
  }
  while ( v105 != v26 );
LABEL_51:
  v46 = *(_QWORD *)(a1 + 976);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 968);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 960);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(_QWORD *)(a1 + 952);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(_QWORD *)(a1 + 944);
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  sub_25A130((char *)(a1 + 888));
  v51 = *(_QWORD *)(a1 + 880);
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v52 = *(_QWORD *)(a1 + 864);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(_QWORD *)(a1 + 856);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 840);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 824);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 808);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 800);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v58 = *(_QWORD **)(a1 + 784);
  if ( v58 )
  {
    v59 = *((unsigned int *)v58 - 1);
    if ( (_DWORD)v59 )
    {
      v60 = &v58[v59];
      do
      {
        while ( *v58 )
        {
          v61 = (void *)(*v58++ - 8LL);
          sub_186B220(v61);
          if ( v60 == v58 )
          {
            v58 = *(_QWORD **)(a1 + 784);
            goto LABEL_81;
          }
        }
        ++v58;
      }
      while ( v58 != v60 );
      v58 = *(_QWORD **)(a1 + 784);
    }
LABEL_81:
    sub_186B220(v58 - 1);
  }
  v62 = *(_QWORD *)(a1 + 776);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  sub_180C0E0(a1 + 720);
  v63 = *(_QWORD *)(a1 + 704);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(_QWORD *)(a1 + 696);
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  v65 = *(_QWORD *)(a1 + 688);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = *(_QWORD *)(a1 + 672);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(_QWORD *)(a1 + 664);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  v68 = *(_QWORD *)(a1 + 656);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v69 = *(_QWORD *)(a1 + 648);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  v70 = *(_QWORD *)(a1 + 640);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  v71 = *(_QWORD **)(a1 + 632);
  if ( v71 )
  {
    v72 = *((unsigned int *)v71 - 1);
    if ( (_DWORD)v72 )
    {
      v73 = &v71[v72];
      do
      {
        while ( *v71 )
        {
          v74 = (void *)(*v71++ - 8LL);
          sub_186B220(v74);
          if ( v73 == v71 )
          {
            v71 = *(_QWORD **)(a1 + 632);
            goto LABEL_106;
          }
        }
        ++v71;
      }
      while ( v71 != v73 );
      v71 = *(_QWORD **)(a1 + 632);
    }
LABEL_106:
    sub_186B220(v71 - 1);
  }
  v75 = *(_QWORD *)(a1 + 624);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  v76 = *(_QWORD *)(a1 + 616);
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  sub_27FC20((__int64 *)(a1 + 608));
  sub_27FC20((__int64 *)(a1 + 600));
  v77 = *(_QWORD *)(a1 + 592);
  if ( v77 )
    sub_186B220((void *)(v77 - 8));
  v78 = *(_QWORD **)(a1 + 584);
  if ( v78 )
  {
    v79 = *((unsigned int *)v78 - 1);
    if ( (_DWORD)v79 )
    {
      v80 = &v78[2 * v79];
      do
      {
        while ( *v78 )
        {
          v81 = (void *)(*v78 - 8LL);
          v78 += 2;
          sub_186B220(v81);
          if ( v80 == v78 )
          {
            v78 = *(_QWORD **)(a1 + 584);
            goto LABEL_119;
          }
        }
        v78 += 2;
      }
      while ( v78 != v80 );
      v78 = *(_QWORD **)(a1 + 584);
    }
LABEL_119:
    sub_186B220(v78 - 1);
  }
  v82 = *(_QWORD *)(a1 + 576);
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  v83 = *(__int64 **)(a1 + 568);
  if ( v83 )
  {
    v84 = *((unsigned int *)v83 - 1);
    if ( (_DWORD)v84 )
    {
      v106 = &v83[3 * v84];
      do
      {
        v85 = *v83;
        if ( *v83 )
        {
          v86 = *(unsigned int *)(v85 - 4);
          if ( (_DWORD)v86 )
          {
            v87 = v85 + 40 * v86;
            do
            {
              v88 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v85);
              v89 = v85 + 16;
              v85 += 40;
              sub_182CBA0(v88, v89);
            }
            while ( v85 != v87 );
            v85 = *v83;
          }
          sub_186B220((void *)(v85 - 8));
        }
        v83 += 3;
      }
      while ( v83 != v106 );
      v83 = *(__int64 **)(a1 + 568);
    }
    sub_186B220(v83 - 1);
  }
  v90 = *(_QWORD *)(a1 + 560);
  if ( v90 )
    sub_186B220((void *)(v90 - 8));
  v91 = *(_QWORD *)(a1 + 552);
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  v92 = *(void **)(a1 + 528);
  if ( v92 )
    sub_186B220(v92);
  v93 = *(_QWORD *)(a1 + 496);
  if ( v93 )
    sub_186B220((void *)(v93 - 8));
  v94 = *(_QWORD *)(a1 + 488);
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  v95 = *(void **)(a1 + 440);
  if ( v95 )
    sub_186B220(v95);
  v96 = *(__int64 **)(a1 + 416);
  if ( v96 )
  {
    sub_2334C0(v96 + 11);
    v97 = v96[10];
    if ( v97 )
      sub_186B220((void *)(v97 - 8));
    sub_186B220(v96);
  }
  sub_18572D0((void *)(a1 + 368));
  v98 = *(void **)(a1 + 168);
  if ( v98 )
    sub_186B220(v98);
  v99 = *(void **)(a1 + 144);
  if ( v99 )
    sub_186B220(v99);
  v100 = *(_QWORD *)(a1 + 136);
  if ( v100 )
    sub_186B220((void *)(v100 - 8));
  v101 = *(_QWORD *)(a1 + 128);
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  sub_25A130((char *)(a1 + 96));
  sub_25A130((char *)(a1 + 64));
  v102 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v102 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v102 - 8));
  v104 = *(_QWORD *)(a1 + 32);
  if ( v104 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v104 - 8));
  return result;
}

