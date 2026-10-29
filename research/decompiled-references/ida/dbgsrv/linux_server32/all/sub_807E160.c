/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807E160
// Address: 0x0807E160

//----- (0807E160) --------------------------------------------------------
void __cdecl sub_807E160(_DWORD *a1)
{
  void *v1; // eax
  char *v2; // eax
  int v3; // ebp
  int i; // esi
  char *v5; // eax
  void *v6; // edx
  void *v7; // edx
  void *v8; // eax
  char *v9; // edx
  int v10; // ebp
  int j; // esi
  char *v12; // eax
  void *v13; // ecx
  char *v14; // ecx
  int v15; // ebp
  int k; // esi
  char *v17; // edx
  void *v18; // eax
  char *v19; // [esp+0h] [ebp-20h]

  *a1 = &off_811BD6C;
  v1 = (void *)a1[19];
  if ( v1 )
  {
    a1[20] = 0;
    sub_80CF780(v1);
  }
  v2 = (char *)a1[11];
  if ( v2 )
  {
    v3 = a1[12];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          v19 = v5;
          *((_DWORD *)v5 + 4) = 0;
          sub_80CF780(v6);
          v5 = v19;
        }
        v7 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_80CF780(v7);
        }
        v2 = (char *)a1[11];
      }
    }
    a1[12] = 0;
    sub_80CF780(v2);
  }
  v8 = (void *)a1[8];
  if ( v8 )
  {
    a1[9] = 0;
    sub_80CF780(v8);
  }
  v9 = (char *)a1[5];
  if ( v9 )
  {
    v10 = a1[6];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = &v9[16 * j];
        v13 = *(void **)v12;
        if ( *(_DWORD *)v12 )
        {
          *((_DWORD *)v12 + 1) = 0;
          sub_80CF780(v13);
          v9 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    sub_80CF780(v9);
  }
  v14 = (char *)a1[2];
  if ( v14 )
  {
    v15 = a1[3];
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = &v14[12 * k];
        v18 = *(void **)v17;
        if ( *(_DWORD *)v17 )
        {
          *((_DWORD *)v17 + 1) = 0;
          sub_80CF780(v18);
          v14 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    sub_80CF780(v14);
  }
}
// 811BD6C: using guessed type int (__cdecl *off_811BD6C)(int);
