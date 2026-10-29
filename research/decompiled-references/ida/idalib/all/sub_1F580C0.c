__int64 __fastcall sub_1F580C0(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  int v18; // edx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  unsigned __int64 v23; // rbx

  v4 = *(_QWORD **)(*a1 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 8) = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  v12 = *(_QWORD *)(*a1 + 16);
  v13 = *(_QWORD *)(*a1 + 8);
  v14 = *(_QWORD *)(v12 + 856);
  v15 = *(_QWORD *)(*a1 + 16);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  v16 = *(_QWORD *)(v10 + 32);
  v17 = *(_QWORD *)(v16 + 8 * v11);
  if ( v14 )
  {
    sub_1EDF870(v13, v12);
    v10 = *a1;
    v15 = *(_QWORD *)(*a1 + 16);
    v13 = *(_QWORD *)(*a1 + 8);
    v16 = *(_QWORD *)(*a1 + 32);
    v14 = *(_QWORD *)(v15 + 856);
  }
  v18 = __ROR4__(v17, 1);
  v19 = HIDWORD(v17);
  if ( v19 )
    v12 = *(_QWORD *)(*(_QWORD *)(v12 + 3320) + 8LL * (unsigned int)(v19 - 1));
  if ( v18 )
    v18 = v18 + *(_DWORD *)(v12 + 1648) - 2;
  *(_DWORD *)(a2 + 4) = v18;
  v20 = *(unsigned int *)(v10 + 24);
  v21 = *(_QWORD *)(v16 + 8 * v20);
  *(_DWORD *)(v10 + 24) = v20 + 1;
  if ( v14 )
    sub_1EDF870(v13, v15);
  result = (unsigned int)__ROR4__(v21, 1);
  v23 = HIDWORD(v21);
  if ( v23 )
    v15 = *(_QWORD *)(*(_QWORD *)(v15 + 3320) + 8LL * (unsigned int)(v23 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v15 + 1648) - 2);
    *(_DWORD *)(a2 + 16) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
  }
  return result;
}
