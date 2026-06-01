void __fastcall sub_1563C20(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rdi
  int v5; // eax
  __int64 *v6; // r12
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r15
  void *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
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
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  void *v66; // rdi
  void **v67; // rbx
  unsigned __int64 v68; // r12
  void *v69; // rdi
  __int64 v70; // rdi
  void *v71; // rdi

  *(_QWORD *)a1 = &off_2BB3D10;
  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_QWORD *)(v2 + 608);
  if ( v3 )
  {
    if ( !*(_BYTE *)(v3 + 452) )
      free(*(void **)(v3 + 432));
    v4 = *(void **)(v3 + 368);
    if ( v4 != (void *)(v3 + 384) )
      free(v4);
    if ( !*(_BYTE *)(v3 + 100) )
      free(*(void **)(v3 + 80));
    operator delete((void *)v3, 0x208u);
    v2 = *(_QWORD *)(a1 + 96);
  }
  *(_QWORD *)(v2 + 608) = 0;
  v5 = *(_DWORD *)(a1 + 128);
  if ( v5 )
  {
    v6 = (__int64 *)(a1 + 136);
    v7 = a1 + 8LL * (unsigned int)(v5 - 1) + 144;
    do
    {
      v9 = *v6;
      if ( *v6 )
      {
        if ( !*(_BYTE *)(v9 + 452) )
          free(*(void **)(v9 + 432));
        v8 = *(void **)(v9 + 368);
        if ( v8 != (void *)(v9 + 384) )
          free(v8);
        if ( !*(_BYTE *)(v9 + 100) )
          free(*(void **)(v9 + 80));
        operator delete((void *)v9, 0x208u);
      }
      ++v6;
    }
    while ( (__int64 *)v7 != v6 );
  }
  sub_1526310((__int64 *)a1);
  sub_145CD40(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 360));
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 752LL) = 0;
  v10 = *(_QWORD *)(a1 + 2552);
  v11 = v10 + 8LL * *(unsigned int *)(a1 + 2560);
  while ( v11 != v10 )
  {
    v12 = *(void **)v10;
    v13 = *(_QWORD *)v10 + 56LL;
    v14 = *(_QWORD *)v10 + 72LL * *(unsigned int *)(*(_QWORD *)v10 + 44LL) + 56;
    while ( v14 != v13 )
    {
      while ( !*(_DWORD *)(v13 + 44) )
      {
        v13 += 72;
        if ( v14 == v13 )
          goto LABEL_24;
      }
      v71 = *(void **)(v13 + 32);
      v13 += 72;
      free(v71);
    }
LABEL_24:
    v10 += 8;
    free(v12);
  }
  v15 = *(void **)(a1 + 2784);
  *(_DWORD *)(a1 + 2560) = 0;
  if ( v15 != (void *)(a1 + 2800) )
    free(v15);
  v16 = *(void **)(a1 + 2704);
  if ( v16 != (void *)(a1 + 2720) )
    free(v16);
  v17 = *(void **)(a1 + 2552);
  if ( v17 != (void *)(a1 + 2568) )
    free(v17);
  v18 = *(_QWORD *)(a1 + 2536);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = *(_QWORD *)(a1 + 2528);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *(_QWORD *)(a1 + 2520);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = *(_QWORD *)(a1 + 2512);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = *(_QWORD *)(a1 + 2504);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v23 = *(_QWORD *)(a1 + 2496);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  v24 = *(_QWORD *)(a1 + 2488);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = *(_QWORD *)(a1 + 2480);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v26 = *(_QWORD *)(a1 + 2472);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v27 = *(_QWORD *)(a1 + 2464);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = *(_QWORD *)(a1 + 2456);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  v29 = *(_QWORD *)(a1 + 2448);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  v30 = *(_QWORD *)(a1 + 2440);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v31 = *(_QWORD *)(a1 + 2432);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  v32 = *(_QWORD *)(a1 + 2424);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  v33 = *(_QWORD *)(a1 + 2416);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  v34 = *(_QWORD *)(a1 + 2408);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
  v35 = *(_QWORD *)(a1 + 2400);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v36 = *(_QWORD *)(a1 + 2392);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
  v37 = *(_QWORD *)(a1 + 2384);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  v38 = *(_QWORD *)(a1 + 2376);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  v39 = *(_QWORD *)(a1 + 2368);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  v40 = *(_QWORD *)(a1 + 2360);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
  v41 = *(_QWORD *)(a1 + 2352);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
  v42 = *(_QWORD *)(a1 + 2344);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
  v43 = *(_QWORD *)(a1 + 2336);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  v44 = *(_QWORD *)(a1 + 2328);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
  v45 = *(_QWORD *)(a1 + 2320);
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
  v46 = *(_QWORD *)(a1 + 2312);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
  v47 = *(_QWORD *)(a1 + 2304);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
  v48 = *(_QWORD *)(a1 + 2296);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
  v49 = *(_QWORD *)(a1 + 2288);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
  v50 = *(_QWORD *)(a1 + 2280);
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
  v51 = *(_QWORD *)(a1 + 2272);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
  v52 = *(_QWORD *)(a1 + 2264);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
  v53 = *(_QWORD *)(a1 + 2256);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  v54 = *(_QWORD *)(a1 + 2248);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
  v55 = *(_QWORD *)(a1 + 2240);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  v56 = *(_QWORD *)(a1 + 2232);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
  v57 = *(_QWORD *)(a1 + 2224);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
  v58 = *(_QWORD *)(a1 + 2216);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
  v59 = *(_QWORD *)(a1 + 2208);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
  v60 = *(_QWORD *)(a1 + 2200);
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
  v61 = *(_QWORD *)(a1 + 2192);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
  v62 = *(_QWORD *)(a1 + 2184);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
  v63 = *(_QWORD *)(a1 + 2176);
  if ( v63 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
  v64 = *(_QWORD *)(a1 + 2168);
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
  v65 = *(_QWORD *)(a1 + 2160);
  if ( v65 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v65);
  if ( (*(_BYTE *)(a1 + 1960) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 1968), 16LL * *(unsigned int *)(a1 + 1976), 8);
  v66 = *(void **)(a1 + 1872);
  if ( v66 )
  {
    v67 = *(void ***)(a1 + 1912);
    v68 = *(_QWORD *)(a1 + 1944) + 8LL;
    if ( v68 > (unsigned __int64)v67 )
    {
      do
      {
        v69 = *v67++;
        operator delete(v69);
      }
      while ( v68 > (unsigned __int64)v67 );
      v66 = *(void **)(a1 + 1872);
    }
    operator delete(v66);
  }
  sub_15D7C30(a1 + 504);
  v70 = *(_QWORD *)(a1 + 360);
  if ( v70 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
  nullsub_683();
}
