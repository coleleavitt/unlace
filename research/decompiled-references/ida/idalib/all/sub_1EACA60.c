__int64 __fastcall sub_1EACA60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 13064) + 8LL * *(unsigned int *)(v5 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v5 + 13072) - 1);
  *(_DWORD *)(v5 + 13072) = result;
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
