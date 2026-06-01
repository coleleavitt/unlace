/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58DFC
// Address: 0x00058DFC

//----- (00058DFC) --------------------------------------------------------
int *__fastcall sub_58DFC(int *a1)
{
  _DWORD *v2; // r3
  int v3; // r6
  int i; // r4
  void *v5; // r0
  char *v6; // r3
  char *v7; // r0
  int v8; // r7
  int j; // r6
  char *v10; // r4
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  char *v15; // r0
  int v16; // r7
  int v17; // r4
  int k; // r6
  char *v19; // r3
  void *v20; // r0

  sub_58D34(a1);
  v2 = (_DWORD *)a1[38];
  if ( v2 )
  {
    v3 = a1[39];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[3 * i];
        v6 = (char *)&v2[3 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v5);
        }
        v2 = (_DWORD *)a1[38];
      }
    }
    a1[39] = 0;
    sub_77F70(v2);
  }
  v7 = (char *)a1[35];
  if ( v7 )
  {
    v8 = a1[36];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = &v7[40 * j];
        v11 = *((void **)v10 + 3);
        if ( v11 )
        {
          *((_DWORD *)v10 + 4) = 0;
          sub_77F70(v11);
        }
        v12 = *(void **)v10;
        if ( *(_DWORD *)v10 )
        {
          *((_DWORD *)v10 + 1) = 0;
          sub_77F70(v12);
        }
        v7 = (char *)a1[35];
      }
    }
    a1[36] = 0;
    sub_77F70(v7);
  }
  v13 = (void *)a1[30];
  if ( v13 )
  {
    a1[31] = 0;
    sub_77F70(v13);
  }
  v14 = (void *)a1[16];
  if ( v14 )
  {
    a1[17] = 0;
    sub_77F70(v14);
  }
  v15 = (char *)a1[13];
  if ( v15 )
  {
    v16 = a1[14];
    if ( v16 )
    {
      v17 = 0;
      for ( k = 0; k != v16; ++k )
      {
        v19 = &v15[v17];
        v20 = *(void **)&v15[v17 + 12];
        if ( v20 )
        {
          *((_DWORD *)v19 + 4) = 0;
          sub_77F70(v20);
        }
        v17 += 104;
        v15 = (char *)a1[13];
      }
    }
    a1[14] = 0;
    sub_77F70(v15);
  }
  return a1;
}
