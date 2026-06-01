__int64 __fastcall sub_69CCB0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r12
  __int64 result; // rax
  int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rax

  v5 = *(_QWORD *)(a2 + 1840) + 8LL;
  result = sub_7BE6E0(a2, v5);
  if ( (_BYTE)result )
  {
    v7 = 2;
    result = sub_7BEB80(v5, a2, 84);
    v8 = result;
    if ( result != -1 )
    {
      while ( 1 )
      {
        v9 = a3[1];
        v10 = *a3;
        if ( a3[2] < (unsigned __int64)(v9 + 1) )
        {
          v12 = qvector_reserve(a3, v10, v9 + 1, 24);
          v9 = a3[1];
          *a3 = v12;
          v10 = v12;
        }
        v11 = v10 + 24 * v9;
        *(_OWORD *)(v11 + 8) = 0;
        *(_QWORD *)v11 = 0;
        ++a3[1];
        sub_3BDE50(*(_QWORD **)(a2 + 1672), v8);
        sub_35A790((char **)v11);
        result = sub_7BEBF0(v5, a2, v8, 84);
        v8 = result;
        if ( result == -1 || v7 == 1 )
          break;
        v7 = 1;
      }
    }
  }
  return result;
}
