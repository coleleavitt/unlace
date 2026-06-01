/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CA10
// Address: 0x000000000043CA10

//----- (000000000043CA10) ----------------------------------------------------
void __fastcall sub_43CA10(char **a1)
{
  char *v2; // x1
  char *v3; // x22
  __int64 v4; // x19
  char *i; // x21
  void *v6; // x0
  char *v7; // x1
  char *v8; // x1
  char *v9; // x22
  __int64 v10; // x19
  char *j; // x21
  void *v12; // x0
  char *v13; // x1

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = *(void **)&v2[v4];
        v7 = &v2[v4];
        if ( v6 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v6);
        }
        v4 += 24;
        v2 = a1[3];
      }
    }
    a1[4] = nullptr;
    j__free(v2);
  }
  v8 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v10 = 0;
      for ( j = nullptr; j != v9; ++j )
      {
        v12 = *(void **)&v8[v10];
        v13 = &v8[v10];
        if ( v12 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v12);
        }
        v10 += 24;
        v8 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v8);
  }
}
