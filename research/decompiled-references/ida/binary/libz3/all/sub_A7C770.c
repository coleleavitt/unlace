__int64 __fastcall sub_A7C770(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v5; // rbx
  unsigned int *v6; // rbp
  __int64 v7; // rsi

  result = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 256) + 24LL * a2;
  v5 = *(unsigned int **)result;
  v6 = *(unsigned int **)(result + 8);
  if ( v6 != *(unsigned int **)result )
  {
    do
    {
      while ( 1 )
      {
        result = sub_FFADE0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), *v5);
        if ( (_BYTE)result )
          break;
        v5 += 10;
        if ( v6 == v5 )
          return result;
      }
      v7 = *v5;
      v5 += 10;
      result = sub_10054D0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v7, a3);
    }
    while ( v6 != v5 );
  }
  return result;
}

