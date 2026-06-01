__int64 __fastcall sub_DB2370(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *(_QWORD *)sub_E21760(*a1, 8);
  sub_E21790(v1, 8);
  *(_QWORD *)sub_E216C0(*a1, 8) = ~v2;
  return 1;
}
