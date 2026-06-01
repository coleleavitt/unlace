__int64 __fastcall sub_1F57950(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  bool v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  __int64 result; // rax
  unsigned __int64 v22; // rbp

  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v5 = *(_QWORD **)(*a1 + 8);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) != 0;
  v8 = sub_1EE13A0((__int64)v5, v6, (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  v13 = sub_1EDB980(v5, v8, v9, v10, v11, v12);
  *(_QWORD *)(v13 + 48) = a2;
  *(_QWORD *)(a2 + 8) = v13;
  v14 = *a1;
  v15 = *(_QWORD *)(*a1 + 8);
  v16 = *(_QWORD *)(v14 + 16);
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 13064) + 8LL * *(unsigned int *)(v15 + 13072) - 8);
  v18 = *(_QWORD *)(v16 + 856) == 0;
  --*(_DWORD *)(v15 + 13072);
  v19 = *(unsigned int *)(v14 + 24);
  *(_QWORD *)(a2 + 16) = v17;
  *(_DWORD *)(v14 + 24) = v19 + 1;
  v20 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v19);
  if ( !v18 )
    sub_1EDF870(v15, v16);
  result = (unsigned int)__ROR4__(v20, 1);
  v22 = HIDWORD(v20);
  if ( v22 )
    v16 = *(_QWORD *)(*(_QWORD *)(v16 + 3320) + 8LL * (unsigned int)(v22 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v16 + 1648) - 2);
  *(_BYTE *)(a2 + 24) = v7;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
