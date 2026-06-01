/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AAE8
// Address: 0x000000000041AAE8

//----- (000000000041AAE8) ----------------------------------------------------
void __fastcall sub_41AAE8(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  char *v4; // x0
  __int64 v5; // x23
  __int64 v6; // x22
  __int64 i; // x21
  char *v8; // x19
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0

  v2 = a1[75];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[72];
  if ( v3 )
  {
    a1[73] = 0;
    j__free(v3);
  }
  v4 = (char *)a1[36];
  if ( v4 )
  {
    v5 = a1[37];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = &v4[v6];
        v9 = *(void **)&v4[v6 + 24];
        if ( v9 )
        {
          *((_QWORD *)v8 + 4) = 0;
          j__free(v9);
        }
        v10 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          j__free(v10);
        }
        v6 += 96;
        v4 = (char *)a1[36];
      }
    }
    a1[37] = 0;
    j__free(v4);
  }
  v11 = (void *)a1[14];
  if ( v11 )
  {
    a1[15] = 0;
    j__free(v11);
  }
  v12 = (void *)a1[4];
  if ( v12 )
  {
    a1[5] = 0;
    j__free(v12);
  }
}
