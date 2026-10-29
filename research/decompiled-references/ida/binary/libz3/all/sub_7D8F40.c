__int64 *__fastcall sub_7D8F40(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v18; // rdi
  __int64 *v19; // rcx
  __int64 *i; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // r12
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdi
  void (__fastcall ***v28)(_QWORD); // rbp
  void (__fastcall ***v29)(_QWORD); // rbp
  void *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 *v36; // rbp
  __int64 *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  void *v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 *v49; // rbp
  __int64 *v50; // r12
  __int64 v51; // rsi
  __int64 v52; // rdi
  char *v53; // r13
  __int64 v54; // rax
  __int64 v55; // rbp
  char *v56; // r12
  __int64 v57; // rdi
  void *v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  void *v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdi
  void *v76; // rdi
  __int64 *v77; // rbp
  __int64 *v78; // r13
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rdi
  __int64 *v89; // rbp
  __int64 *v90; // r12
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 *v93; // rbp
  __int64 *v94; // r12
  __int64 v95; // rsi
  __int64 v96; // rdi
  void *v97; // rdi
  void *v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rdi
  void *v103; // rdi
  void *v104; // rdi
  __int64 v105; // rdi
  void *v106; // rdi
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 *v109; // rdi
  __int64 *v110; // rcx
  __int64 *result; // rax
  __int64 v112; // rdx

  *(_QWORD *)a1 = &off_1C54B88;
  sub_13A5000();
  sub_13A2BD0(a1 + 2664);
  v2 = *(__int64 **)(a1 + 2656);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 2648);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(__int64 **)(a1 + 2656);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = *(__int64 **)(a1 + 2640);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 2632);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(__int64 **)(a1 + 2640);
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = *(_QWORD *)(a1 + 2624);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 2616);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 2592);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 2584);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 2568);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 2552);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 2528);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(__int64 **)(a1 + 2376);
  v19 = &v18[*(unsigned int *)(a1 + 2384)];
  for ( i = v18; i != v19; *(_BYTE *)(v21 + 6) &= ~1u )
    v21 = *i++;
  *(_DWORD *)(a1 + 2384) = 0;
  if ( v18 != (__int64 *)(a1 + 2392) && v18 )
    sub_186B220(v18);
  v22 = *(_QWORD **)(a1 + 2344);
  if ( v22 )
  {
    v23 = *((unsigned int *)v22 - 1);
    if ( (_DWORD)v23 )
    {
      v24 = &v22[v23];
      do
      {
        while ( *v22 )
        {
          v25 = (void *)(*v22++ - 8LL);
          sub_186B220(v25);
          if ( v24 == v22 )
          {
            v22 = *(_QWORD **)(a1 + 2344);
            goto LABEL_44;
          }
        }
        ++v22;
      }
      while ( v22 != v24 );
      v22 = *(_QWORD **)(a1 + 2344);
    }
LABEL_44:
    sub_186B220(v22 - 1);
  }
  v26 = *(void **)(a1 + 2320);
  if ( v26 )
    sub_186B220(v26);
  v27 = *(_QWORD *)(a1 + 2312);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(void (__fastcall ****)(_QWORD))(a1 + 2304);
  if ( v28 )
  {
    (**v28)(*(_QWORD *)(a1 + 2304));
    sub_186B220(v28);
  }
  v29 = *(void (__fastcall ****)(_QWORD))(a1 + 2296);
  if ( v29 )
  {
    (**v29)(*(_QWORD *)(a1 + 2296));
    sub_186B220(v29);
  }
  v30 = *(void **)(a1 + 2152);
  *(_QWORD *)(a1 + 1256) = &off_1C52718;
  if ( v30 && v30 != (void *)(a1 + 2168) )
    sub_186B220(v30);
  v31 = *(_QWORD *)(a1 + 2144);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 2136);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 2128);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(_QWORD *)(a1 + 2120);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  v35 = *(_QWORD *)(a1 + 2112);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *(__int64 **)(a1 + 2104);
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 >= v37 )
      goto LABEL_74;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = *(_QWORD *)(a1 + 2096);
          v6 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v36 >= v37 )
          goto LABEL_73;
      }
      sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( v36 < v37 );
LABEL_73:
    v36 = *(__int64 **)(a1 + 2104);
    if ( v36 )
LABEL_74:
      sub_186B220(v36 - 1);
  }
  v40 = *(_QWORD *)(a1 + 2080);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = *(_QWORD *)(a1 + 2072);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(_QWORD *)(a1 + 2064);
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = *(_QWORD *)(a1 + 2040);
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = *(_QWORD *)(a1 + 2032);
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = *(void **)(a1 + 2008);
  if ( v45 )
    sub_186B220(v45);
  v46 = *(_QWORD *)(a1 + 1968);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v47 = *(_QWORD *)(a1 + 1960);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = *(_QWORD *)(a1 + 1952);
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(__int64 **)(a1 + 1944);
  if ( v49 )
  {
    v50 = &v49[*((unsigned int *)v49 - 1)];
    if ( v49 >= v50 )
      goto LABEL_101;
    do
    {
      while ( 1 )
      {
        v51 = *v49;
        if ( *v49 )
        {
          v52 = *(_QWORD *)(a1 + 1936);
          v6 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v49 >= v50 )
          goto LABEL_100;
      }
      sub_15D7BC0(v52, v51);
      ++v49;
    }
    while ( v49 < v50 );
LABEL_100:
    v49 = *(__int64 **)(a1 + 1944);
    if ( v49 )
LABEL_101:
      sub_186B220(v49 - 1);
  }
  v53 = *(char **)(a1 + 1912);
  if ( v53 )
  {
    v54 = *(unsigned int *)(a1 + 1920);
    if ( (_DWORD)v54 )
    {
      v55 = *(_QWORD *)(a1 + 1912);
      v56 = &v53[24 * v54];
      do
      {
        while ( 1 )
        {
          v57 = *(_QWORD *)(v55 + 8);
          if ( !v57 )
            break;
          v55 += 24;
          sub_186B220((void *)(v57 - 8));
          if ( (char *)v55 == v56 )
            goto LABEL_107;
        }
        v55 += 24;
      }
      while ( (char *)v55 != v56 );
    }
LABEL_107:
    sub_186B220(v53);
  }
  v58 = *(void **)(a1 + 1864);
  if ( v58 )
    sub_186B220(v58);
  v59 = *(_QWORD *)(a1 + 1856);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  v60 = *(_QWORD *)(a1 + 1848);
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  v61 = *(void **)(a1 + 1824);
  if ( v61 )
    sub_186B220(v61);
  v62 = *(_QWORD *)(a1 + 1816);
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  v63 = *(_QWORD *)(a1 + 1784);
  *(_QWORD *)(a1 + 1256) = &off_1C526F8;
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(_QWORD *)(a1 + 1768);
  if ( v64 )
  {
    v65 = *(_QWORD *)(a1 + 1776);
    v6 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v65, v64);
  }
  v66 = *(_QWORD *)(a1 + 1752);
  if ( v66 )
  {
    v67 = *(_QWORD *)(a1 + 1760);
    v6 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v67, v66);
  }
  v68 = *(_QWORD *)(a1 + 1736);
  if ( v68 )
  {
    v69 = *(_QWORD *)(a1 + 1744);
    v6 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v69, v68);
  }
  *(_QWORD *)(a1 + 1584) = &qword_1C637E8;
  sub_15841B0(a1 + 1584);
  *(_QWORD *)(a1 + 1424) = &qword_1C637E8;
  sub_15841B0(a1 + 1424);
  v70 = *(_QWORD *)(a1 + 1416);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  sub_15841B0(a1 + 1256);
  v71 = *(_QWORD *)(a1 + 1248);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  v72 = *(_QWORD *)(a1 + 1240);
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  v73 = *(_QWORD *)(a1 + 1232);
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  v74 = *(_QWORD *)(a1 + 1216);
  if ( v74 )
    sub_186B220((void *)(v74 - 8));
  v75 = *(_QWORD *)(a1 + 1200);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  sub_180C0E0(a1 + 1160);
  v76 = *(void **)(a1 + 1136);
  if ( v76 )
    sub_186B220(v76);
  v77 = *(__int64 **)(a1 + 1128);
  if ( v77 )
  {
    v78 = &v77[*((unsigned int *)v77 - 1)];
    if ( v77 >= v78 )
      goto LABEL_151;
    do
    {
      while ( 1 )
      {
        v79 = *v77;
        if ( *v77 )
        {
          v80 = *(_QWORD *)(a1 + 1120);
          v6 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v77 >= v78 )
          goto LABEL_150;
      }
      sub_15D7BC0(v80, v79);
      ++v77;
    }
    while ( v77 < v78 );
LABEL_150:
    v77 = *(__int64 **)(a1 + 1128);
    if ( v77 )
LABEL_151:
      sub_186B220(v77 - 1);
  }
  v81 = *(_QWORD *)(a1 + 1096);
  *(_QWORD *)(a1 + 568) = &off_1C4CA60;
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  v82 = *(_QWORD *)(a1 + 1080);
  if ( v82 )
  {
    v83 = *(_QWORD *)(a1 + 1088);
    v6 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v83, v82);
  }
  v84 = *(_QWORD *)(a1 + 1064);
  if ( v84 )
  {
    v85 = *(_QWORD *)(a1 + 1072);
    v6 = (*(_DWORD *)(v84 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v85, v84);
  }
  v86 = *(_QWORD *)(a1 + 1048);
  if ( v86 )
  {
    v87 = *(_QWORD *)(a1 + 1056);
    v6 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v87, v86);
  }
  *(_QWORD *)(a1 + 896) = &qword_1C637E8;
  sub_15841B0(a1 + 896);
  *(_QWORD *)(a1 + 736) = &qword_1C637E8;
  sub_15841B0(a1 + 736);
  v88 = *(_QWORD *)(a1 + 728);
  if ( v88 )
    sub_186B220((void *)(v88 - 8));
  sub_15841B0(a1 + 568);
  v89 = *(__int64 **)(a1 + 512);
  *(_QWORD *)(a1 + 408) = &off_1C61E18;
  if ( v89 )
  {
    v90 = &v89[*((unsigned int *)v89 - 1)];
    if ( v89 >= v90 )
      goto LABEL_173;
    do
    {
      while ( 1 )
      {
        v91 = *v89;
        if ( *v89 )
        {
          v92 = *(_QWORD *)(a1 + 504);
          v6 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v89 >= v90 )
          goto LABEL_172;
      }
      sub_15D7BC0(v92, v91);
      ++v89;
    }
    while ( v89 < v90 );
LABEL_172:
    v89 = *(__int64 **)(a1 + 512);
    if ( v89 )
LABEL_173:
      sub_186B220(v89 - 1);
  }
  v93 = *(__int64 **)(a1 + 480);
  *(_QWORD *)(a1 + 408) = &off_1C54950;
  if ( v93 )
  {
    v94 = &v93[*((unsigned int *)v93 - 1)];
    if ( v93 >= v94 )
      goto LABEL_182;
    do
    {
      while ( 1 )
      {
        v95 = *v93;
        if ( *v93 )
        {
          v96 = *(_QWORD *)(a1 + 472);
          v6 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v93 >= v94 )
          goto LABEL_181;
      }
      sub_15D7BC0(v96, v95);
      ++v93;
    }
    while ( v93 < v94 );
LABEL_181:
    v93 = *(__int64 **)(a1 + 480);
    if ( v93 )
LABEL_182:
      sub_186B220(v93 - 1);
  }
  v97 = *(void **)(a1 + 448);
  if ( v97 )
    sub_186B220(v97);
  v98 = *(void **)(a1 + 424);
  if ( v98 )
    sub_186B220(v98);
  v99 = *(_QWORD *)(a1 + 392);
  if ( v99 )
  {
    v100 = *(_QWORD *)(a1 + 400);
    v6 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v100, v99);
  }
  v101 = *(_QWORD *)(a1 + 376);
  if ( v101 )
  {
    v102 = *(_QWORD *)(a1 + 384);
    v6 = (*(_DWORD *)(v101 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v102, v101);
  }
  v103 = *(void **)(a1 + 320);
  if ( v103 )
    sub_186B220(v103);
  v104 = *(void **)(a1 + 296);
  if ( v104 )
    sub_186B220(v104);
  v105 = *(_QWORD *)(a1 + 280);
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  v106 = *(void **)(a1 + 256);
  if ( v106 )
    sub_186B220(v106);
  sub_16225F0(a1 + 232);
  v107 = *(_QWORD *)(a1 + 200);
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  v108 = *(_QWORD *)(a1 + 192);
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v109 = *(__int64 **)(a1 + 48);
  v110 = &v109[*(unsigned int *)(a1 + 56)];
  for ( result = v109; result != v110; *(_BYTE *)(v112 + 6) &= ~1u )
    v112 = *result++;
  *(_DWORD *)(a1 + 56) = 0;
  if ( v109 != (__int64 *)(a1 + 64) )
  {
    if ( v109 )
      return (__int64 *)sub_186B220(v109);
  }
  return result;
}

