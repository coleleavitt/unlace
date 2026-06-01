/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AB94
// Address: 0x0005AB94

//----- (0005AB94) --------------------------------------------------------
char **__fastcall sub_5AB94(char **a1)
{
  char *v2; // r0
  char *v3; // r8
  char *i; // r5
  char *v5; // r4
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[40 * (_DWORD)i];
        v6 = *((void **)v5 + 6);
        if ( v6 )
        {
          *((_DWORD *)v5 + 7) = 0;
          sub_77E08(v6);
        }
        v7 = *((void **)v5 + 3);
        if ( v7 )
        {
          *((_DWORD *)v5 + 4) = 0;
          sub_77E08(v7);
        }
        v8 = *(void **)v5;
        if ( *(_DWORD *)v5 )
        {
          *((_DWORD *)v5 + 1) = 0;
          sub_77E08(v8);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_77E08(v2);
  }
  return a1;
}
