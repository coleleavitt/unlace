__int64 __fastcall sub_B9BA00(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  bool v8; // cc
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v7 = 2 * ((__int64)((*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) - *(_QWORD *)a1) >> 3);
  if ( v7 < a3 )
    v7 = a3;
  v8 = v7 <= 0xFFFFFFFFFFFFFFFLL;
  v9 = a2[294];
  v10 = 8 * v7;
  v11 = -1;
  if ( v8 )
    v11 = v10;
  a2[304] += v11;
  v12 = (char *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)&v12[v11] && v9 )
    a2[294] = &v12[v11];
  else
    v12 = (char *)sub_986170((__int64)(a2 + 294), v11, v11, 3, a5, a6);
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v13 )
    v12 = (char *)memmove(v12, *(const void **)a1, v13 - *(_QWORD *)a1);
  v14 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = &v12[v6];
  result = v14 & 7;
  *(_QWORD *)(a1 + 16) = result | (unsigned __int64)&v12[v10];
  return result;
}
