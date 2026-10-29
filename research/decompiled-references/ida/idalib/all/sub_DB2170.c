__int64 __fastcall sub_DB2170(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r12

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_BYTE *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v2;
  return 1;
}
