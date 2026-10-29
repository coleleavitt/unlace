__int64 __fastcall sub_1F5E690(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rbx

  sub_1F5ABE0(a1, a2, a3);
  v3 = *(_QWORD *)a1;
  v4 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 3) = (2 * (*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) & 0x3F)) | *(_BYTE *)(a2 + 3) & 0x81;
  v5 = *(_QWORD *)a1;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v9 = *(_QWORD *)(v7 + 856) == 0;
  *(_DWORD *)(v5 + 24) = v6 + 1;
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  if ( !v9 )
    sub_1EDF870(v8, v7);
  result = (unsigned int)__ROR4__(v10, 1);
  v12 = HIDWORD(v10);
  if ( v12 )
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 3320) + 8LL * (unsigned int)(v12 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v7 + 1648) - 2);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
