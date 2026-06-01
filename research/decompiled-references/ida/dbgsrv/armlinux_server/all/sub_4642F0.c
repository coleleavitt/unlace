/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4642F0
// Address: 0x00000000004642F0

//----- (00000000004642F0) ----------------------------------------------------
void __fastcall sub_4642F0(__int64 *a1)
{
  __int64 v2; // x0
  char *v3; // x0
  __int64 v4; // x22
  __int64 v5; // x20
  __int64 v6; // x21
  char *v7; // x1
  void *v8; // x0
  int v9; // w20
  __int64 v10; // x0
  void *v11; // x0
  char *v12; // x1
  __int64 v13; // x22
  __int64 v14; // x20
  __int64 i; // x21
  void *v16; // x0
  char *v17; // x1

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  v3 = (char *)a1[13];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = &v3[v6];
        v8 = *(void **)&v3[v6 + 16];
        if ( v8 )
        {
          *((_QWORD *)v7 + 3) = 0;
          j__free(v8);
        }
        ++v5;
        v6 += 120;
        v3 = (char *)a1[13];
      }
      while ( v4 != v5 );
    }
    a1[14] = 0;
    j__free(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( a1[30] )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v9;
      j__free(*(void **)(a1[29] + 72 * v10 + 56));
      v10 = v9;
    }
    while ( v9 < (unsigned __int64)a1[30] );
  }
  v11 = (void *)a1[16];
  if ( v11 )
  {
    a1[17] = 0;
    j__free(v11);
    a1[16] = 0;
    a1[18] = 0;
  }
  v12 = (char *)a1[32];
  if ( v12 )
  {
    v13 = a1[33];
    if ( v13 )
    {
      v14 = 0;
      for ( i = 0; i != v13; ++i )
      {
        v16 = *(void **)&v12[v14];
        v17 = &v12[v14];
        if ( v16 )
        {
          *((_QWORD *)v17 + 1) = 0;
          j__free(v16);
        }
        v14 += 24;
        v12 = (char *)a1[32];
      }
    }
    a1[33] = 0;
    j__free(v12);
    a1[32] = 0;
    a1[34] = 0;
  }
}
// 4642F0: could not find valid save-restore pair for x21
