__int64 __fastcall sub_1EE83A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  __int64 result; // rax

  v3 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v4 = *a1;
  *(_QWORD *)(a2 + 24) = v3;
  v5 = sub_1EE7490(v4);
  v6 = *a1;
  *(_DWORD *)(a2 + 12) = v5;
  result = sub_1EE7490(v6);
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
