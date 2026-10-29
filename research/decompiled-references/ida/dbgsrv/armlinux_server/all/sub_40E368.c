/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E368
// Address: 0x000000000040E368

//----- (000000000040E368) ----------------------------------------------------
_QWORD *__fastcall sub_40E368(_QWORD *result, char *s2)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x22
  _QWORD *v5; // x23
  __int64 v6; // x20
  _QWORD *v7; // x0
  unsigned __int64 v8; // x2
  _QWORD *v9; // x19
  __int64 v10; // x19
  int *v11; // x0
  const char *v12; // x0

  v2 = result;
  v3 = result + 228;
  v5 = result + 234;
  v6 = result[230];
LABEL_2:
  if ( (_QWORD *)v6 != v3 )
  {
    do
    {
      v7 = (_QWORD *)v2[235];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v6 + 32);
        v9 = v5;
        do
        {
          while ( v7[4] >= v8 )
          {
            v9 = v7;
            v7 = (_QWORD *)v7[2];
            if ( !v7 )
              goto LABEL_7;
          }
          v7 = (_QWORD *)v7[3];
        }
        while ( v7 );
LABEL_7:
        if ( v5 != v9 && v8 >= v9[4] )
        {
          if ( s2 )
          {
            v12 = (const char *)&qword_4B2D48;
            if ( v9[11] )
              v12 = (const char *)v9[10];
            if ( strcmp(v12, s2) )
            {
              result = (_QWORD *)sub_49F748(v6);
              v6 = (__int64)result;
              goto LABEL_2;
            }
          }
          sub_40D4C8(v2, (__int64)(v9 + 5));
        }
      }
      v10 = sub_49F748(v6);
      v11 = sub_49FAC0((int *)v6, v3);
      v6 = v10;
      j__free_0(v11);
      result = (_QWORD *)(v2[232] - 1LL);
      v2[232] = result;
    }
    while ( (_QWORD *)v10 != v3 );
  }
  return result;
}
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
