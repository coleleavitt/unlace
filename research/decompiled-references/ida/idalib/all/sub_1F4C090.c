__int64 __fastcall sub_1F4C090(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 result; // rax

  sub_1F4BCD0(a1, a2);
  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD **)(v3 + 8);
  v6 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v7 = sub_1EE0AD0((__int64)v5, v6, *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4));
  *(_QWORD *)(a2 + 72) = sub_1EE2910(v5, v7);
  v8 = a1[2];
  v9 = *(unsigned int *)(v8 + 24);
  v10 = *(_QWORD **)(v8 + 8);
  v11 = *(_QWORD *)(v8 + 16);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  v12 = sub_1EE0AD0((__int64)v10, v11, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9));
  result = sub_1EE2910(v10, v12);
  *(_QWORD *)(a2 + 80) = result;
  return result;
}
