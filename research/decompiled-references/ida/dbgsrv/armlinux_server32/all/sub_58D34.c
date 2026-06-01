/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D34
// Address: 0x00058D34

//----- (00058D34) --------------------------------------------------------
void __fastcall sub_58D34(int *a1)
{
  int v2; // r0
  char *v3; // r0
  int v4; // r7
  int v5; // r5
  int i; // r6
  char *v7; // r3
  void *v8; // r0
  int v9; // r5
  unsigned int v10; // r6
  int v11; // r3
  void *v12; // r0
  _DWORD *v13; // r3
  int v14; // r6
  int j; // r5
  void *v16; // r0
  char *v17; // r3

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    *a1 = 0;
  }
  memset(a1 + 1, 0, 0x30u);
  v3 = (char *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 12];
        if ( v8 )
        {
          *((_DWORD *)v7 + 4) = 0;
          sub_77F70(v8);
        }
        v5 += 104;
        v3 = (char *)a1[13];
      }
    }
    a1[14] = 0;
    sub_77F70(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( a1[36] )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      v11 = a1[35] + v9;
      v9 += 40;
      sub_77F70(*(void **)(v11 + 28));
    }
    while ( v10 < a1[36] );
  }
  v12 = (void *)a1[16];
  if ( v12 )
  {
    a1[17] = 0;
    sub_77F70(v12);
    a1[16] = 0;
    a1[18] = 0;
  }
  v13 = (_DWORD *)a1[38];
  if ( v13 )
  {
    v14 = a1[39];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (void *)v13[3 * j];
        v17 = (char *)&v13[3 * j];
        if ( v16 )
        {
          *((_DWORD *)v17 + 1) = 0;
          sub_77F70(v16);
        }
        v13 = (_DWORD *)a1[38];
      }
    }
    a1[39] = 0;
    sub_77F70(v13);
    a1[38] = 0;
    a1[40] = 0;
  }
}
