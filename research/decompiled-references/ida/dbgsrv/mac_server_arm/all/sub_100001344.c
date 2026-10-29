/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001344
// Address: 0x0000000100001344

//----- (0000000100001344) ----------------------------------------------------
void __fastcall sub_100001344(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x23
  char *v6; // x22
  void *v7; // x0
  void *v8; // x0
  char *v9; // x23

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
        v6 = &(*a1)[v4];
        v7 = *((void **)v6 + 5);
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v7);
          *((_QWORD *)v6 + 5) = 0;
          *(_QWORD *)&v5[v4 + 56] = 0;
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          v9 = &v5[v4];
          *((_QWORD *)v9 + 3) = 0;
          qfree(v8);
          *((_QWORD *)v6 + 2) = 0;
          *((_QWORD *)v9 + 4) = 0;
        }
        v4 += 80;
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
}
