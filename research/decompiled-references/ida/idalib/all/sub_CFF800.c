__int64 __fastcall sub_CFF800(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // r12
  char v6; // bp

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_BYTE *)sub_E21760(v3, 8);
    sub_E21790(v3, 8);
    v5 = *(_QWORD *)(a1 + 560);
    v6 = *(_BYTE *)sub_E21760(v5, 8);
    sub_E21790(v5, 8);
    *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v4 + v6;
  }
  return 1;
}
