__int64 __fastcall sub_1F61890(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 13072))-- - 8);
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  *(_QWORD *)(a2 + 24) = v5;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 13072))-- - 8);
  *(_QWORD *)(a2 + 32) = v7;
  v8 = *a1;
  result = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v8 + 24) = result + 1;
  *(_BYTE *)(a2 + 40) = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * result) != 0;
  return result;
}
