__int64 __fastcall sub_1F60040(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_DWORD *)(a2 + 4) = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) & 0x7FFFFFFF | *(_DWORD *)(a2 + 4) & 0x80000000;
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_BYTE *)(a2 + 7) = ((*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6) != 0) << 7) | *(_BYTE *)(a2 + 7) & 0x7F;
  result = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v8 = *(_QWORD *)(*a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 13072))-- - 8);
  *(_QWORD *)(a2 + 24) = v9;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
