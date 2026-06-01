/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053AB4
// Address: 0x0000000100053AB4

//----- (0000000100053AB4) ----------------------------------------------------
_BYTE *__fastcall sub_100053AB4(_QWORD **a1, const void *a2, size_t a3)
{
  _BYTE *result; // x0
  _QWORD *v7; // x23
  unsigned __int64 v8; // x22
  _QWORD *v9; // x8
  _QWORD **v10; // x0
  __int64 v11; // x1
  __int64 *v12; // x2
  char v13; // [xsp+7h] [xbp-39h] BYREF

  if ( HIDWORD(a3) )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(5);
    return sub_100053BE4(v10, v11, v12);
  }
  else
  {
    result = sub_10002E2F0(a1, a3);
    if ( a3 )
    {
      v7 = a1[1];
      if ( __CFADD__(v7, a3) )
        v8 = 0x7FFFFFFFFFFFFFFFLL;
      else
        v8 = (unsigned __int64)v7 + a3;
      if ( (unsigned __int64)v7 >= v8 )
      {
        if ( v7 != (_QWORD *)v8 )
        {
          v13 = 0;
          sub_10001B764(a1, v8, &v13);
        }
      }
      else
      {
        v9 = *a1;
        if ( (unsigned __int64)a1[2] < v8 )
        {
          v9 = qvector_reserve(a1, *a1, v8, 1u);
          *a1 = v9;
        }
        bzero((char *)a1[1] + (_QWORD)v9, v8 - (_QWORD)a1[1]);
        a1[1] = (_QWORD *)v8;
      }
      return memcpy((char *)v7 + (_QWORD)*a1, a2, a3);
    }
  }
  return result;
}
// 100053BE1: variable 'v10' is possibly undefined
// 100053BE1: variable 'v11' is possibly undefined
// 100053BE1: variable 'v12' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
