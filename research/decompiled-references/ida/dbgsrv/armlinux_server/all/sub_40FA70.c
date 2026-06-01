/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FA70
// Address: 0x000000000040FA70

//----- (000000000040FA70) ----------------------------------------------------
__int64 __fastcall sub_40FA70(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  char *v4; // x1
  __int64 v5; // x23
  __int64 v6; // x20
  __int64 i; // x22
  void *v8; // x0
  char *v9; // x1
  void *v10; // x0
  char *v11; // x1
  __int64 v12; // x23
  __int64 v13; // x20
  __int64 j; // x22
  void *v15; // x0
  char *v16; // x1
  void *v17; // x0
  void *v18; // x0
  char *v19; // x0
  __int64 v20; // x23
  __int64 v21; // x22
  __int64 k; // x20
  char *v23; // x1
  void *v24; // x0
  void *v25; // x0
  char *v26; // x0
  __int64 v27; // x24
  __int64 v28; // x23
  __int64 m; // x22
  char *v30; // x20
  void *v31; // x0
  void *v32; // x0
  void *v33; // x0
  char *v34; // x0
  __int64 v35; // x23
  __int64 n; // x22
  char *v37; // x20
  void *v38; // x0
  void *v39; // x0
  void *v40; // x0
  __int64 v41; // x6
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x0
  __int64 v47; // x1
  void *v48; // x0
  void **v49; // x20
  unsigned __int64 v50; // x22
  void *v51; // t1
  void *v52; // x0
  void *v53; // x0
  char *v54; // x0
  __int64 v55; // x24
  __int64 v56; // x23
  __int64 ii; // x22
  char *v58; // x20
  void *v59; // x0
  void *v60; // x0
  __int64 v62[4]; // [xsp+48h] [xbp-48h] BYREF
  __int64 v63[5]; // [xsp+68h] [xbp-28h] BYREF

  *(_QWORD *)a1 = off_51DCD8;
  sub_45EDF8((__int64 *)a1);
  v2 = *(void **)(a1 + 832);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 808);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    j__free(v3);
  }
  v4 = *(char **)(a1 + 744);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 752);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = *(void **)&v4[v6];
        v9 = &v4[v6];
        if ( v8 )
        {
          *((_QWORD *)v9 + 1) = 0;
          j__free(v8);
        }
        v6 += 24;
        v4 = *(char **)(a1 + 744);
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    j__free(v4);
  }
  v10 = *(void **)(a1 + 720);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 728) = 0;
    j__free(v10);
  }
  v11 = *(char **)(a1 + 696);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 704);
    if ( v12 )
    {
      v13 = 0;
      for ( j = 0; j != v12; ++j )
      {
        v15 = *(void **)&v11[v13];
        v16 = &v11[v13];
        if ( v15 )
        {
          *((_QWORD *)v16 + 1) = 0;
          j__free(v15);
        }
        v13 += 24;
        v11 = *(char **)(a1 + 696);
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    j__free(v11);
  }
  v17 = *(void **)(a1 + 672);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    j__free(v17);
  }
  sub_40D3C8(a1 + 608, *(_QWORD **)(a1 + 624));
  v18 = *(void **)(a1 + 584);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    j__free(v18);
  }
  v19 = *(char **)(a1 + 560);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 568);
    if ( v20 )
    {
      v21 = 0;
      for ( k = 0; k != v20; ++k )
      {
        v23 = &v19[v21];
        v24 = *(void **)&v19[v21 + 8];
        if ( v24 )
        {
          *((_QWORD *)v23 + 2) = 0;
          j__free(v24);
        }
        v21 += 56;
        v19 = *(char **)(a1 + 560);
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    j__free(v19);
  }
  sub_40D380(a1 + 512, *(_QWORD **)(a1 + 528));
  v25 = *(void **)(a1 + 488);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    j__free(v25);
  }
  v26 = *(char **)(a1 + 456);
  if ( v26 )
  {
    v27 = *(_QWORD *)(a1 + 464);
    if ( v27 )
    {
      v28 = 0;
      for ( m = 0; m != v27; ++m )
      {
        v30 = &v26[v28];
        v31 = *(void **)&v26[v28 + 40];
        if ( v31 )
        {
          *((_QWORD *)v30 + 6) = 0;
          j__free(v31);
        }
        v32 = *((void **)v30 + 2);
        if ( v32 )
        {
          *((_QWORD *)v30 + 3) = 0;
          j__free(v32);
        }
        v28 += 80;
        v26 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v26);
  }
  v33 = *(void **)(a1 + 432);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 440) = 0;
    j__free(v33);
  }
  sub_40D318(a1 + 384, *(_QWORD **)(a1 + 400));
  sub_40D230(a1 + 336, *(_QWORD **)(a1 + 352));
  v34 = *(char **)(a1 + 312);
  if ( v34 )
  {
    v35 = *(_QWORD *)(a1 + 320);
    if ( v35 )
    {
      for ( n = 0; n != v35; ++n )
      {
        v37 = &v34[64 * n];
        v38 = *((void **)v37 + 5);
        if ( v38 )
        {
          *((_QWORD *)v37 + 6) = 0;
          j__free(v38);
        }
        v39 = *((void **)v37 + 1);
        if ( v39 )
        {
          *((_QWORD *)v37 + 2) = 0;
          j__free(v39);
        }
        v34 = *(char **)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v34);
  }
  v40 = *(void **)(a1 + 280);
  if ( v40 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    j__free(v40);
  }
  sub_482ED0(a1 + 200);
  v41 = *(_QWORD *)(a1 + 144);
  v43 = *(_QWORD *)(a1 + 152);
  v42 = *(_QWORD *)(a1 + 160);
  v62[0] = *(_QWORD *)(a1 + 136);
  v62[1] = v41;
  v45 = *(_QWORD *)(a1 + 168);
  v44 = *(_QWORD *)(a1 + 176);
  v62[2] = v43;
  v62[3] = v42;
  v47 = *(_QWORD *)(a1 + 184);
  v46 = *(_QWORD *)(a1 + 192);
  v63[0] = v45;
  v63[1] = v44;
  v63[2] = v47;
  v63[3] = v46;
  sub_40F988(a1 + 120, v62, v63);
  v48 = *(void **)(a1 + 120);
  if ( v48 )
  {
    v49 = *(void ***)(a1 + 160);
    v50 = *(_QWORD *)(a1 + 192) + 8LL;
    if ( (unsigned __int64)v49 < v50 )
    {
      do
      {
        v51 = *v49++;
        j__free_0(v51);
      }
      while ( v50 > (unsigned __int64)v49 );
      v48 = *(void **)(a1 + 120);
    }
    j__free_0(v48);
  }
  v52 = *(void **)(a1 + 96);
  if ( v52 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    j__free(v52);
  }
  v53 = *(void **)(a1 + 72);
  if ( v53 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v53);
  }
  v54 = *(char **)(a1 + 48);
  if ( v54 )
  {
    v55 = *(_QWORD *)(a1 + 56);
    if ( v55 )
    {
      v56 = 0;
      for ( ii = 0; ii != v55; ++ii )
      {
        v58 = &v54[v56];
        v59 = *(void **)&v54[v56 + 32];
        if ( v59 )
        {
          *((_QWORD *)v58 + 5) = 0;
          j__free(v59);
        }
        v60 = *((void **)v58 + 1);
        if ( v60 )
        {
          *((_QWORD *)v58 + 2) = 0;
          j__free(v60);
        }
        v56 += 56;
        v54 = *(char **)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v54);
  }
  return v63[4] ^ _stack_chk_guard;
}
// 51DCD8: using guessed type __int64 (__fastcall *off_51DCD8[4])();
