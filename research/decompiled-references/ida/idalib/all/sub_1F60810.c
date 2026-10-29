_QWORD *__fastcall sub_1F60810(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  _QWORD *result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rsi
  _DWORD *v10; // [rsp+0h] [rbp-38h]

  sub_1F58FC0(a1, (__int64)a2);
  v3 = *a1;
  ++*(_DWORD *)(v3 + 24);
  a2[4] = sub_1EE7490(v3);
  v4 = sub_1EE7490(*a1);
  v5 = (unsigned int)a2[6];
  a2[5] = v4;
  result = a2 + 8;
  v7 = (__int64)&a2[2 * v5 + 8];
  v10 = a2 + 8;
  while ( (_QWORD *)v7 != result )
  {
    v8 = *(_QWORD *)(*a1 + 8);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 13072))-- - 8);
    *result = v9;
    result = v10 + 2;
    v10 += 2;
  }
  return result;
}
