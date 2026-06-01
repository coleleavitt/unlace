_QWORD *__fastcall sub_2727C0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *result; // rax
  __int64 v7; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 *v13; // rsi

  v4 = a2 - (_QWORD)a1;
  result = a1;
  v7 = v4 >> 3;
  if ( v4 > 0 )
  {
    v9 = *(_QWORD *)(a4 + 32);
    do
    {
      while ( 1 )
      {
        v12 = v7 >> 1;
        v13 = &result[v7 >> 1];
        if ( *v13 >= v9 )
          break;
        v10 = **(_QWORD **)(a4 + 24);
        v11 = -1;
        if ( a3 < v9 )
          v11 = *(_QWORD *)(v10 + 8 * a3);
        if ( *(_QWORD *)(v10 + 8 * *v13) >= v11 )
          break;
        result = v13 + 1;
        v7 = v7 - 1 - v12;
        if ( v7 <= 0 )
          return result;
      }
      v7 >>= 1;
    }
    while ( v12 > 0 );
  }
  return result;
}
