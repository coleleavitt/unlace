/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CB60
// Address: 0x000000000040CB60

//----- (000000000040CB60) ----------------------------------------------------
void __fastcall sub_40CB60(char **a1)
{
  char *v1; // x1
  char *v3; // x22
  __int64 v4; // x19
  char *i; // x20
  void *v6; // x0
  char *v7; // x1

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = *(void **)&v1[v4];
        v7 = &v1[v4];
        if ( v6 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v6);
        }
        v4 += 24;
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
