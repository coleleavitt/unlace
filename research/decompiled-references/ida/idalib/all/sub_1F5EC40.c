__int64 __fastcall sub_1F5EC40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rbx

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) != 0)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 16);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(v6 + 856) == 0;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( !v8 )
    sub_1EDF870(v7, v6);
  result = (unsigned int)__ROR4__(v9, 1);
  v11 = HIDWORD(v9);
  if ( v11 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v11 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v6 + 1648) - 2);
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
