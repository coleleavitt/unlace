bool __fastcall sub_1BCA460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = *(__int64 **)(a1 + 120);
  v5 = sub_B76070(a1, a2, a3, a4);
  return &v4[v5] != sub_1BC9FF0(v4, (__int64)&v4[v5], v6, v7, v8, v9);
}
