__int64 __fastcall sub_1F5B340(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 13072))-- - 8);
  *(_QWORD *)(a2 + 24) = v3;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  *(_QWORD *)(a2 + 32) = v5;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 13072))-- - 8);
  *(_QWORD *)(a2 + 40) = v7;
  *(_DWORD *)(a2 + 16) = sub_1EE7490(*a1);
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
