/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80535C0
// Address: 0x080535C0

//----- (080535C0) --------------------------------------------------------
int __cdecl sub_80535C0(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  char *v3; // ecx
  int v4; // ebp
  int i; // esi
  char *v6; // edx
  void *v7; // eax
  void *v8; // eax
  char *v9; // ecx
  int v10; // ebp
  int j; // esi
  char *v12; // edx
  void *v13; // eax

  v1 = a1[85];
  if ( v1 )
  {
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[85]);
    v2 = (void *)a1[86];
    if ( v2 )
    {
      a1[87] = 0;
      sub_80CF780(v2);
      a1[86] = 0;
      a1[88] = 0;
    }
    v3 = (char *)a1[89];
    if ( v3 )
    {
      v4 = a1[90];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = &v3[12 * i];
          v7 = *(void **)v6;
          if ( *(_DWORD *)v6 )
          {
            *((_DWORD *)v6 + 1) = 0;
            sub_80CF780(v7);
            v3 = (char *)a1[89];
          }
        }
      }
      a1[90] = 0;
      sub_80CF780(v3);
      a1[89] = 0;
      a1[91] = 0;
    }
    v8 = (void *)a1[92];
    if ( v8 )
    {
      a1[93] = 0;
      sub_80CF780(v8);
      a1[92] = 0;
      a1[94] = 0;
    }
    v9 = (char *)a1[95];
    if ( v9 )
    {
      v10 = a1[96];
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = &v9[12 * j];
          v13 = *(void **)v12;
          if ( *(_DWORD *)v12 )
          {
            *((_DWORD *)v12 + 1) = 0;
            sub_80CF780(v13);
            v9 = (char *)a1[95];
          }
        }
      }
      a1[96] = 0;
      sub_80CF780(v9);
      a1[95] = 0;
      a1[97] = 0;
    }
  }
  a1[85] = 0;
  return nullsub_9(0);
}
// 80A4AD0: using guessed type int __cdecl nullsub_9(_DWORD);
