__int64 __fastcall sub_1EE76F0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 result; // rax

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *a3 = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  a3[1] = v7;
  result = sub_1EE7490(v8);
  a3[2] = result;
  return result;
}
