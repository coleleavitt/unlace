size_t *__fastcall sub_63EC70(__m128i *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi

  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = 8 * v5;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v4 + v7);
        v7 += 8;
        sub_63DAD0((__int64)a1, v8, a3);
        if ( v6 == v7 )
          break;
        v4 = *(_QWORD *)(a2 + 24);
      }
    }
  }
  return sub_63DFA0(a1, a2);
}

