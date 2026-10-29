void __fastcall sub_12FC410(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbp
  void *v4; // rdi
  void **v5; // r12
  void **v6; // rbp
  void *v7; // rdi
  void **v8; // r12
  void **v9; // rbp
  void *v10; // rdi
  void **v11; // r12
  void **v12; // rbp
  void **v13; // r12
  void **v14; // rbp
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void **v18; // r12
  void **v19; // rbp
  void **v20; // r12
  void **v21; // rbp
  void **v22; // r12
  void **v23; // rbp
  _QWORD *v24; // r12
  _QWORD *v25; // rbp
  void (__fastcall *v26)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rdi
  void **v29; // r12
  void **v30; // rbp
  void **v31; // r12
  void **v32; // rbp
  void *v33; // rdi
  void **v34; // r12
  void **v35; // rbp
  void **v36; // r12
  void **v37; // rbp
  void *v38; // rdi
  void *v39; // rdi
  volatile signed __int32 *v40; // rbp
  void *v41; // rdi
  volatile signed __int32 *v42; // rbp
  void *v43; // rdi
  volatile signed __int32 *v44; // rbp
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  void **v51; // r12
  void **v52; // rbp
  void *v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  void *v56; // rdi
  void *v57; // rdi
  void *v58; // rdi
  void *v59; // rdi
  void *v60; // rdi
  void *v61; // rdi
  void *v62; // rdi
  void *v63; // rdi
  void **v64; // r12
  void **v65; // rbp
  void **v66; // r12
  void **v67; // rbp
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  void *v71; // rdi
  void *v72; // rdi
  void **v73; // r12
  void **v74; // rbp
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  __int64 v78; // r13
  __int64 v79; // rbp
  void *v80; // rdi
  __int64 v81; // r13
  __int64 v82; // rbp
  void *v83; // rdi
  void *v84; // rdi
  void *v85; // rdi
  void *v86; // rdi
  void *v87; // rdi
  void *v88; // rdi
  void *v89; // rdi
  void *v90; // rdi
  void *v91; // rdi
  void *v92; // rdi
  void *v93; // rdi
  void *v94; // rdi
  void *v95; // rdi
  int v96; // eax
  signed __int32 v97; // eax
  int v98; // eax
  signed __int32 v99; // eax
  int v100; // eax
  signed __int32 v101; // eax

  v2 = *(void ***)(a1 + 2400);
  v3 = *(void ***)(a1 + 2392);
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 2392);
  }
  if ( v3 )
    operator delete(v3);
  v4 = *(void **)(a1 + 2360);
  if ( v4 != (void *)(a1 + 2376) )
    operator delete(v4);
  v5 = *(void ***)(a1 + 2344);
  v6 = *(void ***)(a1 + 2336);
  if ( v5 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_12;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_12:
    v6 = *(void ***)(a1 + 2336);
  }
  if ( v6 )
    operator delete(v6);
  v7 = *(void **)(a1 + 2304);
  if ( v7 != (void *)(a1 + 2320) )
    operator delete(v7);
  v8 = *(void ***)(a1 + 2264);
  v9 = *(void ***)(a1 + 2256);
  if ( v8 != v9 )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 += 4;
        if ( v8 == v9 )
          goto LABEL_20;
      }
      v9 += 4;
    }
    while ( v8 != v9 );
LABEL_20:
    v9 = *(void ***)(a1 + 2256);
  }
  if ( v9 )
    operator delete(v9);
  v10 = *(void **)(a1 + 2216);
  if ( v10 != (void *)(a1 + 2232) )
    operator delete(v10);
  v11 = *(void ***)(a1 + 2200);
  v12 = *(void ***)(a1 + 2192);
  if ( v11 != v12 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 4;
        if ( v11 == v12 )
          goto LABEL_28;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_28:
    v12 = *(void ***)(a1 + 2192);
  }
  if ( v12 )
    operator delete(v12);
  v13 = *(void ***)(a1 + 2176);
  v14 = *(void ***)(a1 + 2168);
  if ( v13 != v14 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_34;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_34:
    v14 = *(void ***)(a1 + 2168);
  }
  if ( v14 )
    operator delete(v14);
  v15 = *(void **)(a1 + 2136);
  if ( v15 != (void *)(a1 + 2152) )
    operator delete(v15);
  v16 = *(void **)(a1 + 2104);
  if ( v16 != (void *)(a1 + 2120) )
    operator delete(v16);
  v17 = *(void **)(a1 + 2072);
  if ( v17 != (void *)(a1 + 2088) )
    operator delete(v17);
  v18 = *(void ***)(a1 + 2056);
  v19 = *(void ***)(a1 + 2048);
  if ( v18 != v19 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_46;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_46:
    v19 = *(void ***)(a1 + 2048);
  }
  if ( v19 )
    operator delete(v19);
  v20 = *(void ***)(a1 + 2032);
  v21 = *(void ***)(a1 + 2024);
  if ( v20 != v21 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
          goto LABEL_52;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_52:
    v21 = *(void ***)(a1 + 2024);
  }
  if ( v21 )
    operator delete(v21);
  v22 = *(void ***)(a1 + 2008);
  v23 = *(void ***)(a1 + 2000);
  if ( v22 != v23 )
  {
    do
    {
      while ( *v23 != v23 + 2 )
      {
        operator delete(*v23);
        v23 += 4;
        if ( v22 == v23 )
          goto LABEL_58;
      }
      v23 += 4;
    }
    while ( v22 != v23 );
LABEL_58:
    v23 = *(void ***)(a1 + 2000);
  }
  if ( v23 )
    operator delete(v23);
  v24 = *(_QWORD **)(a1 + 1984);
  v25 = *(_QWORD **)(a1 + 1976);
  if ( v24 != v25 )
  {
    do
    {
      while ( 1 )
      {
        v26 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v25[2];
        if ( !v26 )
          break;
        v27 = v25;
        v28 = v25;
        v25 += 4;
        v26(v28, v27, 3);
        if ( v24 == v25 )
          goto LABEL_64;
      }
      v25 += 4;
    }
    while ( v24 != v25 );
LABEL_64:
    v25 = *(_QWORD **)(a1 + 1976);
  }
  if ( v25 )
    operator delete(v25);
  v29 = *(void ***)(a1 + 1960);
  v30 = *(void ***)(a1 + 1952);
  if ( v29 != v30 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_70;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_70:
    v30 = *(void ***)(a1 + 1952);
  }
  if ( v30 )
    operator delete(v30);
  v31 = *(void ***)(a1 + 1936);
  v32 = *(void ***)(a1 + 1928);
  if ( v31 != v32 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_76;
      }
      v32 += 4;
    }
    while ( v31 != v32 );
LABEL_76:
    v32 = *(void ***)(a1 + 1928);
  }
  if ( v32 )
    operator delete(v32);
  v33 = *(void **)(a1 + 1888);
  if ( v33 != (void *)(a1 + 1904) )
    operator delete(v33);
  v34 = *(void ***)(a1 + 1800);
  v35 = *(void ***)(a1 + 1792);
  if ( v34 != v35 )
  {
    do
    {
      while ( *v35 != v35 + 2 )
      {
        operator delete(*v35);
        v35 += 4;
        if ( v35 == v34 )
          goto LABEL_84;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_84:
    v35 = *(void ***)(a1 + 1792);
  }
  if ( v35 )
    operator delete(v35);
  v36 = *(void ***)(a1 + 1776);
  v37 = *(void ***)(a1 + 1768);
  if ( v36 != v37 )
  {
    do
    {
      while ( *v37 != v37 + 2 )
      {
        operator delete(*v37);
        v37 += 4;
        if ( v36 == v37 )
          goto LABEL_90;
      }
      v37 += 4;
    }
    while ( v36 != v37 );
LABEL_90:
    v37 = *(void ***)(a1 + 1768);
  }
  if ( v37 )
    operator delete(v37);
  v38 = *(void **)(a1 + 1744);
  if ( v38 )
    operator delete(v38);
  v39 = *(void **)(a1 + 1688);
  if ( v39 )
    operator delete(v39);
  v40 = *(volatile signed __int32 **)(a1 + 1632);
  if ( v40 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_100;
    }
    else
    {
      v98 = *((_DWORD *)v40 + 2);
      *((_DWORD *)v40 + 2) = v98 - 1;
      if ( v98 != 1 )
        goto LABEL_100;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    if ( &_pthread_key_create )
    {
      v99 = _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF);
    }
    else
    {
      v99 = *((_DWORD *)v40 + 3);
      *((_DWORD *)v40 + 3) = v99 - 1;
    }
    if ( v99 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 24LL))(v40);
  }
LABEL_100:
  v41 = *(void **)(a1 + 1592);
  if ( v41 != (void *)(a1 + 1608) )
    operator delete(v41);
  v42 = *(volatile signed __int32 **)(a1 + 1576);
  if ( v42 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_105;
    }
    else
    {
      v96 = *((_DWORD *)v42 + 2);
      *((_DWORD *)v42 + 2) = v96 - 1;
      if ( v96 != 1 )
        goto LABEL_105;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    if ( &_pthread_key_create )
    {
      v97 = _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF);
    }
    else
    {
      v97 = *((_DWORD *)v42 + 3);
      *((_DWORD *)v42 + 3) = v97 - 1;
    }
    if ( v97 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 24LL))(v42);
  }
LABEL_105:
  v43 = *(void **)(a1 + 1536);
  if ( v43 != (void *)(a1 + 1552) )
    operator delete(v43);
  v44 = *(volatile signed __int32 **)(a1 + 1520);
  if ( v44 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_110;
    }
    else
    {
      v100 = *((_DWORD *)v44 + 2);
      *((_DWORD *)v44 + 2) = v100 - 1;
      if ( v100 != 1 )
        goto LABEL_110;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
    if ( &_pthread_key_create )
    {
      v101 = _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF);
    }
    else
    {
      v101 = *((_DWORD *)v44 + 3);
      *((_DWORD *)v44 + 3) = v101 - 1;
    }
    if ( v101 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 24LL))(v44);
  }
LABEL_110:
  v45 = *(void **)(a1 + 1480);
  if ( v45 != (void *)(a1 + 1496) )
    operator delete(v45);
  v46 = *(void **)(a1 + 1440);
  if ( v46 != (void *)(a1 + 1456) )
    operator delete(v46);
  v47 = *(void **)(a1 + 1408);
  if ( v47 != (void *)(a1 + 1424) )
    operator delete(v47);
  v48 = *(void **)(a1 + 1376);
  if ( v48 != (void *)(a1 + 1392) )
    operator delete(v48);
  v49 = *(void **)(a1 + 1344);
  if ( v49 != (void *)(a1 + 1360) )
    operator delete(v49);
  v50 = *(void **)(a1 + 1312);
  if ( v50 != (void *)(a1 + 1328) )
    operator delete(v50);
  v51 = *(void ***)(a1 + 1296);
  v52 = *(void ***)(a1 + 1288);
  if ( v51 != v52 )
  {
    do
    {
      while ( *v52 != v52 + 2 )
      {
        operator delete(*v52);
        v52 += 4;
        if ( v51 == v52 )
          goto LABEL_125;
      }
      v52 += 4;
    }
    while ( v51 != v52 );
LABEL_125:
    v52 = *(void ***)(a1 + 1288);
  }
  if ( v52 )
    operator delete(v52);
  v53 = *(void **)(a1 + 1256);
  if ( v53 != (void *)(a1 + 1272) )
    operator delete(v53);
  v54 = *(void **)(a1 + 1224);
  if ( v54 != (void *)(a1 + 1240) )
    operator delete(v54);
  v55 = *(void **)(a1 + 1192);
  if ( v55 != (void *)(a1 + 1208) )
    operator delete(v55);
  v56 = *(void **)(a1 + 1160);
  if ( v56 != (void *)(a1 + 1176) )
    operator delete(v56);
  v57 = *(void **)(a1 + 1128);
  if ( v57 != (void *)(a1 + 1144) )
    operator delete(v57);
  v58 = *(void **)(a1 + 1096);
  if ( v58 != (void *)(a1 + 1112) )
    operator delete(v58);
  v59 = *(void **)(a1 + 1064);
  if ( v59 != (void *)(a1 + 1080) )
    operator delete(v59);
  v60 = *(void **)(a1 + 1032);
  if ( v60 != (void *)(a1 + 1048) )
    operator delete(v60);
  v61 = *(void **)(a1 + 1000);
  if ( v61 != (void *)(a1 + 1016) )
    operator delete(v61);
  v62 = *(void **)(a1 + 968);
  if ( v62 != (void *)(a1 + 984) )
    operator delete(v62);
  v63 = *(void **)(a1 + 936);
  if ( v63 != (void *)(a1 + 952) )
    operator delete(v63);
  v64 = *(void ***)(a1 + 920);
  v65 = *(void ***)(a1 + 912);
  if ( v64 != v65 )
  {
    do
    {
      while ( *v65 != v65 + 2 )
      {
        operator delete(*v65);
        v65 += 4;
        if ( v65 == v64 )
          goto LABEL_153;
      }
      v65 += 4;
    }
    while ( v64 != v65 );
LABEL_153:
    v65 = *(void ***)(a1 + 912);
  }
  if ( v65 )
    operator delete(v65);
  v66 = *(void ***)(a1 + 896);
  v67 = *(void ***)(a1 + 888);
  if ( v66 != v67 )
  {
    do
    {
      while ( *v67 != v67 + 2 )
      {
        operator delete(*v67);
        v67 += 4;
        if ( v67 == v66 )
          goto LABEL_159;
      }
      v67 += 4;
    }
    while ( v66 != v67 );
LABEL_159:
    v67 = *(void ***)(a1 + 888);
  }
  if ( v67 )
    operator delete(v67);
  v68 = *(void **)(a1 + 856);
  if ( v68 != (void *)(a1 + 872) )
    operator delete(v68);
  v69 = *(void **)(a1 + 816);
  if ( v69 != (void *)(a1 + 832) )
    operator delete(v69);
  v70 = *(void **)(a1 + 784);
  if ( v70 != (void *)(a1 + 800) )
    operator delete(v70);
  v71 = *(void **)(a1 + 752);
  if ( v71 != (void *)(a1 + 768) )
    operator delete(v71);
  v72 = *(void **)(a1 + 720);
  if ( v72 != (void *)(a1 + 736) )
    operator delete(v72);
  v73 = *(void ***)(a1 + 704);
  v74 = *(void ***)(a1 + 696);
  if ( v73 != v74 )
  {
    do
    {
      while ( *v74 != v74 + 2 )
      {
        operator delete(*v74);
        v74 += 5;
        if ( v74 == v73 )
          goto LABEL_175;
      }
      v74 += 5;
    }
    while ( v73 != v74 );
LABEL_175:
    v74 = *(void ***)(a1 + 696);
  }
  if ( v74 )
    operator delete(v74);
  v75 = *(void **)(a1 + 664);
  if ( v75 != (void *)(a1 + 680) )
    operator delete(v75);
  v76 = *(void **)(a1 + 624);
  if ( v76 != (void *)(a1 + 640) )
    operator delete(v76);
  v77 = *(void **)(a1 + 592);
  if ( v77 != (void *)(a1 + 608) )
    operator delete(v77);
  v78 = *(_QWORD *)(a1 + 576);
  v79 = v78 + ((unsigned __int64)*(unsigned int *)(a1 + 584) << 6);
  if ( v78 != v79 )
  {
    do
    {
      while ( 1 )
      {
        v79 -= 64;
        v80 = *(void **)(v79 + 32);
        if ( v80 != (void *)(v79 + 48) )
          operator delete(v80);
        if ( *(_QWORD *)v79 == v79 + 16 )
          break;
        operator delete(*(void **)v79);
        if ( v78 == v79 )
          goto LABEL_189;
      }
    }
    while ( v78 != v79 );
LABEL_189:
    v79 = *(_QWORD *)(a1 + 576);
  }
  if ( v79 != a1 + 592 )
    free((void *)v79);
  v81 = *(_QWORD *)(a1 + 560);
  v82 = v81 + ((unsigned __int64)*(unsigned int *)(a1 + 568) << 6);
  if ( v81 != v82 )
  {
    do
    {
      while ( 1 )
      {
        v82 -= 64;
        v83 = *(void **)(v82 + 32);
        if ( v83 != (void *)(v82 + 48) )
          operator delete(v83);
        if ( *(_QWORD *)v82 == v82 + 16 )
          break;
        operator delete(*(void **)v82);
        if ( v81 == v82 )
          goto LABEL_197;
      }
    }
    while ( v81 != v82 );
LABEL_197:
    v82 = *(_QWORD *)(a1 + 560);
  }
  if ( a1 + 576 != v82 )
    free((void *)v82);
  v84 = *(void **)(a1 + 528);
  if ( v84 != (void *)(a1 + 544) )
    operator delete(v84);
  v85 = *(void **)(a1 + 496);
  if ( v85 != (void *)(a1 + 512) )
    operator delete(v85);
  v86 = *(void **)(a1 + 464);
  if ( v86 != (void *)(a1 + 480) )
    operator delete(v86);
  v87 = *(void **)(a1 + 432);
  if ( v87 != (void *)(a1 + 448) )
    operator delete(v87);
  v88 = *(void **)(a1 + 400);
  if ( v88 != (void *)(a1 + 416) )
    operator delete(v88);
  v89 = *(void **)(a1 + 360);
  if ( v89 != (void *)(a1 + 376) )
    operator delete(v89);
  v90 = *(void **)(a1 + 328);
  if ( v90 != (void *)(a1 + 344) )
    operator delete(v90);
  v91 = *(void **)(a1 + 296);
  if ( v91 != (void *)(a1 + 312) )
    operator delete(v91);
  v92 = *(void **)(a1 + 264);
  if ( v92 != (void *)(a1 + 280) )
    operator delete(v92);
  v93 = *(void **)(a1 + 224);
  if ( v93 != (void *)(a1 + 240) )
    operator delete(v93);
  v94 = *(void **)(a1 + 192);
  if ( v94 != (void *)(a1 + 208) )
    operator delete(v94);
  v95 = *(void **)(a1 + 160);
  if ( v95 != (void *)(a1 + 176) )
    operator delete(v95);
}
