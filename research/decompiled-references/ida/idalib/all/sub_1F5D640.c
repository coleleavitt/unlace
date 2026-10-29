__int64 __fastcall sub_1F5D640(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *(_QWORD **)(*a1 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v10 = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  v11 = *a1;
  *(_QWORD *)(a2 + 16) = v10;
  v12 = sub_1EE7490(v11);
  v13 = *a1;
  *(_DWORD *)(a2 + 32) = v12;
  v14 = sub_1EE7490(v13);
  v15 = *a1;
  *(_DWORD *)(a2 + 36) = v14;
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 13072))-- - 8);
  v18 = *(unsigned int *)(v15 + 24);
  *(_QWORD *)(a2 + 24) = v17;
  *(_DWORD *)(v15 + 24) = v18 + 1;
  *(_BYTE *)(a2 + 40) = (*(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v18) != 0) | *(_BYTE *)(a2 + 40) & 0xFE;
  v19 = *a1;
  v20 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v19 + 24) = v20 + 1;
  LOBYTE(v20) = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 8 * v20) != 0;
  LOBYTE(v19) = 2 * v20;
  result = (2 * (_DWORD)v20) | *(_BYTE *)(a2 + 40) & 0xFDu;
  *(_BYTE *)(a2 + 40) = v19 | *(_BYTE *)(a2 + 40) & 0xFD;
  return result;
}
