__int64 __fastcall sub_1F59260(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  *(_DWORD *)(a2 + 16) = sub_1EE7490(*a1);
  v3 = *(_QWORD *)(*a1 + 8);
  v4 = *(unsigned int *)(v3 + 13072);
  v5 = *(_DWORD *)(v3 + 13072);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8 * v4 - 8);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v4 - 1) - 8);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v5 - 2) - 8);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v5 - 3) - 8);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v5 - 4) - 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v5 - 5) - 8);
  *(_DWORD *)(v3 + 13072) = v5 - 6;
  *(_QWORD *)(a2 + 64) = v6;
  v7 = *a1;
  v8 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v7 + 24) = v8 + 1;
  LOBYTE(v8) = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8) != 0;
  LOBYTE(v7) = 8 * v8;
  result = (8 * (_DWORD)v8) | *(_BYTE *)(a2 + 2) & 0xF7u;
  *(_BYTE *)(a2 + 2) = v7 | *(_BYTE *)(a2 + 2) & 0xF7;
  return result;
}
