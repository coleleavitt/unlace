__int64 __fastcall sub_1F61830(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  sub_1F61590(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * *(unsigned int *)(v4 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v4 + 13072) - 1);
  *(_DWORD *)(v4 + 13072) = result;
  *(_QWORD *)(a2 + 40) = v5;
  return result;
}
