/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B850
// Address: 0x0003B850

//----- (0003B850) --------------------------------------------------------
int *__fastcall sub_3B850(int *a1)
{
  int v2; // r0
  void **v3; // r5
  void *v4; // r0
  void **v5; // r5
  void *v6; // r0
  void **v7; // r5
  void *v8; // r0
  void *v9; // r0

  v2 = *a1;
  if ( (unsigned int)(v2 - 2) >= 3 )
  {
    if ( v2 != 5 )
    {
      if ( v2 == 1 )
      {
        v5 = (void **)a1[2];
        if ( v5 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            v5[1] = nullptr;
            qfree(v6);
          }
          operator delete(v5);
        }
      }
      return a1;
    }
    v7 = (void **)a1[1];
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v7[1] = nullptr;
        qfree(v8);
      }
      operator delete(v7);
    }
  }
  else
  {
    v3 = (void **)a1[1];
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = nullptr;
        qfree(v4);
        v3[2] = nullptr;
        *v3 = nullptr;
      }
      qfree(v3);
    }
  }
  if ( a1[2] )
  {
    v9 = (void *)sub_3B850();
    operator delete(v9);
    return a1;
  }
  return a1;
}
