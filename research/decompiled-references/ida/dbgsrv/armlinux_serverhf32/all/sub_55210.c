/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55210
// Address: 0x00055210

//----- (00055210) --------------------------------------------------------
int __fastcall sub_55210(int a1)
{
  int v1; // r6
  int v2; // r9
  int i; // r8
  _DWORD *v5; // r5
  void *v6; // r0
  void *v7; // r0
  int v8; // r8
  int v9; // r6
  _DWORD *v10; // r5
  void *v11; // r0
  void *v12; // r0
  int v13; // r3
  void *v14; // r0
  _DWORD *v15; // r1
  int v16; // r1
  int (__fastcall *v17)(_DWORD *); // r3
  int v18; // r0
  void *v19; // r0
  _DWORD *v20; // r3
  int v21; // r6
  int j; // r5
  void *v23; // r0
  char *v24; // r3
  void *v25; // r0
  _DWORD *v26; // r3
  int v27; // r6
  int k; // r5
  void *v29; // r0
  char *v30; // r3

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 304) = 0;
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = (_DWORD *)(*(_DWORD *)(a1 + 236) + v1);
      v6 = (void *)v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        sub_77E08(v6);
      }
      v7 = (void *)v5[2];
      if ( v7 )
      {
        v5[3] = 0;
        sub_77E08(v7);
      }
      v1 += 40;
    }
  }
  v8 = *(_DWORD *)(a1 + 24);
  v9 = 0;
  *(_DWORD *)(a1 + 240) = 0;
  if ( v8 )
  {
    do
    {
      v10 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 32 * v9);
      v11 = (void *)v10[5];
      if ( v11 )
      {
        v10[6] = 0;
        sub_77E08(v11);
      }
      v12 = (void *)v10[2];
      if ( v12 )
      {
        v10[3] = 0;
        sub_77E08(v12);
      }
      ++v9;
    }
    while ( v8 != v9 );
  }
  v13 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v13 )
    sub_52EE8(a1);
  v14 = *(void **)(a1 + 224);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 228) = 0;
    sub_77E08(v14);
    *(_DWORD *)(a1 + 224) = 0;
    *(_DWORD *)(a1 + 232) = 0;
  }
  sub_18ADC(a1 + 200, *(_DWORD **)(a1 + 208));
  *(_DWORD *)(a1 + 212) = a1 + 204;
  *(_DWORD *)(a1 + 216) = a1 + 204;
  v15 = *(_DWORD **)(a1 + 320);
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  sub_18B38(a1 + 312, v15);
  v16 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 453) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 324) = a1 + 316;
  *(_DWORD *)(a1 + 328) = a1 + 316;
  v17 = *(int (__fastcall **)(_DWORD *))(v16 + 300);
  if ( v17 != sub_150AC )
    return v17((_DWORD *)a1);
  v18 = *(_DWORD *)(a1 + 340);
  if ( v18 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v19 = *(void **)(a1 + 344);
    if ( v19 )
    {
      *(_DWORD *)(a1 + 348) = 0;
      sub_77E08(v19);
      *(_DWORD *)(a1 + 344) = 0;
      *(_DWORD *)(a1 + 352) = 0;
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
            sub_77E08(v23);
          }
          v20 = *(_DWORD **)(a1 + 356);
        }
      }
      *(_DWORD *)(a1 + 360) = 0;
      sub_77E08(v20);
      *(_DWORD *)(a1 + 356) = 0;
      *(_DWORD *)(a1 + 364) = 0;
    }
    v25 = *(void **)(a1 + 368);
    if ( v25 )
    {
      *(_DWORD *)(a1 + 372) = 0;
      sub_77E08(v25);
      *(_DWORD *)(a1 + 368) = 0;
      *(_DWORD *)(a1 + 376) = 0;
    }
    v26 = *(_DWORD **)(a1 + 380);
    if ( v26 )
    {
      v27 = *(_DWORD *)(a1 + 384);
      if ( v27 )
      {
        for ( k = 0; k != v27; ++k )
        {
          v29 = (void *)v26[3 * k];
          v30 = (char *)&v26[3 * k];
          if ( v29 )
          {
            *((_DWORD *)v30 + 1) = 0;
            sub_77E08(v29);
          }
          v26 = *(_DWORD **)(a1 + 380);
        }
      }
      *(_DWORD *)(a1 + 384) = 0;
      sub_77E08(v26);
      *(_DWORD *)(a1 + 380) = 0;
      *(_DWORD *)(a1 + 388) = 0;
    }
  }
  *(_DWORD *)(a1 + 340) = 0;
  return nullsub_9(0);
}
// 56FE4: using guessed type int __fastcall nullsub_9(_DWORD);
