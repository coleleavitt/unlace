__int64 __fastcall sub_1F604E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  *(_DWORD *)(a2 + 16) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 20) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_DWORD *)(a2 + 28) = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  *(_QWORD *)(a2 + 32) = v5;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 13072))-- - 8);
  *(_QWORD *)(a2 + 40) = v7;
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 13072))-- - 8);
  *(_QWORD *)(a2 + 48) = v9;
  v10 = *a1;
  v11 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v10 + 24) = v11 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 8 * v11);
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
