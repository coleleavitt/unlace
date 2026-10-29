__int64 __fastcall sub_FD4AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 *v10; // r12
  __int64 result; // rax
  __int64 *v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = sub_2220DF0(a3, a4);
  v8 = sub_2221120(a2, a3, a4, v7);
  if ( v8 == -1 )
    v9 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8));
  else
    v9 = (__int64 *)(*(_QWORD *)a2 + 8LL * v8);
  sub_E9D250(v12, v9, 1);
  v10 = v12[0];
  sub_E9D250(v12, (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)), 1);
  result = 0;
  if ( v12[0] != v10 )
    return *(unsigned __int8 *)(*v10 + 8);
  return result;
}

