/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079DB0
// Address: 0x08079DB0

//----- (08079DB0) --------------------------------------------------------
void __cdecl sub_8079DB0(unsigned int *a1)
{
  unsigned int v1; // eax
  void **v2; // esi
  void *v3; // eax
  void **v4; // edi
  void *v5; // eax
  void *v6; // esi
  void **v7; // edi
  void *v8; // eax

  v1 = *a1;
  if ( *a1 > 4 )
  {
    if ( v1 != 5 )
      return;
    v7 = (void **)a1[1];
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v7[1] = nullptr;
        sub_80CF780(v8);
      }
      operator delete(v7, 0xCu);
    }
  }
  else
  {
    if ( v1 <= 1 )
    {
      if ( v1 == 1 )
      {
        v2 = (void **)a1[2];
        if ( v2 )
        {
          v3 = *v2;
          if ( *v2 )
          {
            v2[1] = nullptr;
            sub_80CF780(v3);
          }
          operator delete(v2, 0xCu);
        }
      }
      return;
    }
    v4 = (void **)a1[1];
    if ( v4 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v4[1] = nullptr;
        sub_80CF780(v5);
      }
      sub_80CF780(v4);
    }
  }
  v6 = (void *)a1[2];
  if ( v6 )
  {
    sub_8079DB0(v6);
    operator delete(v6, 0x10u);
  }
}
