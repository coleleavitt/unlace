/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462E20
// Address: 0x0000000000462E20

//----- (0000000000462E20) ----------------------------------------------------
void __fastcall sub_462E20(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  char *v5; // x1
  __int64 v6; // x22
  __int64 v7; // x19
  __int64 i; // x21
  void *v9; // x0
  char *v10; // x1

  v2 = (void *)a1[138];
  *a1 = off_519938;
  if ( v2 )
  {
    a1[139] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    j__free(v4);
  }
  v5 = (char *)a1[129];
  if ( v5 )
  {
    v6 = a1[130];
    if ( v6 )
    {
      v7 = 0;
      for ( i = 0; i != v6; ++i )
      {
        v9 = *(void **)&v5[v7];
        v10 = &v5[v7];
        if ( v9 )
        {
          *((_QWORD *)v10 + 1) = 0;
          j__free(v9);
        }
        v7 += 24;
        v5 = (char *)a1[129];
      }
    }
    a1[130] = 0;
    j__free(v5);
  }
}
// 519938: using guessed type __int64 (__fastcall *off_519938[3])();
