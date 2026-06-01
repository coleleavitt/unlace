__int64 __fastcall sub_1F45650(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // rbx

  sub_1F43F90(a1, a2);
  *(_QWORD *)(a2 + 40) = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(v4 + 856) == 0;
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  if ( !v6 )
    sub_1EDF870(v5, v4);
  result = (unsigned int)__ROR4__(v7, 1);
  v9 = HIDWORD(v7);
  if ( v9 )
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 3320) + 8LL * (unsigned int)(v9 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v4 + 1648) - 2);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
