__int64 *__fastcall sub_4E8DB0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rsi
  __int64 *v8; // r13
  __int64 v9; // rbx
  __int64 v11; // rbp
  __int64 *v12; // r12

  v7 = a2 - (_QWORD)a1;
  v8 = a1;
  v9 = v7 >> 3;
  if ( v7 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v9 >> 1;
        v12 = &v8[v9 >> 1];
        if ( !sub_4DE4A0(&a7, *v12, *a3) )
          break;
        v8 = v12 + 1;
        v9 = v9 - 1 - v11;
        if ( v9 <= 0 )
          return v8;
      }
      v9 >>= 1;
    }
    while ( v11 > 0 );
  }
  return v8;
}
