__int64 __fastcall sub_1F5A4B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_DWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(unsigned int *)(v7 + 13072);
  v9 = *(_DWORD *)(v7 + 13072);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v8 - 8);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(v8 - 1) - 8);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(v9 - 2) - 8);
  v11 = (unsigned int)(v9 - 3);
  *(_DWORD *)(v7 + 13072) = v11;
  *(_QWORD *)(a2 + 40) = v10;
  if ( !*(_DWORD *)(a2 + 16) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v11 - 8);
    *(_DWORD *)(v7 + 13072) = v9 - 4;
    *(_QWORD *)(a2 + 48) = v12;
  }
  *(_DWORD *)(a2 + 56) = sub_1EE7490(v6);
  if ( !*(_DWORD *)(a2 + 16) )
    *(_DWORD *)(a2 + 60) = sub_1EE7490(*a1);
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 64) = result;
  return result;
}
