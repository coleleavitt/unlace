/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18678
// Address: 0x00018678

//----- (00018678) --------------------------------------------------------
char **__fastcall sub_18678(char **a1)
{
  char *v2; // r0
  char *v3; // r7
  char *i; // r5
  char *v5; // r4
  void *v6; // r0
  void *v7; // r0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[40 * (_DWORD)i];
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_DWORD *)v5 + 6) = 0;
          sub_77E08(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_DWORD *)v5 + 3) = 0;
          sub_77E08(v7);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_77E08(v2);
  }
  return a1;
}
