/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005570C
// Address: 0x000000010005570C

//----- (000000010005570C) ----------------------------------------------------
_QWORD *__fastcall sub_10005570C(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x8
  void *v9; // x0
  _QWORD *v10; // x22

  *a1 = off_10009EEA8;
  v2 = (void *)a1[138];
  if ( v2 )
  {
    a1[139] = 0;
    qfree(v2);
    a1[138] = 0;
    a1[140] = 0;
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    qfree(v3);
    a1[135] = 0;
    a1[137] = 0;
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    qfree(v4);
    a1[132] = 0;
    a1[134] = 0;
  }
  v5 = (void *)a1[129];
  if ( v5 )
  {
    v6 = a1[130];
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v8 = a1[129];
        v9 = *(void **)(v8 + v7);
        if ( v9 )
        {
          v10 = (_QWORD *)(v8 + v7);
          *(_QWORD *)(v8 + v7 + 8) = 0;
          qfree(v9);
          *v10 = 0;
          v10[2] = 0;
        }
        v7 += 24;
        --v6;
      }
      while ( v6 );
      v5 = (void *)a1[129];
    }
    a1[130] = 0;
    qfree(v5);
    a1[129] = 0;
    a1[131] = 0;
  }
  return a1;
}
// 10009EEA8: using guessed type __int64 (__fastcall *off_10009EEA8[3])();
