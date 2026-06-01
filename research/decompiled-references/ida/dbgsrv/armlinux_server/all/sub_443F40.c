/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443F40
// Address: 0x0000000000443F40

//----- (0000000000443F40) ----------------------------------------------------
_QWORD *__fastcall sub_443F40(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // x19
  __int64 v6; // x21
  const char *v7; // x0
  const char *v8; // x1

  if ( a1 )
  {
    v4 = a1;
    v6 = *(_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v7 = (const char *)&qword_4B2D48;
        if ( v6 )
          v7 = *(const char **)a3;
        v8 = (const char *)&qword_4B2D48;
        if ( v4[5] )
          v8 = (const char *)v4[4];
        if ( strcmp(v7, v8) < 0 )
          break;
        v4 = (_QWORD *)v4[3];
        if ( !v4 )
          return a2;
      }
      a2 = v4;
      v4 = (_QWORD *)v4[2];
    }
    while ( v4 );
  }
  return a2;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
