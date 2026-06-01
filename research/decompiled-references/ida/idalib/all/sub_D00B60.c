__int64 __fastcall sub_D00B60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  unsigned __int8 v4; // bp
  __int64 v5; // r13
  __int64 v6; // rdi
  bool v7; // bl

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v4 = *(_BYTE *)sub_E21760(v3, 8);
  sub_E21790(v3, 8);
  v5 = *(_QWORD *)(a1 + 560);
  LOBYTE(v3) = *(_BYTE *)sub_E21760(v5, 8);
  sub_E21790(v5, 8);
  v6 = *(_QWORD *)(a1 + 560);
  v7 = (unsigned __int8)v3 <= v4;
  if ( (unsigned __int8)v3 < v4 )
    v7 = 0;
  *(_BYTE *)sub_E216C0(v6, 8) = v7;
  return 1;
}
