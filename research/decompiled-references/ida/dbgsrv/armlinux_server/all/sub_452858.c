/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452858
// Address: 0x0000000000452858

//----- (0000000000452858) ----------------------------------------------------
void __fastcall sub_452858(char **a1)
{
  char *v1; // x21
  char *v3; // x25
  __int64 v4; // x22
  char *i; // x23
  char *v6; // x1
  char *v7; // x21
  __int64 v8; // x26
  __int64 v9; // x19
  __int64 j; // x20
  void *v11; // x0
  char *v12; // x1

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = *(char **)&v1[v4];
        v7 = &v1[v4];
        if ( v6 )
        {
          v8 = *((_QWORD *)v7 + 1);
          if ( v8 )
          {
            v9 = 0;
            for ( j = 0; j != v8; ++j )
            {
              v11 = *(void **)&v6[v9];
              v12 = &v6[v9];
              if ( v11 )
              {
                *((_QWORD *)v12 + 1) = 0;
                j__free(v11);
              }
              v9 += 24;
              v6 = *(char **)v7;
            }
          }
          *((_QWORD *)v7 + 1) = 0;
          j__free(v6);
        }
        v4 += 56;
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v1);
  }
}
