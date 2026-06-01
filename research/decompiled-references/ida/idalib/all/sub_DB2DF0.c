__int64 __fastcall sub_DB2DF0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int16 v2; // r13
  __int64 v3; // r12

  v1 = *a1;
  v2 = *(_WORD *)sub_E21760(*a1, 8);
  sub_E21790(v1, 8);
  v3 = *a1;
  LOWORD(v1) = *(_WORD *)sub_E21760(*a1, 8);
  sub_E21790(v3, 8);
  *(_WORD *)sub_E216C0(*a1, 8) = v1 - v2;
  return 1;
}
