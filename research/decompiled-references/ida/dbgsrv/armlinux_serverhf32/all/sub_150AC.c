/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_150AC
// Address: 0x000150AC

//----- (000150AC) --------------------------------------------------------
int __fastcall sub_150AC(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  _DWORD *v4; // r3
  int v5; // r6
  int i; // r5
  void *v7; // r0
  char *v8; // r3
  void *v9; // r0
  _DWORD *v10; // r3
  int v11; // r6
  int j; // r5
  void *v13; // r0
  char *v14; // r3

  v2 = a1[85];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    v3 = (void *)a1[86];
    if ( v3 )
    {
      a1[87] = 0;
      sub_77E08(v3);
      a1[86] = 0;
      a1[88] = 0;
    }
    v4 = (_DWORD *)a1[89];
    if ( v4 )
    {
      v5 = a1[90];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (void *)v4[3 * i];
          v8 = (char *)&v4[3 * i];
          if ( v7 )
          {
            *((_DWORD *)v8 + 1) = 0;
            sub_77E08(v7);
          }
          v4 = (_DWORD *)a1[89];
        }
      }
      a1[90] = 0;
      sub_77E08(v4);
      a1[89] = 0;
      a1[91] = 0;
    }
    v9 = (void *)a1[92];
    if ( v9 )
    {
      a1[93] = 0;
      sub_77E08(v9);
      a1[92] = 0;
      a1[94] = 0;
    }
    v10 = (_DWORD *)a1[95];
    if ( v10 )
    {
      v11 = a1[96];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = (void *)v10[3 * j];
          v14 = (char *)&v10[3 * j];
          if ( v13 )
          {
            *((_DWORD *)v14 + 1) = 0;
            sub_77E08(v13);
          }
          v10 = (_DWORD *)a1[95];
        }
      }
      a1[96] = 0;
      sub_77E08(v10);
      a1[95] = 0;
      a1[97] = 0;
    }
  }
  a1[85] = 0;
  return nullsub_9(0);
}
// 56FE4: using guessed type int __fastcall nullsub_9(_DWORD);
