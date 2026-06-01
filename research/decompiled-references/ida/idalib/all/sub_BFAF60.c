_QWORD *__fastcall sub_BFAF60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = a1[3];
  a1[7] = a2 & 0xFFFFFFFFFFFFFFFDLL;
  result = (_QWORD *)a1[2];
  v4 = (v2 - (__int64)result) >> 3;
  if ( (_DWORD)v4 )
  {
    v5 = (__int64)&result[(unsigned int)(v4 - 1) + 1];
    do
    {
      while ( *result )
      {
        if ( ++result == (_QWORD *)v5 )
          return result;
      }
      *result++ = a2;
    }
    while ( result != (_QWORD *)v5 );
  }
  return result;
}
