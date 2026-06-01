/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059D48
// Address: 0x0000000100059D48

//----- (0000000100059D48) ----------------------------------------------------
char *__fastcall sub_100059D48(_QWORD *a1, __int64 a2, char *a3)
{
  _QWORD *v6; // x0
  _QWORD *v7; // x1
  __int64 v8; // x8
  char *result; // x0
  const char **v10; // x1
  __int64 v11; // x9
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x2
  const char *v14; // x20
  const char *v15; // [xsp+0h] [xbp-30h] BYREF

  v7 = (_QWORD *)a1[9];
  v8 = a1[10];
  v6 = a1 + 9;
  if ( v6[2] < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(v6, v7, v8 + 1, 8u);
    a1[9] = v7;
    v8 = a1[10];
  }
  v7[v8] = a2;
  ++a1[10];
  result = qstrdup(a3);
  v10 = (const char **)a1[12];
  v15 = result;
  v11 = a1[13];
  v12 = a1[14];
  v13 = v11 + 1;
  if ( v10 > &v15 || &v10[v12] <= &v15 )
  {
    if ( v12 < v13 )
    {
      v10 = (const char **)qvector_reserve(a1 + 12, v10, v13, 8u);
      a1[12] = v10;
      v11 = a1[13];
      result = (char *)v15;
    }
  }
  else if ( v12 < v13 )
  {
    v14 = result;
    v10 = (const char **)qvector_reserve(a1 + 12, v10, v13, 8u);
    result = (char *)v14;
    a1[12] = v10;
    v11 = a1[13];
  }
  v10[v11] = result;
  ++a1[13];
  return result;
}
