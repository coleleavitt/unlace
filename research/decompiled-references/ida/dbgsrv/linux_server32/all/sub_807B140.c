/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B140
// Address: 0x0807B140

//----- (0807B140) --------------------------------------------------------
void __cdecl sub_807B140(_DWORD *a1)
{
  void *v1; // eax
  int v2; // ebp
  int i; // edi
  int v4; // edx
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  char *v13; // ecx
  int v14; // ebp
  int j; // edi
  char *v16; // edx
  void *v17; // eax
  char *v18; // ecx
  int v19; // ebp
  int k; // edi
  char *v21; // edx
  void *v22; // eax
  char *v23; // ecx
  int v24; // ebp
  int m; // edi
  char *v26; // edx
  void *v27; // eax
  void *v28; // eax

  sub_8077B70(a1);
  v1 = (void *)a1[57];
  a1[25] = 0;
  if ( v1 )
  {
    v2 = a1[58];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = 5 * i;
        sub_8089430((int)v1 + 4 * v4);
        v1 = (void *)a1[57];
      }
    }
    a1[58] = 0;
    sub_80CF780(v1);
  }
  v5 = (void *)a1[53];
  if ( v5 )
  {
    a1[54] = 0;
    sub_80CF780(v5);
  }
  v6 = (void *)a1[50];
  if ( v6 )
  {
    a1[51] = 0;
    sub_80CF780(v6);
  }
  v7 = (void *)a1[47];
  if ( v7 )
  {
    a1[48] = 0;
    sub_80CF780(v7);
  }
  v8 = (void *)a1[44];
  if ( v8 )
  {
    a1[45] = 0;
    sub_80CF780(v8);
  }
  v9 = (void *)a1[41];
  if ( v9 )
  {
    a1[42] = 0;
    sub_80CF780(v9);
  }
  v10 = (void *)a1[38];
  if ( v10 )
  {
    a1[39] = 0;
    sub_80CF780(v10);
  }
  v11 = (void *)a1[35];
  if ( v11 )
  {
    a1[36] = 0;
    sub_80CF780(v11);
  }
  v12 = (void *)a1[32];
  if ( v12 )
  {
    a1[33] = 0;
    sub_80CF780(v12);
  }
  v13 = (char *)a1[22];
  if ( v13 )
  {
    v14 = a1[23];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = &v13[12 * j];
        v17 = *(void **)v16;
        if ( *(_DWORD *)v16 )
        {
          *((_DWORD *)v16 + 1) = 0;
          sub_80CF780(v17);
          v13 = (char *)a1[22];
        }
      }
    }
    a1[23] = 0;
    sub_80CF780(v13);
  }
  v18 = (char *)a1[19];
  if ( v18 )
  {
    v19 = a1[20];
    if ( v19 )
    {
      for ( k = 0; k != v19; ++k )
      {
        v21 = &v18[12 * k];
        v22 = *(void **)v21;
        if ( *(_DWORD *)v21 )
        {
          *((_DWORD *)v21 + 1) = 0;
          sub_80CF780(v22);
          v18 = (char *)a1[19];
        }
      }
    }
    a1[20] = 0;
    sub_80CF780(v18);
  }
  v23 = (char *)a1[16];
  if ( v23 )
  {
    v24 = a1[17];
    if ( v24 )
    {
      for ( m = 0; m != v24; ++m )
      {
        v26 = &v23[12 * m];
        v27 = *(void **)v26;
        if ( *(_DWORD *)v26 )
        {
          *((_DWORD *)v26 + 1) = 0;
          sub_80CF780(v27);
          v23 = (char *)a1[16];
        }
      }
    }
    a1[17] = 0;
    sub_80CF780(v23);
  }
  v28 = (void *)a1[5];
  if ( v28 )
  {
    a1[6] = 0;
    sub_80CF780(v28);
  }
}
