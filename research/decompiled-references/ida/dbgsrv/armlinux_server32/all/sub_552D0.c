/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_552D0
// Address: 0x000552D0

//----- (000552D0) --------------------------------------------------------
char **__fastcall sub_552D0(char **a1)
{
  char *v2; // r0
  char *v3; // r7
  char *i; // r4
  int *v5; // r3
  void *v6; // r0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = (int *)&v2[24 * (_DWORD)i];
        if ( *v5 >= -1 )
        {
          v6 = (void *)v5[2];
          if ( v6 )
          {
            v5[3] = 0;
            sub_77F70(v6);
          }
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_77F70(v2);
  }
  return a1;
}
