/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BD78
// Address: 0x0003BD78

//----- (0003BD78) --------------------------------------------------------
_DWORD *__fastcall sub_3BD78(_DWORD *a1)
{
  int v2; // r5
  unsigned __int8 *v3; // r0
  int v4; // r6
  int v5; // r3
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  _DWORD *v14; // r3
  int v15; // r6
  int i; // r5
  void *v17; // r0
  char *v18; // r3
  _DWORD *v19; // r3
  int v20; // r6
  int j; // r5
  void *v22; // r0
  char *v23; // r3
  _DWORD *v24; // r3
  int v25; // r6
  int k; // r5
  void *v27; // r0
  char *v28; // r3
  void *v29; // r0

  sub_398F4(a1);
  v2 = 0;
  v3 = (unsigned __int8 *)a1[58];
  a1[26] = 0;
  if ( v3 )
  {
    v4 = a1[59];
    if ( v4 )
    {
      do
      {
        v5 = 3 * v2++;
        sub_455C8(&v3[8 * v5]);
        v3 = (unsigned __int8 *)a1[58];
      }
      while ( v4 != v2 );
    }
    a1[59] = 0;
    sub_77E08(v3);
  }
  v6 = (void *)a1[54];
  if ( v6 )
  {
    a1[55] = 0;
    sub_77E08(v6);
  }
  v7 = (void *)a1[51];
  if ( v7 )
  {
    a1[52] = 0;
    sub_77E08(v7);
  }
  v8 = (void *)a1[48];
  if ( v8 )
  {
    a1[49] = 0;
    sub_77E08(v8);
  }
  v9 = (void *)a1[45];
  if ( v9 )
  {
    a1[46] = 0;
    sub_77E08(v9);
  }
  v10 = (void *)a1[42];
  if ( v10 )
  {
    a1[43] = 0;
    sub_77E08(v10);
  }
  v11 = (void *)a1[39];
  if ( v11 )
  {
    a1[40] = 0;
    sub_77E08(v11);
  }
  v12 = (void *)a1[36];
  if ( v12 )
  {
    a1[37] = 0;
    sub_77E08(v12);
  }
  v13 = (void *)a1[33];
  if ( v13 )
  {
    a1[34] = 0;
    sub_77E08(v13);
  }
  v14 = (_DWORD *)a1[23];
  if ( v14 )
  {
    v15 = a1[24];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (void *)v14[3 * i];
        v18 = (char *)&v14[3 * i];
        if ( v17 )
        {
          *((_DWORD *)v18 + 1) = 0;
          sub_77E08(v17);
        }
        v14 = (_DWORD *)a1[23];
      }
    }
    a1[24] = 0;
    sub_77E08(v14);
  }
  v19 = (_DWORD *)a1[20];
  if ( v19 )
  {
    v20 = a1[21];
    if ( v20 )
    {
      for ( j = 0; j != v20; ++j )
      {
        v22 = (void *)v19[3 * j];
        v23 = (char *)&v19[3 * j];
        if ( v22 )
        {
          *((_DWORD *)v23 + 1) = 0;
          sub_77E08(v22);
        }
        v19 = (_DWORD *)a1[20];
      }
    }
    a1[21] = 0;
    sub_77E08(v19);
  }
  v24 = (_DWORD *)a1[17];
  if ( v24 )
  {
    v25 = a1[18];
    if ( v25 )
    {
      for ( k = 0; k != v25; ++k )
      {
        v27 = (void *)v24[3 * k];
        v28 = (char *)&v24[3 * k];
        if ( v27 )
        {
          *((_DWORD *)v28 + 1) = 0;
          sub_77E08(v27);
        }
        v24 = (_DWORD *)a1[17];
      }
    }
    a1[18] = 0;
    sub_77E08(v24);
  }
  v29 = (void *)a1[6];
  if ( v29 )
  {
    a1[7] = 0;
    sub_77E08(v29);
  }
  return a1;
}
