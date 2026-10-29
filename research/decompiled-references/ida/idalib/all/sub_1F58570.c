__int64 __fastcall sub_1F58570(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  bool v15; // zf

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(a2 + 16) = *(_QWORD *)(v5 + 8LL * v6);
  *(_DWORD *)(a2 + 20) = *(_QWORD *)(v5 + 8LL * (v6 + 1));
  v7 = v6 + 3;
  v8 = *(_QWORD *)(v5 + 8LL * (v6 + 2));
  *(_DWORD *)(v4 + 24) = v7;
  *(_DWORD *)(a2 + 24) = v8;
  v9 = sub_1EE7490(v4);
  v10 = *a1;
  *(_DWORD *)(a2 + 8) = v9;
  v11 = *(unsigned int *)(v10 + 24);
  v12 = *(_QWORD *)(v10 + 32);
  v13 = *(_DWORD *)(v10 + 24);
  *(_BYTE *)(a2 + 13) = *(_QWORD *)(v12 + 8 * v11) != 0;
  result = (unsigned int)(v13 + 1);
  v15 = *(_QWORD *)(v12 + 8 * result) == 0;
  *(_DWORD *)(v10 + 24) = v11 + 2;
  *(_BYTE *)(a2 + 12) = !v15;
  return result;
}
