__int64 __fastcall sub_10442F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 *v6; // rsi
  __int64 *v7; // r12
  __int64 result; // rax
  __int64 *v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_2220DF0(a2, a3);
  v5 = sub_2221120(a1, a2, a3, v4);
  if ( v5 == -1 )
    v6 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v6 = (__int64 *)(*(_QWORD *)a1 + 8LL * v5);
  sub_E9D250(v9, v6, 1);
  v7 = v9[0];
  sub_E9D250(v9, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  result = 0;
  if ( v9[0] != v7 )
    return *(unsigned __int8 *)(*v7 + 8);
  return result;
}

