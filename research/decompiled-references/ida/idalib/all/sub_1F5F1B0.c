__int64 __fastcall sub_1F5F1B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  *(_QWORD *)(a2 + 16) = sub_1EE13F0(
                           *(_QWORD *)(*a1 + 8),
                           *(_QWORD *)(*a1 + 16),
                           (__int64 *)(*a1 + 32),
                           (_DWORD *)(*a1 + 24));
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * *(unsigned int *)(v2 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v2 + 13072) - 1);
  *(_DWORD *)(v2 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v3;
  return result;
}
