_QWORD *__fastcall sub_272730(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *result; // rax
  __int64 v7; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 v11; // r9
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
        if ( a3 >= v9 )
          break;
        v10 = **(_QWORD **)(a4 + 24);
        v11 = -1;
        if ( *v13 < v9 )
          v11 = *(_QWORD *)(v10 + 8 * *v13);
        if ( *(_QWORD *)(v10 + 8 * a3) >= v11 )
          break;
        v7 >>= 1;
        if ( v12 <= 0 )
          return result;
      }
      result = v13 + 1;
      v7 = v7 - 1 - v12;
    }
    while ( v7 > 0 );
  }
  return result;
}
