__int64 (__fastcall **__fastcall sub_9D36E0(__int64 a1))()
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
  __int64 v30; // rbp
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
  _QWORD *v60; // rbp
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
  _QWORD *v73; // rbp
  void *v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // r14
  void *v80; // r13
  void *v81; // r13
  __int64 v82; // rsi
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // r14
  void *v86; // r13
  void *v87; // r13
  __int64 v88; // rsi
  __int64 v89; // rdi
  _QWORD *v90; // rbx
  __int64 v91; // rax
  _QWORD *v92; // rbp
  void *v93; // rdi
  __int64 v94; // rdi
  __int64 *v95; // r13
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // r15
  void *v100; // r14
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rdi
  void *v104; // rdi
  __int64 v105; // rdi
  __int64 v106; // rdi
  void *v107; // rdi
  __int64 *v108; // rbx
  __int64 v109; // rdi
  void *v110; // rdi
  void *v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rdi
  __int64 v114; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v116; // rdi
  _QWORD *v117; // [rsp+8h] [rbp-40h]
  __int64 *v118; // [rsp+8h] [rbp-40h]

  v2 = a1 + 1544;
  *(_QWORD *)(v2 - 1544) = &off_1C70770;
  *(_QWORD *)(v2 - 1488) = off_1C70928;
  sub_2A6060(v2);
  sub_25A130((char *)(a1 + 1504));
  v3 = *(void **)(a1 + 1472);
  if ( v3 )
    sub_186B220(v3);
  sub_2334C0((__int64 *)(a1 + 1456));
  v4 = *(_QWORD *)(a1 + 1416);
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
      v4 = *(_QWORD *)(a1 + 1416);
    }
    sub_186B220((void *)(v4 - 8));
  }
  v9 = *(char **)(a1 + 1392);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 1400);
    if ( (_DWORD)v10 )
    {
      v11 = *(char **)(a1 + 1392);
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
  v15 = *(char **)(a1 + 1360);
  if ( v15 )
  {
    v16 = *(unsigned int *)(a1 + 1368);
    if ( (_DWORD)v16 )
    {
      v17 = *(char **)(a1 + 1360);
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
  v21 = *(_QWORD *)(a1 + 1336);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(void **)(a1 + 1312);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 1288);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(_QWORD *)(a1 + 1272);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void **)(a1 + 1248);
  if ( v25 )
    sub_186B220(v25);
  v26 = (_QWORD *)(a1 + 1176);
  v117 = (_QWORD *)(a1 + 1032);
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
          while ( v41 != v38 );
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
      if ( v117 == v26 )
        goto LABEL_51;
    }
    v26 -= 6;
  }
  while ( v26 != v117 );
LABEL_51:
  v46 = *(_QWORD *)(a1 + 1072);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 1064);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 1056);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(_QWORD *)(a1 + 1048);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(_QWORD *)(a1 + 1040);
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  sub_25A130((char *)(a1 + 984));
  sub_25A130((char *)(a1 + 952));
  v51 = *(_QWORD *)(a1 + 944);
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v52 = *(_QWORD *)(a1 + 928);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(_QWORD *)(a1 + 920);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 904);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 888);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 872);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 864);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v58 = *(_QWORD **)(a1 + 848);
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
            v58 = *(_QWORD **)(a1 + 848);
            goto LABEL_81;
          }
        }
        ++v58;
      }
      while ( v60 != v58 );
      v58 = *(_QWORD **)(a1 + 848);
    }
LABEL_81:
    sub_186B220(v58 - 1);
  }
  v62 = *(_QWORD *)(a1 + 840);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  sub_180C0E0(a1 + 784);
  v63 = *(_QWORD *)(a1 + 768);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(_QWORD *)(a1 + 760);
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  v65 = *(_QWORD *)(a1 + 752);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = *(_QWORD *)(a1 + 736);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(_QWORD *)(a1 + 728);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  v68 = *(_QWORD *)(a1 + 720);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v69 = *(_QWORD *)(a1 + 712);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  v70 = *(_QWORD *)(a1 + 704);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  v71 = *(_QWORD **)(a1 + 696);
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
            v71 = *(_QWORD **)(a1 + 696);
            goto LABEL_106;
          }
        }
        ++v71;
      }
      while ( v73 != v71 );
      v71 = *(_QWORD **)(a1 + 696);
    }
LABEL_106:
    sub_186B220(v71 - 1);
  }
  v75 = *(_QWORD *)(a1 + 688);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  v76 = *(_QWORD *)(a1 + 680);
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  v77 = *(_QWORD *)(a1 + 672);
  if ( v77 )
  {
    v78 = *(unsigned int *)(v77 - 4);
    if ( (_DWORD)v78 )
    {
      v79 = v77 + (v78 << 6);
      do
      {
        v80 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77 + 32);
        sub_182CBA0(v80, v77 + 48);
        v81 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77);
        v82 = v77 + 16;
        v77 += 64;
        sub_182CBA0(v81, v82);
      }
      while ( v79 != v77 );
      v77 = *(_QWORD *)(a1 + 672);
    }
    sub_186B220((void *)(v77 - 8));
  }
  v83 = *(_QWORD *)(a1 + 664);
  if ( v83 )
  {
    v84 = *(unsigned int *)(v83 - 4);
    if ( (_DWORD)v84 )
    {
      v85 = v83 + (v84 << 6);
      do
      {
        v86 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v83 + 32);
        sub_182CBA0(v86, v83 + 48);
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v83);
        v88 = v83 + 16;
        v83 += 64;
        sub_182CBA0(v87, v88);
      }
      while ( v83 != v85 );
      v83 = *(_QWORD *)(a1 + 664);
    }
    sub_186B220((void *)(v83 - 8));
  }
  v89 = *(_QWORD *)(a1 + 656);
  if ( v89 )
    sub_186B220((void *)(v89 - 8));
  v90 = *(_QWORD **)(a1 + 648);
  if ( v90 )
  {
    v91 = *((unsigned int *)v90 - 1);
    if ( (_DWORD)v91 )
    {
      v92 = &v90[2 * v91];
      do
      {
        while ( *v90 )
        {
          v93 = (void *)(*v90 - 8LL);
          v90 += 2;
          sub_186B220(v93);
          if ( v92 == v90 )
          {
            v90 = *(_QWORD **)(a1 + 648);
            goto LABEL_131;
          }
        }
        v90 += 2;
      }
      while ( v90 != v92 );
      v90 = *(_QWORD **)(a1 + 648);
    }
LABEL_131:
    sub_186B220(v90 - 1);
  }
  v94 = *(_QWORD *)(a1 + 640);
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  v95 = *(__int64 **)(a1 + 632);
  if ( v95 )
  {
    v96 = *((unsigned int *)v95 - 1);
    if ( (_DWORD)v96 )
    {
      v118 = &v95[3 * v96];
      do
      {
        v97 = *v95;
        if ( *v95 )
        {
          v98 = *(unsigned int *)(v97 - 4);
          if ( (_DWORD)v98 )
          {
            v99 = v97 + 40 * v98;
            do
            {
              v100 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v97);
              v101 = v97 + 16;
              v97 += 40;
              sub_182CBA0(v100, v101);
            }
            while ( v97 != v99 );
            v97 = *v95;
          }
          sub_186B220((void *)(v97 - 8));
        }
        v95 += 3;
      }
      while ( v95 != v118 );
      v95 = *(__int64 **)(a1 + 632);
    }
    sub_186B220(v95 - 1);
  }
  v102 = *(_QWORD *)(a1 + 624);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  v103 = *(_QWORD *)(a1 + 616);
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  v104 = *(void **)(a1 + 592);
  if ( v104 )
    sub_186B220(v104);
  v105 = *(_QWORD *)(a1 + 560);
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  v106 = *(_QWORD *)(a1 + 552);
  if ( v106 )
    sub_186B220((void *)(v106 - 8));
  v107 = *(void **)(a1 + 504);
  if ( v107 )
    sub_186B220(v107);
  v108 = *(__int64 **)(a1 + 480);
  if ( v108 )
  {
    sub_2334C0(v108 + 11);
    v109 = v108[10];
    if ( v109 )
      sub_186B220((void *)(v109 - 8));
    sub_186B220(v108);
  }
  sub_18572D0((void *)(a1 + 432));
  v110 = *(void **)(a1 + 232);
  if ( v110 )
    sub_186B220(v110);
  v111 = *(void **)(a1 + 208);
  if ( v111 )
    sub_186B220(v111);
  v112 = *(_QWORD *)(a1 + 200);
  if ( v112 )
    sub_186B220((void *)(v112 - 8));
  v113 = *(_QWORD *)(a1 + 192);
  if ( v113 )
    sub_186B220((void *)(v113 - 8));
  sub_25A130((char *)(a1 + 160));
  sub_25A130((char *)(a1 + 128));
  sub_25A130((char *)(a1 + 96));
  sub_25A130((char *)(a1 + 64));
  v114 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v114 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v114 - 8));
  v116 = *(_QWORD *)(a1 + 32);
  if ( v116 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v116 - 8));
  return result;
}

