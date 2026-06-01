__int64 (__fastcall **__fastcall sub_9D4150(__int64 a1))()
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
  void *v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // r14
  void *v87; // r13
  void *v88; // r13
  void *v89; // r13
  __int64 v90; // rsi
  __int64 v91; // rdi
  _QWORD *v92; // rbx
  __int64 v93; // rax
  _QWORD *v94; // rbp
  void *v95; // rdi
  __int64 v96; // rdi
  __int64 *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // r15
  void *v102; // r14
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rdi
  void *v106; // rdi
  __int64 v107; // rdi
  __int64 v108; // rdi
  void *v109; // rdi
  __int64 *v110; // rbx
  __int64 v111; // rdi
  void *v112; // rdi
  void *v113; // rdi
  __int64 v114; // rdi
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v118; // rdi
  _QWORD *v119; // [rsp+8h] [rbp-40h]
  __int64 *v120; // [rsp+8h] [rbp-40h]

  v2 = a1 + 1640;
  *(_QWORD *)(v2 - 1640) = &off_1C70C00;
  *(_QWORD *)(v2 - 1584) = off_1C70DB8;
  sub_2A6060(v2);
  sub_25A130((char *)(a1 + 1600));
  v3 = *(void **)(a1 + 1568);
  if ( v3 )
    sub_186B220(v3);
  sub_2334C0((__int64 *)(a1 + 1552));
  v4 = *(_QWORD *)(a1 + 1512);
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
      v4 = *(_QWORD *)(a1 + 1512);
    }
    sub_186B220((void *)(v4 - 8));
  }
  v9 = *(char **)(a1 + 1488);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 1496);
    if ( (_DWORD)v10 )
    {
      v11 = *(char **)(a1 + 1488);
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
  v15 = *(char **)(a1 + 1456);
  if ( v15 )
  {
    v16 = *(unsigned int *)(a1 + 1464);
    if ( (_DWORD)v16 )
    {
      v17 = *(char **)(a1 + 1456);
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
  v21 = *(_QWORD *)(a1 + 1432);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(void **)(a1 + 1408);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 1384);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(_QWORD *)(a1 + 1368);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void **)(a1 + 1344);
  if ( v25 )
    sub_186B220(v25);
  v26 = (_QWORD *)(a1 + 1272);
  v119 = (_QWORD *)(a1 + 1128);
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
          while ( v28 != v30 );
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
      if ( v26 == v119 )
        goto LABEL_51;
    }
    v26 -= 6;
  }
  while ( v26 != v119 );
LABEL_51:
  v46 = *(_QWORD *)(a1 + 1168);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 1160);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 1152);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(_QWORD *)(a1 + 1144);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(_QWORD *)(a1 + 1136);
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  sub_2A6060(a1 + 1016);
  v51 = *(_QWORD *)(a1 + 1008);
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  v52 = *(_QWORD *)(a1 + 992);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(_QWORD *)(a1 + 984);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 968);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 952);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(_QWORD *)(a1 + 936);
  if ( v56 )
    sub_186B220((void *)(v56 - 8));
  v57 = *(_QWORD *)(a1 + 928);
  if ( v57 )
    sub_186B220((void *)(v57 - 8));
  v58 = *(_QWORD **)(a1 + 912);
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
            v58 = *(_QWORD **)(a1 + 912);
            goto LABEL_81;
          }
        }
        ++v58;
      }
      while ( v60 != v58 );
      v58 = *(_QWORD **)(a1 + 912);
    }
LABEL_81:
    sub_186B220(v58 - 1);
  }
  v62 = *(_QWORD *)(a1 + 904);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  sub_180C0E0(a1 + 848);
  v63 = *(_QWORD *)(a1 + 832);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(_QWORD *)(a1 + 824);
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  v65 = *(_QWORD *)(a1 + 816);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = *(_QWORD *)(a1 + 800);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(_QWORD *)(a1 + 792);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  v68 = *(_QWORD *)(a1 + 784);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v69 = *(_QWORD *)(a1 + 776);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  v70 = *(_QWORD *)(a1 + 768);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  v71 = *(_QWORD **)(a1 + 760);
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
            v71 = *(_QWORD **)(a1 + 760);
            goto LABEL_106;
          }
        }
        ++v71;
      }
      while ( v73 != v71 );
      v71 = *(_QWORD **)(a1 + 760);
    }
LABEL_106:
    sub_186B220(v71 - 1);
  }
  v75 = *(_QWORD *)(a1 + 752);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  v76 = *(_QWORD *)(a1 + 744);
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  v77 = *(_QWORD *)(a1 + 736);
  if ( v77 )
  {
    v78 = *(unsigned int *)(v77 - 4);
    if ( (_DWORD)v78 )
    {
      v79 = v77 + 96 * v78;
      do
      {
        v80 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77 + 64);
        sub_182CBA0(v80, v77 + 80);
        v81 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77 + 32);
        sub_182CBA0(v81, v77 + 48);
        v82 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77);
        v83 = v77 + 16;
        v77 += 96;
        sub_182CBA0(v82, v83);
      }
      while ( v79 != v77 );
      v77 = *(_QWORD *)(a1 + 736);
    }
    sub_186B220((void *)(v77 - 8));
  }
  v84 = *(_QWORD *)(a1 + 728);
  if ( v84 )
  {
    v85 = *(unsigned int *)(v84 - 4);
    if ( (_DWORD)v85 )
    {
      v86 = v84 + 96 * v85;
      do
      {
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v84 + 64);
        sub_182CBA0(v87, v84 + 80);
        v88 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v84 + 32);
        sub_182CBA0(v88, v84 + 48);
        v89 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v84);
        v90 = v84 + 16;
        v84 += 96;
        sub_182CBA0(v89, v90);
      }
      while ( v84 != v86 );
      v84 = *(_QWORD *)(a1 + 728);
    }
    sub_186B220((void *)(v84 - 8));
  }
  v91 = *(_QWORD *)(a1 + 720);
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  v92 = *(_QWORD **)(a1 + 712);
  if ( v92 )
  {
    v93 = *((unsigned int *)v92 - 1);
    if ( (_DWORD)v93 )
    {
      v94 = &v92[2 * v93];
      do
      {
        while ( *v92 )
        {
          v95 = (void *)(*v92 - 8LL);
          v92 += 2;
          sub_186B220(v95);
          if ( v94 == v92 )
          {
            v92 = *(_QWORD **)(a1 + 712);
            goto LABEL_131;
          }
        }
        v92 += 2;
      }
      while ( v92 != v94 );
      v92 = *(_QWORD **)(a1 + 712);
    }
LABEL_131:
    sub_186B220(v92 - 1);
  }
  v96 = *(_QWORD *)(a1 + 704);
  if ( v96 )
    sub_186B220((void *)(v96 - 8));
  v97 = *(__int64 **)(a1 + 696);
  if ( v97 )
  {
    v98 = *((unsigned int *)v97 - 1);
    if ( (_DWORD)v98 )
    {
      v120 = &v97[3 * v98];
      do
      {
        v99 = *v97;
        if ( *v97 )
        {
          v100 = *(unsigned int *)(v99 - 4);
          if ( (_DWORD)v100 )
          {
            v101 = v99 + 40 * v100;
            do
            {
              v102 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v99);
              v103 = v99 + 16;
              v99 += 40;
              sub_182CBA0(v102, v103);
            }
            while ( v99 != v101 );
            v99 = *v97;
          }
          sub_186B220((void *)(v99 - 8));
        }
        v97 += 3;
      }
      while ( v97 != v120 );
      v97 = *(__int64 **)(a1 + 696);
    }
    sub_186B220(v97 - 1);
  }
  v104 = *(_QWORD *)(a1 + 688);
  if ( v104 )
    sub_186B220((void *)(v104 - 8));
  v105 = *(_QWORD *)(a1 + 680);
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  v106 = *(void **)(a1 + 656);
  if ( v106 )
    sub_186B220(v106);
  v107 = *(_QWORD *)(a1 + 624);
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  v108 = *(_QWORD *)(a1 + 616);
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v109 = *(void **)(a1 + 568);
  if ( v109 )
    sub_186B220(v109);
  v110 = *(__int64 **)(a1 + 544);
  if ( v110 )
  {
    sub_2334C0(v110 + 11);
    v111 = v110[10];
    if ( v111 )
      sub_186B220((void *)(v111 - 8));
    sub_186B220(v110);
  }
  sub_18572D0((void *)(a1 + 496));
  v112 = *(void **)(a1 + 296);
  if ( v112 )
    sub_186B220(v112);
  v113 = *(void **)(a1 + 272);
  if ( v113 )
    sub_186B220(v113);
  v114 = *(_QWORD *)(a1 + 264);
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  v115 = *(_QWORD *)(a1 + 256);
  if ( v115 )
    sub_186B220((void *)(v115 - 8));
  sub_2A6060(a1 + 160);
  sub_2A6060(a1 + 64);
  v116 = *(_QWORD *)(a1 + 40);
  result = off_1C70148;
  *(_QWORD *)a1 = off_1C70148;
  if ( v116 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v116 - 8));
  v118 = *(_QWORD *)(a1 + 32);
  if ( v118 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v118 - 8));
  return result;
}

