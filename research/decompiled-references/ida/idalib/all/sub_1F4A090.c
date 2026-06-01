__int64 __fastcall sub_1F4A090(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  __int64 result; // rax
  unsigned __int64 v30; // rbx

  sub_1F43F90((__int64 *)a1, a2);
  v4 = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 40) = v4;
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(_QWORD *)(v5 + 8);
  v9 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v5 + 24) = v6 + 1;
  v10 = *(_QWORD *)(v5 + 32);
  *(_DWORD *)(a1 + 64) = *(_QWORD *)(v10 + 8 * v6);
  v11 = *(unsigned int *)(v5 + 24);
  v12 = *(_QWORD *)(v10 + 8 * v11);
  *(_DWORD *)(v5 + 24) = v11 + 1;
  v13 = v7;
  if ( !v9 )
  {
    sub_1EDF870(v8, v7);
    v5 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v5 + 8);
    v13 = *(_QWORD *)(v5 + 16);
  }
  v14 = __ROR4__(v12, 1);
  v15 = HIDWORD(v12);
  if ( v15 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v15 - 1));
  if ( v14 )
    v14 = v14 + *(_DWORD *)(v7 + 1648) - 2;
  *(_DWORD *)(a2 + 60) = v14;
  *(_QWORD *)(a2 + 80) = sub_1EEDED0(v8, v13, (_QWORD *)(v5 + 32), (_DWORD *)(v5 + 24));
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_QWORD **)(v16 + 8);
  v18 = sub_1EE13A0((__int64)v17, *(_QWORD *)(v16 + 16), (__int64 *)(v16 + 32), (_DWORD *)(v16 + 24));
  v23 = sub_1EDB980(v17, v18, v19, v20, v21, v22);
  sub_BADDA0(a2, v23);
  v24 = *(_QWORD *)(a1 + 16);
  v25 = *(unsigned int *)(v24 + 24);
  v26 = *(_QWORD *)(v24 + 16);
  v27 = *(_QWORD *)(v24 + 8);
  v9 = *(_QWORD *)(v26 + 856) == 0;
  *(_DWORD *)(v24 + 24) = v25 + 1;
  v28 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25);
  if ( !v9 )
    sub_1EDF870(v27, v26);
  result = (unsigned int)__ROR4__(v28, 1);
  v30 = HIDWORD(v28);
  if ( v30 )
    v26 = *(_QWORD *)(*(_QWORD *)(v26 + 3320) + 8LL * (unsigned int)(v30 - 1));
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result + *(_DWORD *)(v26 + 1648) - 2);
    *(_DWORD *)(a2 + 96) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 96) = 0;
  }
  return result;
}
