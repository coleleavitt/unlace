__int64 *__fastcall sub_487640(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 *v6; // r13
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 *v10; // r12
  __int64 v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2 - (_QWORD)a1;
  v6 = a1;
  v7 = v5 >> 3;
  v12[0] = a4;
  v12[1] = a5;
  if ( v5 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v7 >> 1;
        v10 = &v6[v7 >> 1];
        if ( (unsigned __int8)sub_487440(v12, *a3, *v10) )
          break;
        v6 = v10 + 1;
        v7 = v7 - 1 - v9;
        if ( v7 <= 0 )
          return v6;
      }
      v7 >>= 1;
    }
    while ( v9 > 0 );
  }
  return v6;
}
