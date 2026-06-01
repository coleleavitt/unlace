/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A84E0
// Address: 0x080A84E0

//----- (080A84E0) --------------------------------------------------------
void __cdecl sub_80A84E0(_DWORD *a1)
{
  char *v1; // edx
  int v2; // ebp
  int i; // esi
  char *v4; // eax
  void *v5; // ecx
  unsigned int j; // esi
  int v7; // eax
  void *v8; // eax
  char *v9; // ecx
  int v10; // ebp
  int k; // esi
  char *v12; // edx
  void *v13; // eax

  if ( *a1 )
  {
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*a1 + 4))(*a1);
    *a1 = 0;
  }
  v1 = (char *)a1[13];
  *(_OWORD *)(a1 + 1) = 0;
  *(_OWORD *)(a1 + 5) = 0;
  *(_OWORD *)(a1 + 9) = 0;
  if ( v1 )
  {
    v2 = a1[14];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = &v1[100 * i];
        v5 = *((void **)v4 + 3);
        if ( v5 )
        {
          *((_DWORD *)v4 + 4) = 0;
          sub_80CF780(v5);
          v1 = (char *)a1[13];
        }
      }
    }
    a1[14] = 0;
    sub_80CF780(v1);
    a1[13] = 0;
    a1[15] = 0;
  }
  for ( j = 0; j < a1[34]; ++j )
  {
    v7 = 5 * j;
    sub_80CF780(*(void **)(a1[33] + 8 * v7 + 28));
  }
  v8 = (void *)a1[16];
  if ( v8 )
  {
    a1[17] = 0;
    sub_80CF780(v8);
    a1[16] = 0;
    a1[18] = 0;
  }
  v9 = (char *)a1[36];
  if ( v9 )
  {
    v10 = a1[37];
    if ( v10 )
    {
      for ( k = 0; k != v10; ++k )
      {
        v12 = &v9[12 * k];
        v13 = *(void **)v12;
        if ( *(_DWORD *)v12 )
        {
          *((_DWORD *)v12 + 1) = 0;
          sub_80CF780(v13);
          v9 = (char *)a1[36];
        }
      }
    }
    a1[37] = 0;
    sub_80CF780(v9);
    a1[36] = 0;
    a1[38] = 0;
  }
}
