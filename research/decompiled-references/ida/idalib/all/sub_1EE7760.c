__int64 __fastcall sub_1EE7760(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  *a3 = v4;
  result = sub_1EE7490(v5);
  a3[1] = result;
  return result;
}
