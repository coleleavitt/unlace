__int64 __fastcall sub_DB24B0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_QWORD *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = -v2;
  return 1;
}
