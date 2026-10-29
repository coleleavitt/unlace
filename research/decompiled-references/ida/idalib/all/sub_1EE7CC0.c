__int64 __fastcall sub_1EE7CC0(__int64 *a1, _DWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdi
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  a2[4] = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  v5 = sub_1EE7490(v3);
  v6 = *a1;
  a2[3] = v5;
  result = sub_1EE7490(v6);
  a2[5] = result;
  return result;
}
