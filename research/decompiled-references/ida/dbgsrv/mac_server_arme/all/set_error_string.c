/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x000000010006BEF4

//----- (000000010006BEF4) ----------------------------------------------------
void __fastcall set_error_string(unsigned int a1)
{
  const char *v2; // x1
  __int64 v3; // x0
  __int64 v4; // x20
  _QWORD *v5; // x23
  const char *v6; // x24
  size_t v7; // x0
  size_t v8; // x21
  unsigned __int64 v9; // x22
  void *v10; // x0
  void *v11; // x0
  _QWORD *v12; // x1
  char *v13; // x8
  unsigned int v14; // w0

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(481);
    get_error_data(v14);
  }
  else
  {
    off_1000A5688();
    v4 = v3;
    v5 = (_QWORD *)(v3 + 24LL * a1);
    if ( v2 )
    {
      if ( *v2 )
      {
        v6 = v2;
        v7 = strlen(v2);
        if ( v7 )
        {
          v8 = v7;
          v9 = v7 + 1;
          v10 = (void *)v5[4];
          if ( v5[6] < v9 )
          {
            v10 = qvector_reserve(v5 + 4, (_QWORD *)v5[4], v9, 1u);
            v5[4] = v10;
          }
          v5[5] = v9;
          memmove(v10, v6, v8);
          *(_BYTE *)(v5[4] + v8) = 0;
        }
        else
        {
          v5[5] = 0;
        }
      }
      else
      {
        v12 = (_QWORD *)v5[4];
        if ( v5[6] <= 1u )
        {
          v12 = qvector_reserve(v5 + 4, v12, 2u, 1u);
          v5[4] = v12;
        }
        v5[5] = 2;
        *(_BYTE *)v12 = 32;
        *(_BYTE *)(v5[4] + 1LL) = 0;
        if ( v5[5] )
          v13 = (char *)v5[4];
        else
          v13 = &byte_1000A4AEC;
        *v13 = 0;
      }
    }
    else
    {
      v11 = (void *)v5[4];
      if ( v11 )
      {
        v5[5] = 0;
        qfree(v11);
        v5[4] = 0;
        v5[6] = 0;
      }
    }
    *(_QWORD *)(v4 + 8LL * a1) = v5[4];
  }
}
// 10006BF28: variable 'v3' is possibly undefined
// 10006BF34: variable 'v2' is possibly undefined
// 10006C055: variable 'v14' is possibly undefined
// 1000A4AEC: using guessed type char byte_1000A4AEC;
// 1000A5688: using guessed type void (*off_1000A5688)(void);
// 1000A590D: using guessed type char under_debugger;
