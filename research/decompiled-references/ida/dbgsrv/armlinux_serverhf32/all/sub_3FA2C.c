/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FA2C
// Address: 0x0003FA2C

//----- (0003FA2C) --------------------------------------------------------
void __fastcall sub_3FA2C(int a1)
{
  __int64 v2; // r2
  void *v3; // r0
  int v4; // r6
  int v5; // r9
  void **v6; // r5
  void **v7; // t1
  void *v8; // r0
  char *v9; // r0
  void *v10; // r10
  void *i; // r4
  char *v12; // r3
  void *v13; // r0
  unsigned __int8 *v14; // r0
  void *v15; // r10
  void *j; // r4
  int v17; // r3
  void *v18; // r0
  void *v19; // r0

  v2 = *(_QWORD *)a1;
  HIDWORD(v2) = 4 * *(_DWORD *)(a1 + 4);
  v3 = (void *)(*(_DWORD *)a1 + HIDWORD(v2));
  if ( (void *)v2 != v3 )
  {
    v4 = v2 - 4;
    v5 = v2 + HIDWORD(v2) - 4;
    do
    {
      v7 = *(void ***)(v4 + 4);
      v4 += 4;
      v6 = v7;
      if ( v7 )
      {
        v8 = v6[14];
        if ( v8 )
        {
          v6[15] = nullptr;
          sub_77E08(v8);
        }
        v9 = (char *)v6[11];
        if ( v9 )
        {
          v10 = v6[12];
          if ( v10 )
          {
            for ( i = nullptr; i != v10; i = (char *)i + 1 )
            {
              v12 = &v9[16 * (_DWORD)i];
              v13 = *((void **)v12 + 1);
              if ( v13 )
              {
                *((_DWORD *)v12 + 2) = 0;
                sub_77E08(v13);
              }
              v9 = (char *)v6[11];
            }
          }
          v6[12] = nullptr;
          sub_77E08(v9);
        }
        v14 = (unsigned __int8 *)v6[8];
        if ( v14 )
        {
          v15 = v6[9];
          if ( v15 )
          {
            for ( j = nullptr; j != v15; j = (char *)j + 1 )
            {
              v17 = 3 * (_DWORD)j;
              sub_455C8(&v14[8 * v17]);
              v14 = (unsigned __int8 *)v6[8];
            }
          }
          v6[9] = nullptr;
          sub_77E08(v14);
        }
        v18 = v6[4];
        if ( v18 )
        {
          v6[5] = nullptr;
          sub_77E08(v18);
        }
        v19 = *v6;
        if ( *v6 )
        {
          v6[1] = nullptr;
          sub_77E08(v19);
        }
        sub_8121C(v6);
      }
    }
    while ( v4 != v5 );
    v3 = *(void **)a1;
  }
  if ( v3 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v3);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  sub_3F810(a1);
  sub_45620((char **)(a1 + 40));
  sub_4CC94(*(void ***)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  sub_4E5AC(*(void **)(a1 + 16));
  *(_DWORD *)(a1 + 16) = 0;
}
