/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80593F0
// Address: 0x080593F0

//----- (080593F0) --------------------------------------------------------
unsigned int __cdecl sub_80593F0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  int v3; // esi
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  int v8; // esi
  _DWORD *v9; // ebp
  void *v10; // eax
  _DWORD *v11; // esi
  void *v12; // eax
  void *v13; // eax
  int v14; // ebp
  _DWORD *v15; // eax
  void *v16; // ecx
  void *v17; // eax
  void *v18; // eax
  int v19; // esi
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  _DWORD *v26; // [esp+0h] [ebp-24h]
  _DWORD *v27; // [esp+4h] [ebp-20h]

  a1[190] = 0;
  a1[132] = 0;
  *a1 = off_811C930;
  v1 = (void *)a1[196];
  a1[179] = 0;
  if ( v1 )
  {
    a1[197] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[193];
  if ( v2 )
  {
    a1[194] = 0;
    sub_80CF780(v2);
  }
  v3 = a1[186];
  while ( v3 )
  {
    sub_8057480(*(_DWORD **)(v3 + 12));
    v4 = (void *)v3;
    v3 = *(_DWORD *)(v3 + 8);
    operator delete(v4, 0x14u);
  }
  v5 = (void *)a1[176];
  if ( v5 )
  {
    a1[177] = 0;
    sub_80CF780(v5);
  }
  v6 = (void *)a1[173];
  if ( v6 )
  {
    a1[174] = 0;
    sub_80CF780(v6);
  }
  v7 = (void *)a1[170];
  if ( v7 )
  {
    a1[171] = 0;
    sub_80CF780(v7);
  }
  v8 = a1[166];
  while ( v8 )
  {
    v9 = (_DWORD *)v8;
    sub_8056DB0(*(_DWORD **)(v8 + 12));
    v10 = *(void **)(v8 + 52);
    v8 = *(_DWORD *)(v8 + 8);
    if ( v10 )
    {
      v9[14] = 0;
      sub_80CF780(v10);
    }
    operator delete(v9, 0x40u);
  }
  v27 = (_DWORD *)a1[160];
  while ( v27 )
  {
    v11 = v27;
    sub_8057A30((_DWORD *)v27[3]);
    v27 = (_DWORD *)v27[2];
    v12 = (void *)v11[22];
    if ( v12 )
    {
      v11[23] = 0;
      sub_80CF780(v12);
    }
    v13 = (void *)v11[19];
    if ( v13 )
    {
      v11[20] = 0;
      sub_80CF780(v13);
    }
    v14 = v11[15];
    while ( v14 )
    {
      sub_8057050(*(_DWORD **)(v14 + 12));
      v15 = (_DWORD *)v14;
      v14 = *(_DWORD *)(v14 + 8);
      v16 = (void *)v15[5];
      if ( v16 )
      {
        v26 = v15;
        v15[6] = 0;
        sub_80CF780(v16);
        v15 = v26;
      }
      operator delete(v15, 0x20u);
    }
    v17 = (void *)v11[10];
    if ( v17 )
    {
      v11[11] = 0;
      sub_80CF780(v17);
    }
    v18 = (void *)v11[7];
    if ( v18 )
    {
      v11[8] = 0;
      sub_80CF780(v18);
    }
    operator delete(v11, 0x68u);
  }
  v19 = a1[154];
  while ( v19 )
  {
    sub_8057480(*(_DWORD **)(v19 + 12));
    v20 = (void *)v19;
    v19 = *(_DWORD *)(v19 + 8);
    operator delete(v20, 0x14u);
  }
  v21 = (void *)a1[149];
  if ( v21 )
  {
    a1[150] = 0;
    sub_80CF780(v21);
  }
  v22 = (void *)a1[146];
  if ( v22 )
  {
    a1[147] = 0;
    sub_80CF780(v22);
  }
  v23 = (void *)a1[143];
  if ( v23 )
  {
    a1[144] = 0;
    sub_80CF780(v23);
  }
  v24 = (void *)a1[140];
  if ( v24 )
  {
    a1[141] = 0;
    sub_80CF780(v24);
  }
  *a1 = &off_811CC84;
  return sub_8058ED0((int)a1);
}
// 811C930: using guessed type int (__cdecl *off_811C930[4])(int, int);
// 811CC84: using guessed type int (__cdecl *off_811CC84)(int, int);
