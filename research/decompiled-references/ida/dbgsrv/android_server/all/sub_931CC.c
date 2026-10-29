/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_931CC
// Address: 0x00000000000931CC

//----- (00000000000931CC) ----------------------------------------------------
void __fastcall sub_931CC(char **a1)
{
  char *v1; // x20
  unsigned __int64 v2; // x21
  __int64 v4; // x22
  unsigned __int64 i; // x23
  char *v6; // x25
  void *v7; // x0

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (unsigned __int64)a1[1];
    if ( v2 )
    {
      v4 = 0;
      for ( i = 1; ; ++i )
      {
        if ( *(int *)&v1[v4] >= -1 )
        {
          v6 = &v1[v4];
          v7 = *(void **)&v1[v4 + 8];
          if ( v7 )
          {
            *((_QWORD *)v6 + 2) = 0;
            qfree(v7);
            *((_QWORD *)v6 + 1) = 0;
            *(_QWORD *)&v1[v4 + 24] = 0;
          }
          *(_DWORD *)&v1[v4] = -2;
        }
        if ( i >= v2 )
          break;
        v1 = *a1;
        v4 += 32;
      }
      v1 = *a1;
    }
    a1[1] = nullptr;
    qfree(v1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
