/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809F6D0
// Address: 0x0809F6D0

//----- (0809F6D0) --------------------------------------------------------
void __cdecl sub_809F6D0(int a1)
{
  char *v1; // ecx
  int v2; // ebp
  int i; // esi
  char *v4; // edx
  void *v5; // eax
  void *v6; // eax
  char *v7; // ecx
  int v8; // ebp
  int j; // esi
  char *v10; // edx
  void *v11; // eax
  void *v12; // eax

  v1 = *(char **)(a1 + 36);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = &v1[12 * i];
        v5 = *(void **)v4;
        if ( *(_DWORD *)v4 )
        {
          *((_DWORD *)v4 + 1) = 0;
          sub_80CF780(v5);
          v1 = *(char **)(a1 + 36);
        }
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
    sub_80CF780(v1);
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_80CF780(v6);
  }
  v7 = *(char **)(a1 + 12);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 16);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = &v7[12 * j];
        v11 = *(void **)v10;
        if ( *(_DWORD *)v10 )
        {
          *((_DWORD *)v10 + 1) = 0;
          sub_80CF780(v11);
          v7 = *(char **)(a1 + 12);
        }
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_80CF780(v7);
  }
  v12 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_80CF780(v12);
  }
}
