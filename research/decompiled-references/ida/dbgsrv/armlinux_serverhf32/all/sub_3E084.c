/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E084
// Address: 0x0003E084

//----- (0003E084) --------------------------------------------------------
_DWORD *__fastcall sub_3E084(_DWORD *a1)
{
  void *v2; // r0
  char *v3; // r0
  int v4; // r7
  int i; // r6
  char *v6; // r4
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  _DWORD *v10; // r3
  int v11; // r6
  int j; // r4
  void *v13; // r0
  char *v14; // r3
  _DWORD *v15; // r3
  int v16; // r6
  int k; // r4
  void *v18; // r0
  char *v19; // r3

  v2 = (void *)a1[19];
  *a1 = &off_CFAAC;
  if ( v2 )
  {
    a1[20] = 0;
    sub_77E08(v2);
  }
  v3 = (char *)a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[24 * i];
        v7 = *((void **)v6 + 3);
        if ( v7 )
        {
          *((_DWORD *)v6 + 4) = 0;
          sub_77E08(v7);
        }
        v8 = *(void **)v6;
        if ( *(_DWORD *)v6 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77E08(v8);
        }
        v3 = (char *)a1[11];
      }
    }
    a1[12] = 0;
    sub_77E08(v3);
  }
  v9 = (void *)a1[8];
  if ( v9 )
  {
    a1[9] = 0;
    sub_77E08(v9);
  }
  v10 = (_DWORD *)a1[5];
  if ( v10 )
  {
    v11 = a1[6];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (void *)v10[4 * j];
        v14 = (char *)&v10[4 * j];
        if ( v13 )
        {
          *((_DWORD *)v14 + 1) = 0;
          sub_77E08(v13);
        }
        v10 = (_DWORD *)a1[5];
      }
    }
    a1[6] = 0;
    sub_77E08(v10);
  }
  v15 = (_DWORD *)a1[2];
  if ( v15 )
  {
    v16 = a1[3];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (void *)v15[3 * k];
        v19 = (char *)&v15[3 * k];
        if ( v18 )
        {
          *((_DWORD *)v19 + 1) = 0;
          sub_77E08(v18);
        }
        v15 = (_DWORD *)a1[2];
      }
    }
    a1[3] = 0;
    sub_77E08(v15);
  }
  return a1;
}
// CFAAC: using guessed type _UNKNOWN *off_CFAAC;
