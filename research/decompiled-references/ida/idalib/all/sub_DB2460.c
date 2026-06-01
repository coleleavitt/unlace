__int64 __fastcall sub_DB2460(__int64 a1)
{
  __int64 v1; // r12
  int v2; // ebx

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_DWORD *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = -v2;
  return 1;
}
