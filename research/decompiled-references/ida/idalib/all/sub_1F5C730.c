__int64 __fastcall sub_1F5C730(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = *(unsigned int *)(v5 + 13072);
  v7 = *(_DWORD *)(v5 + 13072);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8 * v6 - 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v6 - 1) - 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * (unsigned int)(v7 - 2) - 8);
  *(_DWORD *)(v5 + 13072) = v7 - 3;
  *(_QWORD *)(a2 + 32) = v8;
  v9 = sub_1EE7490(v4);
  v10 = *a1;
  *(_DWORD *)(a2 + 40) = v9;
  v11 = sub_1EE7490(v10);
  v12 = *a1;
  *(_DWORD *)(a2 + 44) = v11;
  v13 = *(unsigned int *)(v12 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  LOBYTE(v13) = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13) != 0;
  LOBYTE(v12) = 8 * v13;
  result = (8 * (_DWORD)v13) | *(_BYTE *)(a2 + 2) & 0xF7u;
  *(_BYTE *)(a2 + 2) = v12 | *(_BYTE *)(a2 + 2) & 0xF7;
  return result;
}
