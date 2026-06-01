__int64 __fastcall sub_DB5E50(_QWORD *a1)
{
  __int64 v1; // rbp
  char v2; // r13
  __int64 v3; // rbp
  int v4; // r12d
  _BYTE *v5; // rax
  __int64 v6; // rdi

  v1 = *a1;
  v2 = *(_BYTE *)sub_E21760(*a1, 8);
  sub_E21790(v1, 8);
  v3 = *a1;
  v4 = *(_DWORD *)sub_E21760(*a1, 8);
  sub_E21790(v3, 8);
  v5 = (_BYTE *)sub_E216C0(*a1, 8);
  v6 = *a1;
  *v5 = v2;
  *(_DWORD *)sub_E216C0(v6, 8) = v4;
  return 1;
}
