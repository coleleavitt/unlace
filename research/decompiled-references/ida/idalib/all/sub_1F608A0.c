__int64 __fastcall sub_1F608A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 36) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) != 0;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(unsigned int *)(v5 + 13072);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v6 - 8);
  --*(_DWORD *)(v5 + 13072);
  *(_QWORD *)(a2 + 16) = v7;
  v10 = sub_1F194E0(*a1, v6, v5, v7, v8, v9);
  *(_QWORD *)(a2 + 48) = v11;
  *(_QWORD *)(a2 + 40) = v10;
  *(_DWORD *)(a2 + 32) = sub_1EE7490(*a1);
  v12 = *(_QWORD **)(*a1 + 8);
  v13 = sub_1EE13A0((__int64)v12, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  result = sub_1EDB980(v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
