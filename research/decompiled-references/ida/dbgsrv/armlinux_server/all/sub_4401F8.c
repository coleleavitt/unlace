/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4401F8
// Address: 0x00000000004401F8

//----- (00000000004401F8) ----------------------------------------------------
void __fastcall sub_4401F8(__int64 a1)
{
  void **v2; // x21
  void **v3; // x22
  void **v4; // x19
  void *v5; // x0
  char *v6; // x0
  void *v7; // x24
  void *i; // x20
  char *v9; // x1
  void *v10; // x0
  char *v11; // x0
  void *v12; // x24
  void *j; // x20
  __int64 *v14; // x0
  void *v15; // x0
  void *v16; // x0

  v2 = *(void ***)a1;
  v3 = (void **)(*(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8));
  if ( *(void ***)a1 != v3 )
  {
    do
    {
      v4 = (void **)*v2;
      if ( *v2 )
      {
        v5 = v4[14];
        if ( v5 )
        {
          v4[15] = nullptr;
          j__free(v5);
        }
        v6 = (char *)v4[11];
        if ( v6 )
        {
          v7 = v4[12];
          if ( v7 )
          {
            for ( i = nullptr; i != v7; i = (char *)i + 1 )
            {
              v9 = &v6[32 * (_QWORD)i];
              v10 = *((void **)v9 + 1);
              if ( v10 )
              {
                *((_QWORD *)v9 + 2) = 0;
                j__free(v10);
              }
              v6 = (char *)v4[11];
            }
          }
          v4[12] = nullptr;
          j__free(v6);
        }
        v11 = (char *)v4[8];
        if ( v11 )
        {
          v12 = v4[9];
          if ( v12 )
          {
            for ( j = nullptr; j != v12; j = (char *)j + 1 )
            {
              v14 = (__int64 *)&v11[32 * (_QWORD)j];
              sub_448310(v14);
              v11 = (char *)v4[8];
            }
          }
          v4[9] = nullptr;
          j__free(v11);
        }
        v15 = v4[4];
        if ( v15 )
        {
          v4[5] = nullptr;
          j__free(v15);
        }
        v16 = *v4;
        if ( *v4 )
        {
          v4[1] = nullptr;
          j__free(v16);
        }
        j_j__free_0(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = *(void ***)a1;
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_43EF58(a1);
  sub_448390((char **)(a1 + 64));
  sub_452DD0(*(void ***)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  sub_4551E8(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
