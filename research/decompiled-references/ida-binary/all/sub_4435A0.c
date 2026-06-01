__int64 __fastcall sub_4435A0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  QT::QAbstractItemView *v3; // r12
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rsi
  __int64 result; // rax

  if ( !*(_QWORD *)(a2 + 200) )
    return 7;
  v2 = sub_426230(a1, (const char *)a2);
  v3 = *(QT::QAbstractItemView **)a2;
  v4 = (__int64)v2;
  v5 = *(__int64 **)(a2 + 200);
  v6 = *v5;
  v7 = *v5 + 16 * v5[1];
  if ( *v5 == v7 )
    return 7;
  v8 = 0;
  do
  {
    v9 = sub_443320(v3, v6);
    if ( v9 )
    {
      if ( sub_4175F0(v4, v9) )
        return 7;
      v8 = 1;
    }
    v6 += 16;
  }
  while ( v7 != v6 );
  result = 3;
  if ( !v8 )
    return 7;
  return result;
}
