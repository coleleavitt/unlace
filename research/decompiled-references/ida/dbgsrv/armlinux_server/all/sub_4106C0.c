/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4106C0
// Address: 0x00000000004106C0

//----- (00000000004106C0) ----------------------------------------------------
__int64 __fastcall sub_4106C0(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  char *v13; // x1
  __int64 v14; // x23
  __int64 v15; // x20
  __int64 i; // x22
  void *v17; // x0
  char *v18; // x1
  void *v19; // x0
  char *v20; // x1
  __int64 v21; // x23
  __int64 v22; // x20
  __int64 j; // x22
  void *v24; // x0
  char *v25; // x1
  void *v26; // x0
  void *v27; // x0
  char *v28; // x0
  __int64 v29; // x23
  __int64 v30; // x22
  __int64 k; // x20
  char *v32; // x1
  void *v33; // x0
  void *v34; // x0
  char *v35; // x0
  __int64 v36; // x24
  __int64 v37; // x23
  __int64 m; // x22
  char *v39; // x20
  void *v40; // x0
  void *v41; // x0
  void *v42; // x0
  char *v43; // x0
  __int64 v44; // x23
  __int64 n; // x22
  char *v46; // x20
  void *v47; // x0
  void *v48; // x0
  void *v49; // x0
  __int64 v50; // x6
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x0
  __int64 v56; // x1
  void *v57; // x0
  void **v58; // x20
  unsigned __int64 v59; // x22
  void *v60; // t1
  void *v61; // x0
  void *v62; // x0
  char *v63; // x0
  __int64 v64; // x24
  __int64 v65; // x23
  __int64 ii; // x22
  char *v67; // x20
  void *v68; // x0
  void *v69; // x0
  __int64 v71[4]; // [xsp+48h] [xbp-48h] BYREF
  __int64 v72[5]; // [xsp+68h] [xbp-28h] BYREF

  v2 = *(void **)(a1 + 2144);
  *(_QWORD *)a1 = off_51D990;
  *(_QWORD *)(a1 + 1656) = 0;
  *(_QWORD *)(a1 + 2032) = 0;
  *(_QWORD *)(a1 + 2104) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2152) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 2120);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 2128) = 0;
    j__free(v3);
  }
  sub_40E5E8(a1 + 2056, *(_QWORD **)(a1 + 2072));
  v4 = *(void **)(a1 + 2008);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 2016) = 0;
    j__free(v4);
  }
  v5 = *(void **)(a1 + 1984);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1992) = 0;
    j__free(v5);
  }
  v6 = *(void **)(a1 + 1960);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1968) = 0;
    j__free(v6);
  }
  sub_40E6C0(a1 + 1912, *(_QWORD **)(a1 + 1928));
  sub_40E630(a1 + 1864, *(_QWORD *)(a1 + 1880));
  sub_40E5E8(a1 + 1816, *(_QWORD **)(a1 + 1832));
  v7 = *(void **)(a1 + 1792);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 1800) = 0;
    j__free(v7);
  }
  v8 = *(void **)(a1 + 1768);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 1776) = 0;
    j__free(v8);
  }
  v9 = *(void **)(a1 + 1744);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 1752) = 0;
    j__free(v9);
  }
  v10 = *(void **)(a1 + 1720);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 1728) = 0;
    j__free(v10);
  }
  *(_QWORD *)a1 = off_51DCD8;
  sub_45EDF8((__int64 *)a1);
  v11 = *(void **)(a1 + 832);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    j__free(v11);
  }
  v12 = *(void **)(a1 + 808);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    j__free(v12);
  }
  v13 = *(char **)(a1 + 744);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 752);
    if ( v14 )
    {
      v15 = 0;
      for ( i = 0; i != v14; ++i )
      {
        v17 = *(void **)&v13[v15];
        v18 = &v13[v15];
        if ( v17 )
        {
          *((_QWORD *)v18 + 1) = 0;
          j__free(v17);
        }
        v15 += 24;
        v13 = *(char **)(a1 + 744);
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    j__free(v13);
  }
  v19 = *(void **)(a1 + 720);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 728) = 0;
    j__free(v19);
  }
  v20 = *(char **)(a1 + 696);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 704);
    if ( v21 )
    {
      v22 = 0;
      for ( j = 0; j != v21; ++j )
      {
        v24 = *(void **)&v20[v22];
        v25 = &v20[v22];
        if ( v24 )
        {
          *((_QWORD *)v25 + 1) = 0;
          j__free(v24);
        }
        v22 += 24;
        v20 = *(char **)(a1 + 696);
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    j__free(v20);
  }
  v26 = *(void **)(a1 + 672);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    j__free(v26);
  }
  sub_40D3C8(a1 + 608, *(_QWORD **)(a1 + 624));
  v27 = *(void **)(a1 + 584);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    j__free(v27);
  }
  v28 = *(char **)(a1 + 560);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 568);
    if ( v29 )
    {
      v30 = 0;
      for ( k = 0; k != v29; ++k )
      {
        v32 = &v28[v30];
        v33 = *(void **)&v28[v30 + 8];
        if ( v33 )
        {
          *((_QWORD *)v32 + 2) = 0;
          j__free(v33);
        }
        v30 += 56;
        v28 = *(char **)(a1 + 560);
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    j__free(v28);
  }
  sub_40D380(a1 + 512, *(_QWORD **)(a1 + 528));
  v34 = *(void **)(a1 + 488);
  if ( v34 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    j__free(v34);
  }
  v35 = *(char **)(a1 + 456);
  if ( v35 )
  {
    v36 = *(_QWORD *)(a1 + 464);
    if ( v36 )
    {
      v37 = 0;
      for ( m = 0; m != v36; ++m )
      {
        v39 = &v35[v37];
        v40 = *(void **)&v35[v37 + 40];
        if ( v40 )
        {
          *((_QWORD *)v39 + 6) = 0;
          j__free(v40);
        }
        v41 = *((void **)v39 + 2);
        if ( v41 )
        {
          *((_QWORD *)v39 + 3) = 0;
          j__free(v41);
        }
        v37 += 80;
        v35 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v35);
  }
  v42 = *(void **)(a1 + 432);
  if ( v42 )
  {
    *(_QWORD *)(a1 + 440) = 0;
    j__free(v42);
  }
  sub_40D318(a1 + 384, *(_QWORD **)(a1 + 400));
  sub_40D230(a1 + 336, *(_QWORD **)(a1 + 352));
  v43 = *(char **)(a1 + 312);
  if ( v43 )
  {
    v44 = *(_QWORD *)(a1 + 320);
    if ( v44 )
    {
      for ( n = 0; n != v44; ++n )
      {
        v46 = &v43[64 * n];
        v47 = *((void **)v46 + 5);
        if ( v47 )
        {
          *((_QWORD *)v46 + 6) = 0;
          j__free(v47);
        }
        v48 = *((void **)v46 + 1);
        if ( v48 )
        {
          *((_QWORD *)v46 + 2) = 0;
          j__free(v48);
        }
        v43 = *(char **)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v43);
  }
  v49 = *(void **)(a1 + 280);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    j__free(v49);
  }
  sub_482ED0(a1 + 200);
  v50 = *(_QWORD *)(a1 + 144);
  v52 = *(_QWORD *)(a1 + 152);
  v51 = *(_QWORD *)(a1 + 160);
  v71[0] = *(_QWORD *)(a1 + 136);
  v71[1] = v50;
  v54 = *(_QWORD *)(a1 + 168);
  v53 = *(_QWORD *)(a1 + 176);
  v71[2] = v52;
  v71[3] = v51;
  v56 = *(_QWORD *)(a1 + 184);
  v55 = *(_QWORD *)(a1 + 192);
  v72[0] = v54;
  v72[1] = v53;
  v72[2] = v56;
  v72[3] = v55;
  sub_40F988(a1 + 120, v71, v72);
  v57 = *(void **)(a1 + 120);
  if ( v57 )
  {
    v58 = *(void ***)(a1 + 160);
    v59 = *(_QWORD *)(a1 + 192) + 8LL;
    if ( (unsigned __int64)v58 < v59 )
    {
      do
      {
        v60 = *v58++;
        j__free_0(v60);
      }
      while ( v59 > (unsigned __int64)v58 );
      v57 = *(void **)(a1 + 120);
    }
    j__free_0(v57);
  }
  v61 = *(void **)(a1 + 96);
  if ( v61 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    j__free(v61);
  }
  v62 = *(void **)(a1 + 72);
  if ( v62 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v62);
  }
  v63 = *(char **)(a1 + 48);
  if ( v63 )
  {
    v64 = *(_QWORD *)(a1 + 56);
    if ( v64 )
    {
      v65 = 0;
      for ( ii = 0; ii != v64; ++ii )
      {
        v67 = &v63[v65];
        v68 = *(void **)&v63[v65 + 32];
        if ( v68 )
        {
          *((_QWORD *)v67 + 5) = 0;
          j__free(v68);
        }
        v69 = *((void **)v67 + 1);
        if ( v69 )
        {
          *((_QWORD *)v67 + 2) = 0;
          j__free(v69);
        }
        v65 += 56;
        v63 = *(char **)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v63);
  }
  return v72[4] ^ _stack_chk_guard;
}
// 51D990: using guessed type __int64 (__fastcall *off_51D990[16])();
// 51DCD8: using guessed type __int64 (__fastcall *off_51DCD8[4])();
