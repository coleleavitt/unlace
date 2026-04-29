_QWORD *__fastcall sub_9030(_QWORD *a1, _BYTE *a2, __int64 a3, unsigned int a4, char a5)
{
  _QWORD *result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi

  result = a1;
  if ( a3 )
  {
    *a2 = 0;
    if ( a5 && (v7 = result[5], v7 > 1) )
    {
      if ( a4 < v7 - 1 )
        return (_QWORD *)qstrncpy(a2, a4 + result[4]);
    }
    else if ( a4 > 3 )
    {
      v8 = result[2];
      if ( v8 )
      {
        if ( a4 < (unsigned __int64)(v8 - 1) )
          return (_QWORD *)qstrncpy(a2, a4 + result[1]);
      }
    }
  }
  return result;
}
