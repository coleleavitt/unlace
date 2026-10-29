__int64 __fastcall sub_1F5E390(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rsi
  int v16; // r8d
  __int64 v17; // rcx

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 16);
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(v5 + 856) == 0;
  *(_DWORD *)(v3 + 24) = v4 + 2;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * (unsigned int)(v4 + 1));
  if ( !v7 )
  {
    sub_1EDF870(v6, v5);
    v6 = *(_QWORD *)(*a1 + 8);
  }
  result = (unsigned int)__ROR4__(v8, 1);
  v10 = HIDWORD(v8);
  if ( v10 )
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 3320) + 8LL * (unsigned int)(v10 - 1));
  if ( (_DWORD)result )
    result = (unsigned int)(result + *(_DWORD *)(v5 + 1648) - 2);
  *(_DWORD *)(a2 + 8) = result;
  v11 = *(unsigned int *)(v6 + 13072);
  v12 = v11 - 1;
  v13 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8 * v11 - 8);
  *(_DWORD *)(v6 + 13072) = v11 - 1;
  v14 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a2 + 16) = v13;
  if ( v14 )
  {
    v15 = a2 + 24;
    LODWORD(result) = v11 - 1;
    v16 = v11 + ~v14;
    do
    {
      v17 = (unsigned int)result;
      result = (unsigned int)(result - 1);
      v15 += 8;
      *(_QWORD *)(v15 - 8) = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8 * v17 - 8);
    }
    while ( v16 != (_DWORD)result );
    *(_DWORD *)(v6 + 13072) = v12 - v14;
  }
  return result;
}
