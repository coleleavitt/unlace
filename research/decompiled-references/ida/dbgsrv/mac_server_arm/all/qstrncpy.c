/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x00000001000703E0

//----- (00000001000703E0) ----------------------------------------------------
const char *__fastcall qstrncpy(const char *result, unsigned __int8 *a2, __int64 a3)
{
  const char *v3; // x9
  __int64 v4; // x9
  char *v5; // x10
  int v6; // w11
  const char *v7; // x0
  unsigned __int8 *v8; // x1
  __int64 v9; // x2

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(1225);
LABEL_12:
    if ( under_debugger != 1 )
    {
LABEL_14:
      interr(520);
      return qstrncat(v7, v8, v9);
    }
LABEL_13:
    __break(1u);
    goto LABEL_14;
  }
  if ( &result[a3] <= result )
    goto LABEL_12;
  v3 = result;
  if ( &result[a3 - 1] == result )
  {
LABEL_8:
    *v3 = 0;
  }
  else
  {
    v4 = a3 - 1;
    v5 = (char *)result;
    while ( 1 )
    {
      v6 = *a2;
      *v5 = v6;
      if ( !v6 )
        break;
      ++a2;
      ++v5;
      if ( !--v4 )
      {
        v3 = &result[a3 - 1];
        goto LABEL_8;
      }
    }
  }
  return result;
}
// 100070475: variable 'v7' is possibly undefined
// 100070475: variable 'v8' is possibly undefined
// 100070475: variable 'v9' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
