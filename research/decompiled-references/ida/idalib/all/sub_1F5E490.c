__int64 __fastcall sub_1F5E490(__int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rcx

  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  *(_DWORD *)(a2 + 72) = v4;
  v6 = sub_1EE7490(v5);
  v7 = *a1;
  *(_DWORD *)(a2 + 76) = v6;
  v8 = sub_1EE7490(v7);
  v9 = *a1;
  *(_DWORD *)(a2 + 80) = v8;
  *(_DWORD *)(a2 + 84) = sub_1EE7490(v9);
  v10 = *(_QWORD *)(*a1 + 8);
  v11 = *(unsigned int *)(v10 + 13072);
  v12 = *(_DWORD *)(v10 + 13072);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8 * v11 - 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v11 - 1) - 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v12 - 2) - 8);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v12 - 3) - 8);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v12 - 4) - 8);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v12 - 5) - 8);
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(v12 - 6) - 8);
  v14 = (unsigned int)(v12 - 7);
  result = (unsigned int)(v12 - 8);
  *(_QWORD *)(a2 + 56) = v13;
  v16 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8 * v14 - 8);
  *(_DWORD *)(v10 + 13072) = result;
  *(_QWORD *)(a2 + 64) = v16;
  return result;
}
