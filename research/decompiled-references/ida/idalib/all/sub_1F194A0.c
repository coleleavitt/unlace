__int64 __fastcall sub_1F194A0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // r12

  v2 = sub_1F16D80(a2);
  *(_QWORD *)a1 = v2;
  v3 = (__int64)v2;
  *(_DWORD *)(a1 + 8) = sub_1EE7490(a2);
  *(_QWORD *)(a1 + 16) = sub_1F19410(a2, v3);
  return a1;
}
