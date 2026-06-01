void __fastcall sub_1F6C190(__int64 a1)
{
  void *v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 *v10; // r12
  __int64 *v11; // rbp
  __int64 v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // r12
  _QWORD *v20; // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // r12
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  _QWORD *v25; // r12
  _QWORD *v26; // rbp
  _QWORD *v27; // rdi
  _QWORD *v28; // r12
  _QWORD *v29; // rbp
  _QWORD *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rbp
  void **v42; // r13
  void *v43; // rdi
  __int64 v44; // rcx
  _QWORD *v45; // rbp
  __int64 v46; // rsi
  _QWORD *v47; // r12
  _QWORD *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  void **v51; // rbp
  unsigned __int64 v52; // r12
  void *v53; // rdi
  void *v54; // rdi
  __int64 (__fastcall **v55)(); // [rsp+8h] [rbp-30h] BYREF

  v2 = (void *)(a1 + 3400);
  v55 = off_2BE4970;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v55);
  v3 = *(void **)(a1 + 3384);
  if ( v3 != v2 )
    free(v3);
  v4 = *(void **)(a1 + 3360);
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 3336);
  if ( v5 )
    operator delete(v5);
  v6 = *(void **)(a1 + 3312);
  if ( v6 )
    operator delete(v6);
  v7 = *(void **)(a1 + 3288);
  if ( v7 )
    operator delete(v7);
  v8 = *(void **)(a1 + 3216);
  if ( v8 != (void *)(a1 + 3232) )
    free(v8);
  v9 = *(void **)(a1 + 3144);
  if ( v9 != (void *)(a1 + 3160) )
    free(v9);
  v10 = *(__int64 **)(a1 + 3128);
  v11 = *(__int64 **)(a1 + 3120);
  if ( v10 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *v11;
        if ( !*v11 )
          break;
        ++v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v10 == v11 )
          goto LABEL_18;
      }
      ++v11;
    }
    while ( v10 != v11 );
LABEL_18:
    v11 = *(__int64 **)(a1 + 3120);
  }
  if ( v11 )
    operator delete(v11);
  operator delete(*(_QWORD *)(a1 + 3096), 16LL * *(unsigned int *)(a1 + 3112), 8);
  operator delete(*(_QWORD *)(a1 + 3048), 16LL * *(unsigned int *)(a1 + 3064), 8);
  operator delete(*(_QWORD *)(a1 + 3024), 16LL * *(unsigned int *)(a1 + 3040), 8);
  v13 = *(void **)(a1 + 2880);
  if ( v13 != (void *)(a1 + 2896) )
    free(v13);
  v14 = *(void **)(a1 + 2864);
  if ( v14 != (void *)(a1 + 2880) )
    free(v14);
  operator delete(*(_QWORD *)(a1 + 2840), 8LL * *(unsigned int *)(a1 + 2856), 8);
  v15 = *(void **)(a1 + 2696);
  if ( v15 != (void *)(a1 + 2712) )
    free(v15);
  v16 = *(void **)(a1 + 2552);
  if ( v16 != (void *)(a1 + 2568) )
    free(v16);
  operator delete(*(_QWORD *)(a1 + 2528), 8LL * *(unsigned int *)(a1 + 2544), 8);
  v17 = *(void **)(a1 + 2000);
  if ( v17 != (void *)(a1 + 2016) )
    free(v17);
  v18 = *(void **)(a1 + 1472);
  if ( v18 != (void *)(a1 + 1488) )
    free(v18);
  operator delete(*(_QWORD *)(a1 + 1448), 16LL * *(unsigned int *)(a1 + 1464), 8);
  v19 = *(_QWORD **)(a1 + 1432);
  v20 = &v19[9 * *(unsigned int *)(a1 + 1440)];
  if ( v19 != v20 )
  {
    do
    {
      while ( 1 )
      {
        v20 -= 9;
        v21 = (_QWORD *)v20[1];
        if ( v21 == v20 + 3 )
          break;
        free(v21);
        if ( v19 == v20 )
          goto LABEL_36;
      }
    }
    while ( v19 != v20 );
LABEL_36:
    v20 = *(_QWORD **)(a1 + 1432);
  }
  if ( v20 != (_QWORD *)(a1 + 1448) )
    free(v20);
  operator delete(*(_QWORD *)(a1 + 1408), 16LL * *(unsigned int *)(a1 + 1424), 8);
  v22 = *(_QWORD **)(a1 + 1392);
  v23 = &v22[9 * *(unsigned int *)(a1 + 1400)];
  if ( v22 != v23 )
  {
    do
    {
      while ( 1 )
      {
        v23 -= 9;
        v24 = (_QWORD *)v23[1];
        if ( v24 == v23 + 3 )
          break;
        free(v24);
        if ( v22 == v23 )
          goto LABEL_42;
      }
    }
    while ( v22 != v23 );
LABEL_42:
    v23 = *(_QWORD **)(a1 + 1392);
  }
  if ( (_QWORD *)(a1 + 1408) != v23 )
    free(v23);
  operator delete(*(_QWORD *)(a1 + 1368), 16LL * *(unsigned int *)(a1 + 1384), 8);
  v25 = *(_QWORD **)(a1 + 1352);
  v26 = &v25[5 * *(unsigned int *)(a1 + 1360)];
  if ( v25 != v26 )
  {
    do
    {
      while ( 1 )
      {
        v26 -= 5;
        v27 = (_QWORD *)v26[1];
        if ( v27 == v26 + 3 )
          break;
        free(v27);
        if ( v25 == v26 )
          goto LABEL_48;
      }
    }
    while ( v25 != v26 );
LABEL_48:
    v26 = *(_QWORD **)(a1 + 1352);
  }
  if ( (_QWORD *)(a1 + 1368) != v26 )
    free(v26);
  operator delete(*(_QWORD *)(a1 + 1328), 16LL * *(unsigned int *)(a1 + 1344), 8);
  v28 = *(_QWORD **)(a1 + 1312);
  v29 = &v28[5 * *(unsigned int *)(a1 + 1320)];
  if ( v28 != v29 )
  {
    do
    {
      while ( 1 )
      {
        v29 -= 5;
        v30 = (_QWORD *)v29[1];
        if ( v30 == v29 + 3 )
          break;
        free(v30);
        if ( v28 == v29 )
          goto LABEL_54;
      }
    }
    while ( v28 != v29 );
LABEL_54:
    v29 = *(_QWORD **)(a1 + 1312);
  }
  if ( (_QWORD *)(a1 + 1328) != v29 )
    free(v29);
  operator delete(*(_QWORD *)(a1 + 1288), 16LL * *(unsigned int *)(a1 + 1304), 8);
  v31 = *(void **)(a1 + 1272);
  if ( (void *)(a1 + 1288) != v31 )
    free(v31);
  operator delete(*(_QWORD *)(a1 + 1248), 8LL * *(unsigned int *)(a1 + 1264), 8);
  v32 = *(void **)(a1 + 1232);
  if ( (void *)(a1 + 1248) != v32 )
    free(v32);
  operator delete(*(_QWORD *)(a1 + 1208), 8LL * *(unsigned int *)(a1 + 1224), 8);
  operator delete(*(_QWORD *)(a1 + 1184), 16LL * *(unsigned int *)(a1 + 1200), 8);
  operator delete(*(_QWORD *)(a1 + 1160), 16LL * *(unsigned int *)(a1 + 1176), 8);
  v33 = *(void **)(a1 + 1136);
  if ( v33 )
    operator delete(v33);
  v34 = *(void **)(a1 + 1120);
  if ( v34 != (void *)(a1 + 1136) )
    free(v34);
  operator delete(*(_QWORD *)(a1 + 1096), 16LL * *(unsigned int *)(a1 + 1112), 8);
  v35 = *(void **)(a1 + 1056);
  if ( v35 )
    operator delete(v35);
  operator delete(*(_QWORD *)(a1 + 1032), 16LL * *(unsigned int *)(a1 + 1048), 8);
  operator delete(*(_QWORD *)(a1 + 1008), 8LL * *(unsigned int *)(a1 + 1024), 8);
  operator delete(*(_QWORD *)(a1 + 984), 16LL * *(unsigned int *)(a1 + 1000), 8);
  v36 = *(void **)(a1 + 960);
  if ( v36 )
    operator delete(v36);
  operator delete(*(_QWORD *)(a1 + 936), 16LL * *(unsigned int *)(a1 + 952), 8);
  v37 = *(void **)(a1 + 912);
  if ( v37 != (void *)(a1 + 928) )
    free(v37);
  operator delete(*(_QWORD *)(a1 + 888), 16LL * *(unsigned int *)(a1 + 904), 8);
  v38 = *(void **)(a1 + 848);
  if ( v38 )
    operator delete(v38);
  operator delete(*(_QWORD *)(a1 + 824), 16LL * *(unsigned int *)(a1 + 840), 8);
  v39 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v39 )
  {
    v40 = *(_QWORD *)(a1 + 784);
    v41 = v40 + 16 * v39;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v40 + 1) > 1 )
        {
          v42 = *(void ***)(v40 + 8);
          if ( v42 )
            break;
        }
        v40 += 16;
        if ( v41 == v40 )
          goto LABEL_81;
      }
      if ( *v42 != v42 + 2 )
        free(*v42);
      v40 += 16;
      operator delete(v42, 0x418u);
    }
    while ( v41 != v40 );
LABEL_81:
    v39 = *(unsigned int *)(a1 + 800);
  }
  operator delete(*(_QWORD *)(a1 + 784), 16 * v39, 8);
  v43 = *(void **)(a1 + 752);
  if ( v43 )
    operator delete(v43);
  v44 = *(unsigned int *)(a1 + 744);
  v45 = *(_QWORD **)(a1 + 728);
  v46 = 56 * v44;
  if ( (_DWORD)v44 )
  {
    v47 = &v45[7 * v44];
    do
    {
      while ( 1 )
      {
        if ( *v45 != -2 && *v45 != -1 )
        {
          v48 = (_QWORD *)v45[1];
          if ( v48 != v45 + 3 )
            break;
        }
        v45 += 7;
        if ( v47 == v45 )
          goto LABEL_90;
      }
      free(v48);
      v45 += 7;
    }
    while ( v47 != v45 );
LABEL_90:
    v45 = *(_QWORD **)(a1 + 728);
    v46 = 56LL * *(unsigned int *)(a1 + 744);
  }
  operator delete(v45, v46, 8);
  if ( !*(_BYTE *)(a1 + 468) )
    free(*(void **)(a1 + 448));
  operator delete(*(_QWORD *)(a1 + 424), 16LL * *(unsigned int *)(a1 + 440), 8);
  v49 = *(void **)(a1 + 264);
  if ( v49 != (void *)(a1 + 280) )
    free(v49);
  v50 = *(void **)(a1 + 184);
  if ( v50 )
  {
    v51 = *(void ***)(a1 + 224);
    v52 = *(_QWORD *)(a1 + 256) + 8LL;
    if ( v52 > (unsigned __int64)v51 )
    {
      do
      {
        v53 = *v51++;
        operator delete(v53);
      }
      while ( v52 > (unsigned __int64)v51 );
      v50 = *(void **)(a1 + 184);
    }
    operator delete(v50);
  }
  operator delete(*(_QWORD *)(a1 + 160), 16LL * *(unsigned int *)(a1 + 176), 8);
  v54 = *(void **)(a1 + 120);
  if ( v54 != (void *)(a1 + 136) )
    operator delete(v54);
  nullsub_455();
  nullsub_1230();
}
