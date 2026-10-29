/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14F3C
// Address: 0x00014F3C

//----- (00014F3C) --------------------------------------------------------
int __fastcall sub_14F3C(_DWORD *a1)
{
  char *v1; // r4
  int v2; // r7
  int i; // r5
  char *v5; // r4
  void *v6; // r0
  void *v7; // r0

  v1 = (char *)a1[59];
  if ( v1 )
  {
    v2 = a1[60];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v5 = &v1[40 * i];
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
        v1 = (char *)a1[59];
      }
    }
    a1[60] = 0;
    sub_77E08(v1);
    a1[59] = 0;
    a1[61] = 0;
  }
  return 1;
}
