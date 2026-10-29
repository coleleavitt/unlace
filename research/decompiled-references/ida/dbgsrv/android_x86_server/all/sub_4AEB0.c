/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEB0
// Address: 0x0004AEB0

//----- (0004AEB0) --------------------------------------------------------
void __cdecl sub_4AEB0(int *a1)
{
  int v1; // eax
  void **v2; // edi
  void *v3; // eax
  void **v4; // esi
  void *v5; // eax
  void **v6; // edi
  void *v7; // eax

  v1 = *a1;
  if ( (unsigned int)(*a1 - 2) < 3 )
  {
    v2 = (void **)a1[1];
    if ( v2 )
    {
      v3 = *v2;
      if ( *v2 )
      {
        v2[1] = nullptr;
        qfree(v3);
        *v2 = nullptr;
        v2[2] = nullptr;
      }
      qfree(v2);
    }
LABEL_15:
    v4 = (void **)a1[2];
    if ( !v4 )
      return;
    sub_4AEB0(v4);
    goto LABEL_17;
  }
  if ( v1 == 5 )
  {
    v6 = (void **)a1[1];
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        v6[1] = nullptr;
        qfree(v7);
      }
      operator delete(v6);
    }
    goto LABEL_15;
  }
  if ( v1 == 1 )
  {
    v4 = (void **)a1[2];
    if ( v4 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v4[1] = nullptr;
        qfree(v5);
      }
LABEL_17:
      operator delete(v4);
    }
  }
}
