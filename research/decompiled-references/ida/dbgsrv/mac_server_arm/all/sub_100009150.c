/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009150
// Address: 0x0000000100009150

//----- (0000000100009150) ----------------------------------------------------
char **__fastcall sub_100009150(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x23
  char *v6; // x24
  void *v7; // x0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *a1;
        if ( *(int *)&(*a1)[v4] >= -1 )
        {
          v6 = &v5[v4];
          v7 = *(void **)&v5[v4 + 8];
          if ( v7 )
          {
            *((_QWORD *)v6 + 2) = 0;
            qfree(v7);
            *((_QWORD *)v6 + 1) = 0;
            *(_QWORD *)&v5[v4 + 24] = 0;
          }
          *(_DWORD *)&v5[v4] = -2;
        }
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = *a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
