/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6390
// Address: 0x080A6390

//----- (080A6390) --------------------------------------------------------
void __cdecl sub_80A6390(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  char *v4; // ecx
  int v5; // ebp
  int i; // esi
  char *v7; // edx
  void *v8; // eax

  *a1 = &off_811B7E0;
  v1 = (void *)a1[266];
  if ( v1 )
  {
    a1[267] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[263];
  if ( v2 )
  {
    a1[264] = 0;
    sub_80CF780(v2);
  }
  v3 = (void *)a1[260];
  if ( v3 )
  {
    a1[261] = 0;
    sub_80CF780(v3);
  }
  v4 = (char *)a1[257];
  if ( v4 )
  {
    v5 = a1[258];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[12 * i];
        v8 = *(void **)v7;
        if ( *(_DWORD *)v7 )
        {
          *((_DWORD *)v7 + 1) = 0;
          sub_80CF780(v8);
          v4 = (char *)a1[257];
        }
      }
    }
    a1[258] = 0;
    sub_80CF780(v4);
  }
}
// 811B7E0: using guessed type int (__cdecl *off_811B7E0)(int, int);
