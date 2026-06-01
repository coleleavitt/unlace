void __fastcall sub_64D370(__int64 a1)
{
  __int64 v2; // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  void (__fastcall ***v6)(void *); // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  char *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp
  char *v15; // r12
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 *v55; // rbp
  __int64 *v56; // r12
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  void *v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  void *v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  void *v70; // rdi
  __int64 *v71; // rdi
  __int64 *v72; // rcx
  __int64 *i; // rax
  __int64 v74; // rdx
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi

  sub_64CDB0(a1);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    sub_18572D0((void *)(v2 + 8));
    sub_186B220((void *)v2);
  }
  sub_64AD00(*(_QWORD *)(a1 + 3008), *(_QWORD *)(a1 + 3016));
  sub_64AD00(*(_QWORD *)(a1 + 2992), *(_QWORD *)(a1 + 3000));
  v3 = *(void (__fastcall ****)(_QWORD))(a1 + 2976);
  if ( v3 )
  {
    (**v3)(*(_QWORD *)(a1 + 2976));
    sub_186B220(v3);
  }
  v4 = *(void (__fastcall ****)(void *))(a1 + 2960);
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 2))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = *(void (__fastcall ****)(void *))(a1 + 2952);
  if ( v6 )
  {
    v5 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v5 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  sub_2334C0((__int64 *)(a1 + 2936));
  v7 = *(_QWORD *)(a1 + 2928);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 2920);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  sub_2334C0((__int64 *)(a1 + 2904));
  v9 = *(_QWORD *)(a1 + 2888);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 2880);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(void **)(a1 + 2856);
  if ( v11 )
    sub_186B220(v11);
  sub_63D960(a1 + 2608);
  sub_63D960(a1 + 2360);
  v12 = *(char **)(a1 + 2336);
  if ( v12 )
  {
    v13 = *(unsigned int *)(a1 + 2344);
    if ( (_DWORD)v13 )
    {
      v14 = *(_QWORD *)(a1 + 2336);
      v15 = &v12[16 * v13];
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( !v16 )
            break;
          v14 += 16;
          sub_186B220((void *)(v16 - 8));
          if ( v15 == (char *)v14 )
            goto LABEL_26;
        }
        v14 += 16;
      }
      while ( (char *)v14 != v15 );
    }
LABEL_26:
    sub_186B220(v12);
  }
  v17 = *(void **)(a1 + 2312);
  if ( v17 )
    sub_186B220(v17);
  v18 = *(void **)(a1 + 2288);
  if ( v18 )
    sub_186B220(v18);
  v19 = *(void **)(a1 + 2264);
  if ( v19 )
    sub_186B220(v19);
  v20 = *(_QWORD *)(a1 + 2256);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = *(_QWORD *)(a1 + 2248);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 2240);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 2232);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_2334C0((__int64 *)(a1 + 2216));
  v24 = *(void **)(a1 + 2192);
  if ( v24 )
    sub_186B220(v24);
  v25 = *(void **)(a1 + 2168);
  if ( v25 )
    sub_186B220(v25);
  v26 = *(__int64 **)(a1 + 2160);
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = *(_QWORD *)(a1 + 2152);
          v5 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_52;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_52:
    v26 = *(__int64 **)(a1 + 2160);
    if ( v26 )
LABEL_53:
      sub_186B220(v26 - 1);
  }
  v30 = *(__int64 **)(a1 + 2136);
  if ( v30 )
  {
    v31 = &v30[*((unsigned int *)v30 - 1)];
    if ( v30 >= v31 )
      goto LABEL_62;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(_QWORD *)(a1 + 2128);
          v5 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_61;
      }
      sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_61:
    v30 = *(__int64 **)(a1 + 2136);
    if ( v30 )
LABEL_62:
      sub_186B220(v30 - 1);
  }
  sub_180C0E0(a1 + 2088);
  v34 = *(_QWORD *)(a1 + 2080);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 2072);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  sub_6440F0(a1 + 2040);
  v36 = *(_QWORD *)(a1 + 2024);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 2016);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 2008);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = *(void **)(a1 + 1984);
  if ( v39 )
    sub_186B220(v39);
  v40 = *(void **)(a1 + 1960);
  if ( v40 )
    sub_186B220(v40);
  v41 = *(void **)(a1 + 1848);
  if ( v41 )
    sub_186B220(v41);
  v42 = *(void **)(a1 + 1840);
  if ( v42 )
    sub_186B220(v42);
  v43 = *(void **)(a1 + 1696);
  if ( v43 )
    sub_186B220(v43);
  v44 = *(void **)(a1 + 1656);
  if ( v44 )
    sub_186B220(v44);
  v45 = *(void **)(a1 + 1648);
  if ( v45 )
    sub_186B220(v45);
  v46 = *(_QWORD *)(a1 + 1600);
  *(_QWORD *)(a1 + 1072) = &off_1C529E0;
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 1584);
  if ( v47 )
  {
    v48 = *(_QWORD *)(a1 + 1592);
    v5 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v48, v47);
  }
  v49 = *(_QWORD *)(a1 + 1568);
  if ( v49 )
  {
    v50 = *(_QWORD *)(a1 + 1576);
    v5 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v50, v49);
  }
  sub_64AD00(*(_QWORD *)(a1 + 1552), *(_QWORD *)(a1 + 1560));
  *(_QWORD *)(a1 + 1400) = &qword_1C637E8;
  sub_15841B0(a1 + 1400);
  *(_QWORD *)(a1 + 1240) = &qword_1C637E8;
  sub_15841B0(a1 + 1240);
  v51 = *(_QWORD *)(a1 + 1232);
  if ( v51 )
    sub_186B220((void *)(v51 - 8));
  sub_15841B0(a1 + 1072);
  sub_E66770(a1 + 1056);
  sub_657840(a1 + 1048);
  v52 = *(_QWORD *)(a1 + 1040);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  sub_2334C0((__int64 *)(a1 + 1024));
  v53 = *(_QWORD *)(a1 + 1008);
  if ( v53 )
  {
    v54 = *(_QWORD *)(a1 + 1016);
    v5 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v54, v53);
  }
  v55 = *(__int64 **)(a1 + 1000);
  if ( v55 )
  {
    v56 = &v55[*((unsigned int *)v55 - 1)];
    if ( v55 >= v56 )
      goto LABEL_110;
    do
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v58 = *(_QWORD *)(a1 + 992);
          v5 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v55 >= v56 )
          goto LABEL_109;
      }
      sub_15D7BC0(v58, v57);
      ++v55;
    }
    while ( v55 < v56 );
LABEL_109:
    v55 = *(__int64 **)(a1 + 1000);
    if ( v55 )
LABEL_110:
      sub_186B220(v55 - 1);
  }
  v59 = *(_QWORD *)(a1 + 984);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  v60 = *(_QWORD *)(a1 + 976);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = *(void **)(a1 + 952);
  if ( v61 )
    sub_186B220(v61);
  v62 = *(_QWORD *)(a1 + 944);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  v63 = *(_QWORD *)(a1 + 928);
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(void **)(a1 + 904);
  if ( v64 )
    sub_186B220(v64);
  v65 = *(_QWORD *)(a1 + 896);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = *(_QWORD *)(a1 + 888);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(_QWORD *)(a1 + 880);
  if ( v67 )
    sub_186B220((void *)(v67 - 8));
  v68 = *(_QWORD *)(a1 + 872);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v69 = *(_QWORD *)(a1 + 864);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  v70 = *(void **)(a1 + 840);
  if ( v70 )
    sub_186B220(v70);
  v71 = *(__int64 **)(a1 + 696);
  v72 = &v71[*(unsigned int *)(a1 + 704)];
  for ( i = v71; i != v72; *(_BYTE *)(v74 + 6) &= ~1u )
    v74 = *i++;
  *(_DWORD *)(a1 + 704) = 0;
  if ( v71 && v71 != (__int64 *)(a1 + 712) )
    sub_186B220(v71);
  v75 = *(void **)(a1 + 672);
  if ( v75 )
    sub_186B220(v75);
  *(_QWORD *)(a1 + 104) = &off_1C4CA80;
  sub_267D20((_QWORD *)(a1 + 104));
  sub_14B63F0(a1 + 88);
  v76 = *(void **)(a1 + 72);
  if ( v76 )
    sub_186B220(v76);
  v77 = *(void **)(a1 + 64);
  if ( v77 )
    sub_186B220(v77);
  sub_18572D0((void *)(a1 + 24));
}

