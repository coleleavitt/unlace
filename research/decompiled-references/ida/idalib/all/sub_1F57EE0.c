__int64 __fastcall sub_1F57EE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  __int64 result; // rax

  v4 = *a1;
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(unsigned int *)(v7 + 13072);
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v8 - 8);
  v10 = (unsigned int)(v8 - 1);
  *(_DWORD *)(v7 + 13072) = v10;
  *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16) = v9;
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v10 - 8);
  v12 = (unsigned int)(v8 - 2);
  *(_DWORD *)(v7 + 13072) = v12;
  *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16) = v11;
  if ( v6 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v12 - 8);
    *(_DWORD *)(v7 + 13072) = v8 - 3;
    *(_QWORD *)(a2 + 16) = v13;
  }
  v14 = sub_1EE7490(v4);
  v15 = *a1;
  *(_DWORD *)(a2 + 4) = v14;
  v16 = sub_1EE7490(v15);
  v17 = *a1;
  *(_DWORD *)(a2 + 8) = v16;
  result = sub_1EE7490(v17);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
