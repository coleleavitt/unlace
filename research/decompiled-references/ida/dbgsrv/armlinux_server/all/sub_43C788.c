/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C788
// Address: 0x000000000043C788

//----- (000000000043C788) ----------------------------------------------------
void __fastcall sub_43C788(_QWORD *a1)
{
  void *v2; // x0
  char *v3; // x0
  __int64 v4; // x23
  __int64 v5; // x22
  __int64 i; // x21
  char *v7; // x19
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  char *v11; // x0
  __int64 v12; // x21
  __int64 j; // x19
  char *v14; // x2
  void *v15; // x0
  char *v16; // x1
  __int64 v17; // x22
  __int64 v18; // x19
  __int64 k; // x21
  void *v20; // x0
  char *v21; // x1

  v2 = (void *)a1[17];
  *a1 = off_51A558;
  if ( v2 )
  {
    a1[18] = 0;
    j__free(v2);
  }
  v3 = (char *)a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 24];
        if ( v8 )
        {
          *((_QWORD *)v7 + 4) = 0;
          j__free(v8);
        }
        v9 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v9);
        }
        v5 += 48;
        v3 = (char *)a1[11];
      }
    }
    a1[12] = 0;
    j__free(v3);
  }
  v10 = (void *)a1[8];
  if ( v10 )
  {
    a1[9] = 0;
    j__free(v10);
  }
  v11 = (char *)a1[5];
  if ( v11 )
  {
    v12 = a1[6];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = &v11[32 * j];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          j__free(v15);
        }
        v11 = (char *)a1[5];
      }
    }
    a1[6] = 0;
    j__free(v11);
  }
  v16 = (char *)a1[2];
  if ( v16 )
  {
    v17 = a1[3];
    if ( v17 )
    {
      v18 = 0;
      for ( k = 0; k != v17; ++k )
      {
        v20 = *(void **)&v16[v18];
        v21 = &v16[v18];
        if ( v20 )
        {
          *((_QWORD *)v21 + 1) = 0;
          j__free(v20);
        }
        v18 += 24;
        v16 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    j__free(v16);
  }
}
// 51A558: using guessed type __int64 (__fastcall *off_51A558[2])();
