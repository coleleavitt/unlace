__int64 __fastcall sub_1F5C9B0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rdi
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  sub_1F58FC0((__int64 *)a1, a2);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 16) & (1 << v3);
  *(_DWORD *)(a1 + 20) = v3 + 1;
  *(_DWORD *)(a2 + 32) = sub_1EE7490(v4);
  *(_DWORD *)(a2 + 36) = sub_1EE7490(*(_QWORD *)a1);
  *(_QWORD *)(a2 + 24) = sub_1F19370(*(_QWORD *)a1);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * *(unsigned int *)(v6 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v6 + 13072) - 1);
  *(_DWORD *)(v6 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v7;
  if ( v5 )
  {
    v9 = *(_QWORD *)a1;
    v10 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    *(_DWORD *)(v9 + 24) = v10 + 1;
    result = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
    *(_DWORD *)(a2 + 44) = result;
    *(_DWORD *)(a2 + 40) = HIDWORD(result);
  }
  return result;
}
