__int64 __fastcall sub_1EE7EB0(__int64 *a1, _DWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = sub_1EE7490(*a1);
  v4 = *a1;
  a2[5] = v3;
  v5 = sub_1EE7490(v4);
  v6 = *a1;
  a2[4] = v5;
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  a2[3] = result;
  return result;
}
