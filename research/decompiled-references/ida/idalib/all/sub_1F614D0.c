__int64 __fastcall sub_1F614D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // rbx

  sub_1F60E70(a1, a2, a3, a4, a5, a6);
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  v8 = *(_QWORD *)(*a1 + 16);
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = *(_QWORD *)(v8 + 856) == 0;
  *(_DWORD *)(v6 + 24) = v7 + 1;
  v11 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  if ( !v10 )
    sub_1EDF870(v9, v8);
  result = (unsigned int)__ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v8 + 1648) - 2);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
