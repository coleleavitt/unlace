__int64 __fastcall sub_169FB70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  size_t v8; // rbx
  char *v9; // rcx

  v7 = a2[294];
  v8 = a1[1] - a1[2];
  a2[304] += v8;
  v9 = (char *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v9[v8] && v7 )
    a2[294] = &v9[v8];
  else
    v9 = (char *)sub_986170((__int64)(a2 + 294), v8, v8, 3, a5, a6);
  memcpy(v9, (const void *)(*a1 + a1[2]), v8);
  return a3;
}
