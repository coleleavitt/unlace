__int64 *__fastcall sub_1F1E820(__int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 *result; // rax

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *(_DWORD *)a3 = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a3 + 4) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a3 + 8) = v9;
  result = sub_1F19370(v10);
  *(_QWORD *)(a3 + 16) = result;
  return result;
}
