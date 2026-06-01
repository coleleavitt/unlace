/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B270
// Address: 0x0001B270

//----- (0001B270) --------------------------------------------------------
int __fastcall sub_1B270(int a1)
{
  void *v2; // r0
  int v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  _DWORD *v14; // r3
  int v15; // r8
  int i; // r5
  void *v17; // r0
  char *v18; // r3
  void *v19; // r0
  _DWORD *v20; // r3
  int v21; // r8
  int j; // r5
  void *v23; // r0
  char *v24; // r3
  void *v25; // r0
  void *v26; // r0
  char *v27; // r0
  int v28; // r8
  int k; // r5
  char *v30; // r3
  void *v31; // r0
  void *v32; // r0
  char *v33; // r0
  int v34; // r8
  int m; // r7
  char *v36; // r5
  void *v37; // r0
  void *v38; // r0
  void *v39; // r0
  char *v40; // r0
  int v41; // r8
  int n; // r7
  char *v43; // r5
  void *v44; // r0
  void *v45; // r0
  void *v46; // r0
  int v47; // r5
  int v48; // r0
  int v49; // r3
  int v50; // r5
  int v51; // r3
  int v52; // r5
  int v53; // r3
  void *v54; // r0
  void **v55; // r5
  unsigned int v56; // r7
  void *v57; // t1
  void *v58; // r0
  void *v59; // r0
  char *v60; // r0
  int v61; // r8
  int ii; // r7
  char *v63; // r5
  void *v64; // r0
  void *v65; // r0
  _DWORD v67[4]; // [sp+4h] [bp-28h] BYREF
  _DWORD v68[6]; // [sp+14h] [bp-18h] BYREF

  v2 = *(void **)(a1 + 1128);
  *(_DWORD *)(a1 + 1104) = 0;
  *(_DWORD *)(a1 + 860) = 0;
  v3 = _stack_chk_guard;
  *(_DWORD *)(a1 + 1060) = 0;
  *(_DWORD *)a1 = &off_D266C;
  v68[4] = v3;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1132) = 0;
    sub_77F70(v2);
  }
  v4 = *(void **)(a1 + 1116);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 1120) = 0;
    sub_77F70(v4);
  }
  sub_19C20(a1 + 1080, *(_DWORD **)(a1 + 1088));
  v5 = *(void **)(a1 + 1048);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 1052) = 0;
    sub_77F70(v5);
  }
  v6 = *(void **)(a1 + 1036);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 1040) = 0;
    sub_77F70(v6);
  }
  v7 = *(void **)(a1 + 1024);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 1028) = 0;
    sub_77F70(v7);
  }
  sub_19C9C(a1 + 1000, *(_DWORD **)(a1 + 1008));
  sub_19C44(a1 + 976, *(_DWORD *)(a1 + 984));
  sub_19C20(a1 + 952, *(_DWORD **)(a1 + 960));
  v8 = *(void **)(a1 + 940);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 944) = 0;
    sub_77F70(v8);
  }
  v9 = *(void **)(a1 + 928);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 932) = 0;
    sub_77F70(v9);
  }
  v10 = *(void **)(a1 + 916);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 920) = 0;
    sub_77F70(v10);
  }
  v11 = *(void **)(a1 + 904);
  if ( v11 )
  {
    *(_DWORD *)(a1 + 908) = 0;
    sub_77F70(v11);
  }
  *(_DWORD *)a1 = &off_D2810;
  sub_55394(a1);
  v12 = *(void **)(a1 + 436);
  if ( v12 )
  {
    *(_DWORD *)(a1 + 440) = 0;
    sub_77F70(v12);
  }
  v13 = *(void **)(a1 + 424);
  if ( v13 )
  {
    *(_DWORD *)(a1 + 428) = 0;
    sub_77F70(v13);
  }
  v14 = *(_DWORD **)(a1 + 380);
  if ( v14 )
  {
    v15 = *(_DWORD *)(a1 + 384);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (void *)v14[3 * i];
        v18 = (char *)&v14[3 * i];
        if ( v17 )
        {
          *((_DWORD *)v18 + 1) = 0;
          sub_77F70(v17);
        }
        v14 = *(_DWORD **)(a1 + 380);
      }
    }
    *(_DWORD *)(a1 + 384) = 0;
    sub_77F70(v14);
  }
  v19 = *(void **)(a1 + 368);
  if ( v19 )
  {
    *(_DWORD *)(a1 + 372) = 0;
    sub_77F70(v19);
  }
  v20 = *(_DWORD **)(a1 + 356);
  if ( v20 )
  {
    v21 = *(_DWORD *)(a1 + 360);
    if ( v21 )
    {
      for ( j = 0; j != v21; ++j )
      {
        v23 = (void *)v20[3 * j];
        v24 = (char *)&v20[3 * j];
        if ( v23 )
        {
          *((_DWORD *)v24 + 1) = 0;
          sub_77F70(v23);
        }
        v20 = *(_DWORD **)(a1 + 356);
      }
    }
    *(_DWORD *)(a1 + 360) = 0;
    sub_77F70(v20);
  }
  v25 = *(void **)(a1 + 344);
  if ( v25 )
  {
    *(_DWORD *)(a1 + 348) = 0;
    sub_77F70(v25);
  }
  sub_18CDC(a1 + 312, *(_DWORD **)(a1 + 320));
  v26 = *(void **)(a1 + 300);
  if ( v26 )
  {
    *(_DWORD *)(a1 + 304) = 0;
    sub_77F70(v26);
  }
  v27 = *(char **)(a1 + 288);
  if ( v27 )
  {
    v28 = *(_DWORD *)(a1 + 292);
    if ( v28 )
    {
      for ( k = 0; k != v28; ++k )
      {
        v30 = &v27[36 * k];
        v31 = *((void **)v30 + 1);
        if ( v31 )
        {
          *((_DWORD *)v30 + 2) = 0;
          sub_77F70(v31);
        }
        v27 = *(char **)(a1 + 288);
      }
    }
    *(_DWORD *)(a1 + 292) = 0;
    sub_77F70(v27);
  }
  sub_18CB8(a1 + 264, *(_DWORD **)(a1 + 272));
  v32 = *(void **)(a1 + 252);
  if ( v32 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    sub_77F70(v32);
  }
  v33 = *(char **)(a1 + 236);
  if ( v33 )
  {
    v34 = *(_DWORD *)(a1 + 240);
    if ( v34 )
    {
      for ( m = 0; m != v34; ++m )
      {
        v36 = &v33[40 * m];
        v37 = *((void **)v36 + 5);
        if ( v37 )
        {
          *((_DWORD *)v36 + 6) = 0;
          sub_77F70(v37);
        }
        v38 = *((void **)v36 + 2);
        if ( v38 )
        {
          *((_DWORD *)v36 + 3) = 0;
          sub_77F70(v38);
        }
        v33 = *(char **)(a1 + 236);
      }
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_77F70(v33);
  }
  v39 = *(void **)(a1 + 224);
  if ( v39 )
  {
    *(_DWORD *)(a1 + 228) = 0;
    sub_77F70(v39);
  }
  sub_18C80(a1 + 200, *(_DWORD **)(a1 + 208));
  sub_18BEC(a1 + 176, *(_DWORD **)(a1 + 184));
  v40 = *(char **)(a1 + 164);
  if ( v40 )
  {
    v41 = *(_DWORD *)(a1 + 168);
    if ( v41 )
    {
      for ( n = 0; n != v41; ++n )
      {
        v43 = &v40[32 * n];
        v44 = *((void **)v43 + 5);
        if ( v44 )
        {
          *((_DWORD *)v43 + 6) = 0;
          sub_77F70(v44);
        }
        v45 = *((void **)v43 + 1);
        if ( v45 )
        {
          *((_DWORD *)v43 + 2) = 0;
          sub_77F70(v45);
        }
        v40 = *(char **)(a1 + 164);
      }
    }
    *(_DWORD *)(a1 + 168) = 0;
    sub_77F70(v40);
  }
  v46 = *(void **)(a1 + 148);
  if ( v46 )
  {
    *(_DWORD *)(a1 + 152) = 0;
    sub_77F70(v46);
  }
  sub_6E484((_DWORD *)(a1 + 96));
  v47 = *(_DWORD *)(a1 + 72);
  v48 = *(_DWORD *)(a1 + 64);
  v67[1] = *(_DWORD *)(a1 + 68);
  v49 = *(_DWORD *)(a1 + 76);
  v67[2] = v47;
  v50 = *(_DWORD *)(a1 + 80);
  v67[3] = v49;
  v51 = *(_DWORD *)(a1 + 84);
  v68[0] = v50;
  v52 = *(_DWORD *)(a1 + 88);
  v68[1] = v51;
  v53 = *(_DWORD *)(a1 + 92);
  v67[0] = v48;
  v68[2] = v52;
  v68[3] = v53;
  sub_1A7F0(a1 + 56, v67, v68);
  v54 = *(void **)(a1 + 56);
  if ( v54 )
  {
    v55 = *(void ***)(a1 + 76);
    v56 = *(_DWORD *)(a1 + 92) + 4;
    if ( (unsigned int)v55 < v56 )
    {
      do
      {
        v57 = *v55++;
        sub_809EC(v57);
      }
      while ( v56 > (unsigned int)v55 );
      v54 = *(void **)(a1 + 56);
    }
    sub_809EC(v54);
  }
  v58 = *(void **)(a1 + 44);
  if ( v58 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    sub_77F70(v58);
  }
  v59 = *(void **)(a1 + 32);
  if ( v59 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_77F70(v59);
  }
  v60 = *(char **)(a1 + 20);
  if ( v60 )
  {
    v61 = *(_DWORD *)(a1 + 24);
    if ( v61 )
    {
      for ( ii = 0; ii != v61; ++ii )
      {
        v63 = &v60[32 * ii];
        v64 = *((void **)v63 + 5);
        if ( v64 )
        {
          *((_DWORD *)v63 + 6) = 0;
          sub_77F70(v64);
        }
        v65 = *((void **)v63 + 2);
        if ( v65 )
        {
          *((_DWORD *)v63 + 3) = 0;
          sub_77F70(v65);
        }
        v60 = *(char **)(a1 + 20);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
    sub_77F70(v60);
  }
  return a1;
}
// D266C: using guessed type _UNKNOWN *off_D266C;
// D2810: using guessed type _UNKNOWN *off_D2810;
