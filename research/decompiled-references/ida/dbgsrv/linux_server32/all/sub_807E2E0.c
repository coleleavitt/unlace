/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807E2E0
// Address: 0x0807E2E0

//----- (0807E2E0) --------------------------------------------------------
void __cdecl sub_807E2E0(char **a1)
{
  char *v1; // ecx
  char *v2; // ebp
  char *i; // esi
  char *v4; // edx
  void *v5; // eax
  char *v6; // ecx
  char *v7; // ebp
  char *j; // esi
  char *v9; // edx
  void *v10; // eax

  v1 = a1[3];
  if ( v1 )
  {
    v2 = a1[4];
    if ( v2 )
    {
      for ( i = nullptr; i != v2; ++i )
      {
        v4 = &v1[12 * (_DWORD)i];
        v5 = *(void **)v4;
        if ( *(_DWORD *)v4 )
        {
          *((_DWORD *)v4 + 1) = 0;
          sub_80CF780(v5);
          v1 = a1[3];
        }
      }
    }
    a1[4] = nullptr;
    sub_80CF780(v1);
  }
  v6 = *a1;
  if ( *a1 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      for ( j = nullptr; j != v7; ++j )
      {
        v9 = &v6[12 * (_DWORD)j];
        v10 = *(void **)v9;
        if ( *(_DWORD *)v9 )
        {
          *((_DWORD *)v9 + 1) = 0;
          sub_80CF780(v10);
          v6 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v6);
  }
}
