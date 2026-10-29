__int64 __fastcall sub_1F60100(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  *(_QWORD *)(a2 + 24) = sub_1EEDED0(
                           *(_QWORD *)(*a1 + 8),
                           *(_QWORD *)(*a1 + 16),
                           (_QWORD *)(*a1 + 32),
                           (_DWORD *)(*a1 + 24));
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * *(unsigned int *)(v4 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v4 + 13072) - 1);
  *(_DWORD *)(v4 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
