/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x0000000100073BAC

//----- (0000000100073BAC) ----------------------------------------------------
size_t __fastcall qvsnprintf(char *a1, size_t a2, char *__s, va_list a4)
{
  size_t result; // x0
  size_t v9; // x0
  char *v10; // x0
  char *v11; // x0
  unsigned __int8 *v12; // x1
  __int64 v13; // x2
  __int64 v14; // [xsp+0h] [xbp-30h] BYREF

  if ( !__s )
  {
    if ( under_debugger != 1 )
      interr(539);
    goto LABEL_20;
  }
  if ( !a1 )
  {
    if ( a2 )
      return 0;
    goto LABEL_10;
  }
  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    if ( under_debugger != 1 )
    {
LABEL_21:
      interr(1225);
      return (size_t)sub_100073D00(v11, v12, v13);
    }
LABEL_20:
    __break(1u);
    goto LABEL_21;
  }
  if ( a2 <= 1 )
  {
    result = 0;
    if ( a2 )
      *a1 = 0;
    return result;
  }
  *a1 = 0;
LABEL_10:
  v9 = strlen(__s);
  v10 = sub_100073D00(__s, (unsigned __int8 *)&v14 - ((v9 + 115) & 0xFFFFFFFFFFFFFFF0LL), v9 + 100);
  result = vsnprintf(a1, a2, v10, a4);
  if ( (result & 0x80000000) != 0 || a2 - 1 < (unsigned int)result )
  {
    result = 0;
    if ( a1 )
    {
      if ( a2 )
      {
        result = (unsigned int)(a2 - 1);
        a1[(int)result] = 0;
        if ( (int)a2 - 1 < 0 )
          return strlen(a1);
      }
    }
  }
  return result;
}
// 100073CFD: variable 'v11' is possibly undefined
// 100073CFD: variable 'v12' is possibly undefined
// 100073CFD: variable 'v13' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
