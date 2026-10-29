__int64 __fastcall sub_1F5A0D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) != 0)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *(_DWORD *)(a2 + 16) = v5;
  *(_DWORD *)(a2 + 20) = sub_1EE7490(v6);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * *(unsigned int *)(v7 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v7 + 13072) - 1);
  *(_DWORD *)(v7 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v8;
  return result;
}
