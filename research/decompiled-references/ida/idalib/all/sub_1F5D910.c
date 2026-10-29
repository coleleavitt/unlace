__int64 __fastcall sub_1F5D910(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = sub_1EE7490(*a1);
  v4 = *a1;
  *(_DWORD *)(a2 + 16) = v3;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(unsigned int *)(v5 + 13072);
  v7 = *(_DWORD *)(v5 + 13072) - 2;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v6 - 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v6 - 1) - 8);
  *(_DWORD *)(v5 + 13072) = v7;
  *(_QWORD *)(a2 + 32) = v8;
  v9 = sub_1EE13A0(v5, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  *(_QWORD *)(a2 + 40) = sub_1EDB980((_QWORD *)v5, v9, v10, v11, v12, v13);
  v14 = *(_QWORD **)(*a1 + 8);
  v15 = sub_1EE13A0((__int64)v14, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  result = sub_1EDB980(v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(a2 + 48) = result;
  return result;
}
