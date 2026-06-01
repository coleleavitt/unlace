/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A08F0
// Address: 0x080A08F0

//----- (080A08F0) --------------------------------------------------------
int __cdecl sub_80A08F0(int *a1)
{
  int v1; // edi
  int v2; // ebp
  _DWORD *v3; // eax
  void *v4; // edx
  void *v5; // edx
  int v6; // ebp
  _DWORD *v7; // edi
  void *v8; // edx
  void *v9; // edx
  int v10; // eax
  void *v11; // eax
  int v12; // edi
  void *v13; // eax
  int v14; // eax
  int (__cdecl *v15)(int *); // eax
  int v16; // eax
  void *v17; // eax
  char *v18; // ecx
  int v19; // ebp
  int i; // edi
  char *v21; // edx
  void *v22; // eax
  void *v23; // eax
  char *v24; // ecx
  int v25; // ebp
  int j; // edi
  char *v27; // edx
  void *v28; // eax
  int v30; // [esp+0h] [ebp-20h]
  int v31; // [esp+0h] [ebp-20h]

  v1 = 0;
  a1[76] = 0;
  v2 = a1[60];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)(a1[59] + 40 * v1);
      v4 = (void *)v3[5];
      if ( v4 )
      {
        v30 = a1[59] + 40 * v1;
        v3[6] = 0;
        sub_80CF780(v4);
        v3 = (_DWORD *)v30;
      }
      v5 = (void *)v3[2];
      if ( v5 )
      {
        v3[3] = 0;
        sub_80CF780(v5);
      }
      ++v1;
    }
    while ( v2 != v1 );
  }
  a1[60] = 0;
  v6 = 0;
  v31 = a1[6];
  if ( v31 )
  {
    do
    {
      v7 = (_DWORD *)(a1[5] + 32 * v6);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        sub_80CF780(v8);
      }
      v9 = (void *)v7[2];
      if ( v9 )
      {
        v7[3] = 0;
        sub_80CF780(v9);
      }
      ++v6;
    }
    while ( v31 != v6 );
  }
  v10 = a1[9];
  a1[6] = 0;
  if ( v10 )
    sub_809DB90(a1);
  v11 = (void *)a1[56];
  if ( v11 )
  {
    a1[57] = 0;
    sub_80CF780(v11);
    a1[56] = 0;
    a1[58] = 0;
  }
  sub_809DE10((_DWORD *)a1[52]);
  v12 = a1[80];
  a1[52] = 0;
  a1[53] = (int)(a1 + 51);
  a1[54] = (int)(a1 + 51);
  a1[55] = 0;
  while ( v12 )
  {
    sub_809ED80(*(_DWORD **)(v12 + 12));
    v13 = (void *)v12;
    v12 = *(_DWORD *)(v12 + 8);
    operator delete(v13, 0x34u);
  }
  a1[80] = 0;
  a1[81] = (int)(a1 + 79);
  a1[82] = (int)(a1 + 79);
  v14 = *a1;
  a1[83] = 0;
  a1[84] = 0;
  *((_BYTE *)a1 + 453) = 0;
  v15 = *(int (__cdecl **)(int *))(v14 + 300);
  if ( v15 != sub_80535C0 )
    return v15(a1);
  v16 = a1[85];
  if ( v16 )
  {
    (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(a1[85]);
    v17 = (void *)a1[86];
    if ( v17 )
    {
      a1[87] = 0;
      sub_80CF780(v17);
      a1[86] = 0;
      a1[88] = 0;
    }
    v18 = (char *)a1[89];
    if ( v18 )
    {
      v19 = a1[90];
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = &v18[12 * i];
          v22 = *(void **)v21;
          if ( *(_DWORD *)v21 )
          {
            *((_DWORD *)v21 + 1) = 0;
            sub_80CF780(v22);
            v18 = (char *)a1[89];
          }
        }
      }
      a1[90] = 0;
      sub_80CF780(v18);
      a1[89] = 0;
      a1[91] = 0;
    }
    v23 = (void *)a1[92];
    if ( v23 )
    {
      a1[93] = 0;
      sub_80CF780(v23);
      a1[92] = 0;
      a1[94] = 0;
    }
    v24 = (char *)a1[95];
    if ( v24 )
    {
      v25 = a1[96];
      if ( v25 )
      {
        for ( j = 0; j != v25; ++j )
        {
          v27 = &v24[12 * j];
          v28 = *(void **)v27;
          if ( *(_DWORD *)v27 )
          {
            *((_DWORD *)v27 + 1) = 0;
            sub_80CF780(v28);
            v24 = (char *)a1[95];
          }
        }
      }
      a1[96] = 0;
      sub_80CF780(v24);
      a1[95] = 0;
      a1[97] = 0;
    }
  }
  a1[85] = 0;
  return nullsub_9(0);
}
// 80A4AD0: using guessed type int __cdecl nullsub_9(_DWORD);
