__int64 __fastcall sub_1F5B120(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 13072))-- - 8);
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  LOBYTE(v5) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) != 0;
  LOBYTE(v4) = 8 * v5;
  result = (8 * (_DWORD)v5) | *(_BYTE *)(a2 + 2) & 0xF7u;
  *(_BYTE *)(a2 + 2) = v4 | *(_BYTE *)(a2 + 2) & 0xF7;
  return result;
}
