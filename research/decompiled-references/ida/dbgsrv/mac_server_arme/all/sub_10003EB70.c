/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003EB70
// Address: 0x000000010003EB70

//----- (000000010003EB70) ----------------------------------------------------
char **__fastcall sub_10003EB70(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x8
  char *v6; // x23
  unsigned __int8 *v7; // x1
  int v8; // w8
  void *v9; // x0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v6 = *a1;
        v7 = (unsigned __int8 *)&(*a1)[v4];
        if ( !v7 )
        {
          if ( under_debugger != 1 )
            goto LABEL_16;
          while ( 1 )
          {
            __break(1u);
LABEL_16:
            interr(2656);
          }
        }
        v8 = *v7;
        if ( v8 == 5 )
        {
          sub_10003307C(*(_QWORD *)&v6[v4 + 8], v7);
        }
        else if ( v8 == 7 )
        {
          v9 = *(void **)&v6[v4 + 8];
          if ( v9 )
          {
            *(_QWORD *)&v6[v4 + 16] = 0;
            qfree(v9);
            *(_QWORD *)&v6[v4 + 24] = 0;
          }
        }
        v5 = &v6[v4];
        *v5 = 2;
        *((_QWORD *)v5 + 1) = 0;
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = *a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
// 1000A590D: using guessed type char under_debugger;
