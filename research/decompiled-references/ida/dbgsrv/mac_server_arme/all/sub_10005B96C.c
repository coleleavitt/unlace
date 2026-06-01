/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B96C
// Address: 0x000000010005B96C

//----- (000000010005B96C) ----------------------------------------------------
_QWORD *__fastcall sub_10005B96C(_QWORD *a1, unsigned __int64 a2, int a3)
{
  int v6; // w8
  _QWORD *v7; // x10
  _QWORD *result; // x0
  unsigned __int64 v9; // x8
  unsigned int v10; // w11
  _QWORD *v11; // x8
  _QWORD *v12; // x8
  bool v13; // zf
  int v14; // w8
  unsigned __int64 v15; // x10

  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
  v7 = (_QWORD *)a1[64];
  result = a1 + 64;
  if ( !v7 )
    goto LABEL_9;
  v9 = -v6 & a2;
  result = a1 + 64;
  do
  {
    if ( v7[4] < v9 )
    {
      v10 = 1;
    }
    else
    {
      result = v7;
      v10 = 0;
    }
    v7 = (_QWORD *)v7[v10];
  }
  while ( v7 );
  if ( result == a1 + 64 || result[4] >= a2 + a3 )
  {
LABEL_9:
    if ( result == (_QWORD *)a1[63] )
      return a1 + 64;
    v11 = (_QWORD *)*result;
    if ( *result )
    {
      do
      {
        result = v11;
        v11 = (_QWORD *)v11[1];
      }
      while ( v11 );
    }
    else
    {
      v12 = result;
      do
      {
        result = (_QWORD *)v12[2];
        v13 = *result == (_QWORD)v12;
        v12 = result;
      }
      while ( v13 );
    }
  }
  if ( !a3 )
    return a1 + 64;
  v14 = *((_DWORD *)result + 15);
  if ( !v14 )
    return a1 + 64;
  v15 = result[4];
  if ( a2 + a3 - 1 < v15 || v15 + v14 - 1 < a2 )
    return a1 + 64;
  return result;
}
