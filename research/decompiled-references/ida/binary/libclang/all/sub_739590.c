__int64 __fastcall sub_739590(__int64 a1, __int64 a2, int a3)
{
  __int64 *v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rsi
  _WORD *v8; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((exclusive_trylock_function");
  sub_5FF0F0(a2, "(");
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, &byte_3B9466E);
  v5 = *(__int64 **)(a1 + 56);
  v6 = &v5[*(unsigned int *)(a1 + 48)];
  while ( v6 != v5 )
  {
    v8 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 > 1u )
    {
      *v8 = 8236;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    else
    {
      sub_26240F0(a2, ", ", 2);
    }
    v7 = *v5++;
    sub_2623950(a2, v7);
  }
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

