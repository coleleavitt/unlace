/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069A70
// Address: 0x08069A70

//----- (08069A70) --------------------------------------------------------
void __cdecl sub_8069A70(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  char *v3; // esi
  int i; // ebp
  char *v5; // esi
  void *v6; // edx
  void *v7; // edx
  void *v8; // eax
  void *v9; // eax
  int v10; // [esp+0h] [ebp-20h]

  v1 = a1[117];
  if ( v1 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[117]);
  v2 = (void *)a1[114];
  if ( v2 )
  {
    a1[115] = 0;
    sub_80CF780(v2);
  }
  v3 = (char *)a1[53];
  if ( v3 )
  {
    v10 = a1[54];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v5 = &v3[68 * i];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          *((_DWORD *)v5 + 4) = 0;
          sub_80CF780(v6);
        }
        v7 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_80CF780(v7);
        }
        v3 = (char *)a1[53];
      }
    }
    a1[54] = 0;
    sub_80CF780(v3);
  }
  v8 = (void *)a1[14];
  if ( v8 )
  {
    a1[15] = 0;
    sub_80CF780(v8);
  }
  v9 = (void *)a1[4];
  if ( v9 )
  {
    a1[5] = 0;
    sub_80CF780(v9);
  }
}
