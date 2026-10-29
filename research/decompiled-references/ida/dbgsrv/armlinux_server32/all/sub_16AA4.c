/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16AA4
// Address: 0x00016AA4

//----- (00016AA4) --------------------------------------------------------
int __fastcall sub_16AA4(_DWORD *a1, _QWORD *a2)
{
  int v4; // r0
  void *v5; // r0
  _DWORD *v6; // r3
  int v7; // r8
  int i; // r5
  void *v9; // r0
  char *v10; // r3
  void *v11; // r0
  _DWORD *v12; // r3
  int v13; // r8
  int j; // r5
  void *v15; // r0
  char *v16; // r3
  int v17; // r3
  int v18; // r3

  (*(void (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  v4 = a1[85];
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v5 = (void *)a1[86];
    if ( v5 )
    {
      a1[87] = 0;
      sub_77F70(v5);
      a1[86] = 0;
      a1[88] = 0;
    }
    v6 = (_DWORD *)a1[89];
    if ( v6 )
    {
      v7 = a1[90];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (void *)v6[3 * i];
          v10 = (char *)&v6[3 * i];
          if ( v9 )
          {
            *((_DWORD *)v10 + 1) = 0;
            sub_77F70(v9);
          }
          v6 = (_DWORD *)a1[89];
        }
      }
      a1[90] = 0;
      sub_77F70(v6);
      a1[89] = 0;
      a1[91] = 0;
    }
    v11 = (void *)a1[92];
    if ( v11 )
    {
      a1[93] = 0;
      sub_77F70(v11);
      a1[92] = 0;
      a1[94] = 0;
    }
    v12 = (_DWORD *)a1[95];
    if ( v12 )
    {
      v13 = a1[96];
      if ( v13 )
      {
        for ( j = 0; j != v13; ++j )
        {
          v15 = (void *)v12[3 * j];
          v16 = (char *)&v12[3 * j];
          if ( v15 )
          {
            *((_DWORD *)v16 + 1) = 0;
            sub_77F70(v15);
          }
          v12 = (_DWORD *)a1[95];
        }
      }
      a1[96] = 0;
      sub_77F70(v12);
      a1[95] = 0;
      a1[97] = 0;
    }
  }
  v17 = *a1;
  a1[85] = 0;
  (*(void (__fastcall **)(_DWORD *))(v17 + 296))(a1);
  if ( a1[100] == -1 || a1[101] == -1 )
    goto LABEL_27;
  v18 = a1[87];
  if ( !v18 )
    v18 = a1[99];
  if ( v18 <= 0 )
  {
LABEL_27:
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(30016);
  }
  nullsub_9(1);
  return 1;
}
// 57168: using guessed type int __fastcall nullsub_9(_DWORD);
// D6C20: using guessed type char under_debugger;
