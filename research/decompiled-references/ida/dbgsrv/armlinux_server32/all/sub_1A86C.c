/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A86C
// Address: 0x0001A86C

//----- (0001A86C) --------------------------------------------------------
int __fastcall sub_1A86C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r3
  int v5; // r8
  int i; // r5
  void *v7; // r0
  char *v8; // r3
  void *v9; // r0
  _DWORD *v10; // r3
  int v11; // r8
  int j; // r5
  void *v13; // r0
  char *v14; // r3
  void *v15; // r0
  void *v16; // r0
  char *v17; // r0
  int v18; // r8
  int k; // r5
  char *v20; // r3
  void *v21; // r0
  void *v22; // r0
  char *v23; // r0
  int v24; // r8
  int m; // r7
  char *v26; // r5
  void *v27; // r0
  void *v28; // r0
  void *v29; // r0
  char *v30; // r0
  int v31; // r8
  int n; // r7
  char *v33; // r5
  void *v34; // r0
  void *v35; // r0
  void *v36; // r0
  int v37; // r5
  int v38; // r0
  int v39; // r3
  int v40; // r5
  int v41; // r3
  int v42; // r5
  int v43; // r3
  void *v44; // r0
  void **v45; // r5
  unsigned int v46; // r7
  void *v47; // t1
  void *v48; // r0
  void *v49; // r0
  char *v50; // r0
  int v51; // r8
  int ii; // r7
  char *v53; // r5
  void *v54; // r0
  void *v55; // r0
  _DWORD v57[4]; // [sp+4h] [bp-28h] BYREF
  _DWORD v58[4]; // [sp+14h] [bp-18h] BYREF

  *(_DWORD *)a1 = &off_D2810;
  sub_55394(a1);
  v2 = *(void **)(a1 + 436);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 440) = 0;
    sub_77F70(v2);
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 428) = 0;
    sub_77F70(v3);
  }
  v4 = *(_DWORD **)(a1 + 380);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 384);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (void *)v4[3 * i];
        v8 = (char *)&v4[3 * i];
        if ( v7 )
        {
          *((_DWORD *)v8 + 1) = 0;
          sub_77F70(v7);
        }
        v4 = *(_DWORD **)(a1 + 380);
      }
    }
    *(_DWORD *)(a1 + 384) = 0;
    sub_77F70(v4);
  }
  v9 = *(void **)(a1 + 368);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 372) = 0;
    sub_77F70(v9);
  }
  v10 = *(_DWORD **)(a1 + 356);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 360);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (void *)v10[3 * j];
        v14 = (char *)&v10[3 * j];
        if ( v13 )
        {
          *((_DWORD *)v14 + 1) = 0;
          sub_77F70(v13);
        }
        v10 = *(_DWORD **)(a1 + 356);
      }
    }
    *(_DWORD *)(a1 + 360) = 0;
    sub_77F70(v10);
  }
  v15 = *(void **)(a1 + 344);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 348) = 0;
    sub_77F70(v15);
  }
  sub_18CDC(a1 + 312, *(_DWORD **)(a1 + 320));
  v16 = *(void **)(a1 + 300);
  if ( v16 )
  {
    *(_DWORD *)(a1 + 304) = 0;
    sub_77F70(v16);
  }
  v17 = *(char **)(a1 + 288);
  if ( v17 )
  {
    v18 = *(_DWORD *)(a1 + 292);
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v20 = &v17[36 * k];
        v21 = *((void **)v20 + 1);
        if ( v21 )
        {
          *((_DWORD *)v20 + 2) = 0;
          sub_77F70(v21);
        }
        v17 = *(char **)(a1 + 288);
      }
    }
    *(_DWORD *)(a1 + 292) = 0;
    sub_77F70(v17);
  }
  sub_18CB8(a1 + 264, *(_DWORD **)(a1 + 272));
  v22 = *(void **)(a1 + 252);
  if ( v22 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    sub_77F70(v22);
  }
  v23 = *(char **)(a1 + 236);
  if ( v23 )
  {
    v24 = *(_DWORD *)(a1 + 240);
    if ( v24 )
    {
      for ( m = 0; m != v24; ++m )
      {
        v26 = &v23[40 * m];
        v27 = *((void **)v26 + 5);
        if ( v27 )
        {
          *((_DWORD *)v26 + 6) = 0;
          sub_77F70(v27);
        }
        v28 = *((void **)v26 + 2);
        if ( v28 )
        {
          *((_DWORD *)v26 + 3) = 0;
          sub_77F70(v28);
        }
        v23 = *(char **)(a1 + 236);
      }
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_77F70(v23);
  }
  v29 = *(void **)(a1 + 224);
  if ( v29 )
  {
    *(_DWORD *)(a1 + 228) = 0;
    sub_77F70(v29);
  }
  sub_18C80(a1 + 200, *(_DWORD **)(a1 + 208));
  sub_18BEC(a1 + 176, *(_DWORD **)(a1 + 184));
  v30 = *(char **)(a1 + 164);
  if ( v30 )
  {
    v31 = *(_DWORD *)(a1 + 168);
    if ( v31 )
    {
      for ( n = 0; n != v31; ++n )
      {
        v33 = &v30[32 * n];
        v34 = *((void **)v33 + 5);
        if ( v34 )
        {
          *((_DWORD *)v33 + 6) = 0;
          sub_77F70(v34);
        }
        v35 = *((void **)v33 + 1);
        if ( v35 )
        {
          *((_DWORD *)v33 + 2) = 0;
          sub_77F70(v35);
        }
        v30 = *(char **)(a1 + 164);
      }
    }
    *(_DWORD *)(a1 + 168) = 0;
    sub_77F70(v30);
  }
  v36 = *(void **)(a1 + 148);
  if ( v36 )
  {
    *(_DWORD *)(a1 + 152) = 0;
    sub_77F70(v36);
  }
  sub_6E484((_DWORD *)(a1 + 96));
  v37 = *(_DWORD *)(a1 + 72);
  v38 = *(_DWORD *)(a1 + 64);
  v57[1] = *(_DWORD *)(a1 + 68);
  v39 = *(_DWORD *)(a1 + 76);
  v57[2] = v37;
  v40 = *(_DWORD *)(a1 + 80);
  v57[3] = v39;
  v41 = *(_DWORD *)(a1 + 84);
  v58[0] = v40;
  v42 = *(_DWORD *)(a1 + 88);
  v58[1] = v41;
  v43 = *(_DWORD *)(a1 + 92);
  v57[0] = v38;
  v58[2] = v42;
  v58[3] = v43;
  sub_1A7F0(a1 + 56, v57, v58);
  v44 = *(void **)(a1 + 56);
  if ( v44 )
  {
    v45 = *(void ***)(a1 + 76);
    v46 = *(_DWORD *)(a1 + 92) + 4;
    if ( (unsigned int)v45 < v46 )
    {
      do
      {
        v47 = *v45++;
        sub_809EC(v47);
      }
      while ( v46 > (unsigned int)v45 );
      v44 = *(void **)(a1 + 56);
    }
    sub_809EC(v44);
  }
  v48 = *(void **)(a1 + 44);
  if ( v48 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    sub_77F70(v48);
  }
  v49 = *(void **)(a1 + 32);
  if ( v49 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_77F70(v49);
  }
  v50 = *(char **)(a1 + 20);
  if ( v50 )
  {
    v51 = *(_DWORD *)(a1 + 24);
    if ( v51 )
    {
      for ( ii = 0; ii != v51; ++ii )
      {
        v53 = &v50[32 * ii];
        v54 = *((void **)v53 + 5);
        if ( v54 )
        {
          *((_DWORD *)v53 + 6) = 0;
          sub_77F70(v54);
        }
        v55 = *((void **)v53 + 2);
        if ( v55 )
        {
          *((_DWORD *)v53 + 3) = 0;
          sub_77F70(v55);
        }
        v50 = *(char **)(a1 + 20);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
    sub_77F70(v50);
  }
  return a1;
}
// D2810: using guessed type _UNKNOWN *off_D2810;
