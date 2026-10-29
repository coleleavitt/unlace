__int64 __fastcall sub_1F5EBC0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rbx

  sub_1F5ABE0(a1, a2, a3);
  v3 = *(_QWORD *)a1;
  v4 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  if ( !v7 )
    sub_1EDF870(v6, v5);
  result = (unsigned int)__ROR4__(v8, 1);
  v10 = HIDWORD(v8);
  if ( v10 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v10 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v5 + 1648) - 2);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
