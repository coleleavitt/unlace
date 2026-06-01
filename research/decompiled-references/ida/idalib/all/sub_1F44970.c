__int64 __fastcall sub_1F44970(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // rbp

  sub_1F43F90(a1, a2);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 40) & 3LL | sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFDLL
                       | (2LL * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) != 0));
  *(_QWORD *)(a2 + 48) = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 8);
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
  {
    result = (unsigned int)(result + *(_DWORD *)(v6 + 1648) - 2);
    *(_DWORD *)(a2 + 56) = result;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 0;
  }
  return result;
}
