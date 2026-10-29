/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x000000010006E7C4

//----- (000000010006E7C4) ----------------------------------------------------
char *__fastcall qgetcwd(char *a1, size_t a2)
{
  char *result; // x0
  char v3; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  const char *v11; // x0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = qerrstr(-1);
    v11 = (const char *)sub_10002D82C("getcwd: %s", v4, v5, v6, v7, v8, v9, v10, v3);
    return (char *)qchdir(v11);
  }
  return result;
}
// 10006E7F8: variable 'v4' is possibly undefined
// 10006E7F8: variable 'v5' is possibly undefined
// 10006E7F8: variable 'v6' is possibly undefined
// 10006E7F8: variable 'v7' is possibly undefined
// 10006E7F8: variable 'v8' is possibly undefined
// 10006E7F8: variable 'v9' is possibly undefined
// 10006E7F8: variable 'v10' is possibly undefined
