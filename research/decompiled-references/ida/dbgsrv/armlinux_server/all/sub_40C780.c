/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C780
// Address: 0x000000000040C780

//----- (000000000040C780) ----------------------------------------------------
unsigned __int64 __fastcall sub_40C780(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // x20
  unsigned __int64 *v4; // x21
  unsigned __int64 v5; // x23
  _QWORD *v6; // x19
  unsigned __int64 v7; // x24
  const char *v8; // x0
  const char *v9; // x1

  if ( (unsigned __int64)a3 >= *a2 )
  {
    v4 = a3;
    v3 = *a2 + 80LL * a2[1];
    if ( (unsigned __int64)a3 < v3 )
      goto LABEL_5;
  }
  if ( !under_debugger )
    sub_492270(30067);
  while ( 1 )
  {
    __break(0x3E8u);
LABEL_5:
    v5 = a3[1];
    if ( !v5 )
      return 0;
    v6 = a3 + 10;
    if ( (unsigned __int64 *)v3 != a3 + 10 )
    {
      v7 = a3[3];
      do
      {
        v8 = (const char *)&qword_4B2D48;
        if ( v7 )
          v8 = (const char *)v4[2];
        v9 = (const char *)&qword_4B2D48;
        if ( v6[3] )
          v9 = (const char *)v6[2];
        if ( strcmp(v8, v9) )
          break;
        v5 = v6[1];
        v6 += 10;
      }
      while ( v6 != (_QWORD *)v3 );
    }
    if ( *v4 < v5 )
      break;
    if ( !under_debugger )
      sub_492270(30068);
  }
  return v5 - *v4;
}
// 40C7D0: variable 'a3' is possibly undefined
// 40C7E8: variable 'v3' is possibly undefined
// 40C814: variable 'v4' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
