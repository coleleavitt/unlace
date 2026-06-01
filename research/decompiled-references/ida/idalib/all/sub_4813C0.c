_QWORD *__fastcall sub_4813C0(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 *v8; // rcx

  v3 = a2 - (_QWORD)a1;
  result = a1;
  v5 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 4);
  if ( v3 > 0 )
  {
    v6 = *a3;
    do
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        v8 = &result[10 * (v5 >> 1)];
        if ( v6 >= *v8 && (*v8 != v6 || v8[1] < a3[1]) )
          break;
        v5 >>= 1;
        if ( v7 <= 0 )
          return result;
      }
      result = v8 + 10;
      v5 = v5 - 1 - v7;
    }
    while ( v5 > 0 );
  }
  return result;
}
